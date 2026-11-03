// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from inspection_interfaces:msg/InspectionStatus.idl
// generated code does not contain a copyright notice

#ifndef INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__FUNCTIONS_H_
#define INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "inspection_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "inspection_interfaces/msg/detail/inspection_status__struct.h"

/// Initialize msg/InspectionStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * inspection_interfaces__msg__InspectionStatus
 * )) before or use
 * inspection_interfaces__msg__InspectionStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
bool
inspection_interfaces__msg__InspectionStatus__init(inspection_interfaces__msg__InspectionStatus * msg);

/// Finalize msg/InspectionStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
void
inspection_interfaces__msg__InspectionStatus__fini(inspection_interfaces__msg__InspectionStatus * msg);

/// Create msg/InspectionStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * inspection_interfaces__msg__InspectionStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
inspection_interfaces__msg__InspectionStatus *
inspection_interfaces__msg__InspectionStatus__create();

/// Destroy msg/InspectionStatus message.
/**
 * It calls
 * inspection_interfaces__msg__InspectionStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
void
inspection_interfaces__msg__InspectionStatus__destroy(inspection_interfaces__msg__InspectionStatus * msg);

/// Check for msg/InspectionStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
bool
inspection_interfaces__msg__InspectionStatus__are_equal(const inspection_interfaces__msg__InspectionStatus * lhs, const inspection_interfaces__msg__InspectionStatus * rhs);

/// Copy a msg/InspectionStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
bool
inspection_interfaces__msg__InspectionStatus__copy(
  const inspection_interfaces__msg__InspectionStatus * input,
  inspection_interfaces__msg__InspectionStatus * output);

/// Initialize array of msg/InspectionStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * inspection_interfaces__msg__InspectionStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
bool
inspection_interfaces__msg__InspectionStatus__Sequence__init(inspection_interfaces__msg__InspectionStatus__Sequence * array, size_t size);

/// Finalize array of msg/InspectionStatus messages.
/**
 * It calls
 * inspection_interfaces__msg__InspectionStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
void
inspection_interfaces__msg__InspectionStatus__Sequence__fini(inspection_interfaces__msg__InspectionStatus__Sequence * array);

/// Create array of msg/InspectionStatus messages.
/**
 * It allocates the memory for the array and calls
 * inspection_interfaces__msg__InspectionStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
inspection_interfaces__msg__InspectionStatus__Sequence *
inspection_interfaces__msg__InspectionStatus__Sequence__create(size_t size);

/// Destroy array of msg/InspectionStatus messages.
/**
 * It calls
 * inspection_interfaces__msg__InspectionStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
void
inspection_interfaces__msg__InspectionStatus__Sequence__destroy(inspection_interfaces__msg__InspectionStatus__Sequence * array);

/// Check for msg/InspectionStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
bool
inspection_interfaces__msg__InspectionStatus__Sequence__are_equal(const inspection_interfaces__msg__InspectionStatus__Sequence * lhs, const inspection_interfaces__msg__InspectionStatus__Sequence * rhs);

/// Copy an array of msg/InspectionStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_inspection_interfaces
bool
inspection_interfaces__msg__InspectionStatus__Sequence__copy(
  const inspection_interfaces__msg__InspectionStatus__Sequence * input,
  inspection_interfaces__msg__InspectionStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INSPECTION_INTERFACES__MSG__DETAIL__INSPECTION_STATUS__FUNCTIONS_H_
