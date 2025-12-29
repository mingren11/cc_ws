// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_msg:msg/AudioFrameType.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME_TYPE__STRUCT_H_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FRAME_TYPE_UNKNOW'.
/**
  * smart audio frame type
  * frame type, uint8  0：unknow frame type  1：normal audio data  2：smart audio frame
 */
enum
{
  audio_msg__msg__AudioFrameType__FRAME_TYPE_UNKNOW = 0
};

/// Constant 'FRAME_TYPE_AUDIO'.
enum
{
  audio_msg__msg__AudioFrameType__FRAME_TYPE_AUDIO = 1
};

/// Constant 'FRAME_TYPE_SMART_AUDIO'.
enum
{
  audio_msg__msg__AudioFrameType__FRAME_TYPE_SMART_AUDIO = 2
};

/// Struct defined in msg/AudioFrameType in the package audio_msg.
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
typedef struct audio_msg__msg__AudioFrameType
{
  uint8_t value;
} audio_msg__msg__AudioFrameType;

// Struct for a sequence of audio_msg__msg__AudioFrameType.
typedef struct audio_msg__msg__AudioFrameType__Sequence
{
  audio_msg__msg__AudioFrameType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_msg__msg__AudioFrameType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME_TYPE__STRUCT_H_
