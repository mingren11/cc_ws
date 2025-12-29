// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ai_msgs:msg/Capture.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__CAPTURE__TRAITS_HPP_
#define AI_MSGS__MSG__DETAIL__CAPTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ai_msgs/msg/detail/capture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'db_result'
#include "ai_msgs/msg/detail/db_result__traits.hpp"

namespace ai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Capture & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: img
  {
    out << "img: ";
    to_flow_style_yaml(msg.img, out);
    out << ", ";
  }

  // member: features
  {
    if (msg.features.size() == 0) {
      out << "features: []";
    } else {
      out << "features: [";
      size_t pending_items = msg.features.size();
      for (auto item : msg.features) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: db_result
  {
    out << "db_result: ";
    to_flow_style_yaml(msg.db_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Capture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: img
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img:\n";
    to_block_style_yaml(msg.img, out, indentation + 2);
  }

  // member: features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.features.size() == 0) {
      out << "features: []\n";
    } else {
      out << "features:\n";
      for (auto item : msg.features) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: db_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "db_result:\n";
    to_block_style_yaml(msg.db_result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Capture & msg, bool use_flow_style = false)
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

}  // namespace ai_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ai_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ai_msgs::msg::Capture & msg,
  std::ostream & out, size_t indentation = 0)
{
  ai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ai_msgs::msg::Capture & msg)
{
  return ai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ai_msgs::msg::Capture>()
{
  return "ai_msgs::msg::Capture";
}

template<>
inline const char * name<ai_msgs::msg::Capture>()
{
  return "ai_msgs/msg/Capture";
}

template<>
struct has_fixed_size<ai_msgs::msg::Capture>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ai_msgs::msg::Capture>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ai_msgs::msg::Capture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AI_MSGS__MSG__DETAIL__CAPTURE__TRAITS_HPP_
