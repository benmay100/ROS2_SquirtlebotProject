// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/kill_spawn_squirtle.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__TRAITS_HPP_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace squirtlebot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const KillSpawnSquirtle & msg,
  std::ostream & out)
{
  out << "{";
  // member: kill_or_spawn
  {
    out << "kill_or_spawn: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_or_spawn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KillSpawnSquirtle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kill_or_spawn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kill_or_spawn: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_or_spawn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KillSpawnSquirtle & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::msg::KillSpawnSquirtle & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::msg::KillSpawnSquirtle & msg)
{
  return squirtlebot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::msg::KillSpawnSquirtle>()
{
  return "squirtlebot_interfaces::msg::KillSpawnSquirtle";
}

template<>
inline const char * name<squirtlebot_interfaces::msg::KillSpawnSquirtle>()
{
  return "squirtlebot_interfaces/msg/KillSpawnSquirtle";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::msg::KillSpawnSquirtle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::msg::KillSpawnSquirtle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<squirtlebot_interfaces::msg::KillSpawnSquirtle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__TRAITS_HPP_
