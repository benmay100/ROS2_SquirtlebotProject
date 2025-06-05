#include "rclcpp/rclcpp.hpp"
#include "rclcpp/qos.hpp"    // <-- Used for the QoS instruction on line 40 and 41
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "turtlesim/srv/spawn.hpp"
#include "turtlesim/srv/kill.hpp"
#include "turtlesim/msg/pose.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "squirtlebot_interfaces/action/squirtle_move.hpp"
#include <functional> // Required for std::bind
#include <random>    // For random number engines and distributions


using std::placeholders::_1;
using std::placeholders::_2;
using LifecycleCallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;
using SquirtleMove = squirtlebot_interfaces::action::SquirtleMove;
using SquirtleMoveGoalHandle = rclcpp_action::ServerGoalHandle<SquirtleMove>;


class SquirtleController : public rclcpp_lifecycle::LifecycleNode
{
public:
    SquirtleController() : LifecycleNode("squirtle_controller")  // Custom node name here, good practice is file_name 
    {
        RCLCPP_INFO(this->get_logger(), "Squirtle Controller Node - Initialised!");
        this->declare_parameter("turtle_name", rclcpp::PARAMETER_STRING);
        is_active_ = false;
        
        // 1. Create a random_device to obtain a non-deterministic seed.
        // This is the closest you can get to "true" randomness from software.
        // However, it might fall back to a pseudo-random source if a
        // true hardware source isn't available (e.g., on some VMs).
        std::random_device rd;
        // 2. Use the random_device to seed a high-quality PRNG, like Mersenne Twister.
        // std::mt19937 is a 32-bit engine. Use std::mt19937_64 for 64-bit.
        std::mt19937 generator(rd());
        // 3. Define a distribution to shape the random numbers.
        // For floating-point numbers between 0.0 and 1.0 (inclusive):
        std::uniform_real_distribution<double> distribution_real(0.0, 1.0);
        random_float_1 = distribution_real(generator)*10;
        random_float_2 = distribution_real(generator)*10;
    }

/* ================ PUBLIC (LIFECYCLE) METHODS ===================*/

    LifecycleCallbackReturn on_configure(const rclcpp_lifecycle::State &previous_state){
        std::string current_state_ = previous_state.label();
        RCLCPP_INFO_STREAM(this->get_logger(), "In 'on_congfigure': Transitioning from [" + current_state_ + "] to [configuring]");

        active_turtle_name_ = this->get_parameter("turtle_name").as_string();

        callback_group_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);  //For multithreading

        //Clients to send kill and spawn requests to turtlesim
        turtlesim_node_spawn_client_ = this->create_client<turtlesim::srv::Spawn>("spawn", rclcpp::QoS(1), callback_group_); //Note how by using rclcpp:QoS(1) and callback_group we have made these multi-threaded, WITHOUT THIS the spawn service won't work properly as it gets stuck waiting for the future to complete and blocks the program, so these lines are critical!

        turtlesim_node_kill_client_ = this->create_client<turtlesim::srv::Kill>("kill", rclcpp::QoS(1), callback_group_);  //Note how by using rclcpp:QoS(1) and callback_group we have made these multi-threaded. WITHOUT THIS the kill service won't work properly as it gets stuck waiting for the future to complete and blocks the program, so these lines are critical!

        //Subscribers to turtlesim
        turtlesim_node_pose_subscriber_ = this->create_subscription<turtlesim::msg::Pose>(("/" + active_turtle_name_ + "/pose"), 10, std::bind(&SquirtleController::callback_turtlesim_pose_subscriber, this, _1));

        //Publisher to the CMD_VEL topic
        turtlesim_cmdvel_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(("/" + active_turtle_name_ + "/cmd_vel"), 10); 

        //Timer to do an initial kill and spawn - this also validates that turtlesim is online
        //initial_kill_and_spawn_timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&SquirtleController::initial_kill_and_spawn, this));
        call_turtlesim_spawn_server(random_float_1, random_float_2, 0.0);

        //Set up action server
        try{
            RCLCPP_INFO_STREAM(this->get_logger(), "Attempting to create a SquirtleMove Action Server...");
            std::string move_server_path_ = "squirtle_move_"+active_turtle_name_;
            squirtle_move_server_ = rclcpp_action::create_server<SquirtleMove>(
                this, 
                move_server_path_,
                std::bind(&SquirtleController::goal_response_callback, this, _1, _2),
                std::bind(&SquirtleController::cancel_callback, this, _1),
                std::bind(&SquirtleController::handle_accepted_callback, this, _1),
                rcl_action_server_get_default_options(), //For multithreading
                callback_group_  //For multithreading
            );
            RCLCPP_INFO_STREAM(this->get_logger(), "SquirtleMove Action Server created successfully" );
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
        RCLCPP_INFO(this->get_logger(), "SquirtleMove action server is active and ready to receive goals!");
        return LifecycleCallbackReturn::SUCCESS;
    }

    LifecycleCallbackReturn on_deactivate(const rclcpp_lifecycle::State &previous_state){
        std::string current_state_ = previous_state.label();
        RCLCPP_INFO_STREAM(this->get_logger(), "In 'on_deactivate': Transitioning from [" + current_state_ + "] to [deactivating]");
        this->is_active_ = false;
        //The next line of code MUST always be included in CPP lifecycle nodes in the on_deactivate function
        rclcpp_lifecycle::LifecycleNode::on_deactivate(previous_state);
        RCLCPP_INFO(this->get_logger(), "SquirtleMove action server is deactivated - will no longer accept goals!");
        return LifecycleCallbackReturn::SUCCESS;
    }

    LifecycleCallbackReturn on_cleanup(const rclcpp_lifecycle::State &previous_state){
        std::string current_state_ = previous_state.label();
        RCLCPP_INFO_STREAM(this->get_logger(), "In 'on_cleanup': Transitioning from [" + current_state_ + "] to [cleanup]");
        this->is_active_ = false;
        call_turtlesim_kill_server();
        //Reset clients, services, subscribers etc.
        squirtle_move_server_.reset();
        turtlesim_node_pose_subscriber_.reset();
        turtlesim_node_spawn_client_.reset();
        turtlesim_node_kill_client_.reset();
        turtlesim_cmdvel_publisher_.reset();
        callback_group_.reset();
        return LifecycleCallbackReturn::SUCCESS;
    }

    LifecycleCallbackReturn on_shutdown(const rclcpp_lifecycle::State &previous_state){
        std::string current_state_ = previous_state.label();
        RCLCPP_INFO_STREAM(this->get_logger(), "In 'on_shutdown': Transitioning from [" + current_state_ + "] to [shutdown]");
        this->is_active_ = false;
        active_turtle_name_ = "";
        //Reset clients, services, subscribers etc.
        squirtle_move_server_.reset();
        turtlesim_node_pose_subscriber_.reset();
        turtlesim_node_spawn_client_.reset();
        turtlesim_node_kill_client_.reset();
        turtlesim_cmdvel_publisher_.reset();
        callback_group_.reset();
        return LifecycleCallbackReturn::SUCCESS;
    }


/* ===============================================================*/
 
private:

/* ============ PRIVATE ATTRIBUTES ===================*/

    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr turtlesim_node_pose_subscriber_; //Subscribes to turtlesim node
    rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr turtlesim_node_spawn_client_; //Sends request to turtlesim node
    rclcpp::Client<turtlesim::srv::Kill>::SharedPtr turtlesim_node_kill_client_;  //Sends request to turtlesim node
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr turtlesim_cmdvel_publisher_;
    turtlesim::msg::Pose::SharedPtr active_turtle_position_; //an object that contains active turtle x position, y position, and theta angle
    std::string active_turtle_name_;
    //rclcpp::TimerBase::SharedPtr initial_kill_and_spawn_timer_; 
    rclcpp_action::Server<SquirtleMove>::SharedPtr squirtle_move_server_;  
    rclcpp::CallbackGroup::SharedPtr callback_group_;
    std::shared_ptr<SquirtleMoveGoalHandle> goal_handle_;
    std::mutex mutex_; //This is a lock for safety when multi-threading
    rclcpp_action::GoalUUID goal_to_abort_id_;
    bool is_active_;
    double random_float_1, random_float_2;
    
/* ===================================================*/



/* ================ PRIVATE METHODS ===================*/

    /* >>>>>>>>>>>>>> General Private Methods <<<<<<<<<<<<<<<<<*/

    // void initial_kill_and_spawn(){
    //     if(is_default_turtle_){
    //         call_turtlesim_kill_server();
    //         is_default_turtle_ = false;
    //     }
    //     float random_float_1 = static_cast<float>(rand()) / RAND_MAX * 10.0;
    //     float random_float_2 = static_cast<float>(rand()) / RAND_MAX * 10.0;
    //     call_turtlesim_spawn_server(random_float_1, random_float_2, 0.0);
    //     initial_kill_and_spawn_timer_->cancel();  //Immediately cancel the timer once we've done this once on configuration
    //     RCLCPP_INFO(this->get_logger(), "initial_kill_and_spawn_timer_ - cancelled");
    // }

    void callback_turtlesim_pose_subscriber(const turtlesim::msg::Pose::SharedPtr msg){
        active_turtle_position_ = msg;
    }

    void call_turtlesim_kill_server(){
        while (!turtlesim_node_kill_client_->wait_for_service(std::chrono::seconds(1))){
            RCLCPP_WARN(this->get_logger(), "Waiting for turtle_sim_kill_server to come online...");
        }
        // Ensure the client is valid before sending request (good practice, though `wait_for_service` implies it)
        if(turtlesim_node_kill_client_->service_is_ready()){
            RCLCPP_INFO(this->get_logger(), "We just called the KILL server...");
            auto request = std::make_shared<turtlesim::srv::Kill::Request>();
            request->name = active_turtle_name_;
            auto future = turtlesim_node_kill_client_->async_send_request(request);
            try{
                RCLCPP_INFO(this->get_logger(), "We just killed the turtle");
                active_turtle_position_->x = 0.0;
                active_turtle_position_->y = 0.0;
                active_turtle_position_->theta = 0.0;
            }
            catch(const std::exception &e){
                RCLCPP_ERROR(this->get_logger(), "Service call to kill turtle failed");
            }
        }
        else{
            RCLCPP_ERROR(this->get_logger(), "Service was not ready when attempting to send request.");  
        }
    }

    void call_turtlesim_spawn_server(float x=5.5, float y=5.5, float theta=0.0){
        while (!turtlesim_node_spawn_client_->wait_for_service(std::chrono::seconds(1))){
            RCLCPP_WARN(this->get_logger(), "Waiting for turtle_sim_spawn_server to come online...");
        }
        // Ensure the client is valid before sending request (good practice, though `wait_for_service` implies it)
        if (turtlesim_node_spawn_client_->service_is_ready()) {
            RCLCPP_INFO(this->get_logger(), "We just called the SPAWN server...");
            auto request = std::make_shared<turtlesim::srv::Spawn::Request>();
            request->name = active_turtle_name_;
            request->x = x;
            request->y = y;
            request->theta = theta;
            //auto future = turtlesim_node_spawn_client_->async_send_request(request, std::bind(&SquirtleController::spawn_response_callback, this, _1));
            auto future = turtlesim_node_spawn_client_->async_send_request(request);
            try {
                auto response = future.get(); // Get the response from the completed future
                RCLCPP_INFO_STREAM(this->get_logger(), "We just spawned a new squirtle (" + response->name + ")");
            } catch (const std::exception &e) {
                RCLCPP_ERROR_STREAM(this->get_logger(), "Service call to spawn failed: " << e.what());
            }

        } 
        else {
            RCLCPP_ERROR(this->get_logger(), "Service was not ready when attempting to send request.");
        }
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
        auto cmd_vel_values = geometry_msgs::msg::Twist();

        //2. Execute the action
        rclcpp::Rate loop_rate(5); //Run the loop at 5hz to save on CPU
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); //(Optional) just gives client time to start calling for feedback!
        
        while (rclcpp::ok()){
            if(now() - start_time > duration){
                //Once duration exceeded set final state, set cmd_vel values back to 0, return result and break from the loop
                result->final_position_x = active_turtle_position_->x;
                result->final_position_y = active_turtle_position_->y;
                result->final_theta_angle = active_turtle_position_->theta;
                result->result_message = "Move was completed successfully"; 
                RCLCPP_INFO_STREAM(this->get_logger(), "execution complete");
                goal_handle->succeed(result);
                return; //Breaks the loop
            }
            if (goal_handle->is_canceling()){
                result->final_position_x = active_turtle_position_->x;
                result->final_position_y = active_turtle_position_->y;
                result->final_theta_angle = active_turtle_position_->theta;
                result->result_message = "Move was cancelled part way through execution";
                cmd_vel_values.linear.x = 0.0;
                cmd_vel_values.angular.z = 0.0;
                turtlesim_cmdvel_publisher_->publish(cmd_vel_values);
                goal_handle->canceled(result);
                return; //Breaks the loop
            }
            { //Lock guard vital as we're playing with the same class attribute (goal_to_abort_id_) in different threads!
            std::lock_guard<std::mutex> lock(mutex_);
                if (goal_handle->get_goal_id() == goal_to_abort_id_ || !is_active_){ //If action server not activated, or an abort command received
                    result->final_position_x = active_turtle_position_->x;
                    result->final_position_y = active_turtle_position_->y;
                    result->final_theta_angle = active_turtle_position_->theta;
                    result->result_message = "Move was aborted part way through execution";
                    cmd_vel_values.linear.x = 0.0;
                    cmd_vel_values.angular.z = 0.0;
                    goal_handle->abort(result);
                    return; //Breaks the loop
                }
            }
            //Otherwise keep publishing to CMD_VEL
            cmd_vel_values.linear.x = linear_velocity;
            cmd_vel_values.angular.z = angular_velocity;
            turtlesim_cmdvel_publisher_->publish(cmd_vel_values);
            feedback->current_position_x = active_turtle_position_->x;
            feedback->current_position_y = active_turtle_position_->y;
            feedback->current_theta_angle = active_turtle_position_->theta;
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
    auto node = std::make_shared<SquirtleController>(); // MODIFY NAME
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node->get_node_base_interface());
    executor.spin();
    rclcpp::shutdown();
    return 0;
}
