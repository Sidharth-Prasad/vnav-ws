// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mav_state_machine_msgs:srv/RunTaskService.idl
// generated code does not contain a copyright notice

#ifndef MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__STRUCT_H_
#define MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RunTaskService in the package mav_state_machine_msgs.
typedef struct mav_state_machine_msgs__srv__RunTaskService_Request
{
  rosidl_runtime_c__String task_name;
  /// True to start task, False to stop/abort
  bool start;
} mav_state_machine_msgs__srv__RunTaskService_Request;

// Struct for a sequence of mav_state_machine_msgs__srv__RunTaskService_Request.
typedef struct mav_state_machine_msgs__srv__RunTaskService_Request__Sequence
{
  mav_state_machine_msgs__srv__RunTaskService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mav_state_machine_msgs__srv__RunTaskService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RunTaskService in the package mav_state_machine_msgs.
typedef struct mav_state_machine_msgs__srv__RunTaskService_Response
{
  bool success;
} mav_state_machine_msgs__srv__RunTaskService_Response;

// Struct for a sequence of mav_state_machine_msgs__srv__RunTaskService_Response.
typedef struct mav_state_machine_msgs__srv__RunTaskService_Response__Sequence
{
  mav_state_machine_msgs__srv__RunTaskService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mav_state_machine_msgs__srv__RunTaskService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAV_STATE_MACHINE_MSGS__SRV__DETAIL__RUN_TASK_SERVICE__STRUCT_H_
