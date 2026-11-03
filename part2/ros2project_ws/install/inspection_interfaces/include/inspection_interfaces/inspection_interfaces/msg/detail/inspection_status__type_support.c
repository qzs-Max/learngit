// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from inspection_interfaces:msg/InspectionStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "inspection_interfaces/msg/detail/inspection_status__rosidl_typesupport_introspection_c.h"
#include "inspection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "inspection_interfaces/msg/detail/inspection_status__functions.h"
#include "inspection_interfaces/msg/detail/inspection_status__struct.h"


// Include directives for member types
// Member `name`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  inspection_interfaces__msg__InspectionStatus__init(message_memory);
}

void inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_fini_function(void * message_memory)
{
  inspection_interfaces__msg__InspectionStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_message_member_array[6] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inspection_interfaces__msg__InspectionStatus, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inspection_interfaces__msg__InspectionStatus, location_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inspection_interfaces__msg__InspectionStatus, location_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inspection_interfaces__msg__InspectionStatus, v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inspection_interfaces__msg__InspectionStatus, battery),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(inspection_interfaces__msg__InspectionStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_message_members = {
  "inspection_interfaces__msg",  // message namespace
  "InspectionStatus",  // message name
  6,  // number of fields
  sizeof(inspection_interfaces__msg__InspectionStatus),
  inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_message_member_array,  // message members
  inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_message_type_support_handle = {
  0,
  &inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_inspection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, inspection_interfaces, msg, InspectionStatus)() {
  if (!inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_message_type_support_handle.typesupport_identifier) {
    inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &inspection_interfaces__msg__InspectionStatus__rosidl_typesupport_introspection_c__InspectionStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
