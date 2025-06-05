// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/kill_spawn_squirtle.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__BUILDER_HPP_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace squirtlebot_interfaces
{

namespace msg
{

namespace builder
{

class Init_KillSpawnSquirtle_kill_or_spawn
{
public:
  Init_KillSpawnSquirtle_kill_or_spawn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::squirtlebot_interfaces::msg::KillSpawnSquirtle kill_or_spawn(::squirtlebot_interfaces::msg::KillSpawnSquirtle::_kill_or_spawn_type arg)
  {
    msg_.kill_or_spawn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::squirtlebot_interfaces::msg::KillSpawnSquirtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::squirtlebot_interfaces::msg::KillSpawnSquirtle>()
{
  return squirtlebot_interfaces::msg::builder::Init_KillSpawnSquirtle_kill_or_spawn();
}

}  // namespace squirtlebot_interfaces

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__BUILDER_HPP_
