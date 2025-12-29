// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clip_msgs:msg/ClipItem.idl
// generated code does not contain a copyright notice

#ifndef CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__STRUCT_H_
#define CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
// Member 'url'
// Member 'extra'
#include "rosidl_runtime_c/string.h"
// Member 'feature'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ClipItem in the package clip_msgs.
/**
  * Copyright (c) 2024，Horizon Robotics.
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
typedef struct clip_msgs__msg__ClipItem
{
  /// ClipItem.msg
  /// item 类型, true: 图片, false: 文本
  bool type;
  /// item 文本, 仅item为文本时有效
  rosidl_runtime_c__String text;
  /// item 文件路径地址, 仅item为图片时有效
  rosidl_runtime_c__String url;
  /// item 对应的特征值
  rosidl_runtime_c__float__Sequence feature;
  /// item 额外信息
  rosidl_runtime_c__String__Sequence extra;
} clip_msgs__msg__ClipItem;

// Struct for a sequence of clip_msgs__msg__ClipItem.
typedef struct clip_msgs__msg__ClipItem__Sequence
{
  clip_msgs__msg__ClipItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clip_msgs__msg__ClipItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLIP_MSGS__MSG__DETAIL__CLIP_ITEM__STRUCT_H_
