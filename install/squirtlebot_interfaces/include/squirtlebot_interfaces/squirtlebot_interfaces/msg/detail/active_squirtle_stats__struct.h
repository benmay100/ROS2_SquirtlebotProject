// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from squirtlebot_interfaces:msg/ActiveSquirtleStats.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/active_squirtle_stats.h"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__ACTIVE_SQUIRTLE_STATS__STRUCT_H_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__ACTIVE_SQUIRTLE_STATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ActiveSquirtleStats in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__msg__ActiveSquirtleStats
{
  rosidl_runtime_c__String name;
  float x;
  float y;
  float theta;
} squirtlebot_interfaces__msg__ActiveSquirtleStats;

// Struct for a sequence of squirtlebot_interfaces__msg__ActiveSquirtleStats.
typedef struct squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence
{
  squirtlebot_interfaces__msg__ActiveSquirtleStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__msg__ActiveSquirtleStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__ACTIVE_SQUIRTLE_STATS__STRUCT_H_
