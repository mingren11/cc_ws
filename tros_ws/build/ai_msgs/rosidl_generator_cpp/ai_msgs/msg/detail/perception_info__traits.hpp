// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ai_msgs:msg/PerceptionInfo.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__PERCEPTION_INFO__TRAITS_HPP_
#define AI_MSGS__MSG__DETAIL__PERCEPTION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ai_msgs/msg/detail/perception_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: class_names
  {
    if (msg.class_names.size() == 0) {
      out << "class_names: []";
    } else {
      out << "class_names: [";
      size_t pending_items = msg.class_names.size();
      for (auto item : msg.class_names) {
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
  const PerceptionInfo & msg,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: class_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.class_names.size() == 0) {
      out << "class_names: []\n";
    } else {
      out << "class_names:\n";
      for (auto item : msg.class_names) {
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

inline std::string to_yaml(const PerceptionInfo & msg, bool use_flow_style = false)
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
  const ai_msgs::msg::PerceptionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ai_msgs::msg::PerceptionInfo & msg)
{
  return ai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ai_msgs::msg::PerceptionInfo>()
{
  return "ai_msgs::msg::PerceptionInfo";
}

template<>
inline const char * name<ai_msgs::msg::PerceptionInfo>()
{
  return "ai_msgs/msg/PerceptionInfo";
}

template<>
struct has_fixed_size<ai_msgs::msg::PerceptionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ai_msgs::msg::PerceptionInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ai_msgs::msg::PerceptionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AI_MSGS__MSG__DETAIL__PERCEPTION_INFO__TRAITS_HPP_
