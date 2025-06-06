// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tesse_msgs:srv/SceneRequestService.idl
// generated code does not contain a copyright notice

#ifndef TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__TRAITS_HPP_
#define TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tesse_msgs/srv/detail/scene_request_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tesse_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SceneRequestService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SceneRequestService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SceneRequestService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tesse_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesse_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesse_msgs::srv::SceneRequestService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesse_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesse_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tesse_msgs::srv::SceneRequestService_Request & msg)
{
  return tesse_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tesse_msgs::srv::SceneRequestService_Request>()
{
  return "tesse_msgs::srv::SceneRequestService_Request";
}

template<>
inline const char * name<tesse_msgs::srv::SceneRequestService_Request>()
{
  return "tesse_msgs/srv/SceneRequestService_Request";
}

template<>
struct has_fixed_size<tesse_msgs::srv::SceneRequestService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesse_msgs::srv::SceneRequestService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesse_msgs::srv::SceneRequestService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tesse_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SceneRequestService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SceneRequestService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SceneRequestService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tesse_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tesse_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tesse_msgs::srv::SceneRequestService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tesse_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tesse_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tesse_msgs::srv::SceneRequestService_Response & msg)
{
  return tesse_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tesse_msgs::srv::SceneRequestService_Response>()
{
  return "tesse_msgs::srv::SceneRequestService_Response";
}

template<>
inline const char * name<tesse_msgs::srv::SceneRequestService_Response>()
{
  return "tesse_msgs/srv/SceneRequestService_Response";
}

template<>
struct has_fixed_size<tesse_msgs::srv::SceneRequestService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tesse_msgs::srv::SceneRequestService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tesse_msgs::srv::SceneRequestService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tesse_msgs::srv::SceneRequestService>()
{
  return "tesse_msgs::srv::SceneRequestService";
}

template<>
inline const char * name<tesse_msgs::srv::SceneRequestService>()
{
  return "tesse_msgs/srv/SceneRequestService";
}

template<>
struct has_fixed_size<tesse_msgs::srv::SceneRequestService>
  : std::integral_constant<
    bool,
    has_fixed_size<tesse_msgs::srv::SceneRequestService_Request>::value &&
    has_fixed_size<tesse_msgs::srv::SceneRequestService_Response>::value
  >
{
};

template<>
struct has_bounded_size<tesse_msgs::srv::SceneRequestService>
  : std::integral_constant<
    bool,
    has_bounded_size<tesse_msgs::srv::SceneRequestService_Request>::value &&
    has_bounded_size<tesse_msgs::srv::SceneRequestService_Response>::value
  >
{
};

template<>
struct is_service<tesse_msgs::srv::SceneRequestService>
  : std::true_type
{
};

template<>
struct is_service_request<tesse_msgs::srv::SceneRequestService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tesse_msgs::srv::SceneRequestService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TESSE_MSGS__SRV__DETAIL__SCENE_REQUEST_SERVICE__TRAITS_HPP_
