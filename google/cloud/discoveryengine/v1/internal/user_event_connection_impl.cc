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

#include "google/cloud/discoveryengine/v1/internal/user_event_connection_impl.h"
#include "google/cloud/discoveryengine/v1/internal/user_event_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<discoveryengine_v1::UserEventServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<discoveryengine_v1::UserEventServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<discoveryengine_v1::UserEventServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<discoveryengine_v1::UserEventServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<discoveryengine_v1::
               UserEventServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<discoveryengine_v1::UserEventServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

UserEventServiceConnectionImpl::UserEventServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<discoveryengine_v1_internal::UserEventServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      UserEventServiceConnection::options())) {}

StatusOr<google::cloud::discoveryengine::v1::UserEvent>
UserEventServiceConnectionImpl::WriteUserEvent(
    google::cloud::discoveryengine::v1::WriteUserEventRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->WriteUserEvent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::WriteUserEventRequest const&
                 request) {
        return stub_->WriteUserEvent(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::api::HttpBody>
UserEventServiceConnectionImpl::CollectUserEvent(
    google::cloud::discoveryengine::v1::CollectUserEventRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CollectUserEvent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::CollectUserEventRequest const&
                 request) {
        return stub_->CollectUserEvent(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::PurgeUserEventsResponse>>
UserEventServiceConnectionImpl::PurgeUserEvents(
    google::cloud::discoveryengine::v1::PurgeUserEventsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PurgeUserEvents(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::discoveryengine::v1::PurgeUserEventsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::discoveryengine::v1::PurgeUserEventsRequest const&
              request) {
        return stub->AsyncPurgeUserEvents(cq, std::move(context),
                                          std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::PurgeUserEventsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
UserEventServiceConnectionImpl::PurgeUserEvents(
    NoAwaitTag,
    google::cloud::discoveryengine::v1::PurgeUserEventsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PurgeUserEvents(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::PurgeUserEventsRequest const&
                 request) {
        return stub_->PurgeUserEvents(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::PurgeUserEventsResponse>>
UserEventServiceConnectionImpl::PurgeUserEvents(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::discoveryengine::v1::
                   PurgeUserEventsMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::discoveryengine::v1::PurgeUserEventsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to PurgeUserEvents",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::discoveryengine::v1::PurgeUserEventsResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::PurgeUserEventsResponse>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::ImportUserEventsResponse>>
UserEventServiceConnectionImpl::ImportUserEvents(
    google::cloud::discoveryengine::v1::ImportUserEventsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportUserEvents(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::discoveryengine::v1::ImportUserEventsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::discoveryengine::v1::ImportUserEventsRequest const&
              request) {
        return stub->AsyncImportUserEvents(cq, std::move(context),
                                           std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::ImportUserEventsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
UserEventServiceConnectionImpl::ImportUserEvents(
    NoAwaitTag,
    google::cloud::discoveryengine::v1::ImportUserEventsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportUserEvents(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::discoveryengine::v1::ImportUserEventsRequest const&
                 request) {
        return stub_->ImportUserEvents(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::discoveryengine::v1::ImportUserEventsResponse>>
UserEventServiceConnectionImpl::ImportUserEvents(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::discoveryengine::v1::
                   ImportUserEventsMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::discoveryengine::v1::ImportUserEventsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ImportUserEvents",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::discoveryengine::v1::ImportUserEventsResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::discoveryengine::v1::ImportUserEventsResponse>,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
