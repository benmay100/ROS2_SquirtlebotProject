// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from squirtlebot_interfaces:msg/ActiveSquirtleStats.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "squirtlebot_interfaces/msg/detail/active_squirtle_stats__struct.h"
#include "squirtlebot_interfaces/msg/detail/active_squirtle_stats__type_support.h"
#include "squirtlebot_interfaces/msg/detail/active_squirtle_stats__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace squirtlebot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ActiveSquirtleStats_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActiveSquirtleStats_type_support_ids_t;

static const _ActiveSquirtleStats_type_support_ids_t _ActiveSquirtleStats_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ActiveSquirtleStats_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActiveSquirtleStats_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActiveSquirtleStats_type_support_symbol_names_t _ActiveSquirtleStats_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, squirtlebot_interfaces, msg, ActiveSquirtleStats)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, squirtlebot_interfaces, msg, ActiveSquirtleStats)),
  }
};

typedef struct _ActiveSquirtleStats_type_support_data_t
{
  void * data[2];
} _ActiveSquirtleStats_type_support_data_t;

static _ActiveSquirtleStats_type_support_data_t _ActiveSquirtleStats_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActiveSquirtleStats_message_typesupport_map = {
  2,
  "squirtlebot_interfaces",
  &_ActiveSquirtleStats_message_typesupport_ids.typesupport_identifier[0],
  &_ActiveSquirtleStats_message_typesupport_symbol_names.symbol_name[0],
  &_ActiveSquirtleStats_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActiveSquirtleStats_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActiveSquirtleStats_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &squirtlebot_interfaces__msg__ActiveSquirtleStats__get_type_hash,
  &squirtlebot_interfaces__msg__ActiveSquirtleStats__get_type_description,
  &squirtlebot_interfaces__msg__ActiveSquirtleStats__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace squirtlebot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, squirtlebot_interfaces, msg, ActiveSquirtleStats)() {
  return &::squirtlebot_interfaces::msg::rosidl_typesupport_c::ActiveSquirtleStats_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
