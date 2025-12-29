// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from audio_msg:msg/SmartAudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__TRAITS_HPP_
#define AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "audio_msg/msg/detail/smart_audio_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'frame_type'
#include "audio_msg/msg/detail/smart_audio_frame_type__traits.hpp"
// Member 'event_type'
#include "audio_msg/msg/detail/audio_event_type__traits.hpp"

namespace audio_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const SmartAudioData & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_type
  {
    out << "frame_type: ";
    to_flow_style_yaml(msg.frame_type, out);
    out << ", ";
  }

  // member: event_type
  {
    out << "event_type: ";
    to_flow_style_yaml(msg.event_type, out);
    out << ", ";
  }

  // member: cmd_word
  {
    out << "cmd_word: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_word, out);
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

  // member: doa_theta
  {
    out << "doa_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.doa_theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SmartAudioData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_type:\n";
    to_block_style_yaml(msg.frame_type, out, indentation + 2);
  }

  // member: event_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_type:\n";
    to_block_style_yaml(msg.event_type, out, indentation + 2);
  }

  // member: cmd_word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_word: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_word, out);
    out << "\n";
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

  // member: doa_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doa_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.doa_theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SmartAudioData & msg, bool use_flow_style = false)
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
  const audio_msg::msg::SmartAudioData & msg,
  std::ostream & out, size_t indentation = 0)
{
  audio_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use audio_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const audio_msg::msg::SmartAudioData & msg)
{
  return audio_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<audio_msg::msg::SmartAudioData>()
{
  return "audio_msg::msg::SmartAudioData";
}

template<>
inline const char * name<audio_msg::msg::SmartAudioData>()
{
  return "audio_msg/msg/SmartAudioData";
}

template<>
struct has_fixed_size<audio_msg::msg::SmartAudioData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<audio_msg::msg::SmartAudioData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<audio_msg::msg::SmartAudioData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__TRAITS_HPP_
