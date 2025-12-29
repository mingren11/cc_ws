// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_msg:msg/AudioFrameType.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME_TYPE__TRAITS_HPP_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_msg/msg/detail/audio_frame_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace audio_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AudioFrameType & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioFrameType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioFrameType & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace audio_msg

namespace rosidl_generator_traits
{

[[deprecated("use audio_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const audio_msg::msg::AudioFrameType & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_msg::msg::AudioFrameType & msg)
{
  return audio_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_msg::msg::AudioFrameType>()
{
  return "audio_msg::msg::AudioFrameType";
}

template<>
inline const char * name<audio_msg::msg::AudioFrameType>()
{
  return "audio_msg/msg/AudioFrameType";
}

template<>
struct has_fixed_size<audio_msg::msg::AudioFrameType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<audio_msg::msg::AudioFrameType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<audio_msg::msg::AudioFrameType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME_TYPE__TRAITS_HPP_
