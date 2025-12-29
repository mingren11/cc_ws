// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from img_msgs:msg/H26XFrame.idl
// generated code does not contain a copyright notice

#ifndef IMG_MSGS__MSG__DETAIL__H26_X_FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define IMG_MSGS__MSG__DETAIL__H26_X_FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "img_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "img_msgs/msg/detail/h26_x_frame__struct.hpp"

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

namespace img_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_msgs
cdr_serialize(
  const img_msgs::msg::H26XFrame & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  img_msgs::msg::H26XFrame & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_msgs
get_serialized_size(
  const img_msgs::msg::H26XFrame & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_msgs
max_serialized_size_H26XFrame(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace img_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, img_msgs, msg, H26XFrame)();

#ifdef __cplusplus
}
#endif

#endif  // IMG_MSGS__MSG__DETAIL__H26_X_FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
