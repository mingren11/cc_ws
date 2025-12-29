// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ai_msgs:msg/DBResult.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__DB_RESULT__STRUCT_H_
#define AI_MSGS__MSG__DETAIL__DB_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'db_type'
// Member 'match_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DBResult in the package ai_msgs.
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
typedef struct ai_msgs__msg__DBResult
{
  /// 底库检索结果
  /// 底库名称
  rosidl_runtime_c__String db_type;
  /// 匹配目标ID
  rosidl_runtime_c__String match_id;
  /// 特征比对距离
  float distance;
  /// 特征比对相似度
  float similarity;
} ai_msgs__msg__DBResult;

// Struct for a sequence of ai_msgs__msg__DBResult.
typedef struct ai_msgs__msg__DBResult__Sequence
{
  ai_msgs__msg__DBResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_msgs__msg__DBResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AI_MSGS__MSG__DETAIL__DB_RESULT__STRUCT_H_
