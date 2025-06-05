// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from squirtlebot_interfaces:srv/KillSquirtle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "squirtlebot_interfaces/srv/detail/kill_squirtle__rosidl_typesupport_introspection_c.h"
#include "squirtlebot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "squirtlebot_interfaces/srv/detail/kill_squirtle__functions.h"
#include "squirtlebot_interfaces/srv/detail/kill_squirtle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  squirtlebot_interfaces__srv__KillSquirtle_Request__init(message_memory);
}

void squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_fini_function(void * message_memory)
{
  squirtlebot_interfaces__srv__KillSquirtle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_member_array[1] = {
  {
    "kill_active_squirtle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces__srv__KillSquirtle_Request, kill_active_squirtle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_members = {
  "squirtlebot_interfaces__srv",  // message namespace
  "KillSquirtle_Request",  // message name
  1,  // number of fields
  sizeof(squirtlebot_interfaces__srv__KillSquirtle_Request),
  false,  // has_any_key_member_
  squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_member_array,  // message members
  squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_type_support_handle = {
  0,
  &squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__srv__KillSquirtle_Request__get_type_hash,
  &squirtlebot_interfaces__srv__KillSquirtle_Request__get_type_description,
  &squirtlebot_interfaces__srv__KillSquirtle_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_squirtlebot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Request)() {
  if (!squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_type_support_handle.typesupport_identifier) {
    squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "squirtlebot_interfaces/srv/detail/kill_squirtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "squirtlebot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "squirtlebot_interfaces/srv/detail/kill_squirtle__functions.h"
// already included above
// #include "squirtlebot_interfaces/srv/detail/kill_squirtle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  squirtlebot_interfaces__srv__KillSquirtle_Response__init(message_memory);
}

void squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_fini_function(void * message_memory)
{
  squirtlebot_interfaces__srv__KillSquirtle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces__srv__KillSquirtle_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_members = {
  "squirtlebot_interfaces__srv",  // message namespace
  "KillSquirtle_Response",  // message name
  1,  // number of fields
  sizeof(squirtlebot_interfaces__srv__KillSquirtle_Response),
  false,  // has_any_key_member_
  squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_member_array,  // message members
  squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_type_support_handle = {
  0,
  &squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__srv__KillSquirtle_Response__get_type_hash,
  &squirtlebot_interfaces__srv__KillSquirtle_Response__get_type_description,
  &squirtlebot_interfaces__srv__KillSquirtle_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_squirtlebot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Response)() {
  if (!squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_type_support_handle.typesupport_identifier) {
    squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "squirtlebot_interfaces/srv/detail/kill_squirtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "squirtlebot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "squirtlebot_interfaces/srv/detail/kill_squirtle__functions.h"
// already included above
// #include "squirtlebot_interfaces/srv/detail/kill_squirtle__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "squirtlebot_interfaces/srv/kill_squirtle.h"
// Member `request`
// Member `response`
// already included above
// #include "squirtlebot_interfaces/srv/detail/kill_squirtle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  squirtlebot_interfaces__srv__KillSquirtle_Event__init(message_memory);
}

void squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_fini_function(void * message_memory)
{
  squirtlebot_interfaces__srv__KillSquirtle_Event__fini(message_memory);
}

size_t squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__size_function__KillSquirtle_Event__request(
  const void * untyped_member)
{
  const squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * member =
    (const squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_const_function__KillSquirtle_Event__request(
  const void * untyped_member, size_t index)
{
  const squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * member =
    (const squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_function__KillSquirtle_Event__request(
  void * untyped_member, size_t index)
{
  squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * member =
    (squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__fetch_function__KillSquirtle_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const squirtlebot_interfaces__srv__KillSquirtle_Request * item =
    ((const squirtlebot_interfaces__srv__KillSquirtle_Request *)
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_const_function__KillSquirtle_Event__request(untyped_member, index));
  squirtlebot_interfaces__srv__KillSquirtle_Request * value =
    (squirtlebot_interfaces__srv__KillSquirtle_Request *)(untyped_value);
  *value = *item;
}

void squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__assign_function__KillSquirtle_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  squirtlebot_interfaces__srv__KillSquirtle_Request * item =
    ((squirtlebot_interfaces__srv__KillSquirtle_Request *)
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_function__KillSquirtle_Event__request(untyped_member, index));
  const squirtlebot_interfaces__srv__KillSquirtle_Request * value =
    (const squirtlebot_interfaces__srv__KillSquirtle_Request *)(untyped_value);
  *item = *value;
}

bool squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__resize_function__KillSquirtle_Event__request(
  void * untyped_member, size_t size)
{
  squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence * member =
    (squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence *)(untyped_member);
  squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__fini(member);
  return squirtlebot_interfaces__srv__KillSquirtle_Request__Sequence__init(member, size);
}

size_t squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__size_function__KillSquirtle_Event__response(
  const void * untyped_member)
{
  const squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * member =
    (const squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_const_function__KillSquirtle_Event__response(
  const void * untyped_member, size_t index)
{
  const squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * member =
    (const squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_function__KillSquirtle_Event__response(
  void * untyped_member, size_t index)
{
  squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * member =
    (squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__fetch_function__KillSquirtle_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const squirtlebot_interfaces__srv__KillSquirtle_Response * item =
    ((const squirtlebot_interfaces__srv__KillSquirtle_Response *)
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_const_function__KillSquirtle_Event__response(untyped_member, index));
  squirtlebot_interfaces__srv__KillSquirtle_Response * value =
    (squirtlebot_interfaces__srv__KillSquirtle_Response *)(untyped_value);
  *value = *item;
}

void squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__assign_function__KillSquirtle_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  squirtlebot_interfaces__srv__KillSquirtle_Response * item =
    ((squirtlebot_interfaces__srv__KillSquirtle_Response *)
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_function__KillSquirtle_Event__response(untyped_member, index));
  const squirtlebot_interfaces__srv__KillSquirtle_Response * value =
    (const squirtlebot_interfaces__srv__KillSquirtle_Response *)(untyped_value);
  *item = *value;
}

bool squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__resize_function__KillSquirtle_Event__response(
  void * untyped_member, size_t size)
{
  squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence * member =
    (squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence *)(untyped_member);
  squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__fini(member);
  return squirtlebot_interfaces__srv__KillSquirtle_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces__srv__KillSquirtle_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(squirtlebot_interfaces__srv__KillSquirtle_Event, request),  // bytes offset in struct
    NULL,  // default value
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__size_function__KillSquirtle_Event__request,  // size() function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_const_function__KillSquirtle_Event__request,  // get_const(index) function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_function__KillSquirtle_Event__request,  // get(index) function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__fetch_function__KillSquirtle_Event__request,  // fetch(index, &value) function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__assign_function__KillSquirtle_Event__request,  // assign(index, value) function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__resize_function__KillSquirtle_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(squirtlebot_interfaces__srv__KillSquirtle_Event, response),  // bytes offset in struct
    NULL,  // default value
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__size_function__KillSquirtle_Event__response,  // size() function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_const_function__KillSquirtle_Event__response,  // get_const(index) function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__get_function__KillSquirtle_Event__response,  // get(index) function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__fetch_function__KillSquirtle_Event__response,  // fetch(index, &value) function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__assign_function__KillSquirtle_Event__response,  // assign(index, value) function pointer
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__resize_function__KillSquirtle_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_members = {
  "squirtlebot_interfaces__srv",  // message namespace
  "KillSquirtle_Event",  // message name
  3,  // number of fields
  sizeof(squirtlebot_interfaces__srv__KillSquirtle_Event),
  false,  // has_any_key_member_
  squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_member_array,  // message members
  squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_type_support_handle = {
  0,
  &squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__srv__KillSquirtle_Event__get_type_hash,
  &squirtlebot_interfaces__srv__KillSquirtle_Event__get_type_description,
  &squirtlebot_interfaces__srv__KillSquirtle_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_squirtlebot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Event)() {
  squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Request)();
  squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Response)();
  if (!squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_type_support_handle.typesupport_identifier) {
    squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "squirtlebot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "squirtlebot_interfaces/srv/detail/kill_squirtle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_service_members = {
  "squirtlebot_interfaces__srv",  // service namespace
  "KillSquirtle",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_type_support_handle,
  NULL,  // response message
  // squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_type_support_handle
  NULL  // event_message
  // squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_type_support_handle
};


static rosidl_service_type_support_t squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_service_type_support_handle = {
  0,
  &squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_service_members,
  get_service_typesupport_handle_function,
  &squirtlebot_interfaces__srv__KillSquirtle_Request__rosidl_typesupport_introspection_c__KillSquirtle_Request_message_type_support_handle,
  &squirtlebot_interfaces__srv__KillSquirtle_Response__rosidl_typesupport_introspection_c__KillSquirtle_Response_message_type_support_handle,
  &squirtlebot_interfaces__srv__KillSquirtle_Event__rosidl_typesupport_introspection_c__KillSquirtle_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    squirtlebot_interfaces,
    srv,
    KillSquirtle
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    squirtlebot_interfaces,
    srv,
    KillSquirtle
  ),
  &squirtlebot_interfaces__srv__KillSquirtle__get_type_hash,
  &squirtlebot_interfaces__srv__KillSquirtle__get_type_description,
  &squirtlebot_interfaces__srv__KillSquirtle__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_squirtlebot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle)(void) {
  if (!squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_service_type_support_handle.typesupport_identifier) {
    squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, srv, KillSquirtle_Event)()->data;
  }

  return &squirtlebot_interfaces__srv__detail__kill_squirtle__rosidl_typesupport_introspection_c__KillSquirtle_service_type_support_handle;
}
