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
// source:
// google/cloud/compute/instance_group_managers/v1/instance_group_managers.proto

#include "google/cloud/compute/instance_group_managers/v1/internal/instance_group_managers_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_instance_group_managers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceGroupManagersRestLogging::InstanceGroupManagersRestLogging(
    std::shared_ptr<InstanceGroupManagersRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncAbandonInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        AbandonInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 AbandonInstancesRequest const& request) {
        return child_->AsyncAbandonInstances(cq, std::move(rest_context),
                                             std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::AbandonInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        AbandonInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 AbandonInstancesRequest const& request) {
        return child_->AbandonInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerAggregatedList>
InstanceGroupManagersRestLogging::AggregatedListInstanceGroupManagers(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        AggregatedListInstanceGroupManagersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 AggregatedListInstanceGroupManagersRequest const& request) {
        return child_->AggregatedListInstanceGroupManagers(rest_context,
                                                           options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncApplyUpdatesToInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ApplyUpdatesToInstancesRequest const& request) {
        return child_->AsyncApplyUpdatesToInstances(
            cq, std::move(rest_context), std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::ApplyUpdatesToInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ApplyUpdatesToInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ApplyUpdatesToInstancesRequest const& request) {
        return child_->ApplyUpdatesToInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncCreateInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        CreateInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 CreateInstancesRequest const& request) {
        return child_->AsyncCreateInstances(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::CreateInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        CreateInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 CreateInstancesRequest const& request) {
        return child_->CreateInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncDeleteInstanceGroupManager(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 DeleteInstanceGroupManagerRequest const& request) {
        return child_->AsyncDeleteInstanceGroupManager(
            cq, std::move(rest_context), std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::DeleteInstanceGroupManager(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 DeleteInstanceGroupManagerRequest const& request) {
        return child_->DeleteInstanceGroupManager(rest_context, options,
                                                  request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncDeleteInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 DeleteInstancesRequest const& request) {
        return child_->AsyncDeleteInstances(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::DeleteInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeleteInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 DeleteInstancesRequest const& request) {
        return child_->DeleteInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncDeletePerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 DeletePerInstanceConfigsRequest const& request) {
        return child_->AsyncDeletePerInstanceConfigs(
            cq, std::move(rest_context), std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::DeletePerInstanceConfigs(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        DeletePerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 DeletePerInstanceConfigsRequest const& request) {
        return child_->DeletePerInstanceConfigs(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManager>
InstanceGroupManagersRestLogging::GetInstanceGroupManager(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        GetInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 GetInstanceGroupManagerRequest const& request) {
        return child_->GetInstanceGroupManager(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncInsertInstanceGroupManager(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        InsertInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 InsertInstanceGroupManagerRequest const& request) {
        return child_->AsyncInsertInstanceGroupManager(
            cq, std::move(rest_context), std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::InsertInstanceGroupManager(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        InsertInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 InsertInstanceGroupManagerRequest const& request) {
        return child_->InsertInstanceGroupManager(rest_context, options,
                                                  request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::InstanceGroupManagerList>
InstanceGroupManagersRestLogging::ListInstanceGroupManagers(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListInstanceGroupManagersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ListInstanceGroupManagersRequest const& request) {
        return child_->ListInstanceGroupManagers(rest_context, options,
                                                 request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::cpp::compute::v1::InstanceGroupManagersListErrorsResponse>
InstanceGroupManagersRestLogging::ListErrors(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListErrorsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ListErrorsRequest const& request) {
        return child_->ListErrors(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::
             InstanceGroupManagersListManagedInstancesResponse>
InstanceGroupManagersRestLogging::ListManagedInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListManagedInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ListManagedInstancesRequest const& request) {
        return child_->ListManagedInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::
             InstanceGroupManagersListPerInstanceConfigsResp>
InstanceGroupManagersRestLogging::ListPerInstanceConfigs(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ListPerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ListPerInstanceConfigsRequest const& request) {
        return child_->ListPerInstanceConfigs(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncPatchInstanceGroupManager(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 PatchInstanceGroupManagerRequest const& request) {
        return child_->AsyncPatchInstanceGroupManager(
            cq, std::move(rest_context), std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::PatchInstanceGroupManager(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchInstanceGroupManagerRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 PatchInstanceGroupManagerRequest const& request) {
        return child_->PatchInstanceGroupManager(rest_context, options,
                                                 request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncPatchPerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 PatchPerInstanceConfigsRequest const& request) {
        return child_->AsyncPatchPerInstanceConfigs(
            cq, std::move(rest_context), std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::PatchPerInstanceConfigs(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        PatchPerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 PatchPerInstanceConfigsRequest const& request) {
        return child_->PatchPerInstanceConfigs(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncRecreateInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        RecreateInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 RecreateInstancesRequest const& request) {
        return child_->AsyncRecreateInstances(cq, std::move(rest_context),
                                              std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::RecreateInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        RecreateInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 RecreateInstancesRequest const& request) {
        return child_->RecreateInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncResize(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ResizeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ResizeRequest const& request) {
        return child_->AsyncResize(cq, std::move(rest_context),
                                   std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::Resize(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ResizeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ResizeRequest const& request) {
        return child_->Resize(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncResumeInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ResumeInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ResumeInstancesRequest const& request) {
        return child_->AsyncResumeInstances(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::ResumeInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        ResumeInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 ResumeInstancesRequest const& request) {
        return child_->ResumeInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncSetInstanceTemplate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetInstanceTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 SetInstanceTemplateRequest const& request) {
        return child_->AsyncSetInstanceTemplate(cq, std::move(rest_context),
                                                std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::SetInstanceTemplate(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetInstanceTemplateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 SetInstanceTemplateRequest const& request) {
        return child_->SetInstanceTemplate(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncSetTargetPools(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetTargetPoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 SetTargetPoolsRequest const& request) {
        return child_->AsyncSetTargetPools(cq, std::move(rest_context),
                                           std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::SetTargetPools(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SetTargetPoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 SetTargetPoolsRequest const& request) {
        return child_->SetTargetPools(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncStartInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        StartInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 StartInstancesRequest const& request) {
        return child_->AsyncStartInstances(cq, std::move(rest_context),
                                           std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::StartInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        StartInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 StartInstancesRequest const& request) {
        return child_->StartInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncStopInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        StopInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 StopInstancesRequest const& request) {
        return child_->AsyncStopInstances(cq, std::move(rest_context),
                                          std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::StopInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        StopInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 StopInstancesRequest const& request) {
        return child_->StopInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncSuspendInstances(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SuspendInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 SuspendInstancesRequest const& request) {
        return child_->AsyncSuspendInstances(cq, std::move(rest_context),
                                             std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::SuspendInstances(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        SuspendInstancesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 SuspendInstancesRequest const& request) {
        return child_->SuspendInstances(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncUpdatePerInstanceConfigs(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 UpdatePerInstanceConfigsRequest const& request) {
        return child_->AsyncUpdatePerInstanceConfigs(
            cq, std::move(rest_context), std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstanceGroupManagersRestLogging::UpdatePerInstanceConfigs(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::instance_group_managers::v1::
        UpdatePerInstanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::instance_group_managers::v1::
                 UpdatePerInstanceConfigsRequest const& request) {
        return child_->UpdatePerInstanceConfigs(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstanceGroupManagersRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context),
                                         std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> InstanceGroupManagersRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_managers_v1_internal
}  // namespace cloud
}  // namespace google
