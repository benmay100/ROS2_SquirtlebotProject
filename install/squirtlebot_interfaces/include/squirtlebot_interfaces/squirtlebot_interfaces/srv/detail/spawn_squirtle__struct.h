// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from squirtlebot_interfaces:srv/SpawnSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/srv/spawn_squirtle.h"


#ifndef SQUIRTLEBOT_INTERFACES__SRV__DETAIL__SPAWN_SQUIRTLE__STRUCT_H_
#define SQUIRTLEBOT_INTERFACES__SRV__DETAIL__SPAWN_SQUIRTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SpawnSquirtle in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__srv__SpawnSquirtle_Request
{
  bool spawn_new_squirtle;
  /// Optional: default value is 5.54
  float x;
  /// Optional: default value is 5.54
  float y;
  /// Optional: default value is 0.00
  float theta;
} squirtlebot_interfaces__srv__SpawnSquirtle_Request;

// Struct for a sequence of squirtlebot_interfaces__srv__SpawnSquirtle_Request.
typedef struct squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence
{
  squirtlebot_interfaces__srv__SpawnSquirtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SpawnSquirtle in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__srv__SpawnSquirtle_Response
{
  bool success;
} squirtlebot_interfaces__srv__SpawnSquirtle_Response;

// Struct for a sequence of squirtlebot_interfaces__srv__SpawnSquirtle_Response.
typedef struct squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence
{
  squirtlebot_interfaces__srv__SpawnSquirtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  squirtlebot_interfaces__srv__SpawnSquirtle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  squirtlebot_interfaces__srv__SpawnSquirtle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SpawnSquirtle in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__srv__SpawnSquirtle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  squirtlebot_interfaces__srv__SpawnSquirtle_Request__Sequence request;
  squirtlebot_interfaces__srv__SpawnSquirtle_Response__Sequence response;
} squirtlebot_interfaces__srv__SpawnSquirtle_Event;

// Struct for a sequence of squirtlebot_interfaces__srv__SpawnSquirtle_Event.
typedef struct squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence
{
  squirtlebot_interfaces__srv__SpawnSquirtle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__srv__SpawnSquirtle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SQUIRTLEBOT_INTERFACES__SRV__DETAIL__SPAWN_SQUIRTLE__STRUCT_H_
