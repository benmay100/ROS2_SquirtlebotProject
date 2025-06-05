cmake_minimum_required(VERSION 3.8)
project(squirtlebot_nodes)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(turtlesim REQUIRED)
find_package(squirtlebot_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)


#Executables
# add_executable(squirtle_controller src/squirtle_controller.cpp)
# ament_target_dependencies(squirtle_controller rclcpp turtlesim squirtlebot_interfaces)

add_executable(squirtle_controller src/squirtle_controller.cpp)
ament_target_dependencies(squirtle_controller rclcpp rclcpp_lifecycle rclcpp_action geometry_msgs turtlesim squirtlebot_interfaces)

add_executable(turtlebot3_controller src/turtlebot3_controller.cpp)
ament_target_dependencies(turtlebot3_controller rclcpp rclcpp_lifecycle rclcpp_action geometry_msgs nav_msgs squirtlebot_interfaces)

install(TARGETS
  turtlebot3_controller
  squirtle_controller
  DESTINATION lib/${PROJECT_NAME}/
)


ament_package()
