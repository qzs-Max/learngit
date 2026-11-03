// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from inspection_interfaces:msg/InspectionStatus.idl
// generated code does not contain a copyright notice

#ifndef INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__STRUCT_HPP_
#define INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__inspection_interfaces__msg__InspectionStatus __attribute__((deprecated))
#else
# define DEPRECATED__inspection_interfaces__msg__InspectionStatus __declspec(deprecated)
#endif

namespace inspection_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InspectionStatus_
{
  using Type = InspectionStatus_<ContainerAllocator>;

  explicit InspectionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->location_x = 0.0;
      this->location_y = 0.0;
      this->v = 0.0;
      this->battery = 0l;
      this->status = "";
    }
  }

  explicit InspectionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->location_x = 0.0;
      this->location_y = 0.0;
      this->v = 0.0;
      this->battery = 0l;
      this->status = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _location_x_type =
    double;
  _location_x_type location_x;
  using _location_y_type =
    double;
  _location_y_type location_y;
  using _v_type =
    double;
  _v_type v;
  using _battery_type =
    int32_t;
  _battery_type battery;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__location_x(
    const double & _arg)
  {
    this->location_x = _arg;
    return *this;
  }
  Type & set__location_y(
    const double & _arg)
  {
    this->location_y = _arg;
    return *this;
  }
  Type & set__v(
    const double & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__battery(
    const int32_t & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    inspection_interfaces::msg::InspectionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const inspection_interfaces::msg::InspectionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<inspection_interfaces::msg::InspectionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<inspection_interfaces::msg::InspectionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      inspection_interfaces::msg::InspectionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<inspection_interfaces::msg::InspectionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      inspection_interfaces::msg::InspectionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<inspection_interfaces::msg::InspectionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<inspection_interfaces::msg::InspectionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<inspection_interfaces::msg::InspectionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__inspection_interfaces__msg__InspectionStatus
    std::shared_ptr<inspection_interfaces::msg::InspectionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__inspection_interfaces__msg__InspectionStatus
    std::shared_ptr<inspection_interfaces::msg::InspectionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InspectionStatus_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->location_x != other.location_x) {
      return false;
    }
    if (this->location_y != other.location_y) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const InspectionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InspectionStatus_

// alias to use template instance with default allocator
using InspectionStatus =
  inspection_interfaces::msg::InspectionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace inspection_interfaces

#endif  // INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__STRUCT_HPP_
