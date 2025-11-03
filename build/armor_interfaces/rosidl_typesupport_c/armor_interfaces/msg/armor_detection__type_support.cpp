// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from armor_interfaces:msg/ArmorDetection.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "armor_interfaces/msg/detail/armor_detection__struct.h"
#include "armor_interfaces/msg/detail/armor_detection__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace armor_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ArmorDetection_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArmorDetection_type_support_ids_t;

static const _ArmorDetection_type_support_ids_t _ArmorDetection_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ArmorDetection_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArmorDetection_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArmorDetection_type_support_symbol_names_t _ArmorDetection_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armor_interfaces, msg, ArmorDetection)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armor_interfaces, msg, ArmorDetection)),
  }
};

typedef struct _ArmorDetection_type_support_data_t
{
  void * data[2];
} _ArmorDetection_type_support_data_t;

static _ArmorDetection_type_support_data_t _ArmorDetection_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArmorDetection_message_typesupport_map = {
  2,
  "armor_interfaces",
  &_ArmorDetection_message_typesupport_ids.typesupport_identifier[0],
  &_ArmorDetection_message_typesupport_symbol_names.symbol_name[0],
  &_ArmorDetection_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArmorDetection_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArmorDetection_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace armor_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armor_interfaces, msg, ArmorDetection)() {
  return &::armor_interfaces::msg::rosidl_typesupport_c::ArmorDetection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
