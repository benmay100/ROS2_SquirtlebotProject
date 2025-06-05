#include "rclcpp/rclcpp.hpp"
#include "rclcpp/qos.hpp"    // <-- Used for the QoS instruction on line 40 and 41
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "squirtlebot_interfaces/action/squirtle_move.hpp"
#include "nav_msgs/msg/odometry.hpp" // For Turtlebot3 Odometry messages
#include "geometry_msgs/msg/point.hpp" // For Turtlebot3 Point messages (nested in Odometry)
#include <functional> // Required for std::bind


using std::placeholders::_1;
using std::placeholders::_2;
using LifecycleCallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;
using SquirtleMove = squirtlebot_interfaces::action::SquirtleMove;
using SquirtleMoveGoalHandle = rclcpp_action::ServerGoalHandle<SquirtleMove>;
using Twist = geometry_msgs::msg::TwistStamped;
using Odom = nav_msgs::msg::Odometry;

class Turtlebot3Controller : public rclcpp_lifecycle::LifecycleNode
{
public:
    Turtlebot3Controller() : LifecycleNode("turtlebot3_controller")  // Custom node name here, good practice is file_name 
    {
        RCLCPP_INFO(this->get_logger(), "Turtlebot3 Controller Node - Initialised!");
        is_active_ = false;
        
    }

/* ================ PUBLIC (LIFECYCLE) METHODS ===================*/

    LifecycleCallbackReturn on_configure(const rclcpp_lifecycle::State &previous_state){
        std::string current_state_ = previous_state.label();
        RCLCPP_INFO_STREAM(this->get_logger(), "In 'on_congfigure': Transitioning from [" + current_state_ + "] to [configuring]");

        callback_group_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);  //For multithreading

        //Publisher to the CMD_VEL topic
        turtlebot3_cmdvel_publisher_ = this->create_publisher<Twist>("/cmd_vel", 10); 

        //Subscriber to the turtlebot odometry messages
        turtlebot3_position_subscriber_ = this->create_subscription<Odom>("/odom", 10, std::bind(&Turtlebot3Controller::odom_callback, this, std::placeholders::_1));

        //Set up action server
        try{
            RCLCPP_INFO_STREAM(this->get_logger(), "Attempting to create a Turtlebot3 Action Server...");
            turtlebot3_move_server_ = rclcpp_action::create_server<SquirtleMove>(
                this, 
                "move_turtlebot3",
                std::bind(&Turtlebot3Controller::goal_response_callback, this, _1, _2),
                std::bind(&Turtlebot3Controller::cancel_callback, this, _1),
                std::bind(&Turtlebot3Controller::handle_accepted_callback, this, _1),
                rcl_action_server_get_default_options(), //For multithreading
                callback_group_  //For multithreading
            );
            RCLCPP_INFO_STREAM(this->get_logger(), "Turtlebot3 Action Server created successfully" );
            return LifecycleCallbackReturn::SUCCESS;
        } 
        catch (const std::exception & e) {
            RCLCPP_ERROR(this->get_logger(), "EXCEPTION CAUGHT during on_configure: %s", e.what());
            // C++ doesn't have a standard, cross-platform way to get a full traceback like Python's
            // traceback.format_exc(). You might need platform-specific code or third-party libraries
            // (e.g., Boost.Stacktrace, or OS-specific functions like backtrace() on Linux) for that.
            // ROS 2 logging might provide some stack trace information if compiled with debug symbols
            // and if an unhandled exception propagates to the ROS error handling mechanisms.
            RCLCPP_ERROR(this->get_logger(), "FULL TRACEBACK: Not directly available in standard C++. Check exception message and ROS logs for more details if possible.");
            return LifecycleCallbackReturn::FAILURE;
        } catch (...) { // Catch-all for non-standard exceptions (e.g., from C libraries)
            RCLCPP_FATAL(this->get_logger(), "UNKNOWN NON-STANDARD EXCEPTION CAUGHT during on_configure!");
            return LifecycleCallbackReturn::FAILURE;
        }
    }

    LifecycleCallbackReturn on_activate(const rclcpp_lifecycle::State &previous_state){
        std::string current_state_ = previous_state.label();
        RCLCPP_INFO_STREAM(this->get_logger(), "In 'on_activate': Transitioning from [" + current_state_ + "] to [activating]");
        this->is_active_ = true;
        //The next line of code MUST always be included in CPP lifecycle nodes in the on_activate function
        rclcpp_lifecycle::LifecycleNode::on_activate(previous_state);
        RCLCPP_INFO(this->get_logger(), "Turtlebot3 action server is active and ready to receive goals!");
        return LifecycleCallbackReturn::SUCCESS;
    }

    LifecycleCallbackReturn on_deactivate(const rclcpp_lifecycle::State &previous_state){
        std::string current_state_ = previous_state.label();
        RCLCPP_INFO_STREAM(this->get_logger(), "In 'on_deactivate': Transitioning from [" + current_state_ + "] to [deactivating]");
        this->is_active_ = false;
        //The next line of code MUST always be included in CPP lifecycle nodes in the on_deactivate function
        rclcpp_lifecycle::LifecycleNode::on_deactivate(previous_state);
        RCLCPP_INFO(this->get_logger(), "Turtlebot3 action server is deactivated - will no longer accept goals!");
        return LifecycleCallbackReturn::SUCCESS;
    }

    LifecycleCallbackReturn on_cleanup(const rclcpp_lifecycle::State &previous_state){
        std::string current_state_ = previous_state.label();
        RCLCPP_INFO_STREAM(this->get_logger(), "In 'on_cleanup': Transitioning from [" + current_state_ + "] to [cleanup]");
        this->is_active_ = false;
        //Reset clients, services, subscribers etc.
        turtlebot3_move_server_.reset();
        turtlebot3_cmdvel_publisher_.reset();
        callback_group_.reset();
        return LifecycleCallbackReturn::SUCCESS;
    }

    LifecycleCallbackReturn on_shutdown(const rclcpp_lifecycle::State &previous_state){
        std::string current_state_ = previous_state.label();
        RCLCPP_INFO_STREAM(this->get_logger(), "In 'on_shutdown': Transitioning from [" + current_state_ + "] to [shutdown]");
        this->is_active_ = false;
        //Reset clients, services, subscribers etc.
        turtlebot3_move_server_.reset();
        turtlebot3_cmdvel_publisher_.reset();
        callback_group_.reset();
        return LifecycleCallbackReturn::SUCCESS;
    }


/* ===============================================================*/
 
private:

/* ============ PRIVATE ATTRIBUTES ===================*/
    rclcpp::Subscription<Odom>::SharedPtr turtlebot3_position_subscriber_;
    rclcpp::Publisher<Twist>::SharedPtr turtlebot3_cmdvel_publisher_;
    rclcpp_action::Server<SquirtleMove>::SharedPtr turtlebot3_move_server_;  
    rclcpp::CallbackGroup::SharedPtr callback_group_;
    std::shared_ptr<SquirtleMoveGoalHandle> goal_handle_;
    std::mutex mutex_; //This is a lock for safety when multi-threading
    rclcpp_action::GoalUUID goal_to_abort_id_;
    bool is_active_;
    std::vector<double> turtlebot3_positions_ = {0.0, 0.0, 0.0};
    
/* ===================================================*/



/* ================ PRIVATE METHODS ===================*/

    /* >>>>>>>>>>>>>> Other general Methods <<<<<<<<<<<<<<<<<*/

    void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {
        // Extract the x and y coordinates from the pose.pose.position field

        double x_pos = msg->pose.pose.position.x;
        double y_pos = msg->pose.pose.position.y;
        double theta_pos = msg->pose.pose.orientation.z;
        turtlebot3_positions_.at(0) = x_pos;
        turtlebot3_positions_.at(1) = y_pos;
        turtlebot3_positions_.at(2) = theta_pos;
    }


    /* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> */

    /* >>>>>>>>>>>>>> Action Related Methods <<<<<<<<<<<<<<<<<*/

    rclcpp_action::GoalResponse goal_response_callback(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const SquirtleMove::Goal> goal){
        (void)uuid;
        RCLCPP_INFO(this->get_logger(), "Received a goal... validating now...");
        //Basic validation
        if (!is_active_){
            RCLCPP_WARN(this->get_logger(), "Rejected as action server in INACTIVE state");
            return rclcpp_action::GoalResponse::REJECT; 
        }
        if (goal->linear_x < -5 || goal->linear_x > 5){
            RCLCPP_WARN(this->get_logger(), "Rejected as linear velocity out of bounds!");
            return rclcpp_action::GoalResponse::REJECT;
        }
        if (goal->angular_z < -5 || goal->angular_z > 5){
            RCLCPP_WARN(this->get_logger(), "Rejected as angular velocity out of bounds!");
            return rclcpp_action::GoalResponse::REJECT;
        }
        if (goal->duration < 0 || goal->duration > 20){
            RCLCPP_WARN(this->get_logger(), "Rejected as duration out of bounds!");
            return rclcpp_action::GoalResponse::REJECT;
        }
        //GOAL POLICY
        return goal_policy_new_goal_priority();
    }

    rclcpp_action::CancelResponse cancel_callback(const std::shared_ptr<SquirtleMoveGoalHandle> goal_handle){
        std::string goal_id_ = rclcpp_action::to_string(goal_handle->get_goal_id());
        RCLCPP_WARN_STREAM(this->get_logger(), "Cancel request received for goal (ID: " << goal_id_ <<")");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted_callback(const std::shared_ptr<SquirtleMoveGoalHandle> goal_handle){
        {
            std::lock_guard<std::mutex> lock(mutex_);
            goal_handle_ = goal_handle; //Sets private attribute to the current goal being executed...
        }

        std::string goal_id_ = rclcpp_action::to_string(goal_handle->get_goal_id());
        RCLCPP_INFO_STREAM(this->get_logger(), "Goal ID: " << goal_id_ <<" - moving to execution");
        execute_goal(goal_handle);
    }

    void execute_goal(const std::shared_ptr<SquirtleMoveGoalHandle> goal_handle){
        //1. Get request from the goal
        double linear_velocity {goal_handle->get_goal()->linear_x};
        double angular_velocity {goal_handle->get_goal()->angular_z};
        int duration_secs {goal_handle->get_goal()->duration};
        auto result = std::make_shared<SquirtleMove::Result>();
        auto feedback = std::make_shared<SquirtleMove::Feedback>();
        auto start_time = now();
        auto duration = rclcpp::Duration(duration_secs, 0);
        auto cmd_vel_values = geometry_msgs::msg::TwistStamped();

        //2. Execute the action
        rclcpp::Rate loop_rate(5); //Run the loop at 5hz to save on CPU
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); //(Optional) just gives client time to start calling for feedback!
        
        while (rclcpp::ok()){
            if(now() - start_time > duration){
                //Once duration exceeded set final state, set cmd_vel values back to 0, return result and break from the loop
                cmd_vel_values.twist.linear.x = 0.0;
                cmd_vel_values.twist.angular.z = 0.0;
                turtlebot3_cmdvel_publisher_->publish(cmd_vel_values);
                result->final_position_x = turtlebot3_positions_.at(0);
                result->final_position_y = turtlebot3_positions_.at(1);
                result->final_theta_angle = turtlebot3_positions_.at(2);
                result->result_message = "Move was completed successfully"; 
                RCLCPP_INFO_STREAM(this->get_logger(), "execution complete");
                goal_handle->succeed(result);
                return; //Breaks the loop
            }
            if (goal_handle->is_canceling()){
                cmd_vel_values.twist.linear.x = 0.0;
                cmd_vel_values.twist.angular.z = 0.0;
                turtlebot3_cmdvel_publisher_->publish(cmd_vel_values);
                result->final_position_x = turtlebot3_positions_.at(0);
                result->final_position_y = turtlebot3_positions_.at(1);
                result->final_theta_angle = turtlebot3_positions_.at(2);
                result->result_message = "Move was cancelled part way through execution";
                goal_handle->canceled(result);
                return; //Breaks the loop
            }
            { //Lock guard vital as we're playing with the same class attribute (goal_to_abort_id_) in different threads!
            std::lock_guard<std::mutex> lock(mutex_);
                if (goal_handle->get_goal_id() == goal_to_abort_id_ || !is_active_){ //If action server not activated, or an abort command received
                    cmd_vel_values.twist.linear.x = 0.0;
                    cmd_vel_values.twist.angular.z = 0.0;
                    turtlebot3_cmdvel_publisher_->publish(cmd_vel_values); 
                    result->final_position_x = turtlebot3_positions_.at(0);
                    result->final_position_y = turtlebot3_positions_.at(1);
                    result->final_theta_angle = turtlebot3_positions_.at(2);                
                    result->result_message = "Move was aborted part way through execution";
                    goal_handle->abort(result);
                    return; //Breaks the loop
                }
            }
            //Otherwise keep publishing to CMD_VEL
            cmd_vel_values.twist.linear.x = linear_velocity;
            cmd_vel_values.twist.angular.z = angular_velocity;
            turtlebot3_cmdvel_publisher_->publish(cmd_vel_values);
            feedback->current_position_x = turtlebot3_positions_.at(0);
            feedback->current_position_y = turtlebot3_positions_.at(1);
            feedback->current_theta_angle = turtlebot3_positions_.at(2);
            feedback->status = "executing move..."; 
            goal_handle->publish_feedback(feedback);
            loop_rate.sleep();
        }
    }

    //GOAL POLICIES 
    rclcpp_action::GoalResponse goal_policy_new_goal_priority(){ //Aborts existing goal if new goal comes in
        //Lock guard vital as we're playing with the same class attribute in different threads!
        {
            std::lock_guard<std::mutex> lock(mutex_);
            if(goal_handle_ && goal_handle_->is_active()){
                goal_to_abort_id_ = goal_handle_->get_goal_id();
                RCLCPP_WARN(this->get_logger(), "There is a goal already running... aborting it now");
            }
            return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        }   
    }

    /* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> */

};

 
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Turtlebot3Controller>(); // MODIFY NAME
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node->get_node_base_interface());
    executor.spin();
    rclcpp::shutdown();
    return 0;
}
