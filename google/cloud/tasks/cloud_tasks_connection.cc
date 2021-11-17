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

#include "google/cloud/tasks/cloud_tasks_connection.h"
#include "google/cloud/tasks/cloud_tasks_options.h"
#include "google/cloud/tasks/internal/cloud_tasks_option_defaults.h"
#include "google/cloud/tasks/internal/cloud_tasks_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace tasks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudTasksConnection::~CloudTasksConnection() = default;

StreamRange<google::cloud::tasks::v2::Queue> CloudTasksConnection::ListQueues(
    google::cloud::tasks::v2::ListQueuesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::tasks::v2::Queue>>(
      std::move(request),
      [](google::cloud::tasks::v2::ListQueuesRequest const&) {
        return StatusOr<google::cloud::tasks::v2::ListQueuesResponse>{};
      },
      [](google::cloud::tasks::v2::ListQueuesResponse const&) {
        return std::vector<google::cloud::tasks::v2::Queue>();
      });
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksConnection::GetQueue(
    google::cloud::tasks::v2::GetQueueRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksConnection::CreateQueue(
    google::cloud::tasks::v2::CreateQueueRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksConnection::UpdateQueue(
    google::cloud::tasks::v2::UpdateQueueRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudTasksConnection::DeleteQueue(
    google::cloud::tasks::v2::DeleteQueueRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksConnection::PurgeQueue(
    google::cloud::tasks::v2::PurgeQueueRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksConnection::PauseQueue(
    google::cloud::tasks::v2::PauseQueueRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::tasks::v2::Queue> CloudTasksConnection::ResumeQueue(
    google::cloud::tasks::v2::ResumeQueueRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> CloudTasksConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> CloudTasksConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudTasksConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::tasks::v2::Task> CloudTasksConnection::ListTasks(
    google::cloud::tasks::v2::ListTasksRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::tasks::v2::Task>>(
      std::move(request),
      [](google::cloud::tasks::v2::ListTasksRequest const&) {
        return StatusOr<google::cloud::tasks::v2::ListTasksResponse>{};
      },
      [](google::cloud::tasks::v2::ListTasksResponse const&) {
        return std::vector<google::cloud::tasks::v2::Task>();
      });
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksConnection::GetTask(
    google::cloud::tasks::v2::GetTaskRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksConnection::CreateTask(
    google::cloud::tasks::v2::CreateTaskRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CloudTasksConnection::DeleteTask(
    google::cloud::tasks::v2::DeleteTaskRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::tasks::v2::Task> CloudTasksConnection::RunTask(
    google::cloud::tasks::v2::RunTaskRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class CloudTasksConnectionImpl : public CloudTasksConnection {
 public:
  CloudTasksConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<tasks_internal::CloudTasksStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<CloudTasksRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<CloudTasksBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<CloudTasksConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~CloudTasksConnectionImpl() override = default;

  StreamRange<google::cloud::tasks::v2::Queue> ListQueues(
      google::cloud::tasks::v2::ListQueuesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<CloudTasksRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListQueues(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::tasks::v2::Queue>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::cloud::tasks::v2::ListQueuesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::cloud::tasks::v2::ListQueuesRequest const& request) {
                return stub->ListQueues(context, request);
              },
              r, function_name);
        },
        [](google::cloud::tasks::v2::ListQueuesResponse r) {
          std::vector<google::cloud::tasks::v2::Queue> result(
              r.queues().size());
          auto& messages = *r.mutable_queues();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::tasks::v2::Queue> GetQueue(
      google::cloud::tasks::v2::GetQueueRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetQueue(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::GetQueueRequest const& request) {
          return stub_->GetQueue(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::tasks::v2::Queue> CreateQueue(
      google::cloud::tasks::v2::CreateQueueRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateQueue(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::CreateQueueRequest const& request) {
          return stub_->CreateQueue(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::tasks::v2::Queue> UpdateQueue(
      google::cloud::tasks::v2::UpdateQueueRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateQueue(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::UpdateQueueRequest const& request) {
          return stub_->UpdateQueue(context, request);
        },
        request, __func__);
  }

  Status DeleteQueue(
      google::cloud::tasks::v2::DeleteQueueRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteQueue(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::DeleteQueueRequest const& request) {
          return stub_->DeleteQueue(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::tasks::v2::Queue> PurgeQueue(
      google::cloud::tasks::v2::PurgeQueueRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->PurgeQueue(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::PurgeQueueRequest const& request) {
          return stub_->PurgeQueue(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::tasks::v2::Queue> PauseQueue(
      google::cloud::tasks::v2::PauseQueueRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->PauseQueue(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::PauseQueueRequest const& request) {
          return stub_->PauseQueue(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::tasks::v2::Queue> ResumeQueue(
      google::cloud::tasks::v2::ResumeQueueRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ResumeQueue(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::ResumeQueueRequest const& request) {
          return stub_->ResumeQueue(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetIamPolicy(request),
        [this](grpc::ClientContext& context,
               google::iam::v1::GetIamPolicyRequest const& request) {
          return stub_->GetIamPolicy(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->SetIamPolicy(request),
        [this](grpc::ClientContext& context,
               google::iam::v1::SetIamPolicyRequest const& request) {
          return stub_->SetIamPolicy(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->TestIamPermissions(request),
        [this](grpc::ClientContext& context,
               google::iam::v1::TestIamPermissionsRequest const& request) {
          return stub_->TestIamPermissions(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::tasks::v2::Task> ListTasks(
      google::cloud::tasks::v2::ListTasksRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<CloudTasksRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListTasks(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::tasks::v2::Task>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::cloud::tasks::v2::ListTasksRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::cloud::tasks::v2::ListTasksRequest const& request) {
                return stub->ListTasks(context, request);
              },
              r, function_name);
        },
        [](google::cloud::tasks::v2::ListTasksResponse r) {
          std::vector<google::cloud::tasks::v2::Task> result(r.tasks().size());
          auto& messages = *r.mutable_tasks();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::tasks::v2::Task> GetTask(
      google::cloud::tasks::v2::GetTaskRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetTask(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::GetTaskRequest const& request) {
          return stub_->GetTask(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::tasks::v2::Task> CreateTask(
      google::cloud::tasks::v2::CreateTaskRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateTask(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::CreateTaskRequest const& request) {
          return stub_->CreateTask(context, request);
        },
        request, __func__);
  }

  Status DeleteTask(
      google::cloud::tasks::v2::DeleteTaskRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteTask(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::DeleteTaskRequest const& request) {
          return stub_->DeleteTask(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::tasks::v2::Task> RunTask(
      google::cloud::tasks::v2::RunTaskRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->RunTask(request),
        [this](grpc::ClientContext& context,
               google::cloud::tasks::v2::RunTaskRequest const& request) {
          return stub_->RunTask(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<tasks_internal::CloudTasksStub> stub_;
  std::unique_ptr<CloudTasksRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<CloudTasksConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<CloudTasksConnection> MakeCloudTasksConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 CloudTasksPolicyOptionList>(options, __func__);
  options = tasks_internal::CloudTasksDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      tasks_internal::CreateDefaultCloudTasksStub(background->cq(), options);
  return std::make_shared<CloudTasksConnectionImpl>(std::move(background),
                                                    std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace tasks_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<tasks::CloudTasksConnection> MakeCloudTasksConnection(
    std::shared_ptr<CloudTasksStub> stub, Options options) {
  options = CloudTasksDefaultOptions(std::move(options));
  return std::make_shared<tasks::CloudTasksConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_internal
}  // namespace cloud
}  // namespace google
