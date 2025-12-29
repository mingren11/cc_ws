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

#ifndef EXPERIMENT_CONFIGURATION__MESSAGE_Array8m_HPP_
#define EXPERIMENT_CONFIGURATION__MESSAGE_Array8m_HPP_

#ifdef PERFORMANCE_TEST_RCLCPP_ENABLED
  #include <performance_test/msg/array8m.hpp>
#endif

#ifdef PERFORMANCE_TEST_FASTRTPS_ENABLED
  #include <fast_rtps/Array8mPubSubTypes.h>
#endif

#ifdef PERFORMANCE_TEST_CONNEXTDDSMICRO_ENABLED
  #include <performance_test/msg/dds_connext_micro_typefiles/Array8mSupport.h>
#endif

#ifdef PERFORMANCE_TEST_CONNEXTDDS_ENABLED
#include <connextdds/Array8mSupport.h>
#endif

#ifdef PERFORMANCE_TEST_CYCLONEDDS_ENABLED
  #include <cyclonedds/Array8m.h>
#endif

#ifdef PERFORMANCE_TEST_CYCLONEDDS_CXX_ENABLED
  #include <cyclonedds-cxx/Array8m.hpp>
#endif

#ifdef PERFORMANCE_TEST_OPENDDS_ENABLED
  #include <dds/DdsDcpsTopicC.h>
  #include <opendds/Array8mTypeSupportImpl.h>
#endif

#include <string>

namespace performance_test
{
namespace messages
{
class Array8m
{
public:
  static std::string msg_name()
  {
    return std::string("Array8m");
  }

#ifdef PERFORMANCE_TEST_RCLCPP_ENABLED
  using RosType = performance_test::msg::Array8m;
#endif

#ifdef PERFORMANCE_TEST_FASTRTPS_ENABLED
  using EprosimaTopicType = performance_test::msg::FastDDSGen::Array8mPubSubType;
  using EprosimaType = typename EprosimaTopicType::type;
#endif

#ifdef PERFORMANCE_TEST_CONNEXTDDSMICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msg_ConnextDDSMicroGen_Array8m;
#endif

#ifdef PERFORMANCE_TEST_CONNEXTDDS_ENABLED
  using ConnextDDSType = performance_test_msg_ConnextDDSGen_Array8m;
#endif

#ifdef PERFORMANCE_TEST_CYCLONEDDS_ENABLED
  using CycloneDDSType = performance_test_msg_CycloneDDSGen_Array8m;
  static const dds_topic_descriptor_t * CycloneDDSDesc()
  {
    return &performance_test_msg_CycloneDDSGen_Array8m_desc;
  }
#endif

#ifdef PERFORMANCE_TEST_CYCLONEDDS_CXX_ENABLED
  using CycloneDDSCXXType = performance_test::msg::CycloneDDSCXXGen::Array8m;
#endif

#ifdef PERFORMANCE_TEST_OPENDDS_ENABLED
  using OpenDDSTopicType = performance_test::msg::OpenDDSGen::Array8m;
  using OpenDDSDataWriterType = performance_test::msg::OpenDDSGen::Array8mDataWriter;
  using OpenDDSDataReaderType = performance_test::msg::OpenDDSGen::Array8mDataReader;
  using OpenDDSDataTypeSeq = performance_test::msg::OpenDDSGen::Array8mSeq;

  static DDS::TypeSupport_ptr get_type_support()
  {
    return new performance_test::msg::OpenDDSGen::Array8mTypeSupportImpl();
  }
#endif
};
}
}

#endif  // EXPERIMENT_CONFIGURATION__MESSAGE_Array8m_HPP_
