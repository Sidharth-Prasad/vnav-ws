// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tesse_msgs:msg/CollisionStats.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tesse_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tesse_msgs/msg/detail/collision_stats__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace tesse_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesse_msgs
cdr_serialize(
  const tesse_msgs::msg::CollisionStats & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesse_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tesse_msgs::msg::CollisionStats & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesse_msgs
get_serialized_size(
  const tesse_msgs::msg::CollisionStats & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesse_msgs
max_serialized_size_CollisionStats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tesse_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tesse_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tesse_msgs, msg, CollisionStats)();

#ifdef __cplusplus
}
#endif

#endif  // TESSE_MSGS__MSG__DETAIL__COLLISION_STATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
