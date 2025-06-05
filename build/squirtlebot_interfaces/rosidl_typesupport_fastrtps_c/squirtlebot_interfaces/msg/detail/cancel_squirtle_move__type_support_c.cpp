// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from squirtlebot_interfaces:msg/CancelSquirtleMove.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "squirtlebot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__struct.h"
#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CancelSquirtleMove__ros_msg_type = squirtlebot_interfaces__msg__CancelSquirtleMove;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
bool cdr_serialize_squirtlebot_interfaces__msg__CancelSquirtleMove(
  const squirtlebot_interfaces__msg__CancelSquirtleMove * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: cancel_move
  {
    cdr << (ros_message->cancel_move ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
bool cdr_deserialize_squirtlebot_interfaces__msg__CancelSquirtleMove(
  eprosima::fastcdr::Cdr & cdr,
  squirtlebot_interfaces__msg__CancelSquirtleMove * ros_message)
{
  // Field name: cancel_move
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cancel_move = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t get_serialized_size_squirtlebot_interfaces__msg__CancelSquirtleMove(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CancelSquirtleMove__ros_msg_type * ros_message = static_cast<const _CancelSquirtleMove__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: cancel_move
  {
    size_t item_size = sizeof(ros_message->cancel_move);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t max_serialized_size_squirtlebot_interfaces__msg__CancelSquirtleMove(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: cancel_move
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = squirtlebot_interfaces__msg__CancelSquirtleMove;
    is_plain =
      (
      offsetof(DataType, cancel_move) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
bool cdr_serialize_key_squirtlebot_interfaces__msg__CancelSquirtleMove(
  const squirtlebot_interfaces__msg__CancelSquirtleMove * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: cancel_move
  {
    cdr << (ros_message->cancel_move ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t get_serialized_size_key_squirtlebot_interfaces__msg__CancelSquirtleMove(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CancelSquirtleMove__ros_msg_type * ros_message = static_cast<const _CancelSquirtleMove__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: cancel_move
  {
    size_t item_size = sizeof(ros_message->cancel_move);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t max_serialized_size_key_squirtlebot_interfaces__msg__CancelSquirtleMove(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: cancel_move
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = squirtlebot_interfaces__msg__CancelSquirtleMove;
    is_plain =
      (
      offsetof(DataType, cancel_move) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CancelSquirtleMove__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const squirtlebot_interfaces__msg__CancelSquirtleMove * ros_message = static_cast<const squirtlebot_interfaces__msg__CancelSquirtleMove *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_squirtlebot_interfaces__msg__CancelSquirtleMove(ros_message, cdr);
}

static bool _CancelSquirtleMove__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  squirtlebot_interfaces__msg__CancelSquirtleMove * ros_message = static_cast<squirtlebot_interfaces__msg__CancelSquirtleMove *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_squirtlebot_interfaces__msg__CancelSquirtleMove(cdr, ros_message);
}

static uint32_t _CancelSquirtleMove__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_squirtlebot_interfaces__msg__CancelSquirtleMove(
      untyped_ros_message, 0));
}

static size_t _CancelSquirtleMove__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_squirtlebot_interfaces__msg__CancelSquirtleMove(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CancelSquirtleMove = {
  "squirtlebot_interfaces::msg",
  "CancelSquirtleMove",
  _CancelSquirtleMove__cdr_serialize,
  _CancelSquirtleMove__cdr_deserialize,
  _CancelSquirtleMove__get_serialized_size,
  _CancelSquirtleMove__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CancelSquirtleMove__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CancelSquirtleMove,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__msg__CancelSquirtleMove__get_type_hash,
  &squirtlebot_interfaces__msg__CancelSquirtleMove__get_type_description,
  &squirtlebot_interfaces__msg__CancelSquirtleMove__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, squirtlebot_interfaces, msg, CancelSquirtleMove)() {
  return &_CancelSquirtleMove__type_support;
}

#if defined(__cplusplus)
}
#endif
