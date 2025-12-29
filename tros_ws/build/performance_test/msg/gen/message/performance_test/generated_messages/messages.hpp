// Copyright 2021 Apex.AI, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef EXPERIMENT_CONFIGURATION__MESSAGES_HPP_
#define EXPERIMENT_CONFIGURATION__MESSAGES_HPP_

#include <performance_test/for_each.hpp>

// Generated message files
#include <performance_test/generated_messages/array1k.hpp>
#include <performance_test/generated_messages/array4k.hpp>
#include <performance_test/generated_messages/array16k.hpp>
#include <performance_test/generated_messages/array32k.hpp>
#include <performance_test/generated_messages/array60k.hpp>
#include <performance_test/generated_messages/array64k.hpp>
#include <performance_test/generated_messages/array256k.hpp>
#include <performance_test/generated_messages/array1m.hpp>
#include <performance_test/generated_messages/array2m.hpp>
#include <performance_test/generated_messages/array4m.hpp>
#include <performance_test/generated_messages/array8m.hpp>

#include <algorithm>
#include <string>
#include <tuple>
#include <vector>

namespace performance_test
{
namespace messages
{
using MessageTypeList = std::tuple<
  // Generated message classes,
Array1k,
Array4k,
Array16k,
Array32k,
Array60k,
Array64k,
Array256k,
Array1m,
Array2m,
Array4m,
Array8m
>;

inline std::vector<std::string> supported_msg_names()
{
  std::vector<std::string> result;
  performance_test::for_each(
    MessageTypeList(), [&result](const auto & topic) {
      using T = std::remove_cv_t<std::remove_reference_t<decltype(topic)>>;
      result.push_back(T::msg_name());
    });
  return result;
}
}
}

#endif  // EXPERIMENT_CONFIGURATION__MESSAGES_HPP_
