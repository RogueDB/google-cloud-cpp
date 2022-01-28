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
// source: google/cloud/osconfig/agentendpoint/v1/agentendpoint.proto

#include "google/cloud/osconfig/internal/agent_endpoint_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include "google/cloud/status_or.h"
#include <google/cloud/osconfig/agentendpoint/v1/agentendpoint.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentEndpointServiceLogging::AgentEndpointServiceLogging(
    std::shared_ptr<AgentEndpointServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationResponse>>
AgentEndpointServiceLogging::ReceiveTaskNotification(
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::unique_ptr<grpc::ClientContext> context,
             google::cloud::osconfig::agentendpoint::v1::
                 ReceiveTaskNotificationRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::cloud::osconfig::agentendpoint::v1::
                  ReceiveTaskNotificationResponse>> {
        auto stream =
            child_->ReceiveTaskNotification(std::move(context), request);
        if (components_.count("rpc-streams") > 0) {
          stream = absl::make_unique<
              google::cloud::internal::StreamingReadRpcLogging<
                  google::cloud::osconfig::agentendpoint::v1::
                      ReceiveTaskNotificationResponse>>(
              std::move(stream), tracing_options_,
              google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
AgentEndpointServiceLogging::StartNextTask(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 StartNextTaskRequest const& request) {
        return child_->StartNextTask(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
AgentEndpointServiceLogging::ReportTaskProgress(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 ReportTaskProgressRequest const& request) {
        return child_->ReportTaskProgress(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
AgentEndpointServiceLogging::ReportTaskComplete(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 ReportTaskCompleteRequest const& request) {
        return child_->ReportTaskComplete(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
AgentEndpointServiceLogging::RegisterAgent(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 RegisterAgentRequest const& request) {
        return child_->RegisterAgent(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
AgentEndpointServiceLogging::ReportInventory(
    grpc::ClientContext& context,
    google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::osconfig::agentendpoint::v1::
                 ReportInventoryRequest const& request) {
        return child_->ReportInventory(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_internal
}  // namespace cloud
}  // namespace google
