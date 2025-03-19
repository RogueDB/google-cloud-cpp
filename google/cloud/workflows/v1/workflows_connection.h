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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_WORKFLOWS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_WORKFLOWS_CONNECTION_H

#include "google/cloud/workflows/v1/internal/workflows_retry_traits.h"
#include "google/cloud/workflows/v1/workflows_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/workflows/v1/workflows.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace workflows_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `WorkflowsConnection`.
class WorkflowsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<WorkflowsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `WorkflowsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class WorkflowsLimitedErrorCountRetryPolicy : public WorkflowsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit WorkflowsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  WorkflowsLimitedErrorCountRetryPolicy(
      WorkflowsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : WorkflowsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  WorkflowsLimitedErrorCountRetryPolicy(
      WorkflowsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : WorkflowsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<WorkflowsRetryPolicy> clone() const override {
    return std::make_unique<WorkflowsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = WorkflowsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      workflows_v1_internal::WorkflowsRetryTraits>
      impl_;
};

/**
 * A retry policy for `WorkflowsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class WorkflowsLimitedTimeRetryPolicy : public WorkflowsRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit WorkflowsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  WorkflowsLimitedTimeRetryPolicy(
      WorkflowsLimitedTimeRetryPolicy&& rhs) noexcept
      : WorkflowsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  WorkflowsLimitedTimeRetryPolicy(
      WorkflowsLimitedTimeRetryPolicy const& rhs) noexcept
      : WorkflowsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<WorkflowsRetryPolicy> clone() const override {
    return std::make_unique<WorkflowsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = WorkflowsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      workflows_v1_internal::WorkflowsRetryTraits>
      impl_;
};

/**
 * The `WorkflowsConnection` object for `WorkflowsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `WorkflowsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `WorkflowsClient`.
 *
 * To create a concrete instance, see `MakeWorkflowsConnection()`.
 *
 * For mocking, see `workflows_v1_mocks::MockWorkflowsConnection`.
 */
class WorkflowsConnection {
 public:
  virtual ~WorkflowsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::workflows::v1::Workflow> ListWorkflows(
      google::cloud::workflows::v1::ListWorkflowsRequest request);

  virtual StatusOr<google::cloud::workflows::v1::Workflow> GetWorkflow(
      google::cloud::workflows::v1::GetWorkflowRequest const& request);

  virtual future<StatusOr<google::cloud::workflows::v1::Workflow>>
  CreateWorkflow(
      google::cloud::workflows::v1::CreateWorkflowRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateWorkflow(
      NoAwaitTag,
      google::cloud::workflows::v1::CreateWorkflowRequest const& request);

  virtual future<StatusOr<google::cloud::workflows::v1::Workflow>>
  CreateWorkflow(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::workflows::v1::OperationMetadata>>
  DeleteWorkflow(
      google::cloud::workflows::v1::DeleteWorkflowRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteWorkflow(
      NoAwaitTag,
      google::cloud::workflows::v1::DeleteWorkflowRequest const& request);

  virtual future<StatusOr<google::cloud::workflows::v1::OperationMetadata>>
  DeleteWorkflow(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::workflows::v1::Workflow>>
  UpdateWorkflow(
      google::cloud::workflows::v1::UpdateWorkflowRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateWorkflow(
      NoAwaitTag,
      google::cloud::workflows::v1::UpdateWorkflowRequest const& request);

  virtual future<StatusOr<google::cloud::workflows::v1::Workflow>>
  UpdateWorkflow(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::workflows::v1::Workflow>
  ListWorkflowRevisions(
      google::cloud::workflows::v1::ListWorkflowRevisionsRequest request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `WorkflowsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of WorkflowsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `WorkflowsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::workflows_v1::WorkflowsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `WorkflowsConnection` created by
 * this function.
 */
std::shared_ptr<WorkflowsConnection> MakeWorkflowsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_V1_WORKFLOWS_CONNECTION_H
