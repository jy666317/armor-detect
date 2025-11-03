// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from armor_interfaces:msg/ArmorDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "armor_interfaces/msg/detail/armor_detection__rosidl_typesupport_introspection_c.h"
#include "armor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "armor_interfaces/msg/detail/armor_detection__functions.h"
#include "armor_interfaces/msg/detail/armor_detection__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armor_interfaces__msg__ArmorDetection__init(message_memory);
}

void armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_fini_function(void * message_memory)
{
  armor_interfaces__msg__ArmorDetection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_message_member_array[4] = {
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armor_interfaces__msg__ArmorDetection, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armor_interfaces__msg__ArmorDetection, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armor_interfaces__msg__ArmorDetection, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armor_interfaces__msg__ArmorDetection, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_message_members = {
  "armor_interfaces__msg",  // message namespace
  "ArmorDetection",  // message name
  4,  // number of fields
  sizeof(armor_interfaces__msg__ArmorDetection),
  armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_message_member_array,  // message members
  armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_message_type_support_handle = {
  0,
  &armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armor_interfaces, msg, ArmorDetection)() {
  armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_message_type_support_handle.typesupport_identifier) {
    armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armor_interfaces__msg__ArmorDetection__rosidl_typesupport_introspection_c__ArmorDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
