// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from squirtlebot_interfaces:msg/CancelSquirtleMove.idl
// generated code does not contain a copyright notice

#include "squirtlebot_interfaces/msg/detail/cancel_squirtle_move__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_squirtlebot_interfaces
const rosidl_type_hash_t *
squirtlebot_interfaces__msg__CancelSquirtleMove__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0xb2, 0x10, 0x62, 0xe9, 0xd0, 0xea, 0x62,
      0x03, 0x10, 0xe0, 0xf3, 0x97, 0xa2, 0x6e, 0xe4,
      0x32, 0xed, 0xc7, 0x21, 0x87, 0xc5, 0x80, 0x13,
      0x88, 0x5c, 0x88, 0xab, 0xbf, 0xbe, 0x69, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char squirtlebot_interfaces__msg__CancelSquirtleMove__TYPE_NAME[] = "squirtlebot_interfaces/msg/CancelSquirtleMove";

// Define type names, field names, and default values
static char squirtlebot_interfaces__msg__CancelSquirtleMove__FIELD_NAME__cancel_move[] = "cancel_move";

static rosidl_runtime_c__type_description__Field squirtlebot_interfaces__msg__CancelSquirtleMove__FIELDS[] = {
  {
    {squirtlebot_interfaces__msg__CancelSquirtleMove__FIELD_NAME__cancel_move, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
squirtlebot_interfaces__msg__CancelSquirtleMove__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {squirtlebot_interfaces__msg__CancelSquirtleMove__TYPE_NAME, 45, 45},
      {squirtlebot_interfaces__msg__CancelSquirtleMove__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool cancel_move #true to cancel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
squirtlebot_interfaces__msg__CancelSquirtleMove__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {squirtlebot_interfaces__msg__CancelSquirtleMove__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
squirtlebot_interfaces__msg__CancelSquirtleMove__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *squirtlebot_interfaces__msg__CancelSquirtleMove__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
