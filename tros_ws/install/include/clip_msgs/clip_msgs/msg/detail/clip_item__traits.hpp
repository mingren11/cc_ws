// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clip_msgs:msg/ClipItem.idl
// generated code does not contain a copyright notice

#ifndef CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__TRAITS_HPP_
#define CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clip_msgs/msg/detail/clip_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clip_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClipItem & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: url
  {
    out << "url: ";
    rosidl_generator_traits::value_to_yaml(msg.url, out);
    out << ", ";
  }

  // member: feature
  {
    if (msg.feature.size() == 0) {
      out << "feature: []";
    } else {
      out << "feature: [";
      size_t pending_items = msg.feature.size();
      for (auto item : msg.feature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: extra
  {
    if (msg.extra.size() == 0) {
      out << "extra: []";
    } else {
      out << "extra: [";
      size_t pending_items = msg.extra.size();
      for (auto item : msg.extra) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClipItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "url: ";
    rosidl_generator_traits::value_to_yaml(msg.url, out);
    out << "\n";
  }

  // member: feature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature.size() == 0) {
      out << "feature: []\n";
    } else {
      out << "feature:\n";
      for (auto item : msg.feature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: extra
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extra.size() == 0) {
      out << "extra: []\n";
    } else {
      out << "extra:\n";
      for (auto item : msg.extra) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClipItem & msg, bool use_flow_style = false)
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

}  // namespace clip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clip_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clip_msgs::msg::ClipItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  clip_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clip_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clip_msgs::msg::ClipItem & msg)
{
  return clip_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clip_msgs::msg::ClipItem>()
{
  return "clip_msgs::msg::ClipItem";
}

template<>
inline const char * name<clip_msgs::msg::ClipItem>()
{
  return "clip_msgs/msg/ClipItem";
}

template<>
struct has_fixed_size<clip_msgs::msg::ClipItem>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clip_msgs::msg::ClipItem>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clip_msgs::msg::ClipItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__TRAITS_HPP_
