// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from armor_interfaces:msg/ArmorDetection.idl
// generated code does not contain a copyright notice

#ifndef ARMOR_INTERFACES__MSG__DETAIL__ARMOR_DETECTION__STRUCT_H_
#define ARMOR_INTERFACES__MSG__DETAIL__ARMOR_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ArmorDetection in the package armor_interfaces.
typedef struct armor_interfaces__msg__ArmorDetection
{
  double roll;
  double pitch;
  double yaw;
  std_msgs__msg__Header header;
} armor_interfaces__msg__ArmorDetection;

// Struct for a sequence of armor_interfaces__msg__ArmorDetection.
typedef struct armor_interfaces__msg__ArmorDetection__Sequence
{
  armor_interfaces__msg__ArmorDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armor_interfaces__msg__ArmorDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMOR_INTERFACES__MSG__DETAIL__ARMOR_DETECTION__STRUCT_H_
