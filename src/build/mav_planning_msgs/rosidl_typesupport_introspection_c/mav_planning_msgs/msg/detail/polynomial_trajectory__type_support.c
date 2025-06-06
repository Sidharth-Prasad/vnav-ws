// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mav_planning_msgs:msg/PolynomialTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mav_planning_msgs/msg/detail/polynomial_trajectory__rosidl_typesupport_introspection_c.h"
#include "mav_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mav_planning_msgs/msg/detail/polynomial_trajectory__functions.h"
#include "mav_planning_msgs/msg/detail/polynomial_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `segments`
#include "mav_planning_msgs/msg/polynomial_segment.h"
// Member `segments`
#include "mav_planning_msgs/msg/detail/polynomial_segment__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mav_planning_msgs__msg__PolynomialTrajectory__init(message_memory);
}

void mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_fini_function(void * message_memory)
{
  mav_planning_msgs__msg__PolynomialTrajectory__fini(message_memory);
}

size_t mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__size_function__PolynomialTrajectory__segments(
  const void * untyped_member)
{
  const mav_planning_msgs__msg__PolynomialSegment__Sequence * member =
    (const mav_planning_msgs__msg__PolynomialSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__get_const_function__PolynomialTrajectory__segments(
  const void * untyped_member, size_t index)
{
  const mav_planning_msgs__msg__PolynomialSegment__Sequence * member =
    (const mav_planning_msgs__msg__PolynomialSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__get_function__PolynomialTrajectory__segments(
  void * untyped_member, size_t index)
{
  mav_planning_msgs__msg__PolynomialSegment__Sequence * member =
    (mav_planning_msgs__msg__PolynomialSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__fetch_function__PolynomialTrajectory__segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mav_planning_msgs__msg__PolynomialSegment * item =
    ((const mav_planning_msgs__msg__PolynomialSegment *)
    mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__get_const_function__PolynomialTrajectory__segments(untyped_member, index));
  mav_planning_msgs__msg__PolynomialSegment * value =
    (mav_planning_msgs__msg__PolynomialSegment *)(untyped_value);
  *value = *item;
}

void mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__assign_function__PolynomialTrajectory__segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mav_planning_msgs__msg__PolynomialSegment * item =
    ((mav_planning_msgs__msg__PolynomialSegment *)
    mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__get_function__PolynomialTrajectory__segments(untyped_member, index));
  const mav_planning_msgs__msg__PolynomialSegment * value =
    (const mav_planning_msgs__msg__PolynomialSegment *)(untyped_value);
  *item = *value;
}

bool mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__resize_function__PolynomialTrajectory__segments(
  void * untyped_member, size_t size)
{
  mav_planning_msgs__msg__PolynomialSegment__Sequence * member =
    (mav_planning_msgs__msg__PolynomialSegment__Sequence *)(untyped_member);
  mav_planning_msgs__msg__PolynomialSegment__Sequence__fini(member);
  return mav_planning_msgs__msg__PolynomialSegment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_planning_msgs__msg__PolynomialTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mav_planning_msgs__msg__PolynomialTrajectory, segments),  // bytes offset in struct
    NULL,  // default value
    mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__size_function__PolynomialTrajectory__segments,  // size() function pointer
    mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__get_const_function__PolynomialTrajectory__segments,  // get_const(index) function pointer
    mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__get_function__PolynomialTrajectory__segments,  // get(index) function pointer
    mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__fetch_function__PolynomialTrajectory__segments,  // fetch(index, &value) function pointer
    mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__assign_function__PolynomialTrajectory__segments,  // assign(index, value) function pointer
    mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__resize_function__PolynomialTrajectory__segments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_members = {
  "mav_planning_msgs__msg",  // message namespace
  "PolynomialTrajectory",  // message name
  2,  // number of fields
  sizeof(mav_planning_msgs__msg__PolynomialTrajectory),
  mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_member_array,  // message members
  mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_type_support_handle = {
  0,
  &mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mav_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_planning_msgs, msg, PolynomialTrajectory)() {
  mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mav_planning_msgs, msg, PolynomialSegment)();
  if (!mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_type_support_handle.typesupport_identifier) {
    mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mav_planning_msgs__msg__PolynomialTrajectory__rosidl_typesupport_introspection_c__PolynomialTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
