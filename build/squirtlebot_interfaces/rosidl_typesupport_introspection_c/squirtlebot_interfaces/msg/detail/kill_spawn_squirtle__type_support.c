// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__rosidl_typesupport_introspection_c.h"
#include "squirtlebot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__functions.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__struct.h"


// Include directives for member types
// Member `kill_or_spawn`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  squirtlebot_interfaces__msg__KillSpawnSquirtle__init(message_memory);
}

void squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_fini_function(void * message_memory)
{
  squirtlebot_interfaces__msg__KillSpawnSquirtle__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_message_member_array[1] = {
  {
    "kill_or_spawn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces__msg__KillSpawnSquirtle, kill_or_spawn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_message_members = {
  "squirtlebot_interfaces__msg",  // message namespace
  "KillSpawnSquirtle",  // message name
  1,  // number of fields
  sizeof(squirtlebot_interfaces__msg__KillSpawnSquirtle),
  false,  // has_any_key_member_
  squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_message_member_array,  // message members
  squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_init_function,  // function to initialize message memory (memory has to be allocated)
  squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_message_type_support_handle = {
  0,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_hash,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_squirtlebot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, msg, KillSpawnSquirtle)() {
  if (!squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_message_type_support_handle.typesupport_identifier) {
    squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &squirtlebot_interfaces__msg__KillSpawnSquirtle__rosidl_typesupport_introspection_c__KillSpawnSquirtle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
