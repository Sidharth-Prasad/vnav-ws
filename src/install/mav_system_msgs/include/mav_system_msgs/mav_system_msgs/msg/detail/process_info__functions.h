// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mav_system_msgs:msg/ProcessInfo.idl
// generated code does not contain a copyright notice

#ifndef MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__FUNCTIONS_H_
#define MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mav_system_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mav_system_msgs/msg/detail/process_info__struct.h"

/// Initialize msg/ProcessInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mav_system_msgs__msg__ProcessInfo
 * )) before or use
 * mav_system_msgs__msg__ProcessInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
bool
mav_system_msgs__msg__ProcessInfo__init(mav_system_msgs__msg__ProcessInfo * msg);

/// Finalize msg/ProcessInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
void
mav_system_msgs__msg__ProcessInfo__fini(mav_system_msgs__msg__ProcessInfo * msg);

/// Create msg/ProcessInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mav_system_msgs__msg__ProcessInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
mav_system_msgs__msg__ProcessInfo *
mav_system_msgs__msg__ProcessInfo__create();

/// Destroy msg/ProcessInfo message.
/**
 * It calls
 * mav_system_msgs__msg__ProcessInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
void
mav_system_msgs__msg__ProcessInfo__destroy(mav_system_msgs__msg__ProcessInfo * msg);

/// Check for msg/ProcessInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
bool
mav_system_msgs__msg__ProcessInfo__are_equal(const mav_system_msgs__msg__ProcessInfo * lhs, const mav_system_msgs__msg__ProcessInfo * rhs);

/// Copy a msg/ProcessInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
bool
mav_system_msgs__msg__ProcessInfo__copy(
  const mav_system_msgs__msg__ProcessInfo * input,
  mav_system_msgs__msg__ProcessInfo * output);

/// Initialize array of msg/ProcessInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * mav_system_msgs__msg__ProcessInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
bool
mav_system_msgs__msg__ProcessInfo__Sequence__init(mav_system_msgs__msg__ProcessInfo__Sequence * array, size_t size);

/// Finalize array of msg/ProcessInfo messages.
/**
 * It calls
 * mav_system_msgs__msg__ProcessInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
void
mav_system_msgs__msg__ProcessInfo__Sequence__fini(mav_system_msgs__msg__ProcessInfo__Sequence * array);

/// Create array of msg/ProcessInfo messages.
/**
 * It allocates the memory for the array and calls
 * mav_system_msgs__msg__ProcessInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
mav_system_msgs__msg__ProcessInfo__Sequence *
mav_system_msgs__msg__ProcessInfo__Sequence__create(size_t size);

/// Destroy array of msg/ProcessInfo messages.
/**
 * It calls
 * mav_system_msgs__msg__ProcessInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
void
mav_system_msgs__msg__ProcessInfo__Sequence__destroy(mav_system_msgs__msg__ProcessInfo__Sequence * array);

/// Check for msg/ProcessInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
bool
mav_system_msgs__msg__ProcessInfo__Sequence__are_equal(const mav_system_msgs__msg__ProcessInfo__Sequence * lhs, const mav_system_msgs__msg__ProcessInfo__Sequence * rhs);

/// Copy an array of msg/ProcessInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_system_msgs
bool
mav_system_msgs__msg__ProcessInfo__Sequence__copy(
  const mav_system_msgs__msg__ProcessInfo__Sequence * input,
  mav_system_msgs__msg__ProcessInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAV_SYSTEM_MSGS__MSG__DETAIL__PROCESS_INFO__FUNCTIONS_H_
