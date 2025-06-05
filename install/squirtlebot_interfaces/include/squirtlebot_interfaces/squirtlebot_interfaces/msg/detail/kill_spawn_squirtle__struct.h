// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/kill_spawn_squirtle.h"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__STRUCT_H_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'kill_or_spawn'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KillSpawnSquirtle in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__msg__KillSpawnSquirtle
{
  /// Allowed ---> "kill" "spawn" "none"
  rosidl_runtime_c__String kill_or_spawn;
} squirtlebot_interfaces__msg__KillSpawnSquirtle;

// Struct for a sequence of squirtlebot_interfaces__msg__KillSpawnSquirtle.
typedef struct squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence
{
  squirtlebot_interfaces__msg__KillSpawnSquirtle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__msg__KillSpawnSquirtle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__KILL_SPAWN_SQUIRTLE__STRUCT_H_
