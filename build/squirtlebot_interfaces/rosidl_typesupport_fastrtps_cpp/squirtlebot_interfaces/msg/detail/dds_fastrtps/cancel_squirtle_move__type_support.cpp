// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from squirtlebot_interfaces:msg/CancelSquirtleMove.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__rosidl_typesupport_fastrtps_cpp.hpp"
#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__functions.h"
#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace squirtlebot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
cdr_serialize(
  const squirtlebot_interfaces::msg::CancelSquirtleMove & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cancel_move
  cdr << (ros_message.cancel_move ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  squirtlebot_interfaces::msg::CancelSquirtleMove & ros_message)
{
  // Member: cancel_move
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cancel_move = tmp ? true : false;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
get_serialized_size(
  const squirtlebot_interfaces::msg::CancelSquirtleMove & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cancel_move
  {
    size_t item_size = sizeof(ros_message.cancel_move);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
max_serialized_size_CancelSquirtleMove(
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

  // Member: cancel_move
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
    using DataType = squirtlebot_interfaces::msg::CancelSquirtleMove;
    is_plain =
      (
      offsetof(DataType, cancel_move) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
cdr_serialize_key(
  const squirtlebot_interfaces::msg::CancelSquirtleMove & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cancel_move
  cdr << (ros_message.cancel_move ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
get_serialized_size_key(
  const squirtlebot_interfaces::msg::CancelSquirtleMove & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cancel_move
  {
    size_t item_size = sizeof(ros_message.cancel_move);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
max_serialized_size_key_CancelSquirtleMove(
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

  // Member: cancel_move
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
    using DataType = squirtlebot_interfaces::msg::CancelSquirtleMove;
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
  auto typed_message =
    static_cast<const squirtlebot_interfaces::msg::CancelSquirtleMove *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CancelSquirtleMove__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<squirtlebot_interfaces::msg::CancelSquirtleMove *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CancelSquirtleMove__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const squirtlebot_interfaces::msg::CancelSquirtleMove *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CancelSquirtleMove__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CancelSquirtleMove(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CancelSquirtleMove__callbacks = {
  "squirtlebot_interfaces::msg",
  "CancelSquirtleMove",
  _CancelSquirtleMove__cdr_serialize,
  _CancelSquirtleMove__cdr_deserialize,
  _CancelSquirtleMove__get_serialized_size,
  _CancelSquirtleMove__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CancelSquirtleMove__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CancelSquirtleMove__callbacks,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__msg__CancelSquirtleMove__get_type_hash,
  &squirtlebot_interfaces__msg__CancelSquirtleMove__get_type_description,
  &squirtlebot_interfaces__msg__CancelSquirtleMove__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace squirtlebot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_squirtlebot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::msg::CancelSquirtleMove>()
{
  return &squirtlebot_interfaces::msg::typesupport_fastrtps_cpp::_CancelSquirtleMove__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, squirtlebot_interfaces, msg, CancelSquirtleMove)() {
  return &squirtlebot_interfaces::msg::typesupport_fastrtps_cpp::_CancelSquirtleMove__handle;
}

#ifdef __cplusplus
}
#endif
