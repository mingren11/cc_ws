// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hbm_img_msgs:msg/HbmH26XFrame.idl
// generated code does not contain a copyright notice

#ifndef HBM_IMG_MSGS__MSG__DETAIL__HBM_H26_X_FRAME__TRAITS_HPP_
#define HBM_IMG_MSGS__MSG__DETAIL__HBM_H26_X_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hbm_img_msgs/msg/detail/hbm_h26_x_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dts'
// Member 'pts'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace hbm_img_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HbmH26XFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
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

  // member: data_size
  {
    out << "data_size: ";
    rosidl_generator_traits::value_to_yaml(msg.data_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HbmH26XFrame & msg,
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

  // member: data_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_size: ";
    rosidl_generator_traits::value_to_yaml(msg.data_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HbmH26XFrame & msg, bool use_flow_style = false)
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

}  // namespace hbm_img_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hbm_img_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hbm_img_msgs::msg::HbmH26XFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  hbm_img_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hbm_img_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hbm_img_msgs::msg::HbmH26XFrame & msg)
{
  return hbm_img_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hbm_img_msgs::msg::HbmH26XFrame>()
{
  return "hbm_img_msgs::msg::HbmH26XFrame";
}

template<>
inline const char * name<hbm_img_msgs::msg::HbmH26XFrame>()
{
  return "hbm_img_msgs/msg/HbmH26XFrame";
}

template<>
struct has_fixed_size<hbm_img_msgs::msg::HbmH26XFrame>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hbm_img_msgs::msg::HbmH26XFrame>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<hbm_img_msgs::msg::HbmH26XFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HBM_IMG_MSGS__MSG__DETAIL__HBM_H26_X_FRAME__TRAITS_HPP_
