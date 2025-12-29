// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from img_msgs:msg/H26XFrame.idl
// generated code does not contain a copyright notice

#ifndef IMG_MSGS__MSG__DETAIL__H26_X_FRAME__STRUCT_H_
#define IMG_MSGS__MSG__DETAIL__H26_X_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dts'
// Member 'pts'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/H26XFrame in the package img_msgs.
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
typedef struct img_msgs__msg__H26XFrame
{
  /// H26X 帧
  /// 帧序号
  uint32_t index;
  uint8_t encoding[12];
  uint32_t height;
  uint32_t width;
  /// 解码时间戳
  builtin_interfaces__msg__Time dts;
  /// 显示时间戳
  builtin_interfaces__msg__Time pts;
  /// 帧内容，包含nal 头，00 00 00 01/00 00 01
  rosidl_runtime_c__uint8__Sequence data;
} img_msgs__msg__H26XFrame;

// Struct for a sequence of img_msgs__msg__H26XFrame.
typedef struct img_msgs__msg__H26XFrame__Sequence
{
  img_msgs__msg__H26XFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} img_msgs__msg__H26XFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMG_MSGS__MSG__DETAIL__H26_X_FRAME__STRUCT_H_
