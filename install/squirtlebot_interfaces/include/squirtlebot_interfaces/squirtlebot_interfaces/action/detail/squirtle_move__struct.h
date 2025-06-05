// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from squirtlebot_interfaces:action/SquirtleMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "squirtlebot_interfaces/action/squirtle_move.h"


#ifndef SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__STRUCT_H_
#define SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_Goal
{
  /// between -5 to +5
  double linear_x;
  /// between -5 to +5
  double angular_z;
  /// seconds, maximum 20
  int32_t duration;
} squirtlebot_interfaces__action__SquirtleMove_Goal;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_Goal.
typedef struct squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_Result
{
  double final_position_x;
  double final_position_y;
  double final_theta_angle;
  /// E.g. 'successfully arrived at position'
  rosidl_runtime_c__String result_message;
} squirtlebot_interfaces__action__SquirtleMove_Result;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_Result.
typedef struct squirtlebot_interfaces__action__SquirtleMove_Result__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_Feedback
{
  double current_position_x;
  double current_position_y;
  double current_theta_angle;
  /// E.g. queued
  rosidl_runtime_c__String status;
} squirtlebot_interfaces__action__SquirtleMove_Feedback;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_Feedback.
typedef struct squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "squirtlebot_interfaces/action/detail/squirtle_move__struct.h"

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  squirtlebot_interfaces__action__SquirtleMove_Goal goal;
} squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request.
typedef struct squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response.
typedef struct squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__Sequence request;
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__Sequence response;
} squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event.
typedef struct squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} squirtlebot_interfaces__action__SquirtleMove_GetResult_Request;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_GetResult_Request.
typedef struct squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.h"

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_GetResult_Response
{
  int8_t status;
  squirtlebot_interfaces__action__SquirtleMove_Result result;
} squirtlebot_interfaces__action__SquirtleMove_GetResult_Response;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_GetResult_Response.
typedef struct squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__Sequence request;
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__Sequence response;
} squirtlebot_interfaces__action__SquirtleMove_GetResult_Event;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_GetResult_Event.
typedef struct squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.h"

/// Struct defined in action/SquirtleMove in the package squirtlebot_interfaces.
typedef struct squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  squirtlebot_interfaces__action__SquirtleMove_Feedback feedback;
} squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage;

// Struct for a sequence of squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage.
typedef struct squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence
{
  squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SQUIRTLEBOT_INTERFACES__ACTION__DETAIL__SQUIRTLE_MOVE__STRUCT_H_
