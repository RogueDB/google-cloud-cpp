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

#include "google/cloud/osconfig/agent_endpoint_client.h"
#include "google/cloud/osconfig/internal/agent_endpoint_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace osconfig {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentEndpointServiceClient::AgentEndpointServiceClient(
    std::shared_ptr<AgentEndpointServiceConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(osconfig_internal::AgentEndpointServiceDefaultOptions(
          std::move(options))) {}
AgentEndpointServiceClient::~AgentEndpointServiceClient() = default;

StreamRange<
    google::cloud::osconfig::agentendpoint::v1::ReceiveTaskNotificationResponse>
AgentEndpointServiceClient::ReceiveTaskNotification(
    std::string const& instance_id_token, std::string const& agent_version,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::osconfig::agentendpoint::v1::ReceiveTaskNotificationRequest
      request;
  request.set_instance_id_token(instance_id_token);
  request.set_agent_version(agent_version);
  return connection_->ReceiveTaskNotification(request);
}

StreamRange<
    google::cloud::osconfig::agentendpoint::v1::ReceiveTaskNotificationResponse>
AgentEndpointServiceClient::ReceiveTaskNotification(
    google::cloud::osconfig::agentendpoint::v1::
        ReceiveTaskNotificationRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ReceiveTaskNotification(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
AgentEndpointServiceClient::StartNextTask(std::string const& instance_id_token,
                                          Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest request;
  request.set_instance_id_token(instance_id_token);
  return connection_->StartNextTask(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::StartNextTaskResponse>
AgentEndpointServiceClient::StartNextTask(
    google::cloud::osconfig::agentendpoint::v1::StartNextTaskRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->StartNextTask(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
AgentEndpointServiceClient::ReportTaskProgress(
    std::string const& instance_id_token, std::string const& task_id,
    google::cloud::osconfig::agentendpoint::v1::TaskType task_type,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressRequest request;
  request.set_instance_id_token(instance_id_token);
  request.set_task_id(task_id);
  request.set_task_type(task_type);
  return connection_->ReportTaskProgress(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressResponse>
AgentEndpointServiceClient::ReportTaskProgress(
    google::cloud::osconfig::agentendpoint::v1::ReportTaskProgressRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ReportTaskProgress(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
AgentEndpointServiceClient::ReportTaskComplete(
    std::string const& instance_id_token, std::string const& task_id,
    google::cloud::osconfig::agentendpoint::v1::TaskType task_type,
    std::string const& error_message, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteRequest request;
  request.set_instance_id_token(instance_id_token);
  request.set_task_id(task_id);
  request.set_task_type(task_type);
  request.set_error_message(error_message);
  return connection_->ReportTaskComplete(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteResponse>
AgentEndpointServiceClient::ReportTaskComplete(
    google::cloud::osconfig::agentendpoint::v1::ReportTaskCompleteRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ReportTaskComplete(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
AgentEndpointServiceClient::RegisterAgent(
    std::string const& instance_id_token, std::string const& agent_version,
    std::vector<std::string> const& supported_capabilities, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest request;
  request.set_instance_id_token(instance_id_token);
  request.set_agent_version(agent_version);
  *request.mutable_supported_capabilities() = {supported_capabilities.begin(),
                                               supported_capabilities.end()};
  return connection_->RegisterAgent(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::RegisterAgentResponse>
AgentEndpointServiceClient::RegisterAgent(
    google::cloud::osconfig::agentendpoint::v1::RegisterAgentRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->RegisterAgent(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
AgentEndpointServiceClient::ReportInventory(
    std::string const& instance_id_token, std::string const& inventory_checksum,
    google::cloud::osconfig::agentendpoint::v1::Inventory const& inventory,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest request;
  request.set_instance_id_token(instance_id_token);
  request.set_inventory_checksum(inventory_checksum);
  *request.mutable_inventory() = inventory;
  return connection_->ReportInventory(request);
}

StatusOr<google::cloud::osconfig::agentendpoint::v1::ReportInventoryResponse>
AgentEndpointServiceClient::ReportInventory(
    google::cloud::osconfig::agentendpoint::v1::ReportInventoryRequest const&
        request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ReportInventory(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig
}  // namespace cloud
}  // namespace google
