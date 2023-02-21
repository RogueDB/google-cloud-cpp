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
// source: google/cloud/asset/v1/asset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_V1_ASSET_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_V1_ASSET_CONNECTION_H

#include "google/cloud/asset/v1/asset_connection_idempotency_policy.h"
#include "google/cloud/asset/v1/internal/asset_retry_traits.h"
#include "google/cloud/asset/v1/internal/asset_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace asset_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AssetServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        asset_v1_internal::AssetServiceRetryTraits>;

using AssetServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        asset_v1_internal::AssetServiceRetryTraits>;

using AssetServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        asset_v1_internal::AssetServiceRetryTraits>;

/**
 * The `AssetServiceConnection` object for `AssetServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AssetServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `AssetServiceClient`.
 *
 * To create a concrete instance, see `MakeAssetServiceConnection()`.
 *
 * For mocking, see `asset_v1_mocks::MockAssetServiceConnection`.
 */
class AssetServiceConnection {
 public:
  virtual ~AssetServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::asset::v1::ExportAssetsResponse>>
  ExportAssets(google::cloud::asset::v1::ExportAssetsRequest const& request);

  virtual StreamRange<google::cloud::asset::v1::Asset> ListAssets(
      google::cloud::asset::v1::ListAssetsRequest request);

  virtual StatusOr<google::cloud::asset::v1::BatchGetAssetsHistoryResponse>
  BatchGetAssetsHistory(
      google::cloud::asset::v1::BatchGetAssetsHistoryRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::Feed> CreateFeed(
      google::cloud::asset::v1::CreateFeedRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::Feed> GetFeed(
      google::cloud::asset::v1::GetFeedRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::ListFeedsResponse> ListFeeds(
      google::cloud::asset::v1::ListFeedsRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::Feed> UpdateFeed(
      google::cloud::asset::v1::UpdateFeedRequest const& request);

  virtual Status DeleteFeed(
      google::cloud::asset::v1::DeleteFeedRequest const& request);

  virtual StreamRange<google::cloud::asset::v1::ResourceSearchResult>
  SearchAllResources(
      google::cloud::asset::v1::SearchAllResourcesRequest request);

  virtual StreamRange<google::cloud::asset::v1::IamPolicySearchResult>
  SearchAllIamPolicies(
      google::cloud::asset::v1::SearchAllIamPoliciesRequest request);

  virtual StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyResponse>
  AnalyzeIamPolicy(
      google::cloud::asset::v1::AnalyzeIamPolicyRequest const& request);

  virtual future<
      StatusOr<google::cloud::asset::v1::AnalyzeIamPolicyLongrunningResponse>>
  AnalyzeIamPolicyLongrunning(
      google::cloud::asset::v1::AnalyzeIamPolicyLongrunningRequest const&
          request);

  virtual StatusOr<google::cloud::asset::v1::AnalyzeMoveResponse> AnalyzeMove(
      google::cloud::asset::v1::AnalyzeMoveRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::QueryAssetsResponse> QueryAssets(
      google::cloud::asset::v1::QueryAssetsRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::SavedQuery> CreateSavedQuery(
      google::cloud::asset::v1::CreateSavedQueryRequest const& request);

  virtual StatusOr<google::cloud::asset::v1::SavedQuery> GetSavedQuery(
      google::cloud::asset::v1::GetSavedQueryRequest const& request);

  virtual StreamRange<google::cloud::asset::v1::SavedQuery> ListSavedQueries(
      google::cloud::asset::v1::ListSavedQueriesRequest request);

  virtual StatusOr<google::cloud::asset::v1::SavedQuery> UpdateSavedQuery(
      google::cloud::asset::v1::UpdateSavedQueryRequest const& request);

  virtual Status DeleteSavedQuery(
      google::cloud::asset::v1::DeleteSavedQueryRequest const& request);

  virtual StatusOr<
      google::cloud::asset::v1::BatchGetEffectiveIamPoliciesResponse>
  BatchGetEffectiveIamPolicies(
      google::cloud::asset::v1::BatchGetEffectiveIamPoliciesRequest const&
          request);

  virtual StreamRange<
      google::cloud::asset::v1::AnalyzeOrgPoliciesResponse::OrgPolicyResult>
  AnalyzeOrgPolicies(
      google::cloud::asset::v1::AnalyzeOrgPoliciesRequest request);

  virtual StreamRange<
      google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersResponse::
          GovernedContainer>
  AnalyzeOrgPolicyGovernedContainers(
      google::cloud::asset::v1::AnalyzeOrgPolicyGovernedContainersRequest
          request);

  virtual StreamRange<google::cloud::asset::v1::
                          AnalyzeOrgPolicyGovernedAssetsResponse::GovernedAsset>
  AnalyzeOrgPolicyGovernedAssets(
      google::cloud::asset::v1::AnalyzeOrgPolicyGovernedAssetsRequest request);
};

/**
 * A factory function to construct an object of type `AssetServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of AssetServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AssetServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::asset_v1::AssetServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `AssetServiceConnection` created by
 * this function.
 */
std::shared_ptr<AssetServiceConnection> MakeAssetServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace asset_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSET_V1_ASSET_CONNECTION_H
