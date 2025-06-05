// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from squirtlebot_interfaces:msg/KillSpawnSquirtle.idl
// generated code does not contain a copyright notice

#include "squirtlebot_interfaces/msg/detail/kill_spawn_squirtle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_squirtlebot_interfaces
const rosidl_type_hash_t *
squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0x6d, 0x1f, 0xab, 0x56, 0x8c, 0x28, 0x98,
      0xb5, 0xb8, 0x4d, 0x2c, 0x52, 0xec, 0x74, 0x7c,
      0x0b, 0xda, 0x56, 0x18, 0xf7, 0x10, 0x14, 0x5b,
      0xc3, 0x66, 0x6c, 0x1e, 0x7c, 0x2b, 0xa8, 0xd0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char squirtlebot_interfaces__msg__KillSpawnSquirtle__TYPE_NAME[] = "squirtlebot_interfaces/msg/KillSpawnSquirtle";

// Define type names, field names, and default values
static char squirtlebot_interfaces__msg__KillSpawnSquirtle__FIELD_NAME__kill_or_spawn[] = "kill_or_spawn";

static rosidl_runtime_c__type_description__Field squirtlebot_interfaces__msg__KillSpawnSquirtle__FIELDS[] = {
  {
    {squirtlebot_interfaces__msg__KillSpawnSquirtle__FIELD_NAME__kill_or_spawn, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {squirtlebot_interfaces__msg__KillSpawnSquirtle__TYPE_NAME, 44, 44},
      {squirtlebot_interfaces__msg__KillSpawnSquirtle__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string kill_or_spawn    #Allowed ---> \"kill\" \"spawn\" \"none\"";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
squirtlebot_interfaces__msg__KillSpawnSquirtle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {squirtlebot_interfaces__msg__KillSpawnSquirtle__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 59, 59},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
squirtlebot_interfaces__msg__KillSpawnSquirtle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *squirtlebot_interfaces__msg__KillSpawnSquirtle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
