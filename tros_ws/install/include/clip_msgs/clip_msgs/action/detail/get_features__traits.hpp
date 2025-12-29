// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clip_msgs:action/GetFeatures.idl
// generated code does not contain a copyright notice

#ifndef CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__TRAITS_HPP_
#define CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clip_msgs/action/detail/get_features__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clip_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetFeatures_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: urls
  {
    if (msg.urls.size() == 0) {
      out << "urls: []";
    } else {
      out << "urls: [";
      size_t pending_items = msg.urls.size();
      for (auto item : msg.urls) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: texts
  {
    if (msg.texts.size() == 0) {
      out << "texts: []";
    } else {
      out << "texts: [";
      size_t pending_items = msg.texts.size();
      for (auto item : msg.texts) {
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
  const GetFeatures_Goal & msg,
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

  // member: urls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.urls.size() == 0) {
      out << "urls: []\n";
    } else {
      out << "urls:\n";
      for (auto item : msg.urls) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: texts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.texts.size() == 0) {
      out << "texts: []\n";
    } else {
      out << "texts:\n";
      for (auto item : msg.texts) {
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

inline std::string to_yaml(const GetFeatures_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace clip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clip_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clip_msgs::action::GetFeatures_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  clip_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clip_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const clip_msgs::action::GetFeatures_Goal & msg)
{
  return clip_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_Goal>()
{
  return "clip_msgs::action::GetFeatures_Goal";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_Goal>()
{
  return "clip_msgs/action/GetFeatures_Goal";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clip_msgs::action::GetFeatures_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace clip_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetFeatures_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFeatures_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFeatures_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace clip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clip_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clip_msgs::action::GetFeatures_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  clip_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clip_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const clip_msgs::action::GetFeatures_Result & msg)
{
  return clip_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_Result>()
{
  return "clip_msgs::action::GetFeatures_Result";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_Result>()
{
  return "clip_msgs/action/GetFeatures_Result";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<clip_msgs::action::GetFeatures_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'item'
#include "clip_msgs/msg/detail/clip_item__traits.hpp"

namespace clip_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetFeatures_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_progress
  {
    out << "current_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.current_progress, out);
    out << ", ";
  }

  // member: item
  {
    out << "item: ";
    to_flow_style_yaml(msg.item, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFeatures_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.current_progress, out);
    out << "\n";
  }

  // member: item
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item:\n";
    to_block_style_yaml(msg.item, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFeatures_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace clip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clip_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clip_msgs::action::GetFeatures_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  clip_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clip_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const clip_msgs::action::GetFeatures_Feedback & msg)
{
  return clip_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_Feedback>()
{
  return "clip_msgs::action::GetFeatures_Feedback";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_Feedback>()
{
  return "clip_msgs/action/GetFeatures_Feedback";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_Feedback>
  : std::integral_constant<bool, has_fixed_size<clip_msgs::msg::ClipItem>::value> {};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_Feedback>
  : std::integral_constant<bool, has_bounded_size<clip_msgs::msg::ClipItem>::value> {};

template<>
struct is_message<clip_msgs::action::GetFeatures_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "clip_msgs/action/detail/get_features__traits.hpp"

namespace clip_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetFeatures_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFeatures_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFeatures_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace clip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clip_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clip_msgs::action::GetFeatures_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  clip_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clip_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const clip_msgs::action::GetFeatures_SendGoal_Request & msg)
{
  return clip_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_SendGoal_Request>()
{
  return "clip_msgs::action::GetFeatures_SendGoal_Request";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_SendGoal_Request>()
{
  return "clip_msgs/action/GetFeatures_SendGoal_Request";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<clip_msgs::action::GetFeatures_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<clip_msgs::action::GetFeatures_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<clip_msgs::action::GetFeatures_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace clip_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetFeatures_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFeatures_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFeatures_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace clip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clip_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clip_msgs::action::GetFeatures_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  clip_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clip_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const clip_msgs::action::GetFeatures_SendGoal_Response & msg)
{
  return clip_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_SendGoal_Response>()
{
  return "clip_msgs::action::GetFeatures_SendGoal_Response";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_SendGoal_Response>()
{
  return "clip_msgs/action/GetFeatures_SendGoal_Response";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<clip_msgs::action::GetFeatures_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_SendGoal>()
{
  return "clip_msgs::action::GetFeatures_SendGoal";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_SendGoal>()
{
  return "clip_msgs/action/GetFeatures_SendGoal";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<clip_msgs::action::GetFeatures_SendGoal_Request>::value &&
    has_fixed_size<clip_msgs::action::GetFeatures_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<clip_msgs::action::GetFeatures_SendGoal_Request>::value &&
    has_bounded_size<clip_msgs::action::GetFeatures_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<clip_msgs::action::GetFeatures_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<clip_msgs::action::GetFeatures_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<clip_msgs::action::GetFeatures_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace clip_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetFeatures_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFeatures_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFeatures_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace clip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clip_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clip_msgs::action::GetFeatures_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  clip_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clip_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const clip_msgs::action::GetFeatures_GetResult_Request & msg)
{
  return clip_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_GetResult_Request>()
{
  return "clip_msgs::action::GetFeatures_GetResult_Request";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_GetResult_Request>()
{
  return "clip_msgs/action/GetFeatures_GetResult_Request";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<clip_msgs::action::GetFeatures_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "clip_msgs/action/detail/get_features__traits.hpp"

namespace clip_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetFeatures_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFeatures_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFeatures_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace clip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clip_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clip_msgs::action::GetFeatures_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  clip_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clip_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const clip_msgs::action::GetFeatures_GetResult_Response & msg)
{
  return clip_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_GetResult_Response>()
{
  return "clip_msgs::action::GetFeatures_GetResult_Response";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_GetResult_Response>()
{
  return "clip_msgs/action/GetFeatures_GetResult_Response";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<clip_msgs::action::GetFeatures_Result>::value> {};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<clip_msgs::action::GetFeatures_Result>::value> {};

template<>
struct is_message<clip_msgs::action::GetFeatures_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_GetResult>()
{
  return "clip_msgs::action::GetFeatures_GetResult";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_GetResult>()
{
  return "clip_msgs/action/GetFeatures_GetResult";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<clip_msgs::action::GetFeatures_GetResult_Request>::value &&
    has_fixed_size<clip_msgs::action::GetFeatures_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<clip_msgs::action::GetFeatures_GetResult_Request>::value &&
    has_bounded_size<clip_msgs::action::GetFeatures_GetResult_Response>::value
  >
{
};

template<>
struct is_service<clip_msgs::action::GetFeatures_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<clip_msgs::action::GetFeatures_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<clip_msgs::action::GetFeatures_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "clip_msgs/action/detail/get_features__traits.hpp"

namespace clip_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const GetFeatures_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetFeatures_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetFeatures_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace clip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clip_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clip_msgs::action::GetFeatures_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  clip_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clip_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const clip_msgs::action::GetFeatures_FeedbackMessage & msg)
{
  return clip_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<clip_msgs::action::GetFeatures_FeedbackMessage>()
{
  return "clip_msgs::action::GetFeatures_FeedbackMessage";
}

template<>
inline const char * name<clip_msgs::action::GetFeatures_FeedbackMessage>()
{
  return "clip_msgs/action/GetFeatures_FeedbackMessage";
}

template<>
struct has_fixed_size<clip_msgs::action::GetFeatures_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<clip_msgs::action::GetFeatures_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<clip_msgs::action::GetFeatures_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<clip_msgs::action::GetFeatures_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<clip_msgs::action::GetFeatures_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<clip_msgs::action::GetFeatures>
  : std::true_type
{
};

template<>
struct is_action_goal<clip_msgs::action::GetFeatures_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<clip_msgs::action::GetFeatures_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<clip_msgs::action::GetFeatures_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__TRAITS_HPP_
