// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from inspection_interfaces:msg/InspectionStatus.idl
// generated code does not contain a copyright notice

#ifndef INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__TRAITS_HPP_
#define INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "inspection_interfaces/msg/detail/inspection_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace inspection_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const InspectionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: location_x
  {
    out << "location_x: ";
    rosidl_generator_traits::value_to_yaml(msg.location_x, out);
    out << ", ";
  }

  // member: location_y
  {
    out << "location_y: ";
    rosidl_generator_traits::value_to_yaml(msg.location_y, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InspectionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: location_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location_x: ";
    rosidl_generator_traits::value_to_yaml(msg.location_x, out);
    out << "\n";
  }

  // member: location_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location_y: ";
    rosidl_generator_traits::value_to_yaml(msg.location_y, out);
    out << "\n";
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InspectionStatus & msg, bool use_flow_style = false)
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

}  // namespace inspection_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use inspection_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const inspection_interfaces::msg::InspectionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  inspection_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use inspection_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const inspection_interfaces::msg::InspectionStatus & msg)
{
  return inspection_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<inspection_interfaces::msg::InspectionStatus>()
{
  return "inspection_interfaces::msg::InspectionStatus";
}

template<>
inline const char * name<inspection_interfaces::msg::InspectionStatus>()
{
  return "inspection_interfaces/msg/InspectionStatus";
}

template<>
struct has_fixed_size<inspection_interfaces::msg::InspectionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<inspection_interfaces::msg::InspectionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<inspection_interfaces::msg::InspectionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__TRAITS_HPP_
