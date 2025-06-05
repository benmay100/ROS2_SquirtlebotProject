// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from squirtlebot_interfaces:msg/ActiveSquirtleStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/active_squirtle_stats.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__ACTIVE_SQUIRTLE_STATS__BUILDER_HPP_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__ACTIVE_SQUIRTLE_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "squirtlebot_interfaces/msg/detail/active_squirtle_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace squirtlebot_interfaces
{

namespace msg
{

namespace builder
{

class Init_ActiveSquirtleStats_theta
{
public:
  explicit Init_ActiveSquirtleStats_theta(::squirtlebot_interfaces::msg::ActiveSquirtleStats & msg)
  : msg_(msg)
  {}
  ::squirtlebot_interfaces::msg::ActiveSquirtleStats theta(::squirtlebot_interfaces::msg::ActiveSquirtleStats::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::msg::ActiveSquirtleStats msg_;
};

class Init_ActiveSquirtleStats_y
{
public:
  explicit Init_ActiveSquirtleStats_y(::squirtlebot_interfaces::msg::ActiveSquirtleStats & msg)
  : msg_(msg)
  {}
  Init_ActiveSquirtleStats_theta y(::squirtlebot_interfaces::msg::ActiveSquirtleStats::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ActiveSquirtleStats_theta(msg_);
  }

private:
  ::squirtlebot_interfaces::msg::ActiveSquirtleStats msg_;
};

class Init_ActiveSquirtleStats_x
{
public:
  explicit Init_ActiveSquirtleStats_x(::squirtlebot_interfaces::msg::ActiveSquirtleStats & msg)
  : msg_(msg)
  {}
  Init_ActiveSquirtleStats_y x(::squirtlebot_interfaces::msg::ActiveSquirtleStats::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ActiveSquirtleStats_y(msg_);
  }

private:
  ::squirtlebot_interfaces::msg::ActiveSquirtleStats msg_;
};

class Init_ActiveSquirtleStats_name
{
public:
  Init_ActiveSquirtleStats_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActiveSquirtleStats_x name(::squirtlebot_interfaces::msg::ActiveSquirtleStats::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ActiveSquirtleStats_x(msg_);
  }

private:
  ::squirtlebot_interfaces::msg::ActiveSquirtleStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::msg::ActiveSquirtleStats>()
{
  return squirtlebot_interfaces::msg::builder::Init_ActiveSquirtleStats_name();
}

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__ACTIVE_SQUIRTLE_STATS__BUILDER_HPP_
