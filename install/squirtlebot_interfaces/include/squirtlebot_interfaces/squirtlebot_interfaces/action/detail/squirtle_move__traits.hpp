// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from squirtlebot_interfaces:action/SquirtleMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/action/squirtle_move.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__TRAITS_HPP_
#define SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_x
  {
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << ", ";
  }

  // member: angular_z
  {
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << "\n";
  }

  // member: angular_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_Goal & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_Goal>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_Goal";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_Goal>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_Goal";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: final_position_x
  {
    out << "final_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.final_position_x, out);
    out << ", ";
  }

  // member: final_position_y
  {
    out << "final_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.final_position_y, out);
    out << ", ";
  }

  // member: final_theta_angle
  {
    out << "final_theta_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.final_theta_angle, out);
    out << ", ";
  }

  // member: result_message
  {
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.final_position_x, out);
    out << "\n";
  }

  // member: final_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.final_position_y, out);
    out << "\n";
  }

  // member: final_theta_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_theta_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.final_theta_angle, out);
    out << "\n";
  }

  // member: result_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_message: ";
    rosidl_generator_traits::value_to_yaml(msg.result_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_Result & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_Result>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_Result";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_Result>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_Result";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_position_x
  {
    out << "current_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position_x, out);
    out << ", ";
  }

  // member: current_position_y
  {
    out << "current_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position_y, out);
    out << ", ";
  }

  // member: current_theta_angle
  {
    out << "current_theta_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.current_theta_angle, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position_x, out);
    out << "\n";
  }

  // member: current_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position_y, out);
    out << "\n";
  }

  // member: current_theta_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_theta_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.current_theta_angle, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_Feedback & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_Feedback>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_Feedback";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_Feedback>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_Feedback";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "squirtlebot_interfaces/action/detail/squirtle_move__traits.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_SendGoal_Request";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_SendGoal_Response";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_SendGoal_Event";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>::value && has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>::value> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_SendGoal>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_SendGoal";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_SendGoal>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_SendGoal";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>::value &&
    has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>::value &&
    has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<squirtlebot_interfaces::action::SquirtleMove_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_GetResult_Request & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_GetResult_Request";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_GetResult_Request";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__traits.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_GetResult_Response & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_GetResult_Response";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_GetResult_Response";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_Result>::value> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_Result>::value> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_GetResult_Event & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_GetResult_Event";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_GetResult_Event";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>::value && has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>::value> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_GetResult>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_GetResult";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_GetResult>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_GetResult";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>::value &&
    has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>::value &&
    has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>::value
  >
{
};

template<>
struct is_service<squirtlebot_interfaces::action::SquirtleMove_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__traits.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SquirtleMove_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SquirtleMove_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SquirtleMove_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage & msg)
{
  return squirtlebot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage>()
{
  return "squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage";
}

template<>
inline const char * name<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage>()
{
  return "squirtlebot_interfaces/action/SquirtleMove_FeedbackMessage";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<squirtlebot_interfaces::action::SquirtleMove_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<squirtlebot_interfaces::action::SquirtleMove_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<squirtlebot_interfaces::action::SquirtleMove>
  : std::true_type
{
};

template<>
struct is_action_goal<squirtlebot_interfaces::action::SquirtleMove_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<squirtlebot_interfaces::action::SquirtleMove_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<squirtlebot_interfaces::action::SquirtleMove_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__TRAITS_HPP_
