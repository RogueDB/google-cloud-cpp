// Copyright 2022 Google LLC
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
// source: google/cloud/workflows/v1/workflows.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_MOCKS_MOCK_WORKFLOWS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_MOCKS_MOCK_WORKFLOWS_CONNECTION_H

#include "google/cloud/workflows/v1/workflows_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace workflows_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `WorkflowsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `WorkflowsClient`. To do so,
 * construct an object of type `WorkflowsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockWorkflowsConnection : public workflows_v1::WorkflowsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::workflows::v1::Workflow>),
              ListWorkflows,
              (google::cloud::workflows::v1::ListWorkflowsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::workflows::v1::Workflow>, GetWorkflow,
              (google::cloud::workflows::v1::GetWorkflowRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateWorkflow(Matcher<google::cloud::workflows::v1::CreateWorkflowRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::workflows::v1::Workflow>>, CreateWorkflow,
      (google::cloud::workflows::v1::CreateWorkflowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateWorkflow(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateWorkflow,
      (NoAwaitTag,
       google::cloud::workflows::v1::CreateWorkflowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateWorkflow(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::workflows::v1::Workflow>>,
              CreateWorkflow, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteWorkflow(Matcher<google::cloud::workflows::v1::DeleteWorkflowRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::workflows::v1::OperationMetadata>>,
      DeleteWorkflow,
      (google::cloud::workflows::v1::DeleteWorkflowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteWorkflow(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteWorkflow,
      (NoAwaitTag,
       google::cloud::workflows::v1::DeleteWorkflowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteWorkflow(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::workflows::v1::OperationMetadata>>,
              DeleteWorkflow, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateWorkflow(Matcher<google::cloud::workflows::v1::UpdateWorkflowRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::workflows::v1::Workflow>>, UpdateWorkflow,
      (google::cloud::workflows::v1::UpdateWorkflowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateWorkflow(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateWorkflow,
      (NoAwaitTag,
       google::cloud::workflows::v1::UpdateWorkflowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateWorkflow(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::workflows::v1::Workflow>>,
              UpdateWorkflow, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::workflows::v1::Workflow>),
      ListWorkflowRevisions,
      (google::cloud::workflows::v1::ListWorkflowRevisionsRequest request),
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
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_MOCKS_MOCK_WORKFLOWS_CONNECTION_H
