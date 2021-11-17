// Copyright 2021 Google LLC
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
// source: google/cloud/tasks/v2/cloudtasks.proto

#include "google/cloud/tasks/internal/cloud_tasks_auth_decorator.h"
#include <google/cloud/tasks/v2/cloudtasks.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace tasks_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudTasksAuth::CloudTasksAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CloudTasksStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::tasks::v2::ListQueuesResponse>
CloudTasksAuth::ListQueues(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ListQueuesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListQueues(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksAuth::GetQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::GetQueueRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksAuth::CreateQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::CreateQueueRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksAuth::UpdateQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::UpdateQueueRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateQueue(context, request);
}

Status CloudTasksAuth::DeleteQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::DeleteQueueRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksAuth::PurgeQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::PurgeQueueRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PurgeQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksAuth::PauseQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::PauseQueueRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PauseQueue(context, request);
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksAuth::ResumeQueue(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ResumeQueueRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ResumeQueue(context, request);
}

StatusOr<google::iam::v1::Policy> CloudTasksAuth::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> CloudTasksAuth::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudTasksAuth::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::cloud::tasks::v2::ListTasksResponse> CloudTasksAuth::ListTasks(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::ListTasksRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTasks(context, request);
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksAuth::GetTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::GetTaskRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTask(context, request);
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksAuth::CreateTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::CreateTaskRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTask(context, request);
}

Status CloudTasksAuth::DeleteTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::DeleteTaskRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTask(context, request);
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksAuth::RunTask(
    grpc::ClientContext& context,
    google::cloud::tasks::v2::RunTaskRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RunTask(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_internal
}  // namespace cloud
}  // namespace google
