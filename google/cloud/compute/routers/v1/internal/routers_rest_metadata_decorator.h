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
// source: google/cloud/compute/routers/v1/routers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_INTERNAL_ROUTERS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_INTERNAL_ROUTERS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/routers/v1/internal/routers_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <google/cloud/compute/routers/v1/routers.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_routers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RoutersRestMetadata : public RoutersRestStub {
 public:
  ~RoutersRestMetadata() override = default;
  explicit RoutersRestMetadata(std::shared_ptr<RoutersRestStub> child,
                               std::string api_client_header = "");

  StatusOr<google::cloud::cpp::compute::v1::RouterAggregatedList>
  AggregatedListRouters(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::
          AggregatedListRoutersRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteRouter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::routers::v1::DeleteRouterRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteRouter(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::DeleteRouterRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteRoutePolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::routers::v1::DeleteRoutePolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteRoutePolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::DeleteRoutePolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Router> GetRouter(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::GetRouterRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::NatIpInfoResponse> GetNatIpInfo(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::GetNatIpInfoRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::VmEndpointNatMappingsList>
  GetNatMappingInfo(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::GetNatMappingInfoRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::RoutersGetRoutePolicyResponse>
  GetRoutePolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::GetRoutePolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::RouterStatusResponse>
  GetRouterStatus(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::GetRouterStatusRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertRouter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::routers::v1::InsertRouterRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertRouter(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::InsertRouterRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::RouterList> ListRouters(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::ListRoutersRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::RoutersListBgpRoutes> ListBgpRoutes(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::ListBgpRoutesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::RoutersListRoutePolicies>
  ListRoutePolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::ListRoutePoliciesRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchRouter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::routers::v1::PatchRouterRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchRouter(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::PatchRouterRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchRoutePolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::routers::v1::PatchRoutePolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchRoutePolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::PatchRoutePolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::RoutersPreviewResponse> Preview(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::PreviewRequest const& request)
      override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateRouter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::routers::v1::UpdateRouterRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateRouter(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::UpdateRouterRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateRoutePolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::routers::v1::UpdateRoutePolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateRoutePolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::routers::v1::UpdateRoutePolicyRequest const&
          request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<RoutersRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routers_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ROUTERS_V1_INTERNAL_ROUTERS_REST_METADATA_DECORATOR_H
