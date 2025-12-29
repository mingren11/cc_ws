// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ai_msgs:msg/CaptureTargets.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__CAPTURE_TARGETS__STRUCT_H_
#define AI_MSGS__MSG__DETAIL__CAPTURE_TARGETS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'perfs'
#include "ai_msgs/msg/detail/perf__struct.h"
// Member 'targets'
#include "ai_msgs/msg/detail/target__struct.h"

/// Struct defined in msg/CaptureTargets in the package ai_msgs.
/**
  * Copyright (c) 2024，D-Robotics.
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */
typedef struct ai_msgs__msg__CaptureTargets
{
  /// 抓拍结果
  /// 消息头
  std_msgs__msg__Header header;
  /// 性能统计信息，比如记录每个模型推理的耗时
  ai_msgs__msg__Perf__Sequence perfs;
  /// 抓拍目标集合
  ai_msgs__msg__Target__Sequence targets;
} ai_msgs__msg__CaptureTargets;

// Struct for a sequence of ai_msgs__msg__CaptureTargets.
typedef struct ai_msgs__msg__CaptureTargets__Sequence
{
  ai_msgs__msg__CaptureTargets * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_msgs__msg__CaptureTargets__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AI_MSGS__MSG__DETAIL__CAPTURE_TARGETS__STRUCT_H_
