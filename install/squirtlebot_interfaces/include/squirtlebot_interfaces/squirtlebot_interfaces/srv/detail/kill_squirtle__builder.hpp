// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from squirtlebot_interfaces:srv/KillSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/srv/kill_squirtle.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__BUILDER_HPP_
#define SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "squirtlebot_interfaces/srv/detail/kill_squirtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace squirtlebot_interfaces
{

namespace srv
{

namespace builder
{

class Init_KillSquirtle_Request_kill_active_squirtle
{
public:
  Init_KillSquirtle_Request_kill_active_squirtle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::squirtlebot_interfaces::srv::KillSquirtle_Request kill_active_squirtle(::squirtlebot_interfaces::srv::KillSquirtle_Request::_kill_active_squirtle_type arg)
  {
    msg_.kill_active_squirtle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::KillSquirtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::srv::KillSquirtle_Request>()
{
  return squirtlebot_interfaces::srv::builder::Init_KillSquirtle_Request_kill_active_squirtle();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace srv
{

namespace builder
{

class Init_KillSquirtle_Response_success
{
public:
  Init_KillSquirtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::squirtlebot_interfaces::srv::KillSquirtle_Response success(::squirtlebot_interfaces::srv::KillSquirtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::KillSquirtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::srv::KillSquirtle_Response>()
{
  return squirtlebot_interfaces::srv::builder::Init_KillSquirtle_Response_success();
}

}  // namespace squirtlebot_interfaces


namespace squirtlebot_interfaces
{

namespace srv
{

namespace builder
{

class Init_KillSquirtle_Event_response
{
public:
  explicit Init_KillSquirtle_Event_response(::squirtlebot_interfaces::srv::KillSquirtle_Event & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::srv::KillSquirtle_Event response(::squirtlebot_interfaces::srv::KillSquirtle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::KillSquirtle_Event msg_;
};

class Init_KillSquirtle_Event_request
{
public:
  explicit Init_KillSquirtle_Event_request(::squirtlebot_interfaces::srv::KillSquirtle_Event & msg)
  : msg_(msg)
  {}
  Init_KillSquirtle_Event_response request(::squirtlebot_interfaces::srv::KillSquirtle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_KillSquirtle_Event_response(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::KillSquirtle_Event msg_;
};

class Init_KillSquirtle_Event_info
{
public:
  Init_KillSquirtle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KillSquirtle_Event_request info(::squirtlebot_interfaces::srv::KillSquirtle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_KillSquirtle_Event_request(msg_);
  }

private:
  ::squirtlebot_interfaces::srv::KillSquirtle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::srv::KillSquirtle_Event>()
{
  return squirtlebot_interfaces::srv::builder::Init_KillSquirtle_Event_info();
}

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__BUILDER_HPP_
