// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ai_msgs:msg/Perf.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__PERF__STRUCT_H_
#define AI_MSGS__MSG__DETAIL__PERF__STRUCT_H_

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
// Member 'stamp_start'
// Member 'stamp_end'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Perf in the package ai_msgs.
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
typedef struct ai_msgs__msg__Perf
{
  /// 性能统计信息
  /// 类型，用于表示处理模块
  /// 例如type为模型名时，表示对此模型推理的性能统计
  rosidl_runtime_c__String type;
  /// 开始处理的时间戳
  builtin_interfaces__msg__Time stamp_start;
  /// 处理完成的时间戳
  builtin_interfaces__msg__Time stamp_end;
  /// 处理耗时，单位毫秒
  double time_ms_duration;
} ai_msgs__msg__Perf;

// Struct for a sequence of ai_msgs__msg__Perf.
typedef struct ai_msgs__msg__Perf__Sequence
{
  ai_msgs__msg__Perf * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_msgs__msg__Perf__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AI_MSGS__MSG__DETAIL__PERF__STRUCT_H_
