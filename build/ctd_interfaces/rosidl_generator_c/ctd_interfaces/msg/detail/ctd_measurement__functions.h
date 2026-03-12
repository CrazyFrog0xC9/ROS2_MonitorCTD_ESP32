// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ctd_interfaces:msg/CtdMeasurement.idl
// generated code does not contain a copyright notice

#ifndef CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__FUNCTIONS_H_
#define CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ctd_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ctd_interfaces/msg/detail/ctd_measurement__struct.h"

/// Initialize msg/CtdMeasurement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ctd_interfaces__msg__CtdMeasurement
 * )) before or use
 * ctd_interfaces__msg__CtdMeasurement__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
bool
ctd_interfaces__msg__CtdMeasurement__init(ctd_interfaces__msg__CtdMeasurement * msg);

/// Finalize msg/CtdMeasurement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
void
ctd_interfaces__msg__CtdMeasurement__fini(ctd_interfaces__msg__CtdMeasurement * msg);

/// Create msg/CtdMeasurement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ctd_interfaces__msg__CtdMeasurement__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
ctd_interfaces__msg__CtdMeasurement *
ctd_interfaces__msg__CtdMeasurement__create();

/// Destroy msg/CtdMeasurement message.
/**
 * It calls
 * ctd_interfaces__msg__CtdMeasurement__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
void
ctd_interfaces__msg__CtdMeasurement__destroy(ctd_interfaces__msg__CtdMeasurement * msg);

/// Check for msg/CtdMeasurement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
bool
ctd_interfaces__msg__CtdMeasurement__are_equal(const ctd_interfaces__msg__CtdMeasurement * lhs, const ctd_interfaces__msg__CtdMeasurement * rhs);

/// Copy a msg/CtdMeasurement message.
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
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
bool
ctd_interfaces__msg__CtdMeasurement__copy(
  const ctd_interfaces__msg__CtdMeasurement * input,
  ctd_interfaces__msg__CtdMeasurement * output);

/// Initialize array of msg/CtdMeasurement messages.
/**
 * It allocates the memory for the number of elements and calls
 * ctd_interfaces__msg__CtdMeasurement__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
bool
ctd_interfaces__msg__CtdMeasurement__Sequence__init(ctd_interfaces__msg__CtdMeasurement__Sequence * array, size_t size);

/// Finalize array of msg/CtdMeasurement messages.
/**
 * It calls
 * ctd_interfaces__msg__CtdMeasurement__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
void
ctd_interfaces__msg__CtdMeasurement__Sequence__fini(ctd_interfaces__msg__CtdMeasurement__Sequence * array);

/// Create array of msg/CtdMeasurement messages.
/**
 * It allocates the memory for the array and calls
 * ctd_interfaces__msg__CtdMeasurement__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
ctd_interfaces__msg__CtdMeasurement__Sequence *
ctd_interfaces__msg__CtdMeasurement__Sequence__create(size_t size);

/// Destroy array of msg/CtdMeasurement messages.
/**
 * It calls
 * ctd_interfaces__msg__CtdMeasurement__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
void
ctd_interfaces__msg__CtdMeasurement__Sequence__destroy(ctd_interfaces__msg__CtdMeasurement__Sequence * array);

/// Check for msg/CtdMeasurement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
bool
ctd_interfaces__msg__CtdMeasurement__Sequence__are_equal(const ctd_interfaces__msg__CtdMeasurement__Sequence * lhs, const ctd_interfaces__msg__CtdMeasurement__Sequence * rhs);

/// Copy an array of msg/CtdMeasurement messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ctd_interfaces
bool
ctd_interfaces__msg__CtdMeasurement__Sequence__copy(
  const ctd_interfaces__msg__CtdMeasurement__Sequence * input,
  ctd_interfaces__msg__CtdMeasurement__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CTD_INTERFACES__MSG__DETAIL__CTD_MEASUREMENT__FUNCTIONS_H_
