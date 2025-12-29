// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ai_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_
#define AI_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ai_msgs/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rois'
#include "ai_msgs/msg/detail/roi__traits.hpp"
// Member 'attributes'
#include "ai_msgs/msg/detail/attribute__traits.hpp"
// Member 'points'
#include "ai_msgs/msg/detail/point__traits.hpp"
// Member 'captures'
#include "ai_msgs/msg/detail/capture__traits.hpp"

namespace ai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Target & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: track_id
  {
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << ", ";
  }

  // member: rois
  {
    if (msg.rois.size() == 0) {
      out << "rois: []";
    } else {
      out << "rois: [";
      size_t pending_items = msg.rois.size();
      for (auto item : msg.rois) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: attributes
  {
    if (msg.attributes.size() == 0) {
      out << "attributes: []";
    } else {
      out << "attributes: [";
      size_t pending_items = msg.attributes.size();
      for (auto item : msg.attributes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: captures
  {
    if (msg.captures.size() == 0) {
      out << "captures: []";
    } else {
      out << "captures: [";
      size_t pending_items = msg.captures.size();
      for (auto item : msg.captures) {
        to_flow_style_yaml(item, out);
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
  const Target & msg,
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

  // member: track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << "\n";
  }

  // member: rois
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rois.size() == 0) {
      out << "rois: []\n";
    } else {
      out << "rois:\n";
      for (auto item : msg.rois) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: attributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attributes.size() == 0) {
      out << "attributes: []\n";
    } else {
      out << "attributes:\n";
      for (auto item : msg.attributes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: captures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.captures.size() == 0) {
      out << "captures: []\n";
    } else {
      out << "captures:\n";
      for (auto item : msg.captures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Target & msg, bool use_flow_style = false)
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
  const ai_msgs::msg::Target & msg,
  std::ostream & out, size_t indentation = 0)
{
  ai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ai_msgs::msg::Target & msg)
{
  return ai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ai_msgs::msg::Target>()
{
  return "ai_msgs::msg::Target";
}

template<>
inline const char * name<ai_msgs::msg::Target>()
{
  return "ai_msgs/msg/Target";
}

template<>
struct has_fixed_size<ai_msgs::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ai_msgs::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ai_msgs::msg::Target>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AI_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_
