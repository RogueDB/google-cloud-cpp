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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TASKS_MOCKS_MOCK_CLOUD_TASKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TASKS_MOCKS_MOCK_CLOUD_TASKS_CONNECTION_H

#include "google/cloud/tasks/cloud_tasks_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace tasks_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MockCloudTasksConnection : public tasks::CloudTasksConnection {
 public:
  MOCK_METHOD(StreamRange<google::cloud::tasks::v2::Queue>, ListQueues,
              (google::cloud::tasks::v2::ListQueuesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::tasks::v2::Queue>, GetQueue,
              (google::cloud::tasks::v2::GetQueueRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::tasks::v2::Queue>, CreateQueue,
              (google::cloud::tasks::v2::CreateQueueRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::tasks::v2::Queue>, UpdateQueue,
              (google::cloud::tasks::v2::UpdateQueueRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteQueue,
              (google::cloud::tasks::v2::DeleteQueueRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::tasks::v2::Queue>, PurgeQueue,
              (google::cloud::tasks::v2::PurgeQueueRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::tasks::v2::Queue>, PauseQueue,
              (google::cloud::tasks::v2::PauseQueueRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::tasks::v2::Queue>, ResumeQueue,
              (google::cloud::tasks::v2::ResumeQueueRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::tasks::v2::Task>, ListTasks,
              (google::cloud::tasks::v2::ListTasksRequest request), (override));

  MOCK_METHOD(StatusOr<google::cloud::tasks::v2::Task>, GetTask,
              (google::cloud::tasks::v2::GetTaskRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::tasks::v2::Task>, CreateTask,
              (google::cloud::tasks::v2::CreateTaskRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteTask,
              (google::cloud::tasks::v2::DeleteTaskRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::tasks::v2::Task>, RunTask,
              (google::cloud::tasks::v2::RunTaskRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TASKS_MOCKS_MOCK_CLOUD_TASKS_CONNECTION_H
