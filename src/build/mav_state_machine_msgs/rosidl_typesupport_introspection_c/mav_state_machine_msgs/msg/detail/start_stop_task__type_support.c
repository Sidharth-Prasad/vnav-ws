// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mav_state_machine_msgs:msg/StartStopTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mav_state_machine_msgs/msg/detail/start_stop_task__rosidl_typesupport_introspection_c.h"
#include "mav_state_machine_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mav_state_machine_msgs/msg/detail/start_stop_task__functions.h"
#include "mav_state_machine_msgs/msg/detail/start_stop_task__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `task_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mav_state_machine_msgs__msg__StartStopTask__init(message_memory);
}

void mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_fini_function(void * message_memory)
{
  mav_state_machine_msgs__msg__StartStopTask__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_state_machine_msgs__msg__StartStopTask, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_state_machine_msgs__msg__StartStopTask, task_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_state_machine_msgs__msg__StartStopTask, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_message_members = {
  "mav_state_machine_msgs__msg",  // message namespace
  "StartStopTask",  // message name
  3,  // number of fields
  sizeof(mav_state_machine_msgs__msg__StartStopTask),
  mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_message_member_array,  // message members
  mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_init_function,  // function to initialize message memory (memory has to be allocated)
  mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_message_type_support_handle = {
  0,
  &mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mav_state_machine_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_state_machine_msgs, msg, StartStopTask)() {
  mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_message_type_support_handle.typesupport_identifier) {
    mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mav_state_machine_msgs__msg__StartStopTask__rosidl_typesupport_introspection_c__StartStopTask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
