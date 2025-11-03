// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from armor_interfaces:msg/ArmorDetection.idl
// generated code does not contain a copyright notice

#ifndef ARMOR_INTERFACES__MSG__DETAIL__ARMOR_DETECTION__BUILDER_HPP_
#define ARMOR_INTERFACES__MSG__DETAIL__ARMOR_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "armor_interfaces/msg/detail/armor_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace armor_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArmorDetection_header
{
public:
  explicit Init_ArmorDetection_header(::armor_interfaces::msg::ArmorDetection & msg)
  : msg_(msg)
  {}
  ::armor_interfaces::msg::ArmorDetection header(::armor_interfaces::msg::ArmorDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::armor_interfaces::msg::ArmorDetection msg_;
};

class Init_ArmorDetection_yaw
{
public:
  explicit Init_ArmorDetection_yaw(::armor_interfaces::msg::ArmorDetection & msg)
  : msg_(msg)
  {}
  Init_ArmorDetection_header yaw(::armor_interfaces::msg::ArmorDetection::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_ArmorDetection_header(msg_);
  }

private:
  ::armor_interfaces::msg::ArmorDetection msg_;
};

class Init_ArmorDetection_pitch
{
public:
  explicit Init_ArmorDetection_pitch(::armor_interfaces::msg::ArmorDetection & msg)
  : msg_(msg)
  {}
  Init_ArmorDetection_yaw pitch(::armor_interfaces::msg::ArmorDetection::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_ArmorDetection_yaw(msg_);
  }

private:
  ::armor_interfaces::msg::ArmorDetection msg_;
};

class Init_ArmorDetection_roll
{
public:
  Init_ArmorDetection_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmorDetection_pitch roll(::armor_interfaces::msg::ArmorDetection::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ArmorDetection_pitch(msg_);
  }

private:
  ::armor_interfaces::msg::ArmorDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::armor_interfaces::msg::ArmorDetection>()
{
  return armor_interfaces::msg::builder::Init_ArmorDetection_roll();
}

}  // namespace armor_interfaces

#endif  // ARMOR_INTERFACES__MSG__DETAIL__ARMOR_DETECTION__BUILDER_HPP_
