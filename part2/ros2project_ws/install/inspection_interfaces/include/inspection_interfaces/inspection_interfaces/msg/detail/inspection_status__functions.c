// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from inspection_interfaces:msg/InspectionStatus.idl
// generated code does not contain a copyright notice
#include "inspection_interfaces/msg/detail/inspection_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
inspection_interfaces__msg__InspectionStatus__init(inspection_interfaces__msg__InspectionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    inspection_interfaces__msg__InspectionStatus__fini(msg);
    return false;
  }
  // location_x
  // location_y
  // v
  // battery
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    inspection_interfaces__msg__InspectionStatus__fini(msg);
    return false;
  }
  return true;
}

void
inspection_interfaces__msg__InspectionStatus__fini(inspection_interfaces__msg__InspectionStatus * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // location_x
  // location_y
  // v
  // battery
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
inspection_interfaces__msg__InspectionStatus__are_equal(const inspection_interfaces__msg__InspectionStatus * lhs, const inspection_interfaces__msg__InspectionStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // location_x
  if (lhs->location_x != rhs->location_x) {
    return false;
  }
  // location_y
  if (lhs->location_y != rhs->location_y) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
inspection_interfaces__msg__InspectionStatus__copy(
  const inspection_interfaces__msg__InspectionStatus * input,
  inspection_interfaces__msg__InspectionStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // location_x
  output->location_x = input->location_x;
  // location_y
  output->location_y = input->location_y;
  // v
  output->v = input->v;
  // battery
  output->battery = input->battery;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

inspection_interfaces__msg__InspectionStatus *
inspection_interfaces__msg__InspectionStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inspection_interfaces__msg__InspectionStatus * msg = (inspection_interfaces__msg__InspectionStatus *)allocator.allocate(sizeof(inspection_interfaces__msg__InspectionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(inspection_interfaces__msg__InspectionStatus));
  bool success = inspection_interfaces__msg__InspectionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
inspection_interfaces__msg__InspectionStatus__destroy(inspection_interfaces__msg__InspectionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    inspection_interfaces__msg__InspectionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
inspection_interfaces__msg__InspectionStatus__Sequence__init(inspection_interfaces__msg__InspectionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inspection_interfaces__msg__InspectionStatus * data = NULL;

  if (size) {
    data = (inspection_interfaces__msg__InspectionStatus *)allocator.zero_allocate(size, sizeof(inspection_interfaces__msg__InspectionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = inspection_interfaces__msg__InspectionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        inspection_interfaces__msg__InspectionStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
inspection_interfaces__msg__InspectionStatus__Sequence__fini(inspection_interfaces__msg__InspectionStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      inspection_interfaces__msg__InspectionStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

inspection_interfaces__msg__InspectionStatus__Sequence *
inspection_interfaces__msg__InspectionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  inspection_interfaces__msg__InspectionStatus__Sequence * array = (inspection_interfaces__msg__InspectionStatus__Sequence *)allocator.allocate(sizeof(inspection_interfaces__msg__InspectionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = inspection_interfaces__msg__InspectionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
inspection_interfaces__msg__InspectionStatus__Sequence__destroy(inspection_interfaces__msg__InspectionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    inspection_interfaces__msg__InspectionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
inspection_interfaces__msg__InspectionStatus__Sequence__are_equal(const inspection_interfaces__msg__InspectionStatus__Sequence * lhs, const inspection_interfaces__msg__InspectionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!inspection_interfaces__msg__InspectionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
inspection_interfaces__msg__InspectionStatus__Sequence__copy(
  const inspection_interfaces__msg__InspectionStatus__Sequence * input,
  inspection_interfaces__msg__InspectionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(inspection_interfaces__msg__InspectionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    inspection_interfaces__msg__InspectionStatus * data =
      (inspection_interfaces__msg__InspectionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!inspection_interfaces__msg__InspectionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          inspection_interfaces__msg__InspectionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!inspection_interfaces__msg__InspectionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
