// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_msg:msg/AudioFrame.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__STRUCT_H_
#define AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pts'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'frame_type'
#include "audio_msg/msg/detail/audio_frame_type__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'smart_audio'
#include "audio_msg/msg/detail/smart_audio_data__struct.h"

/// Struct defined in msg/AudioFrame in the package audio_msg.
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
typedef struct audio_msg__msg__AudioFrame
{
  /// frame index
  uint32_t index;
  /// timestamp
  builtin_interfaces__msg__Time pts;
  /// frame type, , this parameter's value which can be one of several types, see
  /// `AudioFrameType.msg`
  ///  0：unknow frame type  1：normal audio data  2：smart audio frame
  audio_msg__msg__AudioFrameType frame_type;
  /// audio data, if this frame is a normal audio frame, frame_type value is 1, this field is valid
  rosidl_runtime_c__uint8__Sequence data;
  /// If this frame is an smart audio frame, frame_type value is 2, and this field is valid
  audio_msg__msg__SmartAudioData smart_audio;
} audio_msg__msg__AudioFrame;

// Struct for a sequence of audio_msg__msg__AudioFrame.
typedef struct audio_msg__msg__AudioFrame__Sequence
{
  audio_msg__msg__AudioFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_msg__msg__AudioFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_MSG__MSG__DETAIL__AUDIO_FRAME__STRUCT_H_
