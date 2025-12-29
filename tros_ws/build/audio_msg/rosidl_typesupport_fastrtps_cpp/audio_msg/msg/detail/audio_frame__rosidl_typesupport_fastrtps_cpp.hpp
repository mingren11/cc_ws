// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from audio_msg:msg/AudioFrame.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "audio_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "audio_msg/msg/detail/audio_frame__struct.hpp"

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

namespace audio_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audio_msg
cdr_serialize(
  const audio_msg::msg::AudioFrame & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audio_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  audio_msg::msg::AudioFrame & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audio_msg
get_serialized_size(
  const audio_msg::msg::AudioFrame & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audio_msg
max_serialized_size_AudioFrame(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace audio_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_audio_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, audio_msg, msg, AudioFrame)();

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
