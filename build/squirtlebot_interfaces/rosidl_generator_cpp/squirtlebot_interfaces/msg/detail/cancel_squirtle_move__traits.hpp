// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from squirtlebot_interfaces:msg/CancelSquirtleMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/cancel_squirtle_move.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__TRAITS_HPP_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace squirtlebot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CancelSquirtleMove & msg,
  std::ostream & out)
{
  out << "{";
  // member: cancel_move
  {
    out << "cancel_move: ";
    rosidl_generator_traits::value_to_yaml(msg.cancel_move, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CancelSquirtleMove & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cancel_move
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cancel_move: ";
    rosidl_generator_traits::value_to_yaml(msg.cancel_move, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CancelSquirtleMove & msg, bool use_flow_style = false)
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
  const squirtlebot_interfaces::msg::CancelSquirtleMove & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::msg::CancelSquirtleMove & msg)
{
  return squirtlebot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::msg::CancelSquirtleMove>()
{
  return "squirtlebot_interfaces::msg::CancelSquirtleMove";
}

template<>
inline const char * name<squirtlebot_interfaces::msg::CancelSquirtleMove>()
{
  return "squirtlebot_interfaces/msg/CancelSquirtleMove";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::msg::CancelSquirtleMove>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::msg::CancelSquirtleMove>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<squirtlebot_interfaces::msg::CancelSquirtleMove>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__TRAITS_HPP_
