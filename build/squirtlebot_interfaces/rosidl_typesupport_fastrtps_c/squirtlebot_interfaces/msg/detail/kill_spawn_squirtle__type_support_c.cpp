// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "squirtlebot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__struct.h"
#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__functions.h"
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

#include "rosidl_runtime_c/string.h"  // kill_or_spawn
#include "rosidl_runtime_c/string_functions.h"  // kill_or_spawn

// forward declare type support functions


using _KillSpawnSquirtle__ros_msg_type = squirtlebot_interfaces__msg__KillSpawnSquirtle;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
bool cdr_serialize_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  const squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: kill_or_spawn
  {
    const rosidl_runtime_c__String * str = &ros_message->kill_or_spawn;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
bool cdr_deserialize_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  eprosima::fastcdr::Cdr & cdr,
  squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message)
{
  // Field name: kill_or_spawn
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->kill_or_spawn.data) {
      rosidl_runtime_c__String__init(&ros_message->kill_or_spawn);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->kill_or_spawn,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'kill_or_spawn'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t get_serialized_size_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KillSpawnSquirtle__ros_msg_type * ros_message = static_cast<const _KillSpawnSquirtle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: kill_or_spawn
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->kill_or_spawn.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t max_serialized_size_squirtlebot_interfaces__msg__KillSpawnSquirtle(
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

  // Field name: kill_or_spawn
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
    using DataType = squirtlebot_interfaces__msg__KillSpawnSquirtle;
    is_plain =
      (
      offsetof(DataType, kill_or_spawn) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
bool cdr_serialize_key_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  const squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: kill_or_spawn
  {
    const rosidl_runtime_c__String * str = &ros_message->kill_or_spawn;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t get_serialized_size_key_squirtlebot_interfaces__msg__KillSpawnSquirtle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KillSpawnSquirtle__ros_msg_type * ros_message = static_cast<const _KillSpawnSquirtle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: kill_or_spawn
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->kill_or_spawn.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_squirtlebot_interfaces
size_t max_serialized_size_key_squirtlebot_interfaces__msg__KillSpawnSquirtle(
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
  // Field name: kill_or_spawn
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
    using DataType = squirtlebot_interfaces__msg__KillSpawnSquirtle;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message = static_cast<const squirtlebot_interfaces__msg__KillSpawnSquirtle *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_squirtlebot_interfaces__msg__KillSpawnSquirtle(ros_message, cdr);
}

static bool _KillSpawnSquirtle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  squirtlebot_interfaces__msg__KillSpawnSquirtle * ros_message = static_cast<squirtlebot_interfaces__msg__KillSpawnSquirtle *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_squirtlebot_interfaces__msg__KillSpawnSquirtle(cdr, ros_message);
}

static uint32_t _KillSpawnSquirtle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_squirtlebot_interfaces__msg__KillSpawnSquirtle(
      untyped_ros_message, 0));
}

static size_t _KillSpawnSquirtle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_squirtlebot_interfaces__msg__KillSpawnSquirtle(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_KillSpawnSquirtle = {
  "squirtlebot_interfaces::msg",
  "KillSpawnSquirtle",
  _KillSpawnSquirtle__cdr_serialize,
  _KillSpawnSquirtle__cdr_deserialize,
  _KillSpawnSquirtle__get_serialized_size,
  _KillSpawnSquirtle__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _KillSpawnSquirtle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KillSpawnSquirtle,
  get_message_typesupport_handle_function,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_hash,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description,
  &squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, squirtlebot_interfaces, msg, KillSpawnSquirtle)() {
  return &_KillSpawnSquirtle__type_support;
}

#if defined(__cplusplus)
}
#endif
