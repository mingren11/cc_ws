// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ai_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__POINT__STRUCT_H_
#define AI_MSGS__MSG__DETAIL__POINT__STRUCT_H_

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
// Member 'point'
#include "geometry_msgs/msg/detail/point32__struct.h"
// Member 'confidence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Point in the package ai_msgs.
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
typedef struct ai_msgs__msg__Point
{
  /// 关键点感知结果
  /// 如：人脸关键点、人体骨骼点、人手关键点
  /// 类型
  /// body_kps/face_kps/hand_kps
  rosidl_runtime_c__String type;
  /// 关键点数值
  geometry_msgs__msg__Point32__Sequence point;
  /// 每个关键点的置信度，维度和关键点数值相同
  rosidl_runtime_c__float__Sequence confidence;
} ai_msgs__msg__Point;

// Struct for a sequence of ai_msgs__msg__Point.
typedef struct ai_msgs__msg__Point__Sequence
{
  ai_msgs__msg__Point * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_msgs__msg__Point__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AI_MSGS__MSG__DETAIL__POINT__STRUCT_H_
