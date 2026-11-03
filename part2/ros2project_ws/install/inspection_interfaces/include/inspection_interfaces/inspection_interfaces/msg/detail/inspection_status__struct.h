// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from inspection_interfaces:msg/InspectionStatus.idl
// generated code does not contain a copyright notice

#ifndef INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__STRUCT_H_
#define INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/InspectionStatus in the package inspection_interfaces.
typedef struct inspection_interfaces__msg__InspectionStatus
{
  rosidl_runtime_c__String name;
  double location_x;
  double location_y;
  double v;
  int32_t battery;
  rosidl_runtime_c__String status;
} inspection_interfaces__msg__InspectionStatus;

// Struct for a sequence of inspection_interfaces__msg__InspectionStatus.
typedef struct inspection_interfaces__msg__InspectionStatus__Sequence
{
  inspection_interfaces__msg__InspectionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} inspection_interfaces__msg__InspectionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__STRUCT_H_
