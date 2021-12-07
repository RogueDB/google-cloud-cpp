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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_INSTANCE_ADMIN_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_INSTANCE_ADMIN_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/bigtable/admin/v2/bigtable_instance_admin.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigtableInstanceAdminStub {
 public:
  virtual ~BigtableInstanceAdminStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CreateInstanceRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::Instance> GetInstance(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::GetInstanceRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::ListInstancesRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::Instance> UpdateInstance(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::Instance const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncPartialUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::PartialUpdateInstanceRequest const&
          request) = 0;

  virtual Status DeleteInstance(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::DeleteInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CreateClusterRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::Cluster> GetCluster(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::GetClusterRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::ListClustersResponse>
  ListClusters(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::ListClustersRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::Cluster const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncPartialUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::PartialUpdateClusterRequest const&
          request) = 0;

  virtual Status DeleteCluster(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::DeleteClusterRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::AppProfile> CreateAppProfile(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::CreateAppProfileRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::AppProfile> GetAppProfile(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::GetAppProfileRequest const& request) = 0;

  virtual StatusOr<google::bigtable::admin::v2::ListAppProfilesResponse>
  ListAppProfiles(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::ListAppProfilesRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateAppProfile(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::UpdateAppProfileRequest const& request) = 0;

  virtual Status DeleteAppProfile(
      grpc::ClientContext& context,
      google::bigtable::admin::v2::DeleteAppProfileRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultBigtableInstanceAdminStub : public BigtableInstanceAdminStub {
 public:
  DefaultBigtableInstanceAdminStub(
      std::unique_ptr<
          google::bigtable::admin::v2::BigtableInstanceAdmin::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CreateInstanceRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Instance> GetInstance(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::GetInstanceRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListInstancesResponse> ListInstances(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::ListInstancesRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Instance> UpdateInstance(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::Instance const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncPartialUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request)
      override;

  Status DeleteInstance(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::DeleteInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::CreateClusterRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Cluster> GetCluster(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::GetClusterRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListClustersResponse> ListClusters(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::ListClustersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::Cluster const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncPartialUpdateCluster(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::PartialUpdateClusterRequest const& request)
      override;

  Status DeleteCluster(grpc::ClientContext& client_context,
                       google::bigtable::admin::v2::DeleteClusterRequest const&
                           request) override;

  StatusOr<google::bigtable::admin::v2::AppProfile> CreateAppProfile(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::CreateAppProfileRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::AppProfile> GetAppProfile(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::GetAppProfileRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::ListAppProfilesResponse>
  ListAppProfiles(grpc::ClientContext& client_context,
                  google::bigtable::admin::v2::ListAppProfilesRequest const&
                      request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAppProfile(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::bigtable::admin::v2::UpdateAppProfileRequest const& request)
      override;

  Status DeleteAppProfile(
      grpc::ClientContext& client_context,
      google::bigtable::admin::v2::DeleteAppProfileRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::bigtable::admin::v2::BigtableInstanceAdmin::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_INSTANCE_ADMIN_STUB_H
