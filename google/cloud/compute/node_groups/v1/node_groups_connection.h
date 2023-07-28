// Copyright 2023 Google LLC
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
// source: google/cloud/compute/node_groups/v1/node_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_NODE_GROUPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_NODE_GROUPS_CONNECTION_H

#include "google/cloud/compute/node_groups/v1/internal/node_groups_retry_traits.h"
#include "google/cloud/compute/node_groups/v1/node_groups_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/node_groups/v1/node_groups.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `NodeGroupsConnection`.
class NodeGroupsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<NodeGroupsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `NodeGroupsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NodeGroupsLimitedErrorCountRetryPolicy : public NodeGroupsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit NodeGroupsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  NodeGroupsLimitedErrorCountRetryPolicy(
      NodeGroupsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : NodeGroupsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  NodeGroupsLimitedErrorCountRetryPolicy(
      NodeGroupsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : NodeGroupsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<NodeGroupsRetryPolicy> clone() const override {
    return std::make_unique<NodeGroupsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NodeGroupsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      compute_node_groups_v1_internal::NodeGroupsRetryTraits>
      impl_;
};

/**
 * A retry policy for `NodeGroupsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NodeGroupsLimitedTimeRetryPolicy : public NodeGroupsRetryPolicy {
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
  explicit NodeGroupsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  NodeGroupsLimitedTimeRetryPolicy(
      NodeGroupsLimitedTimeRetryPolicy&& rhs) noexcept
      : NodeGroupsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  NodeGroupsLimitedTimeRetryPolicy(
      NodeGroupsLimitedTimeRetryPolicy const& rhs) noexcept
      : NodeGroupsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<NodeGroupsRetryPolicy> clone() const override {
    return std::make_unique<NodeGroupsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NodeGroupsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      compute_node_groups_v1_internal::NodeGroupsRetryTraits>
      impl_;
};

/**
 * The `NodeGroupsConnection` object for `NodeGroupsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NodeGroupsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `NodeGroupsClient`.
 *
 * To create a concrete instance, see `MakeNodeGroupsConnection()`.
 *
 * For mocking, see `compute_node_groups_v1_mocks::MockNodeGroupsConnection`.
 */
class NodeGroupsConnection {
 public:
  virtual ~NodeGroupsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddNodes(
      google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeGroupAggregatedList>
  AggregatedListNodeGroups(google::cloud::cpp::compute::node_groups::v1::
                               AggregatedListNodeGroupsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNodeGroups(google::cloud::cpp::compute::node_groups::v1::
                       DeleteNodeGroupsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNodes(
      google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeGroup> GetNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::GetNodeGroupsRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNodeGroups(google::cloud::cpp::compute::node_groups::v1::
                       InsertNodeGroupsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::NodeGroup>
  ListNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest
          request);

  virtual StreamRange<google::cloud::cpp::compute::v1::NodeGroupNode> ListNodes(
      google::cloud::cpp::compute::node_groups::v1::ListNodesRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNodeGroups(google::cloud::cpp::compute::node_groups::v1::
                      PatchNodeGroupsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetNodeTemplate(google::cloud::cpp::compute::node_groups::v1::
                      SetNodeTemplateRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SimulateMaintenanceEvent(google::cloud::cpp::compute::node_groups::v1::
                               SimulateMaintenanceEventRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::node_groups::v1::
                         TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_NODE_GROUPS_CONNECTION_H
