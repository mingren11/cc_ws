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

#ifndef EXPERIMENT_CONFIGURATION__MESSAGE_Array1m_HPP_
#define EXPERIMENT_CONFIGURATION__MESSAGE_Array1m_HPP_

#ifdef PERFORMANCE_TEST_RCLCPP_ENABLED
  #include <performance_test/msg/array1m.hpp>
#endif

#ifdef PERFORMANCE_TEST_FASTRTPS_ENABLED
  #include <fast_rtps/Array1mPubSubTypes.h>
#endif

#ifdef PERFORMANCE_TEST_CONNEXTDDSMICRO_ENABLED
  #include <performance_test/msg/dds_connext_micro_typefiles/Array1mSupport.h>
#endif

#ifdef PERFORMANCE_TEST_CONNEXTDDS_ENABLED
#include <connextdds/Array1mSupport.h>
#endif

#ifdef PERFORMANCE_TEST_CYCLONEDDS_ENABLED
  #include <cyclonedds/Array1m.h>
#endif

#ifdef PERFORMANCE_TEST_CYCLONEDDS_CXX_ENABLED
  #include <cyclonedds-cxx/Array1m.hpp>
#endif

#ifdef PERFORMANCE_TEST_OPENDDS_ENABLED
  #include <dds/DdsDcpsTopicC.h>
  #include <opendds/Array1mTypeSupportImpl.h>
#endif

#include <string>

namespace performance_test
{
namespace messages
{
class Array1m
{
public:
  static std::string msg_name()
  {
    return std::string("Array1m");
  }

#ifdef PERFORMANCE_TEST_RCLCPP_ENABLED
  using RosType = performance_test::msg::Array1m;
#endif

#ifdef PERFORMANCE_TEST_FASTRTPS_ENABLED
  using EprosimaTopicType = performance_test::msg::FastDDSGen::Array1mPubSubType;
  using EprosimaType = typename EprosimaTopicType::type;
#endif

#ifdef PERFORMANCE_TEST_CONNEXTDDSMICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msg_ConnextDDSMicroGen_Array1m;
#endif

#ifdef PERFORMANCE_TEST_CONNEXTDDS_ENABLED
  using ConnextDDSType = performance_test_msg_ConnextDDSGen_Array1m;
#endif

#ifdef PERFORMANCE_TEST_CYCLONEDDS_ENABLED
  using CycloneDDSType = performance_test_msg_CycloneDDSGen_Array1m;
  static const dds_topic_descriptor_t * CycloneDDSDesc()
  {
    return &performance_test_msg_CycloneDDSGen_Array1m_desc;
  }
#endif

#ifdef PERFORMANCE_TEST_CYCLONEDDS_CXX_ENABLED
  using CycloneDDSCXXType = performance_test::msg::CycloneDDSCXXGen::Array1m;
#endif

#ifdef PERFORMANCE_TEST_OPENDDS_ENABLED
  using OpenDDSTopicType = performance_test::msg::OpenDDSGen::Array1m;
  using OpenDDSDataWriterType = performance_test::msg::OpenDDSGen::Array1mDataWriter;
  using OpenDDSDataReaderType = performance_test::msg::OpenDDSGen::Array1mDataReader;
  using OpenDDSDataTypeSeq = performance_test::msg::OpenDDSGen::Array1mSeq;

  static DDS::TypeSupport_ptr get_type_support()
  {
    return new performance_test::msg::OpenDDSGen::Array1mTypeSupportImpl();
  }
#endif
};
}
}

#endif  // EXPERIMENT_CONFIGURATION__MESSAGE_Array1m_HPP_
