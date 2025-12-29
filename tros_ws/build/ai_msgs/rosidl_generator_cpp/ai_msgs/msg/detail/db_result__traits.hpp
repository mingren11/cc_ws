// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ai_msgs:msg/DBResult.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__DB_RESULT__TRAITS_HPP_
#define AI_MSGS__MSG__DETAIL__DB_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ai_msgs/msg/detail/db_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ai_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DBResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: db_type
  {
    out << "db_type: ";
    rosidl_generator_traits::value_to_yaml(msg.db_type, out);
    out << ", ";
  }

  // member: match_id
  {
    out << "match_id: ";
    rosidl_generator_traits::value_to_yaml(msg.match_id, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: similarity
  {
    out << "similarity: ";
    rosidl_generator_traits::value_to_yaml(msg.similarity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DBResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: db_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "db_type: ";
    rosidl_generator_traits::value_to_yaml(msg.db_type, out);
    out << "\n";
  }

  // member: match_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "match_id: ";
    rosidl_generator_traits::value_to_yaml(msg.match_id, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: similarity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "similarity: ";
    rosidl_generator_traits::value_to_yaml(msg.similarity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DBResult & msg, bool use_flow_style = false)
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
  const ai_msgs::msg::DBResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  ai_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ai_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ai_msgs::msg::DBResult & msg)
{
  return ai_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ai_msgs::msg::DBResult>()
{
  return "ai_msgs::msg::DBResult";
}

template<>
inline const char * name<ai_msgs::msg::DBResult>()
{
  return "ai_msgs/msg/DBResult";
}

template<>
struct has_fixed_size<ai_msgs::msg::DBResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ai_msgs::msg::DBResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ai_msgs::msg::DBResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AI_MSGS__MSG__DETAIL__DB_RESULT__TRAITS_HPP_
