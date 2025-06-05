// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from squirtlebot_interfaces:msg/ActiveSquirtleStats.idl
// generated code does not contain a copyright notice

#include "squirtlebot_interfaces/msg/detail/active_squirtle_stats__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_squirtlebot_interfaces
const rosidl_type_hash_t *
squirtlebot_interfaces__msg__ActiveSquirtleStats__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0xb8, 0x79, 0xd3, 0x91, 0xb8, 0xba, 0xb0,
      0xf8, 0x0d, 0xcf, 0x6e, 0x13, 0xcf, 0x33, 0x36,
      0xe6, 0x6d, 0x9f, 0x38, 0x3b, 0xf2, 0x8a, 0xca,
      0x1e, 0x03, 0xc2, 0x21, 0x5c, 0xf4, 0x46, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char squirtlebot_interfaces__msg__ActiveSquirtleStats__TYPE_NAME[] = "squirtlebot_interfaces/msg/ActiveSquirtleStats";

// Define type names, field names, and default values
static char squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELD_NAME__name[] = "name";
static char squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELD_NAME__x[] = "x";
static char squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELD_NAME__y[] = "y";
static char squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELDS[] = {
  {
    {squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
squirtlebot_interfaces__msg__ActiveSquirtleStats__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {squirtlebot_interfaces__msg__ActiveSquirtleStats__TYPE_NAME, 46, 46},
      {squirtlebot_interfaces__msg__ActiveSquirtleStats__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float32 x\n"
  "float32 y\n"
  "float32 theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
squirtlebot_interfaces__msg__ActiveSquirtleStats__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {squirtlebot_interfaces__msg__ActiveSquirtleStats__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
squirtlebot_interfaces__msg__ActiveSquirtleStats__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *squirtlebot_interfaces__msg__ActiveSquirtleStats__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
