// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from squirtlebot_interfaces:msg/CancelSquirtleMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/msg/cancel_squirtle_move.h"


#ifndef SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__STRUCT_H_
#define SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CancelSquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__msg__CancelSquirtleMove
{
  /// true to cancel
  bool cancel_move;
} squirtlebot_interfaces__msg__CancelSquirtleMove;

// Struct for a sequence of squirtlebot_interfaces__msg__CancelSquirtleMove.
typedef struct squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence
{
  squirtlebot_interfaces__msg__CancelSquirtleMove * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__msg__CancelSquirtleMove__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SQUIRTLEBOT_INTERFACES__MSG__DETAIL__CANCEL_SQUIRTLE_MOVE__STRUCT_H_
