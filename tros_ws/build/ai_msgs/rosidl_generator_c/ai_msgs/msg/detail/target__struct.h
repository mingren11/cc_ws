// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ai_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__TARGET__STRUCT_H_
#define AI_MSGS__MSG__DETAIL__TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'rois'
#include "ai_msgs/msg/detail/roi__struct.h"
// Member 'attributes'
#include "ai_msgs/msg/detail/attribute__struct.h"
// Member 'points'
#include "ai_msgs/msg/detail/point__struct.h"
// Member 'captures'
#include "ai_msgs/msg/detail/capture__struct.h"

/// Struct defined in msg/Target in the package ai_msgs.
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
typedef struct ai_msgs__msg__Target
{
  /// 目标消息
  /// 目标类型名称，如：人、车、动物、物体
  /// person/car/object/animal
  rosidl_runtime_c__String type;
  /// 目标跟踪ID号
  uint64_t track_id;
  /// 检测框
  ai_msgs__msg__Roi__Sequence rois;
  /// 属性
  ai_msgs__msg__Attribute__Sequence attributes;
  /// 关键点
  ai_msgs__msg__Point__Sequence points;
  /// 跟踪目标抓拍图、特征、特征的底库检索结果信息
  ai_msgs__msg__Capture__Sequence captures;
} ai_msgs__msg__Target;

// Struct for a sequence of ai_msgs__msg__Target.
typedef struct ai_msgs__msg__Target__Sequence
{
  ai_msgs__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_msgs__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AI_MSGS__MSG__DETAIL__TARGET__STRUCT_H_
