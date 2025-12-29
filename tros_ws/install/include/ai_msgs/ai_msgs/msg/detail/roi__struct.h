// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ai_msgs:msg/Roi.idl
// generated code does not contain a copyright notice

#ifndef AI_MSGS__MSG__DETAIL__ROI__STRUCT_H_
#define AI_MSGS__MSG__DETAIL__ROI__STRUCT_H_

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
// Member 'rect'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/Roi in the package ai_msgs.
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
typedef struct ai_msgs__msg__Roi
{
  /// roi感知消息
  /// 如：人体检测框、人头检测框、人脸检测框、人手检测框
  /// roi类型
  /// body/head/face/hand
  rosidl_runtime_c__String type;
  /// 检测框
  sensor_msgs__msg__RegionOfInterest rect;
  /// 检测结果的置信度
  float confidence;
} ai_msgs__msg__Roi;

// Struct for a sequence of ai_msgs__msg__Roi.
typedef struct ai_msgs__msg__Roi__Sequence
{
  ai_msgs__msg__Roi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ai_msgs__msg__Roi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AI_MSGS__MSG__DETAIL__ROI__STRUCT_H_
