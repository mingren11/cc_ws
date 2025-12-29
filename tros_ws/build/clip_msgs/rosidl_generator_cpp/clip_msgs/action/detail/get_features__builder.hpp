// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clip_msgs:action/GetFeatures.idl
// generated code does not contain a copyright notice

#ifndef CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__BUILDER_HPP_
#define CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clip_msgs/action/detail/get_features__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clip_msgs
{

namespace action
{

namespace builder
{

class Init_GetFeatures_Goal_texts
{
public:
  explicit Init_GetFeatures_Goal_texts(::clip_msgs::action::GetFeatures_Goal & msg)
  : msg_(msg)
  {}
  ::clip_msgs::action::GetFeatures_Goal texts(::clip_msgs::action::GetFeatures_Goal::_texts_type arg)
  {
    msg_.texts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_Goal msg_;
};

class Init_GetFeatures_Goal_urls
{
public:
  explicit Init_GetFeatures_Goal_urls(::clip_msgs::action::GetFeatures_Goal & msg)
  : msg_(msg)
  {}
  Init_GetFeatures_Goal_texts urls(::clip_msgs::action::GetFeatures_Goal::_urls_type arg)
  {
    msg_.urls = std::move(arg);
    return Init_GetFeatures_Goal_texts(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_Goal msg_;
};

class Init_GetFeatures_Goal_type
{
public:
  Init_GetFeatures_Goal_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFeatures_Goal_urls type(::clip_msgs::action::GetFeatures_Goal::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GetFeatures_Goal_urls(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clip_msgs::action::GetFeatures_Goal>()
{
  return clip_msgs::action::builder::Init_GetFeatures_Goal_type();
}

}  // namespace clip_msgs


namespace clip_msgs
{

namespace action
{

namespace builder
{

class Init_GetFeatures_Result_error_code
{
public:
  explicit Init_GetFeatures_Result_error_code(::clip_msgs::action::GetFeatures_Result & msg)
  : msg_(msg)
  {}
  ::clip_msgs::action::GetFeatures_Result error_code(::clip_msgs::action::GetFeatures_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_Result msg_;
};

class Init_GetFeatures_Result_success
{
public:
  Init_GetFeatures_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFeatures_Result_error_code success(::clip_msgs::action::GetFeatures_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetFeatures_Result_error_code(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clip_msgs::action::GetFeatures_Result>()
{
  return clip_msgs::action::builder::Init_GetFeatures_Result_success();
}

}  // namespace clip_msgs


namespace clip_msgs
{

namespace action
{

namespace builder
{

class Init_GetFeatures_Feedback_item
{
public:
  explicit Init_GetFeatures_Feedback_item(::clip_msgs::action::GetFeatures_Feedback & msg)
  : msg_(msg)
  {}
  ::clip_msgs::action::GetFeatures_Feedback item(::clip_msgs::action::GetFeatures_Feedback::_item_type arg)
  {
    msg_.item = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_Feedback msg_;
};

class Init_GetFeatures_Feedback_current_progress
{
public:
  Init_GetFeatures_Feedback_current_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFeatures_Feedback_item current_progress(::clip_msgs::action::GetFeatures_Feedback::_current_progress_type arg)
  {
    msg_.current_progress = std::move(arg);
    return Init_GetFeatures_Feedback_item(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clip_msgs::action::GetFeatures_Feedback>()
{
  return clip_msgs::action::builder::Init_GetFeatures_Feedback_current_progress();
}

}  // namespace clip_msgs


namespace clip_msgs
{

namespace action
{

namespace builder
{

class Init_GetFeatures_SendGoal_Request_goal
{
public:
  explicit Init_GetFeatures_SendGoal_Request_goal(::clip_msgs::action::GetFeatures_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::clip_msgs::action::GetFeatures_SendGoal_Request goal(::clip_msgs::action::GetFeatures_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_SendGoal_Request msg_;
};

class Init_GetFeatures_SendGoal_Request_goal_id
{
public:
  Init_GetFeatures_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFeatures_SendGoal_Request_goal goal_id(::clip_msgs::action::GetFeatures_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetFeatures_SendGoal_Request_goal(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clip_msgs::action::GetFeatures_SendGoal_Request>()
{
  return clip_msgs::action::builder::Init_GetFeatures_SendGoal_Request_goal_id();
}

}  // namespace clip_msgs


namespace clip_msgs
{

namespace action
{

namespace builder
{

class Init_GetFeatures_SendGoal_Response_stamp
{
public:
  explicit Init_GetFeatures_SendGoal_Response_stamp(::clip_msgs::action::GetFeatures_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::clip_msgs::action::GetFeatures_SendGoal_Response stamp(::clip_msgs::action::GetFeatures_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_SendGoal_Response msg_;
};

class Init_GetFeatures_SendGoal_Response_accepted
{
public:
  Init_GetFeatures_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFeatures_SendGoal_Response_stamp accepted(::clip_msgs::action::GetFeatures_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GetFeatures_SendGoal_Response_stamp(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clip_msgs::action::GetFeatures_SendGoal_Response>()
{
  return clip_msgs::action::builder::Init_GetFeatures_SendGoal_Response_accepted();
}

}  // namespace clip_msgs


namespace clip_msgs
{

namespace action
{

namespace builder
{

class Init_GetFeatures_GetResult_Request_goal_id
{
public:
  Init_GetFeatures_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::clip_msgs::action::GetFeatures_GetResult_Request goal_id(::clip_msgs::action::GetFeatures_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clip_msgs::action::GetFeatures_GetResult_Request>()
{
  return clip_msgs::action::builder::Init_GetFeatures_GetResult_Request_goal_id();
}

}  // namespace clip_msgs


namespace clip_msgs
{

namespace action
{

namespace builder
{

class Init_GetFeatures_GetResult_Response_result
{
public:
  explicit Init_GetFeatures_GetResult_Response_result(::clip_msgs::action::GetFeatures_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::clip_msgs::action::GetFeatures_GetResult_Response result(::clip_msgs::action::GetFeatures_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_GetResult_Response msg_;
};

class Init_GetFeatures_GetResult_Response_status
{
public:
  Init_GetFeatures_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFeatures_GetResult_Response_result status(::clip_msgs::action::GetFeatures_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetFeatures_GetResult_Response_result(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clip_msgs::action::GetFeatures_GetResult_Response>()
{
  return clip_msgs::action::builder::Init_GetFeatures_GetResult_Response_status();
}

}  // namespace clip_msgs


namespace clip_msgs
{

namespace action
{

namespace builder
{

class Init_GetFeatures_FeedbackMessage_feedback
{
public:
  explicit Init_GetFeatures_FeedbackMessage_feedback(::clip_msgs::action::GetFeatures_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::clip_msgs::action::GetFeatures_FeedbackMessage feedback(::clip_msgs::action::GetFeatures_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_FeedbackMessage msg_;
};

class Init_GetFeatures_FeedbackMessage_goal_id
{
public:
  Init_GetFeatures_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFeatures_FeedbackMessage_feedback goal_id(::clip_msgs::action::GetFeatures_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GetFeatures_FeedbackMessage_feedback(msg_);
  }

private:
  ::clip_msgs::action::GetFeatures_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::clip_msgs::action::GetFeatures_FeedbackMessage>()
{
  return clip_msgs::action::builder::Init_GetFeatures_FeedbackMessage_goal_id();
}

}  // namespace clip_msgs

#endif  // CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__BUILDER_HPP_
