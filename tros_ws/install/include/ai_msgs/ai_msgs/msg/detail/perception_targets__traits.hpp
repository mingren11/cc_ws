// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ai_msgs:msg/PerceptionTargets.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__PERCEPTION_TARGETS__TRAITS_HPP_
#define AI_MSGS__MSG__DETAIL__PERCEPTION_TARGETS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ai_msgs/msg/detail/perception_targets__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'perfs'
#include "ai_msgs/msg/detail/perf__traits.hpp"
// Member 'targets'
// Member 'disappeared_targets'
#include "ai_msgs/msg/detail/target__traits.hpp"

namespace ai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionTargets & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fps
  {
    out << "fps: ";
    rosidl_generator_traits::value_to_yaml(msg.fps, out);
    out << ", ";
  }

  // member: perfs
  {
    if (msg.perfs.size() == 0) {
      out << "perfs: []";
    } else {
      out << "perfs: [";
      size_t pending_items = msg.perfs.size();
      for (auto item : msg.perfs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: targets
  {
    if (msg.targets.size() == 0) {
      out << "targets: []";
    } else {
      out << "targets: [";
      size_t pending_items = msg.targets.size();
      for (auto item : msg.targets) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: disappeared_targets
  {
    if (msg.disappeared_targets.size() == 0) {
      out << "disappeared_targets: []";
    } else {
      out << "disappeared_targets: [";
      size_t pending_items = msg.disappeared_targets.size();
      for (auto item : msg.disappeared_targets) {
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
  const PerceptionTargets & msg,
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

  // member: fps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fps: ";
    rosidl_generator_traits::value_to_yaml(msg.fps, out);
    out << "\n";
  }

  // member: perfs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.perfs.size() == 0) {
      out << "perfs: []\n";
    } else {
      out << "perfs:\n";
      for (auto item : msg.perfs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: targets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.targets.size() == 0) {
      out << "targets: []\n";
    } else {
      out << "targets:\n";
      for (auto item : msg.targets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: disappeared_targets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disappeared_targets.size() == 0) {
      out << "disappeared_targets: []\n";
    } else {
      out << "disappeared_targets:\n";
      for (auto item : msg.disappeared_targets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionTargets & msg, bool use_flow_style = false)
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
  const ai_msgs::msg::PerceptionTargets & msg,
  std::ostream & out, size_t indentation = 0)
{
  ai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ai_msgs::msg::PerceptionTargets & msg)
{
  return ai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ai_msgs::msg::PerceptionTargets>()
{
  return "ai_msgs::msg::PerceptionTargets";
}

template<>
inline const char * name<ai_msgs::msg::PerceptionTargets>()
{
  return "ai_msgs/msg/PerceptionTargets";
}

template<>
struct has_fixed_size<ai_msgs::msg::PerceptionTargets>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ai_msgs::msg::PerceptionTargets>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ai_msgs::msg::PerceptionTargets>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AI_MSGS__MSG__DETAIL__PERCEPTION_TARGETS__TRAITS_HPP_
