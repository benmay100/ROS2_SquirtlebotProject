// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from squirtlebot_interfaces:msg/ActiveSquirtleStats.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "squirtlebot_interfaces/msg/detail/active_squirtle_stats__functions.h"
#include "squirtlebot_interfaces/msg/detail/active_squirtle_stats__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ActiveSquirtleStats_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::msg::ActiveSquirtleStats(_init);
}

void ActiveSquirtleStats_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::msg::ActiveSquirtleStats *>(message_memory);
  typed_message->~ActiveSquirtleStats();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActiveSquirtleStats_message_member_array[4] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::msg::ActiveSquirtleStats, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::msg::ActiveSquirtleStats, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::msg::ActiveSquirtleStats, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::msg::ActiveSquirtleStats, theta),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActiveSquirtleStats_message_members = {
  "squirtlebot_interfaces::msg",  // message namespace
  "ActiveSquirtleStats",  // message name
  4,  // number of fields
  sizeof(squirtlebot_interfaces::msg::ActiveSquirtleStats),
  false,  // has_any_key_member_
  ActiveSquirtleStats_message_member_array,  // message members
  ActiveSquirtleStats_init_function,  // function to initialize message memory (memory has to be allocated)
  ActiveSquirtleStats_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActiveSquirtleStats_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActiveSquirtleStats_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__msg__ActiveSquirtleStats__get_type_hash,
  &squirtlebot_interfaces__msg__ActiveSquirtleStats__get_type_description,
  &squirtlebot_interfaces__msg__ActiveSquirtleStats__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::msg::ActiveSquirtleStats>()
{
  return &::squirtlebot_interfaces::msg::rosidl_typesupport_introspection_cpp::ActiveSquirtleStats_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, msg, ActiveSquirtleStats)() {
  return &::squirtlebot_interfaces::msg::rosidl_typesupport_introspection_cpp::ActiveSquirtleStats_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
