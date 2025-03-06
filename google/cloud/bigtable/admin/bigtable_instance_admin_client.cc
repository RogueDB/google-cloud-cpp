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

#include "google/cloud/bigtable/admin/bigtable_instance_admin_client.h"
#include "google/cloud/bigtable/admin/bigtable_instance_admin_options.h"
#include <memory>
#include <thread>
#include <utility>

namespace google {
namespace cloud {
namespace bigtable_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableInstanceAdminClient::BigtableInstanceAdminClient(
    std::shared_ptr<BigtableInstanceAdminConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
BigtableInstanceAdminClient::~BigtableInstanceAdminClient() = default;

future<StatusOr<google::bigtable::admin::v2::Instance>>
BigtableInstanceAdminClient::CreateInstance(
    std::string const& parent, std::string const& instance_id,
    google::bigtable::admin::v2::Instance const& instance,
    std::map<std::string, google::bigtable::admin::v2::Cluster> const& clusters,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CreateInstanceRequest request;
  request.set_parent(parent);
  request.set_instance_id(instance_id);
  *request.mutable_instance() = instance;
  *request.mutable_clusters() = {clusters.begin(), clusters.end()};
  return connection_->CreateInstance(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::CreateInstance(
    NoAwaitTag, std::string const& parent, std::string const& instance_id,
    google::bigtable::admin::v2::Instance const& instance,
    std::map<std::string, google::bigtable::admin::v2::Cluster> const& clusters,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CreateInstanceRequest request;
  request.set_parent(parent);
  request.set_instance_id(instance_id);
  *request.mutable_instance() = instance;
  *request.mutable_clusters() = {clusters.begin(), clusters.end()};
  return connection_->CreateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::Instance>>
BigtableInstanceAdminClient::CreateInstance(
    google::bigtable::admin::v2::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::CreateInstance(
    NoAwaitTag,
    google::bigtable::admin::v2::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::Instance>>
BigtableInstanceAdminClient::CreateInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(operation);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminClient::GetInstance(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminClient::GetInstance(
    google::bigtable::admin::v2::GetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

StatusOr<google::bigtable::admin::v2::ListInstancesResponse>
BigtableInstanceAdminClient::ListInstances(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StatusOr<google::bigtable::admin::v2::ListInstancesResponse>
BigtableInstanceAdminClient::ListInstances(
    google::bigtable::admin::v2::ListInstancesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(request);
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminClient::UpdateInstance(
    google::bigtable::admin::v2::Instance const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::bigtable::admin::v2::Instance>>
BigtableInstanceAdminClient::PartialUpdateInstance(
    google::bigtable::admin::v2::Instance const& instance,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::PartialUpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_update_mask() = update_mask;
  return connection_->PartialUpdateInstance(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::PartialUpdateInstance(
    NoAwaitTag, google::bigtable::admin::v2::Instance const& instance,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::PartialUpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_update_mask() = update_mask;
  return connection_->PartialUpdateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::Instance>>
BigtableInstanceAdminClient::PartialUpdateInstance(
    google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PartialUpdateInstance(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::PartialUpdateInstance(
    NoAwaitTag,
    google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PartialUpdateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::Instance>>
BigtableInstanceAdminClient::PartialUpdateInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PartialUpdateInstance(operation);
}

Status BigtableInstanceAdminClient::DeleteInstance(std::string const& name,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(request);
}

Status BigtableInstanceAdminClient::DeleteInstance(
    google::bigtable::admin::v2::DeleteInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(request);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminClient::CreateCluster(
    std::string const& parent, std::string const& cluster_id,
    google::bigtable::admin::v2::Cluster const& cluster, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CreateClusterRequest request;
  request.set_parent(parent);
  request.set_cluster_id(cluster_id);
  *request.mutable_cluster() = cluster;
  return connection_->CreateCluster(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::CreateCluster(
    NoAwaitTag, std::string const& parent, std::string const& cluster_id,
    google::bigtable::admin::v2::Cluster const& cluster, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CreateClusterRequest request;
  request.set_parent(parent);
  request.set_cluster_id(cluster_id);
  *request.mutable_cluster() = cluster;
  return connection_->CreateCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminClient::CreateCluster(
    google::bigtable::admin::v2::CreateClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCluster(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::CreateCluster(
    NoAwaitTag,
    google::bigtable::admin::v2::CreateClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminClient::CreateCluster(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCluster(operation);
}

StatusOr<google::bigtable::admin::v2::Cluster>
BigtableInstanceAdminClient::GetCluster(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::GetClusterRequest request;
  request.set_name(name);
  return connection_->GetCluster(request);
}

StatusOr<google::bigtable::admin::v2::Cluster>
BigtableInstanceAdminClient::GetCluster(
    google::bigtable::admin::v2::GetClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCluster(request);
}

StatusOr<google::bigtable::admin::v2::ListClustersResponse>
BigtableInstanceAdminClient::ListClusters(std::string const& parent,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::ListClustersRequest request;
  request.set_parent(parent);
  return connection_->ListClusters(request);
}

StatusOr<google::bigtable::admin::v2::ListClustersResponse>
BigtableInstanceAdminClient::ListClusters(
    google::bigtable::admin::v2::ListClustersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListClusters(request);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminClient::UpdateCluster(
    google::bigtable::admin::v2::Cluster const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCluster(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::UpdateCluster(
    NoAwaitTag, google::bigtable::admin::v2::Cluster const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminClient::UpdateCluster(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCluster(operation);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminClient::PartialUpdateCluster(
    google::bigtable::admin::v2::Cluster const& cluster,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::PartialUpdateClusterRequest request;
  *request.mutable_cluster() = cluster;
  *request.mutable_update_mask() = update_mask;
  return connection_->PartialUpdateCluster(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::PartialUpdateCluster(
    NoAwaitTag, google::bigtable::admin::v2::Cluster const& cluster,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::PartialUpdateClusterRequest request;
  *request.mutable_cluster() = cluster;
  *request.mutable_update_mask() = update_mask;
  return connection_->PartialUpdateCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminClient::PartialUpdateCluster(
    google::bigtable::admin::v2::PartialUpdateClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PartialUpdateCluster(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::PartialUpdateCluster(
    NoAwaitTag,
    google::bigtable::admin::v2::PartialUpdateClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PartialUpdateCluster(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::Cluster>>
BigtableInstanceAdminClient::PartialUpdateCluster(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PartialUpdateCluster(operation);
}

Status BigtableInstanceAdminClient::DeleteCluster(std::string const& name,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::DeleteClusterRequest request;
  request.set_name(name);
  return connection_->DeleteCluster(request);
}

Status BigtableInstanceAdminClient::DeleteCluster(
    google::bigtable::admin::v2::DeleteClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCluster(request);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminClient::CreateAppProfile(
    std::string const& parent, std::string const& app_profile_id,
    google::bigtable::admin::v2::AppProfile const& app_profile, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::CreateAppProfileRequest request;
  request.set_parent(parent);
  request.set_app_profile_id(app_profile_id);
  *request.mutable_app_profile() = app_profile;
  return connection_->CreateAppProfile(request);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminClient::CreateAppProfile(
    google::bigtable::admin::v2::CreateAppProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAppProfile(request);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminClient::GetAppProfile(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::GetAppProfileRequest request;
  request.set_name(name);
  return connection_->GetAppProfile(request);
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminClient::GetAppProfile(
    google::bigtable::admin::v2::GetAppProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAppProfile(request);
}

StreamRange<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminClient::ListAppProfiles(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::ListAppProfilesRequest request;
  request.set_parent(parent);
  return connection_->ListAppProfiles(request);
}

StreamRange<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminClient::ListAppProfiles(
    google::bigtable::admin::v2::ListAppProfilesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAppProfiles(std::move(request));
}

future<StatusOr<google::bigtable::admin::v2::AppProfile>>
BigtableInstanceAdminClient::UpdateAppProfile(
    google::bigtable::admin::v2::AppProfile const& app_profile,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::UpdateAppProfileRequest request;
  *request.mutable_app_profile() = app_profile;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAppProfile(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::UpdateAppProfile(
    NoAwaitTag, google::bigtable::admin::v2::AppProfile const& app_profile,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::UpdateAppProfileRequest request;
  *request.mutable_app_profile() = app_profile;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAppProfile(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::AppProfile>>
BigtableInstanceAdminClient::UpdateAppProfile(
    google::bigtable::admin::v2::UpdateAppProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAppProfile(request);
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminClient::UpdateAppProfile(
    NoAwaitTag,
    google::bigtable::admin::v2::UpdateAppProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAppProfile(NoAwaitTag{}, request);
}

future<StatusOr<google::bigtable::admin::v2::AppProfile>>
BigtableInstanceAdminClient::UpdateAppProfile(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAppProfile(operation);
}

Status BigtableInstanceAdminClient::DeleteAppProfile(std::string const& name,
                                                     bool ignore_warnings,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::DeleteAppProfileRequest request;
  request.set_name(name);
  request.set_ignore_warnings(ignore_warnings);
  return connection_->DeleteAppProfile(request);
}

Status BigtableInstanceAdminClient::DeleteAppProfile(
    google::bigtable::admin::v2::DeleteAppProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAppProfile(request);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminClient::GetIamPolicy(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminClient::SetIamPolicy(
    std::string const& resource, google::iam::v1::Policy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminClient::SetIamPolicy(
    std::string const& resource, IamUpdater const& updater, Options opts) {
  internal::CheckExpectedOptions<BigtableInstanceAdminBackoffPolicyOption>(
      opts, __func__);
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest get_request;
  get_request.set_resource(resource);
  google::iam::v1::SetIamPolicyRequest set_request;
  set_request.set_resource(resource);
  auto backoff_policy = internal::CurrentOptions()
                            .get<BigtableInstanceAdminBackoffPolicyOption>();
  if (backoff_policy != nullptr) {
    backoff_policy = backoff_policy->clone();
  }
  for (;;) {
    auto recent = connection_->GetIamPolicy(get_request);
    if (!recent) {
      return recent.status();
    }
    auto policy = updater(*std::move(recent));
    if (!policy) {
      return internal::CancelledError(
          "updater did not yield a policy",
          GCP_ERROR_INFO().WithMetadata("gl-cpp.error.origin", "client"));
    }
    *set_request.mutable_policy() = *std::move(policy);
    auto result = connection_->SetIamPolicy(set_request);
    if (result || result.status().code() != StatusCode::kAborted ||
        backoff_policy == nullptr) {
      return result;
    }
    std::this_thread::sleep_for(backoff_policy->OnCompletion());
  }
}

StatusOr<google::iam::v1::Policy> BigtableInstanceAdminClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableInstanceAdminClient::TestIamPermissions(
    std::string const& resource, std::vector<std::string> const& permissions,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  *request.mutable_permissions() = {permissions.begin(), permissions.end()};
  return connection_->TestIamPermissions(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableInstanceAdminClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::bigtable::admin::v2::HotTablet>
BigtableInstanceAdminClient::ListHotTablets(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::bigtable::admin::v2::ListHotTabletsRequest request;
  request.set_parent(parent);
  return connection_->ListHotTablets(request);
}

StreamRange<google::bigtable::admin::v2::HotTablet>
BigtableInstanceAdminClient::ListHotTablets(
    google::bigtable::admin::v2::ListHotTabletsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListHotTablets(std::move(request));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin
}  // namespace cloud
}  // namespace google
