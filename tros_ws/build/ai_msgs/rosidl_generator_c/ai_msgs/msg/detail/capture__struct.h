// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ai_msgs:msg/Capture.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__CAPTURE__STRUCT_H_
#define AI_MSGS__MSG__DETAIL__CAPTURE__STRUCT_H_

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
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'features'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'db_result'
#include "ai_msgs/msg/detail/db_result__struct.h"

/// Struct defined in msg/Capture in the package ai_msgs.
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
typedef struct ai_msgs__msg__Capture
{
  ///  抓拍信息
  /// 抓拍图对应原视频帧的timestamp和frame_id
  std_msgs__msg__Header header;
  /// 抓拍图
  sensor_msgs__msg__Image img;
  /// 抓拍图对应的特征数据
  rosidl_runtime_c__float__Sequence features;
  /// 特征的底库检索结果
  ai_msgs__msg__DBResult db_result;
} ai_msgs__msg__Capture;

// Struct for a sequence of ai_msgs__msg__Capture.
typedef struct ai_msgs__msg__Capture__Sequence
{
  ai_msgs__msg__Capture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_msgs__msg__Capture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AI_MSGS__MSG__DETAIL__CAPTURE__STRUCT_H_
