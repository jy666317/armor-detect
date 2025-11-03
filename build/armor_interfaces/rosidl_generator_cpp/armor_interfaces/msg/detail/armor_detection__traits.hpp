// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from armor_interfaces:msg/ArmorDetection.idl
// generated code does not contain a copyright notice

#ifndef ARMOR_INTERFACES__MSG__DETAIL__ARMOR_DETECTION__TRAITS_HPP_
#define ARMOR_INTERFACES__MSG__DETAIL__ARMOR_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "armor_interfaces/msg/detail/armor_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace armor_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmorDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmorDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmorDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace armor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use armor_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const armor_interfaces::msg::ArmorDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  armor_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use armor_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const armor_interfaces::msg::ArmorDetection & msg)
{
  return armor_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<armor_interfaces::msg::ArmorDetection>()
{
  return "armor_interfaces::msg::ArmorDetection";
}

template<>
inline const char * name<armor_interfaces::msg::ArmorDetection>()
{
  return "armor_interfaces/msg/ArmorDetection";
}

template<>
struct has_fixed_size<armor_interfaces::msg::ArmorDetection>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<armor_interfaces::msg::ArmorDetection>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<armor_interfaces::msg::ArmorDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARMOR_INTERFACES__MSG__DETAIL__ARMOR_DETECTION__TRAITS_HPP_
