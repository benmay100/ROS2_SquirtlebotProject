import rclpy
from rclpy.node import Node
import time
from rclpy.callback_groups import ReentrantCallbackGroup
#from rclpy.executors import MultiThreadedExecutor

from lifecycle_msgs.srv import ChangeState, GetState
from lifecycle_msgs.msg import Transition, State

class LifecycleManager(Node):
    
    #A ROS2 node that manages the lifecycle of other specified lifecycle nodes.
    
    def __init__(self):
        super().__init__('lifecycle_manager')
        self.get_logger().info('Lifecycle Manager Node starting.')

        # Use a reentrant callback group to allow concurrent service calls
        self.callback_group = ReentrantCallbackGroup()

        # Define the list of lifecycle nodes to manage
        # Replace with the actual names of your target lifecycle nodes
        #E.g. for multiple nodes...  --->   self.managed_node_names = ['/node_to_manage_1', '/node_to_manage_2', '/node_to_manage_3']
        self.managed_node_names = ['/turtlebot3_controller']

        # A loop to create service clients for each managed node
        self.state_clients = {}
        self.transition_clients = {}
        for node_name in self.managed_node_names:
            state_client = self.create_client(
                GetState,
                f'{node_name}/get_state',
                callback_group=self.callback_group)
            transition_client = self.create_client(
                ChangeState,
                f'{node_name}/change_state',
                callback_group=self.callback_group)
            self.state_clients[node_name] = state_client
            self.transition_clients[node_name] = transition_client
            # Wait for the services to be available
            self.get_logger().info(f'Waiting for lifecycle services for {node_name}...')
            state_client.wait_for_service()
            transition_client.wait_for_service()
            self.get_logger().info(f'Lifecycle services for {node_name} available.')

        # You can add timers, subscriptions, or service servers here
        # to trigger the lifecycle transitions based on your application logic.
        # For this template, we'll demonstrate transitions via a timer callback.

        #self.timer_change_state_ = self.create_timer(5.0, self.timer_callback_change_state) # Trigger transitions every X seconds
        self.timer_blocking_state_change = self.create_timer(1.0, self.timer_callback_blocking_state_change) 


        self.current_state_index = 0
        self.transition_sequence = [
            Transition.TRANSITION_CONFIGURE,
            Transition.TRANSITION_ACTIVATE,
            Transition.TRANSITION_DEACTIVATE,
            Transition.TRANSITION_CLEANUP,
            Transition.TRANSITION_CONFIGURE, # Example: transition back and forth
            Transition.TRANSITION_ACTIVATE,
            Transition.TRANSITION_DEACTIVATE,
            Transition.TRANSITION_CLEANUP,
            Transition.TRANSITION_UNCONFIGURED_SHUTDOWN,
        ]

    def timer_callback_change_state(self):
        #Timer callback to cycle through lifecycle transitions for managed nodes.
        #This is a simple example; real-world managers would use more complex logic.
        if not self.managed_node_names:
            self.get_logger().info("No managed nodes defined.")
            return
        transition_to_perform = self.transition_sequence[self.current_state_index % len(self.transition_sequence)]
        self.current_state_index += 1
        self.get_logger().info(f"Attempting to perform transition: {self.get_transition_name(transition_to_perform)}")
        for node_name in self.managed_node_names:
            self.change_state(node_name, transition_to_perform)


    def timer_callback_blocking_state_change(self):
        if not self.managed_node_names:
            self.get_logger().info("No managed nodes defined.")
            return
        time.sleep(2)
        transition_to_perform = self.transition_sequence[0]
        self.get_logger().info(f"Attempting to perform transition: {self.get_transition_name(transition_to_perform)}")
        for node_name in self.managed_node_names:
            self.change_state(node_name, transition_to_perform)
        time.sleep(5)
        transition_to_perform = self.transition_sequence[1]
        self.get_logger().info(f"Attempting to perform transition: {self.get_transition_name(transition_to_perform)}")
        for node_name in self.managed_node_names:
            self.change_state(node_name, transition_to_perform)
        self.timer_blocking_state_change.cancel()



    # >>>>>>>> Get State and Change State Methods <<<<<<<<<<<<<<<< #

    def get_state(self, node_name):
        #Gets the current state of a managed lifecycle node - this is run inside the 'change_state' function each time a node state is changed
        if node_name not in self.state_clients:
            self.get_logger().warning(f"No state client for node: {node_name}")
            return None
        request = GetState.Request()
        future = self.state_clients[node_name].call_async(request)
        # Attach a callback to handle the response when it arrives
        future.add_done_callback(
            lambda future: self.get_state_callback(future, node_name)
        )

    def get_state_callback(self, future, node_name):
        #Callback to process the result of a get_state service call.
        try:
            result = future.result()
            if result.current_state:
                #Just using warning text here to make the logs clearer!
                self.get_logger().warning(f"Current State of {node_name} is " + result.current_state.label)
            else:
                self.get_logger().warning(f"Current State of {node_name} unknown.")
        except Exception as e:
            self.get_logger().error(f"Service call to {node_name}/get_state failed: {e}")


    def change_state(self, node_name, transition_id):
        #Sends a state transition request to a managed lifecycle node.
        if node_name not in self.transition_clients:
            self.get_logger().warning(f"No transition client for node: {node_name}")
            return
        request = ChangeState.Request()
        request.transition.id = transition_id
        self.get_logger().info(f"Sending transition {self.get_transition_name(transition_id)} to {node_name}")
        future = self.transition_clients[node_name].call_async(request)
        # Attach a callback to handle the response when it arrives
        future.add_done_callback(
            lambda future: self.change_state_callback(future, node_name, transition_id)
        )

    def change_state_callback(self, future, node_name, transition_id):
        #Callback to process the result of a change_state service call.
        try:
            result = future.result()
            if result.success:
                self.get_logger().info(f"Transition {self.get_transition_name(transition_id)} to {node_name} successful.")
                self.get_state(node_name)
            else:
                self.get_logger().warning(f"Transition {self.get_transition_name(transition_id)} to {node_name} failed.")
                self.get_state(node_name)
        except Exception as e:
            self.get_logger().error(f"Service call to {node_name}/change_state failed: {e}")


    def get_transition_name(self, transition_id):
        #Helper to get the name of a transition from its ID.
        # This is a simplified mapping; a more complete one can be found in lifecycle_msgs/msg/Transition.msg
        transition_names = {
            Transition.TRANSITION_CONFIGURE: "configure",
            Transition.TRANSITION_ACTIVATE: "activate",
            Transition.TRANSITION_DEACTIVATE: "deactivate",
            Transition.TRANSITION_CLEANUP: "cleanup",
            Transition.TRANSITION_UNCONFIGURED_SHUTDOWN: "shutdown",
            Transition.TRANSITION_INACTIVE_SHUTDOWN: "shutdown",
            Transition.TRANSITION_ACTIVE_SHUTDOWN: "shutdown",
            Transition.TRANSITION_DESTROY: "destroy"
        }
        return transition_names.get(transition_id, f"Unknown ({transition_id})")


def main(args=None):
    rclpy.init(args=args)
    lifecycle_manager_node = LifecycleManager()
    try:
        rclpy.spin(lifecycle_manager_node)
    except KeyboardInterrupt:
        pass
    finally:
        lifecycle_manager_node.get_logger().info("Shutting down program")
        lifecycle_manager_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()