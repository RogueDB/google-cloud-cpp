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

#include "google/cloud/compute/routers/v1/internal/routers_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_routers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RoutersRestMetadata::RoutersRestMetadata(std::shared_ptr<RoutersRestStub> child,
                                         std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::RouterAggregatedList>
RoutersRestMetadata::AggregatedListRouters(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::
        AggregatedListRoutersRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListRouters(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersRestMetadata::AsyncDeleteRouter(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::routers::v1::DeleteRouterRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteRouter(cq, std::move(rest_context),
                                   std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersRestMetadata::DeleteRouter(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::DeleteRouterRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->DeleteRouter(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersRestMetadata::AsyncDeleteRoutePolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::routers::v1::DeleteRoutePolicyRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteRoutePolicy(cq, std::move(rest_context),
                                        std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersRestMetadata::DeleteRoutePolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::DeleteRoutePolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->DeleteRoutePolicy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Router>
RoutersRestMetadata::GetRouter(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::GetRouterRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetRouter(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::NatIpInfoResponse>
RoutersRestMetadata::GetNatIpInfo(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::GetNatIpInfoRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetNatIpInfo(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::VmEndpointNatMappingsList>
RoutersRestMetadata::GetNatMappingInfo(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::GetNatMappingInfoRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetNatMappingInfo(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::RoutersGetRoutePolicyResponse>
RoutersRestMetadata::GetRoutePolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::GetRoutePolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetRoutePolicy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::RouterStatusResponse>
RoutersRestMetadata::GetRouterStatus(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::GetRouterStatusRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetRouterStatus(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersRestMetadata::AsyncInsertRouter(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::routers::v1::InsertRouterRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertRouter(cq, std::move(rest_context),
                                   std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersRestMetadata::InsertRouter(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::InsertRouterRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->InsertRouter(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::RouterList>
RoutersRestMetadata::ListRouters(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::ListRoutersRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListRouters(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::RoutersListBgpRoutes>
RoutersRestMetadata::ListBgpRoutes(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::ListBgpRoutesRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListBgpRoutes(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::RoutersListRoutePolicies>
RoutersRestMetadata::ListRoutePolicies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::ListRoutePoliciesRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListRoutePolicies(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersRestMetadata::AsyncPatchRouter(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::routers::v1::PatchRouterRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchRouter(cq, std::move(rest_context),
                                  std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersRestMetadata::PatchRouter(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::PatchRouterRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->PatchRouter(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersRestMetadata::AsyncPatchRoutePolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::routers::v1::PatchRoutePolicyRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchRoutePolicy(cq, std::move(rest_context),
                                       std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersRestMetadata::PatchRoutePolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::PatchRoutePolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->PatchRoutePolicy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::RoutersPreviewResponse>
RoutersRestMetadata::Preview(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::PreviewRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->Preview(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersRestMetadata::AsyncUpdateRouter(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::routers::v1::UpdateRouterRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncUpdateRouter(cq, std::move(rest_context),
                                   std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersRestMetadata::UpdateRouter(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::UpdateRouterRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->UpdateRouter(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersRestMetadata::AsyncUpdateRoutePolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::routers::v1::UpdateRoutePolicyRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncUpdateRoutePolicy(cq, std::move(rest_context),
                                        std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RoutersRestMetadata::UpdateRoutePolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::routers::v1::UpdateRoutePolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->UpdateRoutePolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RoutersRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> RoutersRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void RoutersRestMetadata::SetMetadata(rest_internal::RestContext& rest_context,
                                      Options const& options,
                                      std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routers_v1_internal
}  // namespace cloud
}  // namespace google
