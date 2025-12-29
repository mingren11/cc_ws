// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clip_msgs:action/GetFeatures.idl
// generated code does not contain a copyright notice

#ifndef CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__STRUCT_H_
#define CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'urls'
// Member 'texts'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/GetFeatures in the package clip_msgs.
typedef struct clip_msgs__action__GetFeatures_Goal
{
  bool type;
  /// 待计算图片路径, 当 type==true生效
  rosidl_runtime_c__String__Sequence urls;
  /// 待计算文本, 当type==false生效
  rosidl_runtime_c__String__Sequence texts;
} clip_msgs__action__GetFeatures_Goal;

// Struct for a sequence of clip_msgs__action__GetFeatures_Goal.
typedef struct clip_msgs__action__GetFeatures_Goal__Sequence
{
  clip_msgs__action__GetFeatures_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clip_msgs__action__GetFeatures_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/GetFeatures in the package clip_msgs.
typedef struct clip_msgs__action__GetFeatures_Result
{
  bool success;
  /// 错误码, 仅任务失败时有效, 反馈失败原因
  int32_t error_code;
} clip_msgs__action__GetFeatures_Result;

// Struct for a sequence of clip_msgs__action__GetFeatures_Result.
typedef struct clip_msgs__action__GetFeatures_Result__Sequence
{
  clip_msgs__action__GetFeatures_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clip_msgs__action__GetFeatures_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'item'
#include "clip_msgs/msg/detail/clip_item__struct.h"

/// Struct defined in action/GetFeatures in the package clip_msgs.
typedef struct clip_msgs__action__GetFeatures_Feedback
{
  float current_progress;
  /// 结果
  clip_msgs__msg__ClipItem item;
} clip_msgs__action__GetFeatures_Feedback;

// Struct for a sequence of clip_msgs__action__GetFeatures_Feedback.
typedef struct clip_msgs__action__GetFeatures_Feedback__Sequence
{
  clip_msgs__action__GetFeatures_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clip_msgs__action__GetFeatures_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "clip_msgs/action/detail/get_features__struct.h"

/// Struct defined in action/GetFeatures in the package clip_msgs.
typedef struct clip_msgs__action__GetFeatures_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  clip_msgs__action__GetFeatures_Goal goal;
} clip_msgs__action__GetFeatures_SendGoal_Request;

// Struct for a sequence of clip_msgs__action__GetFeatures_SendGoal_Request.
typedef struct clip_msgs__action__GetFeatures_SendGoal_Request__Sequence
{
  clip_msgs__action__GetFeatures_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clip_msgs__action__GetFeatures_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GetFeatures in the package clip_msgs.
typedef struct clip_msgs__action__GetFeatures_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} clip_msgs__action__GetFeatures_SendGoal_Response;

// Struct for a sequence of clip_msgs__action__GetFeatures_SendGoal_Response.
typedef struct clip_msgs__action__GetFeatures_SendGoal_Response__Sequence
{
  clip_msgs__action__GetFeatures_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clip_msgs__action__GetFeatures_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GetFeatures in the package clip_msgs.
typedef struct clip_msgs__action__GetFeatures_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} clip_msgs__action__GetFeatures_GetResult_Request;

// Struct for a sequence of clip_msgs__action__GetFeatures_GetResult_Request.
typedef struct clip_msgs__action__GetFeatures_GetResult_Request__Sequence
{
  clip_msgs__action__GetFeatures_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clip_msgs__action__GetFeatures_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "clip_msgs/action/detail/get_features__struct.h"

/// Struct defined in action/GetFeatures in the package clip_msgs.
typedef struct clip_msgs__action__GetFeatures_GetResult_Response
{
  int8_t status;
  clip_msgs__action__GetFeatures_Result result;
} clip_msgs__action__GetFeatures_GetResult_Response;

// Struct for a sequence of clip_msgs__action__GetFeatures_GetResult_Response.
typedef struct clip_msgs__action__GetFeatures_GetResult_Response__Sequence
{
  clip_msgs__action__GetFeatures_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clip_msgs__action__GetFeatures_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "clip_msgs/action/detail/get_features__struct.h"

/// Struct defined in action/GetFeatures in the package clip_msgs.
typedef struct clip_msgs__action__GetFeatures_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  clip_msgs__action__GetFeatures_Feedback feedback;
} clip_msgs__action__GetFeatures_FeedbackMessage;

// Struct for a sequence of clip_msgs__action__GetFeatures_FeedbackMessage.
typedef struct clip_msgs__action__GetFeatures_FeedbackMessage__Sequence
{
  clip_msgs__action__GetFeatures_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clip_msgs__action__GetFeatures_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLIP_MSGS__ACTION__DETAIL__GET_FEATURES__STRUCT_H_
