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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_INTERNAL_WORKFLOWS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_INTERNAL_WORKFLOWS_METADATA_DECORATOR_H

#include "google/cloud/workflows/v1/internal/workflows_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace workflows_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WorkflowsMetadata : public WorkflowsStub {
 public:
  ~WorkflowsMetadata() override = default;
  WorkflowsMetadata(std::shared_ptr<WorkflowsStub> child,
                    std::multimap<std::string, std::string> fixed_metadata,
                    std::string api_client_header = "");

  StatusOr<google::cloud::workflows::v1::ListWorkflowsResponse> ListWorkflows(
      grpc::ClientContext& context, Options const& options,
      google::cloud::workflows::v1::ListWorkflowsRequest const& request)
      override;

  StatusOr<google::cloud::workflows::v1::Workflow> GetWorkflow(
      grpc::ClientContext& context, Options const& options,
      google::cloud::workflows::v1::GetWorkflowRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkflow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::workflows::v1::CreateWorkflowRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateWorkflow(
      grpc::ClientContext& context, Options options,
      google::cloud::workflows::v1::CreateWorkflowRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteWorkflow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::workflows::v1::DeleteWorkflowRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteWorkflow(
      grpc::ClientContext& context, Options options,
      google::cloud::workflows::v1::DeleteWorkflowRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateWorkflow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::workflows::v1::UpdateWorkflowRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateWorkflow(
      grpc::ClientContext& context, Options options,
      google::cloud::workflows::v1::UpdateWorkflowRequest const& request)
      override;

  StatusOr<google::cloud::workflows::v1::ListWorkflowRevisionsResponse>
  ListWorkflowRevisions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::workflows::v1::ListWorkflowRevisionsRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<WorkflowsStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_INTERNAL_WORKFLOWS_METADATA_DECORATOR_H
