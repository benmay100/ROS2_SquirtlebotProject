// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from squirtlebot_interfaces:action/SquirtleMove.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
#include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_Goal(_init);
}

void SquirtleMove_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_Goal *>(message_memory);
  typed_message->~SquirtleMove_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_Goal_message_member_array[3] = {
  {
    "linear_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Goal, linear_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Goal, angular_z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Goal, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_Goal_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_Goal",  // message name
  3,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_Goal),
  false,  // has_any_key_member_
  SquirtleMove_Goal_message_member_array,  // message members
  SquirtleMove_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_Goal_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_Goal__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_Goal__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_Goal>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_Goal)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_Result(_init);
}

void SquirtleMove_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_Result *>(message_memory);
  typed_message->~SquirtleMove_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_Result_message_member_array[4] = {
  {
    "final_position_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Result, final_position_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "final_position_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Result, final_position_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "final_theta_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Result, final_theta_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Result, result_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_Result_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_Result",  // message name
  4,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_Result),
  false,  // has_any_key_member_
  SquirtleMove_Result_message_member_array,  // message members
  SquirtleMove_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_Result_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_Result__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_Result__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_Result>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_Result)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_Feedback(_init);
}

void SquirtleMove_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_Feedback *>(message_memory);
  typed_message->~SquirtleMove_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_Feedback_message_member_array[4] = {
  {
    "current_position_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Feedback, current_position_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_position_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Feedback, current_position_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_theta_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Feedback, current_theta_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_Feedback, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_Feedback_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_Feedback",  // message name
  4,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_Feedback),
  false,  // has_any_key_member_
  SquirtleMove_Feedback_message_member_array,  // message members
  SquirtleMove_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_Feedback_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_Feedback__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_Feedback__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_Feedback>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_Feedback)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request(_init);
}

void SquirtleMove_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request *>(message_memory);
  typed_message->~SquirtleMove_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_Goal>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_SendGoal_Request_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request),
  false,  // has_any_key_member_
  SquirtleMove_SendGoal_Request_message_member_array,  // message members
  SquirtleMove_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_SendGoal_Request)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response(_init);
}

void SquirtleMove_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response *>(message_memory);
  typed_message->~SquirtleMove_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_SendGoal_Response_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response),
  false,  // has_any_key_member_
  SquirtleMove_SendGoal_Response_message_member_array,  // message members
  SquirtleMove_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_SendGoal_Response)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_SendGoal_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event(_init);
}

void SquirtleMove_SendGoal_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event *>(message_memory);
  typed_message->~SquirtleMove_SendGoal_Event();
}

size_t size_function__SquirtleMove_SendGoal_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SquirtleMove_SendGoal_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__SquirtleMove_SendGoal_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__SquirtleMove_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request *>(
    get_const_function__SquirtleMove_SendGoal_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request *>(untyped_value);
  value = item;
}

void assign_function__SquirtleMove_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request *>(
    get_function__SquirtleMove_SendGoal_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request *>(untyped_value);
  item = value;
}

void resize_function__SquirtleMove_SendGoal_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SquirtleMove_SendGoal_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SquirtleMove_SendGoal_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__SquirtleMove_SendGoal_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__SquirtleMove_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response *>(
    get_const_function__SquirtleMove_SendGoal_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response *>(untyped_value);
  value = item;
}

void assign_function__SquirtleMove_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response *>(
    get_function__SquirtleMove_SendGoal_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response *>(untyped_value);
  item = value;
}

void resize_function__SquirtleMove_SendGoal_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__SquirtleMove_SendGoal_Event__request,  // size() function pointer
    get_const_function__SquirtleMove_SendGoal_Event__request,  // get_const(index) function pointer
    get_function__SquirtleMove_SendGoal_Event__request,  // get(index) function pointer
    fetch_function__SquirtleMove_SendGoal_Event__request,  // fetch(index, &value) function pointer
    assign_function__SquirtleMove_SendGoal_Event__request,  // assign(index, value) function pointer
    resize_function__SquirtleMove_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__SquirtleMove_SendGoal_Event__response,  // size() function pointer
    get_const_function__SquirtleMove_SendGoal_Event__response,  // get_const(index) function pointer
    get_function__SquirtleMove_SendGoal_Event__response,  // get(index) function pointer
    fetch_function__SquirtleMove_SendGoal_Event__response,  // fetch(index, &value) function pointer
    assign_function__SquirtleMove_SendGoal_Event__response,  // assign(index, value) function pointer
    resize_function__SquirtleMove_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_SendGoal_Event_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event),
  false,  // has_any_key_member_
  SquirtleMove_SendGoal_Event_message_member_array,  // message members
  SquirtleMove_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_SendGoal_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_SendGoal_Event)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SquirtleMove_SendGoal_service_members = {
  "squirtlebot_interfaces::action",  // service namespace
  "SquirtleMove_SendGoal",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t SquirtleMove_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_SendGoal_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<squirtlebot_interfaces::action::SquirtleMove_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<squirtlebot_interfaces::action::SquirtleMove_SendGoal>,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::squirtlebot_interfaces::action::SquirtleMove_SendGoal_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_GetResult_Request(_init);
}

void SquirtleMove_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request *>(message_memory);
  typed_message->~SquirtleMove_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_GetResult_Request_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_GetResult_Request),
  false,  // has_any_key_member_
  SquirtleMove_GetResult_Request_message_member_array,  // message members
  SquirtleMove_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_GetResult_Request)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_GetResult_Response(_init);
}

void SquirtleMove_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response *>(message_memory);
  typed_message->~SquirtleMove_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_Result>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_GetResult_Response_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_GetResult_Response),
  false,  // has_any_key_member_
  SquirtleMove_GetResult_Response_message_member_array,  // message members
  SquirtleMove_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_GetResult_Response)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_GetResult_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_GetResult_Event(_init);
}

void SquirtleMove_GetResult_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event *>(message_memory);
  typed_message->~SquirtleMove_GetResult_Event();
}

size_t size_function__SquirtleMove_GetResult_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SquirtleMove_GetResult_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__SquirtleMove_GetResult_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__SquirtleMove_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const squirtlebot_interfaces::action::SquirtleMove_GetResult_Request *>(
    get_const_function__SquirtleMove_GetResult_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request *>(untyped_value);
  value = item;
}

void assign_function__SquirtleMove_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request *>(
    get_function__SquirtleMove_GetResult_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const squirtlebot_interfaces::action::SquirtleMove_GetResult_Request *>(untyped_value);
  item = value;
}

void resize_function__SquirtleMove_GetResult_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SquirtleMove_GetResult_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SquirtleMove_GetResult_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__SquirtleMove_GetResult_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__SquirtleMove_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const squirtlebot_interfaces::action::SquirtleMove_GetResult_Response *>(
    get_const_function__SquirtleMove_GetResult_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response *>(untyped_value);
  value = item;
}

void assign_function__SquirtleMove_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response *>(
    get_function__SquirtleMove_GetResult_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const squirtlebot_interfaces::action::SquirtleMove_GetResult_Response *>(untyped_value);
  item = value;
}

void resize_function__SquirtleMove_GetResult_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_GetResult_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_GetResult_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__SquirtleMove_GetResult_Event__request,  // size() function pointer
    get_const_function__SquirtleMove_GetResult_Event__request,  // get_const(index) function pointer
    get_function__SquirtleMove_GetResult_Event__request,  // get(index) function pointer
    fetch_function__SquirtleMove_GetResult_Event__request,  // fetch(index, &value) function pointer
    assign_function__SquirtleMove_GetResult_Event__request,  // assign(index, value) function pointer
    resize_function__SquirtleMove_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_GetResult_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__SquirtleMove_GetResult_Event__response,  // size() function pointer
    get_const_function__SquirtleMove_GetResult_Event__response,  // get_const(index) function pointer
    get_function__SquirtleMove_GetResult_Event__response,  // get(index) function pointer
    fetch_function__SquirtleMove_GetResult_Event__response,  // fetch(index, &value) function pointer
    assign_function__SquirtleMove_GetResult_Event__response,  // assign(index, value) function pointer
    resize_function__SquirtleMove_GetResult_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_GetResult_Event_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_GetResult_Event),
  false,  // has_any_key_member_
  SquirtleMove_GetResult_Event_message_member_array,  // message members
  SquirtleMove_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_GetResult_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_GetResult_Event)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SquirtleMove_GetResult_service_members = {
  "squirtlebot_interfaces::action",  // service namespace
  "SquirtleMove_GetResult",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t SquirtleMove_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_GetResult_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<squirtlebot_interfaces::action::SquirtleMove_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<squirtlebot_interfaces::action::SquirtleMove_GetResult>,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::squirtlebot_interfaces::action::SquirtleMove_GetResult_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__functions.h"
// already included above
// #include "squirtlebot_interfaces/action/detail/squirtle_move__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace squirtlebot_interfaces
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void SquirtleMove_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage(_init);
}

void SquirtleMove_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage *>(message_memory);
  typed_message->~SquirtleMove_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SquirtleMove_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_Feedback>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SquirtleMove_FeedbackMessage_message_members = {
  "squirtlebot_interfaces::action",  // message namespace
  "SquirtleMove_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage),
  false,  // has_any_key_member_
  SquirtleMove_FeedbackMessage_message_member_array,  // message members
  SquirtleMove_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  SquirtleMove_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SquirtleMove_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SquirtleMove_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__get_type_hash,
  &squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__get_type_description,
  &squirtlebot_interfaces__action__SquirtleMove_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace squirtlebot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::action::SquirtleMove_FeedbackMessage>()
{
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, squirtlebot_interfaces, action, SquirtleMove_FeedbackMessage)() {
  return &::squirtlebot_interfaces::action::rosidl_typesupport_introspection_cpp::SquirtleMove_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
