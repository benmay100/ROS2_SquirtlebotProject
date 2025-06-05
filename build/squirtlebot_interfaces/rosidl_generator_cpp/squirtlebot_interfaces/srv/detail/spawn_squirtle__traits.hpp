// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from squirtlebot_interfaces:srv/SpawnSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/srv/spawn_squirtle.hpp"


#ifndef SQUIRTLEBOT_INTERFACES__SRV__DETAIL__SPAWN_SQUIRTLE__TRAITS_HPP_
#define SQUIRTLEBOT_INTERFACES__SRV__DETAIL__SPAWN_SQUIRTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "squirtlebot_interfaces/srv/detail/spawn_squirtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace squirtlebot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnSquirtle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: spawn_new_squirtle
  {
    out << "spawn_new_squirtle: ";
    rosidl_generator_traits::value_to_yaml(msg.spawn_new_squirtle, out);
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
  const SpawnSquirtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: spawn_new_squirtle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spawn_new_squirtle: ";
    rosidl_generator_traits::value_to_yaml(msg.spawn_new_squirtle, out);
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

inline std::string to_yaml(const SpawnSquirtle_Request & msg, bool use_flow_style = false)
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
  const squirtlebot_interfaces::srv::SpawnSquirtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::srv::SpawnSquirtle_Request & msg)
{
  return squirtlebot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::srv::SpawnSquirtle_Request>()
{
  return "squirtlebot_interfaces::srv::SpawnSquirtle_Request";
}

template<>
inline const char * name<squirtlebot_interfaces::srv::SpawnSquirtle_Request>()
{
  return "squirtlebot_interfaces/srv/SpawnSquirtle_Request";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::srv::SpawnSquirtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::srv::SpawnSquirtle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<squirtlebot_interfaces::srv::SpawnSquirtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace squirtlebot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SpawnSquirtle_Response & msg,
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
  const SpawnSquirtle_Response & msg,
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

inline std::string to_yaml(const SpawnSquirtle_Response & msg, bool use_flow_style = false)
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
  const squirtlebot_interfaces::srv::SpawnSquirtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::srv::SpawnSquirtle_Response & msg)
{
  return squirtlebot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::srv::SpawnSquirtle_Response>()
{
  return "squirtlebot_interfaces::srv::SpawnSquirtle_Response";
}

template<>
inline const char * name<squirtlebot_interfaces::srv::SpawnSquirtle_Response>()
{
  return "squirtlebot_interfaces/srv/SpawnSquirtle_Response";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::srv::SpawnSquirtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::srv::SpawnSquirtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<squirtlebot_interfaces::srv::SpawnSquirtle_Response>
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
  const SpawnSquirtle_Event & msg,
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
  const SpawnSquirtle_Event & msg,
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

inline std::string to_yaml(const SpawnSquirtle_Event & msg, bool use_flow_style = false)
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
  const squirtlebot_interfaces::srv::SpawnSquirtle_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  squirtlebot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use squirtlebot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const squirtlebot_interfaces::srv::SpawnSquirtle_Event & msg)
{
  return squirtlebot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<squirtlebot_interfaces::srv::SpawnSquirtle_Event>()
{
  return "squirtlebot_interfaces::srv::SpawnSquirtle_Event";
}

template<>
inline const char * name<squirtlebot_interfaces::srv::SpawnSquirtle_Event>()
{
  return "squirtlebot_interfaces/srv/SpawnSquirtle_Event";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::srv::SpawnSquirtle_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<squirtlebot_interfaces::srv::SpawnSquirtle_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<squirtlebot_interfaces::srv::SpawnSquirtle_Request>::value && has_bounded_size<squirtlebot_interfaces::srv::SpawnSquirtle_Response>::value> {};

template<>
struct is_message<squirtlebot_interfaces::srv::SpawnSquirtle_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<squirtlebot_interfaces::srv::SpawnSquirtle>()
{
  return "squirtlebot_interfaces::srv::SpawnSquirtle";
}

template<>
inline const char * name<squirtlebot_interfaces::srv::SpawnSquirtle>()
{
  return "squirtlebot_interfaces/srv/SpawnSquirtle";
}

template<>
struct has_fixed_size<squirtlebot_interfaces::srv::SpawnSquirtle>
  : std::integral_constant<
    bool,
    has_fixed_size<squirtlebot_interfaces::srv::SpawnSquirtle_Request>::value &&
    has_fixed_size<squirtlebot_interfaces::srv::SpawnSquirtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<squirtlebot_interfaces::srv::SpawnSquirtle>
  : std::integral_constant<
    bool,
    has_bounded_size<squirtlebot_interfaces::srv::SpawnSquirtle_Request>::value &&
    has_bounded_size<squirtlebot_interfaces::srv::SpawnSquirtle_Response>::value
  >
{
};

template<>
struct is_service<squirtlebot_interfaces::srv::SpawnSquirtle>
  : std::true_type
{
};

template<>
struct is_service_request<squirtlebot_interfaces::srv::SpawnSquirtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<squirtlebot_interfaces::srv::SpawnSquirtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SQUIRTLEBOT_INTERFACES__SRV__DETAIL__SPAWN_SQUIRTLE__TRAITS_HPP_
