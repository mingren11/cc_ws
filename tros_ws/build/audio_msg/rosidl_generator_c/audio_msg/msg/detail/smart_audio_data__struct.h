// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_msg:msg/SmartAudioData.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__STRUCT_H_
#define AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_type'
#include "audio_msg/msg/detail/smart_audio_frame_type__struct.h"
// Member 'event_type'
#include "audio_msg/msg/detail/audio_event_type__struct.h"
// Member 'cmd_word'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SmartAudioData in the package audio_msg.
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
typedef struct audio_msg__msg__SmartAudioData
{
  /// smart audio frame data
  /// smart audio frame type, this parameter's value which can be one of several types, see
  /// `SmartAudioFrameType.msg`
  /// 1: voip frame data  2：audio event  3：commnad word  4：wake up audio data 5: doa data
  audio_msg__msg__SmartAudioFrameType frame_type;
  /// event type,  , this parameter's value which can be one of several types, see
  /// `AudioEventType.msg`
  /// 1: normal wakeup  2: one shot wakeup  3：asr detect timeout  : vad begin  4：vad middle  5：vad end
  audio_msg__msg__AudioEventType event_type;
  /// command word, if this frame is command word data frame, this field is valid
  rosidl_runtime_c__String cmd_word;
  /// audio data, if this frame is a voip frame or a wakeup data frame, this field is valid
  rosidl_runtime_c__uint8__Sequence data;
  /// Doa angles
  float doa_theta;
} audio_msg__msg__SmartAudioData;

// Struct for a sequence of audio_msg__msg__SmartAudioData.
typedef struct audio_msg__msg__SmartAudioData__Sequence
{
  audio_msg__msg__SmartAudioData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_msg__msg__SmartAudioData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_MSG__MSG__DETAIL__SMART_AUDIO_DATA__STRUCT_H_
