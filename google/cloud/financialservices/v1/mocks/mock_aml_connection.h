// Copyright 2025 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/financialservices/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FINANCIALSERVICES_V1_MOCKS_MOCK_AML_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FINANCIALSERVICES_V1_MOCKS_MOCK_AML_CONNECTION_H

#include "google/cloud/financialservices/v1/aml_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace financialservices_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `AMLConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `AMLClient`. To do so,
 * construct an object of type `AMLClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockAMLConnection : public financialservices_v1::AMLConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::financialservices::v1::Instance>),
      ListInstances,
      (google::cloud::financialservices::v1::ListInstancesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::financialservices::v1::Instance>, GetInstance,
      (google::cloud::financialservices::v1::GetInstanceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateInstance(Matcher<google::cloud::financialservices::v1::CreateInstanceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::Instance>>,
      CreateInstance,
      (google::cloud::financialservices::v1::CreateInstanceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateInstance(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateInstance,
      (NoAwaitTag,
       google::cloud::financialservices::v1::CreateInstanceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateInstance(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::Instance>>,
              CreateInstance, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateInstance(Matcher<google::cloud::financialservices::v1::UpdateInstanceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::Instance>>,
      UpdateInstance,
      (google::cloud::financialservices::v1::UpdateInstanceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateInstance(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateInstance,
      (NoAwaitTag,
       google::cloud::financialservices::v1::UpdateInstanceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateInstance(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::Instance>>,
              UpdateInstance, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteInstance(Matcher<google::cloud::financialservices::v1::DeleteInstanceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteInstance,
      (google::cloud::financialservices::v1::DeleteInstanceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteInstance(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteInstance,
      (NoAwaitTag,
       google::cloud::financialservices::v1::DeleteInstanceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteInstance(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteInstance, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ImportRegisteredParties(Matcher<google::cloud::financialservices::v1::ImportRegisteredPartiesRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ImportRegisteredPartiesResponse>>,
              ImportRegisteredParties,
              (google::cloud::financialservices::v1::
                   ImportRegisteredPartiesRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ImportRegisteredParties(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ImportRegisteredParties,
              (NoAwaitTag, google::cloud::financialservices::v1::
                               ImportRegisteredPartiesRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ImportRegisteredParties(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ImportRegisteredPartiesResponse>>,
              ImportRegisteredParties,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportRegisteredParties(Matcher<google::cloud::financialservices::v1::ExportRegisteredPartiesRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ExportRegisteredPartiesResponse>>,
              ExportRegisteredParties,
              (google::cloud::financialservices::v1::
                   ExportRegisteredPartiesRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ExportRegisteredParties(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ExportRegisteredParties,
              (NoAwaitTag, google::cloud::financialservices::v1::
                               ExportRegisteredPartiesRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportRegisteredParties(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ExportRegisteredPartiesResponse>>,
              ExportRegisteredParties,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::financialservices::v1::Dataset>),
      ListDatasets,
      (google::cloud::financialservices::v1::ListDatasetsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::financialservices::v1::Dataset>, GetDataset,
      (google::cloud::financialservices::v1::GetDatasetRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateDataset(Matcher<google::cloud::financialservices::v1::CreateDatasetRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::Dataset>>,
              CreateDataset,
              (google::cloud::financialservices::v1::CreateDatasetRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateDataset(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateDataset,
              (NoAwaitTag,
               google::cloud::financialservices::v1::CreateDatasetRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateDataset(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::Dataset>>,
              CreateDataset, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateDataset(Matcher<google::cloud::financialservices::v1::UpdateDatasetRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::Dataset>>,
              UpdateDataset,
              (google::cloud::financialservices::v1::UpdateDatasetRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateDataset(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateDataset,
              (NoAwaitTag,
               google::cloud::financialservices::v1::UpdateDatasetRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateDataset(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::Dataset>>,
              UpdateDataset, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteDataset(Matcher<google::cloud::financialservices::v1::DeleteDatasetRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteDataset,
      (google::cloud::financialservices::v1::DeleteDatasetRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteDataset(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteDataset,
              (NoAwaitTag,
               google::cloud::financialservices::v1::DeleteDatasetRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteDataset(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteDataset, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::financialservices::v1::Model>),
              ListModels,
              (google::cloud::financialservices::v1::ListModelsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::financialservices::v1::Model>, GetModel,
      (google::cloud::financialservices::v1::GetModelRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateModel(Matcher<google::cloud::financialservices::v1::CreateModelRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::Model>>,
      CreateModel,
      (google::cloud::financialservices::v1::CreateModelRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateModel(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateModel,
      (NoAwaitTag,
       google::cloud::financialservices::v1::CreateModelRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateModel(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::Model>>,
              CreateModel, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateModel(Matcher<google::cloud::financialservices::v1::UpdateModelRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::Model>>,
      UpdateModel,
      (google::cloud::financialservices::v1::UpdateModelRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateModel(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateModel,
      (NoAwaitTag,
       google::cloud::financialservices::v1::UpdateModelRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateModel(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::Model>>,
              UpdateModel, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportModelMetadata(Matcher<google::cloud::financialservices::v1::ExportModelMetadataRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::financialservices::v1::ExportModelMetadataResponse>>,
      ExportModelMetadata,
      (google::cloud::financialservices::v1::ExportModelMetadataRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ExportModelMetadata(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ExportModelMetadata,
      (NoAwaitTag,
       google::cloud::financialservices::v1::ExportModelMetadataRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportModelMetadata(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::financialservices::v1::ExportModelMetadataResponse>>,
      ExportModelMetadata, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteModel(Matcher<google::cloud::financialservices::v1::DeleteModelRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteModel,
      (google::cloud::financialservices::v1::DeleteModelRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteModel(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteModel,
      (NoAwaitTag,
       google::cloud::financialservices::v1::DeleteModelRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteModel(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteModel, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::financialservices::v1::EngineConfig>),
      ListEngineConfigs,
      (google::cloud::financialservices::v1::ListEngineConfigsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::financialservices::v1::EngineConfig>,
      GetEngineConfig,
      (google::cloud::financialservices::v1::GetEngineConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateEngineConfig(Matcher<google::cloud::financialservices::v1::CreateEngineConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::EngineConfig>>,
      CreateEngineConfig,
      (google::cloud::financialservices::v1::CreateEngineConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateEngineConfig(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateEngineConfig,
      (NoAwaitTag,
       google::cloud::financialservices::v1::CreateEngineConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateEngineConfig(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::EngineConfig>>,
      CreateEngineConfig, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateEngineConfig(Matcher<google::cloud::financialservices::v1::UpdateEngineConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::EngineConfig>>,
      UpdateEngineConfig,
      (google::cloud::financialservices::v1::UpdateEngineConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateEngineConfig(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateEngineConfig,
      (NoAwaitTag,
       google::cloud::financialservices::v1::UpdateEngineConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateEngineConfig(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::EngineConfig>>,
      UpdateEngineConfig, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportEngineConfigMetadata(Matcher<google::cloud::financialservices::v1::ExportEngineConfigMetadataRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ExportEngineConfigMetadataResponse>>,
              ExportEngineConfigMetadata,
              (google::cloud::financialservices::v1::
                   ExportEngineConfigMetadataRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ExportEngineConfigMetadata(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              ExportEngineConfigMetadata,
              (NoAwaitTag,
               google::cloud::financialservices::v1::
                   ExportEngineConfigMetadataRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportEngineConfigMetadata(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ExportEngineConfigMetadataResponse>>,
              ExportEngineConfigMetadata,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteEngineConfig(Matcher<google::cloud::financialservices::v1::DeleteEngineConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteEngineConfig,
      (google::cloud::financialservices::v1::DeleteEngineConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteEngineConfig(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteEngineConfig,
      (NoAwaitTag,
       google::cloud::financialservices::v1::DeleteEngineConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteEngineConfig(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteEngineConfig, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::financialservices::v1::EngineVersion>,
      GetEngineVersion,
      (google::cloud::financialservices::v1::GetEngineVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::financialservices::v1::EngineVersion>),
      ListEngineVersions,
      (google::cloud::financialservices::v1::ListEngineVersionsRequest request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::financialservices::v1::PredictionResult>),
      ListPredictionResults,
      (google::cloud::financialservices::v1::ListPredictionResultsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::financialservices::v1::PredictionResult>,
      GetPredictionResult,
      (google::cloud::financialservices::v1::GetPredictionResultRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreatePredictionResult(Matcher<google::cloud::financialservices::v1::CreatePredictionResultRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::PredictionResult>>,
      CreatePredictionResult,
      (google::cloud::financialservices::v1::
           CreatePredictionResultRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreatePredictionResult(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreatePredictionResult,
              (NoAwaitTag, google::cloud::financialservices::v1::
                               CreatePredictionResultRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreatePredictionResult(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::PredictionResult>>,
      CreatePredictionResult, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdatePredictionResult(Matcher<google::cloud::financialservices::v1::UpdatePredictionResultRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::PredictionResult>>,
      UpdatePredictionResult,
      (google::cloud::financialservices::v1::
           UpdatePredictionResultRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdatePredictionResult(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdatePredictionResult,
              (NoAwaitTag, google::cloud::financialservices::v1::
                               UpdatePredictionResultRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdatePredictionResult(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::PredictionResult>>,
      UpdatePredictionResult, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportPredictionResultMetadata(Matcher<google::cloud::financialservices::v1::ExportPredictionResultMetadataRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ExportPredictionResultMetadataResponse>>,
              ExportPredictionResultMetadata,
              (google::cloud::financialservices::v1::
                   ExportPredictionResultMetadataRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ExportPredictionResultMetadata(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              ExportPredictionResultMetadata,
              (NoAwaitTag,
               google::cloud::financialservices::v1::
                   ExportPredictionResultMetadataRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportPredictionResultMetadata(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ExportPredictionResultMetadataResponse>>,
              ExportPredictionResultMetadata,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeletePredictionResult(Matcher<google::cloud::financialservices::v1::DeletePredictionResultRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeletePredictionResult,
      (google::cloud::financialservices::v1::
           DeletePredictionResultRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeletePredictionResult(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeletePredictionResult,
              (NoAwaitTag, google::cloud::financialservices::v1::
                               DeletePredictionResultRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeletePredictionResult(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeletePredictionResult, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::financialservices::v1::BacktestResult>),
      ListBacktestResults,
      (google::cloud::financialservices::v1::ListBacktestResultsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::financialservices::v1::BacktestResult>,
      GetBacktestResult,
      (google::cloud::financialservices::v1::GetBacktestResultRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateBacktestResult(Matcher<google::cloud::financialservices::v1::CreateBacktestResultRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::BacktestResult>>,
      CreateBacktestResult,
      (google::cloud::financialservices::v1::CreateBacktestResultRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateBacktestResult(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateBacktestResult,
      (NoAwaitTag,
       google::cloud::financialservices::v1::CreateBacktestResultRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateBacktestResult(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::BacktestResult>>,
      CreateBacktestResult, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateBacktestResult(Matcher<google::cloud::financialservices::v1::UpdateBacktestResultRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::BacktestResult>>,
      UpdateBacktestResult,
      (google::cloud::financialservices::v1::UpdateBacktestResultRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateBacktestResult(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateBacktestResult,
      (NoAwaitTag,
       google::cloud::financialservices::v1::UpdateBacktestResultRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateBacktestResult(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::BacktestResult>>,
      UpdateBacktestResult, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportBacktestResultMetadata(Matcher<google::cloud::financialservices::v1::ExportBacktestResultMetadataRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ExportBacktestResultMetadataResponse>>,
              ExportBacktestResultMetadata,
              (google::cloud::financialservices::v1::
                   ExportBacktestResultMetadataRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ExportBacktestResultMetadata(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              ExportBacktestResultMetadata,
              (NoAwaitTag,
               google::cloud::financialservices::v1::
                   ExportBacktestResultMetadataRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportBacktestResultMetadata(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::financialservices::v1::
                                  ExportBacktestResultMetadataResponse>>,
              ExportBacktestResultMetadata,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteBacktestResult(Matcher<google::cloud::financialservices::v1::DeleteBacktestResultRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteBacktestResult,
      (google::cloud::financialservices::v1::DeleteBacktestResultRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteBacktestResult(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteBacktestResult,
      (NoAwaitTag,
       google::cloud::financialservices::v1::DeleteBacktestResultRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteBacktestResult(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::financialservices::v1::OperationMetadata>>,
      DeleteBacktestResult, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteOperation,
              (google::longrunning::DeleteOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelOperation,
              (google::longrunning::CancelOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace financialservices_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FINANCIALSERVICES_V1_MOCKS_MOCK_AML_CONNECTION_H
