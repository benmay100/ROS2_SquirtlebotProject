// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from squirtlebot_interfaces:srv/KillSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/srv/kill_squirtle.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__TRAITS_HPP_
#define SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "squirtlebot_interfaces/srv/detail/kill_squirtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace squirtlebot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const KillSquirtle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: kill_active_squirtle
  {
    out << "kill_active_squirtle: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_active_squirtle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KillSquirtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kill_active_squirtle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kill_active_squirtle: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_active_squirtle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KillSquirtle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::srv::KillSquirtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::srv::KillSquirtle_Request & msg)
{
  return squirtlebot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::srv::KillSquirtle_Request>()
{
  return "squirtlebot_interfaces::srv::KillSquirtle_Request";
}

template<>
inline const char * name<squirtlebot_interfaces::srv::KillSquirtle_Request>()
{
  return "squirtlebot_interfaces/srv/KillSquirtle_Request";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::srv::KillSquirtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::srv::KillSquirtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<squirtlebot_interfaces::srv::KillSquirtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace squirtlebot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const KillSquirtle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KillSquirtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KillSquirtle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::srv::KillSquirtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::srv::KillSquirtle_Response & msg)
{
  return squirtlebot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::srv::KillSquirtle_Response>()
{
  return "squirtlebot_interfaces::srv::KillSquirtle_Response";
}

template<>
inline const char * name<squirtlebot_interfaces::srv::KillSquirtle_Response>()
{
  return "squirtlebot_interfaces/srv/KillSquirtle_Response";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::srv::KillSquirtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::srv::KillSquirtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<squirtlebot_interfaces::srv::KillSquirtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace squirtlebot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const KillSquirtle_Event & msg,
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
  const KillSquirtle_Event & msg,
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

inline std::string to_yaml(const KillSquirtle_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace squirtlebot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use squirtlebot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const squirtlebot_interfaces::srv::KillSquirtle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::srv::KillSquirtle_Event & msg)
{
  return squirtlebot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::srv::KillSquirtle_Event>()
{
  return "squirtlebot_interfaces::srv::KillSquirtle_Event";
}

template<>
inline const char * name<squirtlebot_interfaces::srv::KillSquirtle_Event>()
{
  return "squirtlebot_interfaces/srv/KillSquirtle_Event";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::srv::KillSquirtle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::srv::KillSquirtle_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<squirtlebot_interfaces::srv::KillSquirtle_Request>::value && has_bounded_size<squirtlebot_interfaces::srv::KillSquirtle_Response>::value> {};

template<>
struct is_message<squirtlebot_interfaces::srv::KillSquirtle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<squirtlebot_interfaces::srv::KillSquirtle>()
{
  return "squirtlebot_interfaces::srv::KillSquirtle";
}

template<>
inline const char * name<squirtlebot_interfaces::srv::KillSquirtle>()
{
  return "squirtlebot_interfaces/srv/KillSquirtle";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::srv::KillSquirtle>
  : std::integral_constant<
    bool,
    has_fixed_size<squirtlebot_interfaces::srv::KillSquirtle_Request>::value &&
    has_fixed_size<squirtlebot_interfaces::srv::KillSquirtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<squirtlebot_interfaces::srv::KillSquirtle>
  : std::integral_constant<
    bool,
    has_bounded_size<squirtlebot_interfaces::srv::KillSquirtle_Request>::value &&
    has_bounded_size<squirtlebot_interfaces::srv::KillSquirtle_Response>::value
  >
{
};

template<>
struct is_service<squirtlebot_interfaces::srv::KillSquirtle>
  : std::true_type
{
};

template<>
struct is_service_request<squirtlebot_interfaces::srv::KillSquirtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<squirtlebot_interfaces::srv::KillSquirtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__TRAITS_HPP_
