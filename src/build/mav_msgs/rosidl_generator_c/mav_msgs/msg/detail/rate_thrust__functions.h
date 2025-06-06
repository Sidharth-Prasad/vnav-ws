// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mav_msgs:msg/RateThrust.idl
// generated code does not contain a copyright notice

#ifndef MAV_MSGS__MSG__DETAIL__RATE_THRUST__FUNCTIONS_H_
#define MAV_MSGS__MSG__DETAIL__RATE_THRUST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mav_msgs/msg/detail/rate_thrust__struct.h"

/// Initialize msg/RateThrust message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mav_msgs__msg__RateThrust
 * )) before or use
 * mav_msgs__msg__RateThrust__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
bool
mav_msgs__msg__RateThrust__init(mav_msgs__msg__RateThrust * msg);

/// Finalize msg/RateThrust message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
void
mav_msgs__msg__RateThrust__fini(mav_msgs__msg__RateThrust * msg);

/// Create msg/RateThrust message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mav_msgs__msg__RateThrust__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
mav_msgs__msg__RateThrust *
mav_msgs__msg__RateThrust__create();

/// Destroy msg/RateThrust message.
/**
 * It calls
 * mav_msgs__msg__RateThrust__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
void
mav_msgs__msg__RateThrust__destroy(mav_msgs__msg__RateThrust * msg);

/// Check for msg/RateThrust message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
bool
mav_msgs__msg__RateThrust__are_equal(const mav_msgs__msg__RateThrust * lhs, const mav_msgs__msg__RateThrust * rhs);

/// Copy a msg/RateThrust message.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
bool
mav_msgs__msg__RateThrust__copy(
  const mav_msgs__msg__RateThrust * input,
  mav_msgs__msg__RateThrust * output);

/// Initialize array of msg/RateThrust messages.
/**
 * It allocates the memory for the number of elements and calls
 * mav_msgs__msg__RateThrust__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
bool
mav_msgs__msg__RateThrust__Sequence__init(mav_msgs__msg__RateThrust__Sequence * array, size_t size);

/// Finalize array of msg/RateThrust messages.
/**
 * It calls
 * mav_msgs__msg__RateThrust__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
void
mav_msgs__msg__RateThrust__Sequence__fini(mav_msgs__msg__RateThrust__Sequence * array);

/// Create array of msg/RateThrust messages.
/**
 * It allocates the memory for the array and calls
 * mav_msgs__msg__RateThrust__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
mav_msgs__msg__RateThrust__Sequence *
mav_msgs__msg__RateThrust__Sequence__create(size_t size);

/// Destroy array of msg/RateThrust messages.
/**
 * It calls
 * mav_msgs__msg__RateThrust__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
void
mav_msgs__msg__RateThrust__Sequence__destroy(mav_msgs__msg__RateThrust__Sequence * array);

/// Check for msg/RateThrust message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
bool
mav_msgs__msg__RateThrust__Sequence__are_equal(const mav_msgs__msg__RateThrust__Sequence * lhs, const mav_msgs__msg__RateThrust__Sequence * rhs);

/// Copy an array of msg/RateThrust messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_msgs
bool
mav_msgs__msg__RateThrust__Sequence__copy(
  const mav_msgs__msg__RateThrust__Sequence * input,
  mav_msgs__msg__RateThrust__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAV_MSGS__MSG__DETAIL__RATE_THRUST__FUNCTIONS_H_
