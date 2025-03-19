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

#include "google/cloud/workflows/v1/workflows_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace workflows_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkflowsClient::WorkflowsClient(
    std::shared_ptr<WorkflowsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
WorkflowsClient::~WorkflowsClient() = default;

StreamRange<google::cloud::workflows::v1::Workflow>
WorkflowsClient::ListWorkflows(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::v1::ListWorkflowsRequest request;
  request.set_parent(parent);
  return connection_->ListWorkflows(request);
}

StreamRange<google::cloud::workflows::v1::Workflow>
WorkflowsClient::ListWorkflows(
    google::cloud::workflows::v1::ListWorkflowsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListWorkflows(std::move(request));
}

StatusOr<google::cloud::workflows::v1::Workflow> WorkflowsClient::GetWorkflow(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::v1::GetWorkflowRequest request;
  request.set_name(name);
  return connection_->GetWorkflow(request);
}

StatusOr<google::cloud::workflows::v1::Workflow> WorkflowsClient::GetWorkflow(
    google::cloud::workflows::v1::GetWorkflowRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetWorkflow(request);
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsClient::CreateWorkflow(
    std::string const& parent,
    google::cloud::workflows::v1::Workflow const& workflow,
    std::string const& workflow_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::v1::CreateWorkflowRequest request;
  request.set_parent(parent);
  *request.mutable_workflow() = workflow;
  request.set_workflow_id(workflow_id);
  return connection_->CreateWorkflow(request);
}

StatusOr<google::longrunning::Operation> WorkflowsClient::CreateWorkflow(
    NoAwaitTag, std::string const& parent,
    google::cloud::workflows::v1::Workflow const& workflow,
    std::string const& workflow_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::v1::CreateWorkflowRequest request;
  request.set_parent(parent);
  *request.mutable_workflow() = workflow;
  request.set_workflow_id(workflow_id);
  return connection_->CreateWorkflow(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsClient::CreateWorkflow(
    google::cloud::workflows::v1::CreateWorkflowRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkflow(request);
}

StatusOr<google::longrunning::Operation> WorkflowsClient::CreateWorkflow(
    NoAwaitTag,
    google::cloud::workflows::v1::CreateWorkflowRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkflow(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsClient::CreateWorkflow(google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateWorkflow(operation);
}

future<StatusOr<google::cloud::workflows::v1::OperationMetadata>>
WorkflowsClient::DeleteWorkflow(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::v1::DeleteWorkflowRequest request;
  request.set_name(name);
  return connection_->DeleteWorkflow(request);
}

StatusOr<google::longrunning::Operation> WorkflowsClient::DeleteWorkflow(
    NoAwaitTag, std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::v1::DeleteWorkflowRequest request;
  request.set_name(name);
  return connection_->DeleteWorkflow(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workflows::v1::OperationMetadata>>
WorkflowsClient::DeleteWorkflow(
    google::cloud::workflows::v1::DeleteWorkflowRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkflow(request);
}

StatusOr<google::longrunning::Operation> WorkflowsClient::DeleteWorkflow(
    NoAwaitTag,
    google::cloud::workflows::v1::DeleteWorkflowRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkflow(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workflows::v1::OperationMetadata>>
WorkflowsClient::DeleteWorkflow(google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteWorkflow(operation);
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsClient::UpdateWorkflow(
    google::cloud::workflows::v1::Workflow const& workflow,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::v1::UpdateWorkflowRequest request;
  *request.mutable_workflow() = workflow;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkflow(request);
}

StatusOr<google::longrunning::Operation> WorkflowsClient::UpdateWorkflow(
    NoAwaitTag, google::cloud::workflows::v1::Workflow const& workflow,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::workflows::v1::UpdateWorkflowRequest request;
  *request.mutable_workflow() = workflow;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateWorkflow(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsClient::UpdateWorkflow(
    google::cloud::workflows::v1::UpdateWorkflowRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkflow(request);
}

StatusOr<google::longrunning::Operation> WorkflowsClient::UpdateWorkflow(
    NoAwaitTag,
    google::cloud::workflows::v1::UpdateWorkflowRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkflow(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::workflows::v1::Workflow>>
WorkflowsClient::UpdateWorkflow(google::longrunning::Operation const& operation,
                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateWorkflow(operation);
}

StreamRange<google::cloud::workflows::v1::Workflow>
WorkflowsClient::ListWorkflowRevisions(
    google::cloud::workflows::v1::ListWorkflowRevisionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListWorkflowRevisions(std::move(request));
}

StreamRange<google::cloud::location::Location> WorkflowsClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location> WorkflowsClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StreamRange<google::longrunning::Operation> WorkflowsClient::ListOperations(
    std::string const& name, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation> WorkflowsClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation> WorkflowsClient::GetOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation> WorkflowsClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status WorkflowsClient::DeleteOperation(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status WorkflowsClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_v1
}  // namespace cloud
}  // namespace google
