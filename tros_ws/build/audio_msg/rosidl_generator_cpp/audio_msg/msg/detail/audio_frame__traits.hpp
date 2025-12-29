// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_msg:msg/AudioFrame.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__TRAITS_HPP_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_msg/msg/detail/audio_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pts'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'frame_type'
#include "audio_msg/msg/detail/audio_frame_type__traits.hpp"
// Member 'smart_audio'
#include "audio_msg/msg/detail/smart_audio_data__traits.hpp"

namespace audio_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AudioFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: pts
  {
    out << "pts: ";
    to_flow_style_yaml(msg.pts, out);
    out << ", ";
  }

  // member: frame_type
  {
    out << "frame_type: ";
    to_flow_style_yaml(msg.frame_type, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: smart_audio
  {
    out << "smart_audio: ";
    to_flow_style_yaml(msg.smart_audio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pts:\n";
    to_block_style_yaml(msg.pts, out, indentation + 2);
  }

  // member: frame_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_type:\n";
    to_block_style_yaml(msg.frame_type, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: smart_audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smart_audio:\n";
    to_block_style_yaml(msg.smart_audio, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioFrame & msg, bool use_flow_style = false)
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
  const audio_msg::msg::AudioFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_msg::msg::AudioFrame & msg)
{
  return audio_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_msg::msg::AudioFrame>()
{
  return "audio_msg::msg::AudioFrame";
}

template<>
inline const char * name<audio_msg::msg::AudioFrame>()
{
  return "audio_msg/msg/AudioFrame";
}

template<>
struct has_fixed_size<audio_msg::msg::AudioFrame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_msg::msg::AudioFrame>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_msg::msg::AudioFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__TRAITS_HPP_
