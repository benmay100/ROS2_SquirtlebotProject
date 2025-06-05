import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ben-may/ROS_Workspaces/ros2_ws_finalproject/install/squirtlebot_py'
