// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ai_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__POINT__TRAITS_HPP_
#define AI_MSGS__MSG__DETAIL__POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ai_msgs/msg/detail/point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point32__traits.hpp"

namespace ai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Point & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: point
  {
    if (msg.point.size() == 0) {
      out << "point: []";
    } else {
      out << "point: [";
      size_t pending_items = msg.point.size();
      for (auto item : msg.point) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confidence
  {
    if (msg.confidence.size() == 0) {
      out << "confidence: []";
    } else {
      out << "confidence: [";
      size_t pending_items = msg.confidence.size();
      for (auto item : msg.confidence) {
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
  const Point & msg,
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

  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.point.size() == 0) {
      out << "point: []\n";
    } else {
      out << "point:\n";
      for (auto item : msg.point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confidence.size() == 0) {
      out << "confidence: []\n";
    } else {
      out << "confidence:\n";
      for (auto item : msg.confidence) {
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

inline std::string to_yaml(const Point & msg, bool use_flow_style = false)
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
  const ai_msgs::msg::Point & msg,
  std::ostream & out, size_t indentation = 0)
{
  ai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ai_msgs::msg::Point & msg)
{
  return ai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ai_msgs::msg::Point>()
{
  return "ai_msgs::msg::Point";
}

template<>
inline const char * name<ai_msgs::msg::Point>()
{
  return "ai_msgs/msg/Point";
}

template<>
struct has_fixed_size<ai_msgs::msg::Point>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ai_msgs::msg::Point>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ai_msgs::msg::Point>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AI_MSGS__MSG__DETAIL__POINT__TRAITS_HPP_
