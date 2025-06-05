// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from squirtlebot_interfaces:msg/CancelSquirtleMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/cancel_squirtle_move.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__BUILDER_HPP_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace squirtlebot_interfaces
{

namespace msg
{

namespace builder
{

class Init_CancelSquirtleMove_cancel_move
{
public:
  Init_CancelSquirtleMove_cancel_move()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::squirtlebot_interfaces::msg::CancelSquirtleMove cancel_move(::squirtlebot_interfaces::msg::CancelSquirtleMove::_cancel_move_type arg)
  {
    msg_.cancel_move = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::msg::CancelSquirtleMove msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::msg::CancelSquirtleMove>()
{
  return squirtlebot_interfaces::msg::builder::Init_CancelSquirtleMove_cancel_move();
}

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__BUILDER_HPP_
