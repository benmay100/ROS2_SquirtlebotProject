// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__functions.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__struct.hpp"
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

void KillSpawnSquirtle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::msg::KillSpawnSquirtle(_init);
}

void KillSpawnSquirtle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::msg::KillSpawnSquirtle *>(message_memory);
  typed_message->~KillSpawnSquirtle();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KillSpawnSquirtle_message_member_array[1] = {
  {
    "kill_or_spawn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::msg::KillSpawnSquirtle, kill_or_spawn),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KillSpawnSquirtle_message_members = {
  "squirtlebot_interfaces::msg",  // message namespace
  "KillSpawnSquirtle",  // message name
  1,  // number of fields
  sizeof(squirtlebot_interfaces::msg::KillSpawnSquirtle),
  false,  // has_any_key_member_
  KillSpawnSquirtle_message_member_array,  // message members
  KillSpawnSquirtle_init_function,  // function to initialize message memory (memory has to be allocated)
  KillSpawnSquirtle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KillSpawnSquirtle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KillSpawnSquirtle_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_hash,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::msg::KillSpawnSquirtle>()
{
  return &::squirtlebot_interfaces::msg::rosidl_typesupport_introspection_cpp::KillSpawnSquirtle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, msg, KillSpawnSquirtle)() {
  return &::squirtlebot_interfaces::msg::rosidl_typesupport_introspection_cpp::KillSpawnSquirtle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
