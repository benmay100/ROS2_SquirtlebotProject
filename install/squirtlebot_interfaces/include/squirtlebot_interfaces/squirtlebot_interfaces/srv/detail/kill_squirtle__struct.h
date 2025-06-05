// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from squirtlebot_interfaces:srv/KillSquirtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/srv/kill_squirtle.h"


#ifndef SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__STRUCT_H_
#define SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/KillSquirtle in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__srv__KillSquirtle_Request
{
  bool kill_active_squirtle;
} squirtlebot_interfaces__srv__KillSquirtle_Request;

// Struct for a sequence of squirtlebot_interfaces__srv__KillSquirtle_Request.
typedef struct squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence
{
  squirtlebot_interfaces__srv__KillSquirtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/KillSquirtle in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__srv__KillSquirtle_Response
{
  bool success;
} squirtlebot_interfaces__srv__KillSquirtle_Response;

// Struct for a sequence of squirtlebot_interfaces__srv__KillSquirtle_Response.
typedef struct squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence
{
  squirtlebot_interfaces__srv__KillSquirtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  squirtlebot_interfaces__srv__KillSquirtle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  squirtlebot_interfaces__srv__KillSquirtle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/KillSquirtle in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__srv__KillSquirtle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence request;
  squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence response;
} squirtlebot_interfaces__srv__KillSquirtle_Event;

// Struct for a sequence of squirtlebot_interfaces__srv__KillSquirtle_Event.
typedef struct squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence
{
  squirtlebot_interfaces__srv__KillSquirtle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__srv__KillSquirtle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SQUIRTLEBOT_INTERFACES__SRV__DETAIL__KILL_SQUIRTLE__STRUCT_H_
