// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from inspection_interfaces:msg/InspectionStatus.idl
// generated code does not contain a copyright notice

#ifndef INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__BUILDER_HPP_
#define INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "inspection_interfaces/msg/detail/inspection_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace inspection_interfaces
{

namespace msg
{

namespace builder
{

class Init_InspectionStatus_status
{
public:
  explicit Init_InspectionStatus_status(::inspection_interfaces::msg::InspectionStatus & msg)
  : msg_(msg)
  {}
  ::inspection_interfaces::msg::InspectionStatus status(::inspection_interfaces::msg::InspectionStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::inspection_interfaces::msg::InspectionStatus msg_;
};

class Init_InspectionStatus_battery
{
public:
  explicit Init_InspectionStatus_battery(::inspection_interfaces::msg::InspectionStatus & msg)
  : msg_(msg)
  {}
  Init_InspectionStatus_status battery(::inspection_interfaces::msg::InspectionStatus::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_InspectionStatus_status(msg_);
  }

private:
  ::inspection_interfaces::msg::InspectionStatus msg_;
};

class Init_InspectionStatus_v
{
public:
  explicit Init_InspectionStatus_v(::inspection_interfaces::msg::InspectionStatus & msg)
  : msg_(msg)
  {}
  Init_InspectionStatus_battery v(::inspection_interfaces::msg::InspectionStatus::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_InspectionStatus_battery(msg_);
  }

private:
  ::inspection_interfaces::msg::InspectionStatus msg_;
};

class Init_InspectionStatus_location_y
{
public:
  explicit Init_InspectionStatus_location_y(::inspection_interfaces::msg::InspectionStatus & msg)
  : msg_(msg)
  {}
  Init_InspectionStatus_v location_y(::inspection_interfaces::msg::InspectionStatus::_location_y_type arg)
  {
    msg_.location_y = std::move(arg);
    return Init_InspectionStatus_v(msg_);
  }

private:
  ::inspection_interfaces::msg::InspectionStatus msg_;
};

class Init_InspectionStatus_location_x
{
public:
  explicit Init_InspectionStatus_location_x(::inspection_interfaces::msg::InspectionStatus & msg)
  : msg_(msg)
  {}
  Init_InspectionStatus_location_y location_x(::inspection_interfaces::msg::InspectionStatus::_location_x_type arg)
  {
    msg_.location_x = std::move(arg);
    return Init_InspectionStatus_location_y(msg_);
  }

private:
  ::inspection_interfaces::msg::InspectionStatus msg_;
};

class Init_InspectionStatus_name
{
public:
  Init_InspectionStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InspectionStatus_location_x name(::inspection_interfaces::msg::InspectionStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_InspectionStatus_location_x(msg_);
  }

private:
  ::inspection_interfaces::msg::InspectionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::inspection_interfaces::msg::InspectionStatus>()
{
  return inspection_interfaces::msg::builder::Init_InspectionStatus_name();
}

}  // namespace inspection_interfaces

#endif  // INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__BUILDER_HPP_
