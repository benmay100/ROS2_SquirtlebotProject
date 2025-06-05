// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from squirtlebot_interfaces:srv/SpawnSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/srv/spawn_squirtle.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__SRV__DETAIL__SPAWN_SQUIRTLE__BUILDER_HPP_
#define SQUIRTLEBOT_INTERFACES__SRV__DETAIL__SPAWN_SQUIRTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "squirtlebot_interfaces/srv/detail/spawn_squirtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace squirtlebot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnSquirtle_Request_theta
{
public:
  explicit Init_SpawnSquirtle_Request_theta(::squirtlebot_interfaces::srv::SpawnSquirtle_Request & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Request theta(::squirtlebot_interfaces::srv::SpawnSquirtle_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Request msg_;
};

class Init_SpawnSquirtle_Request_y
{
public:
  explicit Init_SpawnSquirtle_Request_y(::squirtlebot_interfaces::srv::SpawnSquirtle_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnSquirtle_Request_theta y(::squirtlebot_interfaces::srv::SpawnSquirtle_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SpawnSquirtle_Request_theta(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Request msg_;
};

class Init_SpawnSquirtle_Request_x
{
public:
  explicit Init_SpawnSquirtle_Request_x(::squirtlebot_interfaces::srv::SpawnSquirtle_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnSquirtle_Request_y x(::squirtlebot_interfaces::srv::SpawnSquirtle_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SpawnSquirtle_Request_y(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Request msg_;
};

class Init_SpawnSquirtle_Request_spawn_new_squirtle
{
public:
  Init_SpawnSquirtle_Request_spawn_new_squirtle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnSquirtle_Request_x spawn_new_squirtle(::squirtlebot_interfaces::srv::SpawnSquirtle_Request::_spawn_new_squirtle_type arg)
  {
    msg_.spawn_new_squirtle = std::move(arg);
    return Init_SpawnSquirtle_Request_x(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::srv::SpawnSquirtle_Request>()
{
  return squirtlebot_interfaces::srv::builder::Init_SpawnSquirtle_Request_spawn_new_squirtle();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnSquirtle_Response_success
{
public:
  Init_SpawnSquirtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Response success(::squirtlebot_interfaces::srv::SpawnSquirtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::srv::SpawnSquirtle_Response>()
{
  return squirtlebot_interfaces::srv::builder::Init_SpawnSquirtle_Response_success();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SpawnSquirtle_Event_response
{
public:
  explicit Init_SpawnSquirtle_Event_response(::squirtlebot_interfaces::srv::SpawnSquirtle_Event & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Event response(::squirtlebot_interfaces::srv::SpawnSquirtle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Event msg_;
};

class Init_SpawnSquirtle_Event_request
{
public:
  explicit Init_SpawnSquirtle_Event_request(::squirtlebot_interfaces::srv::SpawnSquirtle_Event & msg)
  : msg_(msg)
  {}
  Init_SpawnSquirtle_Event_response request(::squirtlebot_interfaces::srv::SpawnSquirtle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SpawnSquirtle_Event_response(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Event msg_;
};

class Init_SpawnSquirtle_Event_info
{
public:
  Init_SpawnSquirtle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnSquirtle_Event_request info(::squirtlebot_interfaces::srv::SpawnSquirtle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SpawnSquirtle_Event_request(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::SpawnSquirtle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::srv::SpawnSquirtle_Event>()
{
  return squirtlebot_interfaces::srv::builder::Init_SpawnSquirtle_Event_info();
}

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__SRV__DETAIL__SPAWN_SQUIRTLE__BUILDER_HPP_
