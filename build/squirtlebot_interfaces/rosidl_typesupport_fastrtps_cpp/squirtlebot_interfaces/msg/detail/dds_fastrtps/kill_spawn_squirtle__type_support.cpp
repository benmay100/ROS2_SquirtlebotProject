// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__rosidl_typesupport_fastrtps_cpp.hpp"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__functions.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__struct.hpp"

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
  const squirtlebot_interfaces::msg::KillSpawnSquirtle & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: kill_or_spawn
  cdr << ros_message.kill_or_spawn;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  squirtlebot_interfaces::msg::KillSpawnSquirtle & ros_message)
{
  // Member: kill_or_spawn
  cdr >> ros_message.kill_or_spawn;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
get_serialized_size(
  const squirtlebot_interfaces::msg::KillSpawnSquirtle & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: kill_or_spawn
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.kill_or_spawn.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
max_serialized_size_KillSpawnSquirtle(
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

  // Member: kill_or_spawn
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = squirtlebot_interfaces::msg::KillSpawnSquirtle;
    is_plain =
      (
      offsetof(DataType, kill_or_spawn) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
cdr_serialize_key(
  const squirtlebot_interfaces::msg::KillSpawnSquirtle & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: kill_or_spawn
  cdr << ros_message.kill_or_spawn;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
get_serialized_size_key(
  const squirtlebot_interfaces::msg::KillSpawnSquirtle & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: kill_or_spawn
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.kill_or_spawn.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_squirtlebot_interfaces
max_serialized_size_key_KillSpawnSquirtle(
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

  // Member: kill_or_spawn
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = squirtlebot_interfaces::msg::KillSpawnSquirtle;
    is_plain =
      (
      offsetof(DataType, kill_or_spawn) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _KillSpawnSquirtle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const squirtlebot_interfaces::msg::KillSpawnSquirtle *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KillSpawnSquirtle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<squirtlebot_interfaces::msg::KillSpawnSquirtle *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KillSpawnSquirtle__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const squirtlebot_interfaces::msg::KillSpawnSquirtle *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KillSpawnSquirtle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KillSpawnSquirtle(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KillSpawnSquirtle__callbacks = {
  "squirtlebot_interfaces::msg",
  "KillSpawnSquirtle",
  _KillSpawnSquirtle__cdr_serialize,
  _KillSpawnSquirtle__cdr_deserialize,
  _KillSpawnSquirtle__get_serialized_size,
  _KillSpawnSquirtle__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _KillSpawnSquirtle__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KillSpawnSquirtle__callbacks,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_hash,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace squirtlebot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_squirtlebot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<squirtlebot_interfaces::msg::KillSpawnSquirtle>()
{
  return &squirtlebot_interfaces::msg::typesupport_fastrtps_cpp::_KillSpawnSquirtle__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, squirtlebot_interfaces, msg, KillSpawnSquirtle)() {
  return &squirtlebot_interfaces::msg::typesupport_fastrtps_cpp::_KillSpawnSquirtle__handle;
}

#ifdef __cplusplus
}
#endif
