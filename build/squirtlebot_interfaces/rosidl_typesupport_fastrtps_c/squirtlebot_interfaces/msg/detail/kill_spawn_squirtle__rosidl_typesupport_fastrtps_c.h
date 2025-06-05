// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice
#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "squirtlebot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
bool cdr_serialize_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  const squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
bool cdr_deserialize_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  eprosima::fastcdr::Cdr &,
  squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t get_serialized_size_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t max_serialized_size_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
bool cdr_serialize_key_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  const squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t get_serialized_size_key_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t max_serialized_size_key_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, squirtlebot_interfaces, msg, KillSpawnSquirtle)();

#ifdef __cplusplus
}
#endif

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
