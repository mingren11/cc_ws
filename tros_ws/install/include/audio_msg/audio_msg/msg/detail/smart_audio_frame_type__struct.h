// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_msg:msg/SmartAudioFrameType.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_FRAME_TYPE__STRUCT_H_
#define AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_FRAME_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SMART_AUDIO_TYPE_VOIP'.
/**
  * smart audio frame type
  * frame type, uint8
  *  1：voip data The audio data after noise reduction
  *  2：audio event  3：commnad word  4：wake up audio data 5: doa data
 */
enum
{
  audio_msg__msg__SmartAudioFrameType__SMART_AUDIO_TYPE_VOIP = 1
};

/// Constant 'SMART_AUDIO_TYPE_EVENT'.
enum
{
  audio_msg__msg__SmartAudioFrameType__SMART_AUDIO_TYPE_EVENT = 2
};

/// Constant 'SMART_AUDIO_TYPE_CMD_WORD'.
enum
{
  audio_msg__msg__SmartAudioFrameType__SMART_AUDIO_TYPE_CMD_WORD = 3
};

/// Constant 'SMART_AUDIO_TYPE_WAKEUP_DATA'.
enum
{
  audio_msg__msg__SmartAudioFrameType__SMART_AUDIO_TYPE_WAKEUP_DATA = 4
};

/// Constant 'SMART_AUDIO_TYPE_DOA'.
enum
{
  audio_msg__msg__SmartAudioFrameType__SMART_AUDIO_TYPE_DOA = 5
};

/// Constant 'SMART_AUDIO_TYPE_ASR_DATA'.
enum
{
  audio_msg__msg__SmartAudioFrameType__SMART_AUDIO_TYPE_ASR_DATA = 6
};

/// Struct defined in msg/SmartAudioFrameType in the package audio_msg.
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
typedef struct audio_msg__msg__SmartAudioFrameType
{
  uint8_t value;
} audio_msg__msg__SmartAudioFrameType;

// Struct for a sequence of audio_msg__msg__SmartAudioFrameType.
typedef struct audio_msg__msg__SmartAudioFrameType__Sequence
{
  audio_msg__msg__SmartAudioFrameType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_msg__msg__SmartAudioFrameType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_FRAME_TYPE__STRUCT_H_
