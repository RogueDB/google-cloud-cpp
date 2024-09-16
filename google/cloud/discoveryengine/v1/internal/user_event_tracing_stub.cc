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
// source: google/cloud/discoveryengine/v1/user_event_service.proto

#include "google/cloud/discoveryengine/v1/internal/user_event_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

UserEventServiceTracingStub::UserEventServiceTracingStub(
    std::shared_ptr<UserEventServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::discoveryengine::v1::UserEvent>
UserEventServiceTracingStub::WriteUserEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::WriteUserEventRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.UserEventService", "WriteUserEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->WriteUserEvent(context, options, request));
}

StatusOr<google::api::HttpBody> UserEventServiceTracingStub::CollectUserEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::CollectUserEventRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.UserEventService", "CollectUserEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CollectUserEvent(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
UserEventServiceTracingStub::AsyncPurgeUserEvents(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::PurgeUserEventsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.UserEventService", "PurgeUserEvents");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncPurgeUserEvents(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
UserEventServiceTracingStub::PurgeUserEvents(
    grpc::ClientContext& context, Options options,
    google::cloud::discoveryengine::v1::PurgeUserEventsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.UserEventService", "PurgeUserEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->PurgeUserEvents(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
UserEventServiceTracingStub::AsyncImportUserEvents(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::ImportUserEventsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.UserEventService", "ImportUserEvents");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncImportUserEvents(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
UserEventServiceTracingStub::ImportUserEvents(
    grpc::ClientContext& context, Options options,
    google::cloud::discoveryengine::v1::ImportUserEventsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.UserEventService", "ImportUserEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ImportUserEvents(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
UserEventServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> UserEventServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<UserEventServiceStub> MakeUserEventServiceTracingStub(
    std::shared_ptr<UserEventServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<UserEventServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
