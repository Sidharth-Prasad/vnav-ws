// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mav_planning_msgs:srv/PolygonService.idl
// generated code does not contain a copyright notice
#include "mav_planning_msgs/srv/detail/polygon_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mav_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mav_planning_msgs/srv/detail/polygon_service__struct.h"
#include "mav_planning_msgs/srv/detail/polygon_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mav_planning_msgs/msg/detail/polygon_with_holes_stamped__functions.h"  // polygon

// forward declare type support functions
size_t get_serialized_size_mav_planning_msgs__msg__PolygonWithHolesStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mav_planning_msgs__msg__PolygonWithHolesStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mav_planning_msgs, msg, PolygonWithHolesStamped)();


using _PolygonService_Request__ros_msg_type = mav_planning_msgs__srv__PolygonService_Request;

static bool _PolygonService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PolygonService_Request__ros_msg_type * ros_message = static_cast<const _PolygonService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: polygon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mav_planning_msgs, msg, PolygonWithHolesStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->polygon, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PolygonService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PolygonService_Request__ros_msg_type * ros_message = static_cast<_PolygonService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: polygon
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mav_planning_msgs, msg, PolygonWithHolesStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->polygon))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mav_planning_msgs
size_t get_serialized_size_mav_planning_msgs__srv__PolygonService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PolygonService_Request__ros_msg_type * ros_message = static_cast<const _PolygonService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name polygon

  current_alignment += get_serialized_size_mav_planning_msgs__msg__PolygonWithHolesStamped(
    &(ros_message->polygon), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PolygonService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mav_planning_msgs__srv__PolygonService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mav_planning_msgs
size_t max_serialized_size_mav_planning_msgs__srv__PolygonService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: polygon
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mav_planning_msgs__msg__PolygonWithHolesStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mav_planning_msgs__srv__PolygonService_Request;
    is_plain =
      (
      offsetof(DataType, polygon) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PolygonService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mav_planning_msgs__srv__PolygonService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PolygonService_Request = {
  "mav_planning_msgs::srv",
  "PolygonService_Request",
  _PolygonService_Request__cdr_serialize,
  _PolygonService_Request__cdr_deserialize,
  _PolygonService_Request__get_serialized_size,
  _PolygonService_Request__max_serialized_size
};

static rosidl_message_type_support_t _PolygonService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PolygonService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mav_planning_msgs, srv, PolygonService_Request)() {
  return &_PolygonService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mav_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mav_planning_msgs/srv/detail/polygon_service__struct.h"
// already included above
// #include "mav_planning_msgs/srv/detail/polygon_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PolygonService_Response__ros_msg_type = mav_planning_msgs__srv__PolygonService_Response;

static bool _PolygonService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PolygonService_Response__ros_msg_type * ros_message = static_cast<const _PolygonService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _PolygonService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PolygonService_Response__ros_msg_type * ros_message = static_cast<_PolygonService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mav_planning_msgs
size_t get_serialized_size_mav_planning_msgs__srv__PolygonService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PolygonService_Response__ros_msg_type * ros_message = static_cast<const _PolygonService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PolygonService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mav_planning_msgs__srv__PolygonService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mav_planning_msgs
size_t max_serialized_size_mav_planning_msgs__srv__PolygonService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mav_planning_msgs__srv__PolygonService_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PolygonService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mav_planning_msgs__srv__PolygonService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PolygonService_Response = {
  "mav_planning_msgs::srv",
  "PolygonService_Response",
  _PolygonService_Response__cdr_serialize,
  _PolygonService_Response__cdr_deserialize,
  _PolygonService_Response__get_serialized_size,
  _PolygonService_Response__max_serialized_size
};

static rosidl_message_type_support_t _PolygonService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PolygonService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mav_planning_msgs, srv, PolygonService_Response)() {
  return &_PolygonService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mav_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mav_planning_msgs/srv/polygon_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PolygonService__callbacks = {
  "mav_planning_msgs::srv",
  "PolygonService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mav_planning_msgs, srv, PolygonService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mav_planning_msgs, srv, PolygonService_Response)(),
};

static rosidl_service_type_support_t PolygonService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PolygonService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mav_planning_msgs, srv, PolygonService)() {
  return &PolygonService__handle;
}

#if defined(__cplusplus)
}
#endif
