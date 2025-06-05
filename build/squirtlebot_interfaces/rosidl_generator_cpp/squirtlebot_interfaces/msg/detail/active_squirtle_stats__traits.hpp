// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from squirtlebot_interfaces:msg/ActiveSquirtleStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/active_squirtle_stats.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__ACTIVE_SQUIRTLE_STATS__TRAITS_HPP_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__ACTIVE_SQUIRTLE_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "squirtlebot_interfaces/msg/detail/active_squirtle_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace squirtlebot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActiveSquirtleStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActiveSquirtleStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActiveSquirtleStats & msg, bool use_flow_style = false)
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
  const squirtlebot_interfaces::msg::ActiveSquirtleStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::msg::ActiveSquirtleStats & msg)
{
  return squirtlebot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::msg::ActiveSquirtleStats>()
{
  return "squirtlebot_interfaces::msg::ActiveSquirtleStats";
}

template<>
inline const char * name<squirtlebot_interfaces::msg::ActiveSquirtleStats>()
{
  return "squirtlebot_interfaces/msg/ActiveSquirtleStats";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::msg::ActiveSquirtleStats>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::msg::ActiveSquirtleStats>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<squirtlebot_interfaces::msg::ActiveSquirtleStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__ACTIVE_SQUIRTLE_STATS__TRAITS_HPP_
