// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from img_msgs:msg/H26XFrame.idl
// generated code does not contain a copyright notice

#ifndef IMG_MSGS__MSG__DETAIL__H26_X_FRAME__TRAITS_HPP_
#define IMG_MSGS__MSG__DETAIL__H26_X_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "img_msgs/msg/detail/h26_x_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dts'
// Member 'pts'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace img_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const H26XFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: encoding
  {
    if (msg.encoding.size() == 0) {
      out << "encoding: []";
    } else {
      out << "encoding: [";
      size_t pending_items = msg.encoding.size();
      for (auto item : msg.encoding) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: dts
  {
    out << "dts: ";
    to_flow_style_yaml(msg.dts, out);
    out << ", ";
  }

  // member: pts
  {
    out << "pts: ";
    to_flow_style_yaml(msg.pts, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const H26XFrame & msg,
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

  // member: encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.encoding.size() == 0) {
      out << "encoding: []\n";
    } else {
      out << "encoding:\n";
      for (auto item : msg.encoding) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: dts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dts:\n";
    to_block_style_yaml(msg.dts, out, indentation + 2);
  }

  // member: pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pts:\n";
    to_block_style_yaml(msg.pts, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const H26XFrame & msg, bool use_flow_style = false)
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

}  // namespace img_msgs

namespace rosidl_generator_traits
{

[[deprecated("use img_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const img_msgs::msg::H26XFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  img_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use img_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const img_msgs::msg::H26XFrame & msg)
{
  return img_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<img_msgs::msg::H26XFrame>()
{
  return "img_msgs::msg::H26XFrame";
}

template<>
inline const char * name<img_msgs::msg::H26XFrame>()
{
  return "img_msgs/msg/H26XFrame";
}

template<>
struct has_fixed_size<img_msgs::msg::H26XFrame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<img_msgs::msg::H26XFrame>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<img_msgs::msg::H26XFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMG_MSGS__MSG__DETAIL__H26_X_FRAME__TRAITS_HPP_
