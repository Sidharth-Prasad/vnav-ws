// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mav_state_machine_msgs:srv/RunTaskService.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__FUNCTIONS_H_
#define MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mav_state_machine_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mav_state_machine_msgs/srv/detail/run_task_service__struct.h"

/// Initialize srv/RunTaskService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mav_state_machine_msgs__srv__RunTaskService_Request
 * )) before or use
 * mav_state_machine_msgs__srv__RunTaskService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Request__init(mav_state_machine_msgs__srv__RunTaskService_Request * msg);

/// Finalize srv/RunTaskService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__srv__RunTaskService_Request__fini(mav_state_machine_msgs__srv__RunTaskService_Request * msg);

/// Create srv/RunTaskService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mav_state_machine_msgs__srv__RunTaskService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
mav_state_machine_msgs__srv__RunTaskService_Request *
mav_state_machine_msgs__srv__RunTaskService_Request__create();

/// Destroy srv/RunTaskService message.
/**
 * It calls
 * mav_state_machine_msgs__srv__RunTaskService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__srv__RunTaskService_Request__destroy(mav_state_machine_msgs__srv__RunTaskService_Request * msg);

/// Check for srv/RunTaskService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Request__are_equal(const mav_state_machine_msgs__srv__RunTaskService_Request * lhs, const mav_state_machine_msgs__srv__RunTaskService_Request * rhs);

/// Copy a srv/RunTaskService message.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Request__copy(
  const mav_state_machine_msgs__srv__RunTaskService_Request * input,
  mav_state_machine_msgs__srv__RunTaskService_Request * output);

/// Initialize array of srv/RunTaskService messages.
/**
 * It allocates the memory for the number of elements and calls
 * mav_state_machine_msgs__srv__RunTaskService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__init(mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * array, size_t size);

/// Finalize array of srv/RunTaskService messages.
/**
 * It calls
 * mav_state_machine_msgs__srv__RunTaskService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__fini(mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * array);

/// Create array of srv/RunTaskService messages.
/**
 * It allocates the memory for the array and calls
 * mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence *
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__create(size_t size);

/// Destroy array of srv/RunTaskService messages.
/**
 * It calls
 * mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__destroy(mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * array);

/// Check for srv/RunTaskService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__are_equal(const mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * lhs, const mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * rhs);

/// Copy an array of srv/RunTaskService messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Request__Sequence__copy(
  const mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * input,
  mav_state_machine_msgs__srv__RunTaskService_Request__Sequence * output);

/// Initialize srv/RunTaskService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mav_state_machine_msgs__srv__RunTaskService_Response
 * )) before or use
 * mav_state_machine_msgs__srv__RunTaskService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Response__init(mav_state_machine_msgs__srv__RunTaskService_Response * msg);

/// Finalize srv/RunTaskService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__srv__RunTaskService_Response__fini(mav_state_machine_msgs__srv__RunTaskService_Response * msg);

/// Create srv/RunTaskService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mav_state_machine_msgs__srv__RunTaskService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
mav_state_machine_msgs__srv__RunTaskService_Response *
mav_state_machine_msgs__srv__RunTaskService_Response__create();

/// Destroy srv/RunTaskService message.
/**
 * It calls
 * mav_state_machine_msgs__srv__RunTaskService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__srv__RunTaskService_Response__destroy(mav_state_machine_msgs__srv__RunTaskService_Response * msg);

/// Check for srv/RunTaskService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Response__are_equal(const mav_state_machine_msgs__srv__RunTaskService_Response * lhs, const mav_state_machine_msgs__srv__RunTaskService_Response * rhs);

/// Copy a srv/RunTaskService message.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Response__copy(
  const mav_state_machine_msgs__srv__RunTaskService_Response * input,
  mav_state_machine_msgs__srv__RunTaskService_Response * output);

/// Initialize array of srv/RunTaskService messages.
/**
 * It allocates the memory for the number of elements and calls
 * mav_state_machine_msgs__srv__RunTaskService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__init(mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * array, size_t size);

/// Finalize array of srv/RunTaskService messages.
/**
 * It calls
 * mav_state_machine_msgs__srv__RunTaskService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__fini(mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * array);

/// Create array of srv/RunTaskService messages.
/**
 * It allocates the memory for the array and calls
 * mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence *
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__create(size_t size);

/// Destroy array of srv/RunTaskService messages.
/**
 * It calls
 * mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
void
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__destroy(mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * array);

/// Check for srv/RunTaskService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__are_equal(const mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * lhs, const mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * rhs);

/// Copy an array of srv/RunTaskService messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mav_state_machine_msgs
bool
mav_state_machine_msgs__srv__RunTaskService_Response__Sequence__copy(
  const mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * input,
  mav_state_machine_msgs__srv__RunTaskService_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__FUNCTIONS_H_
