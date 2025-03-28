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
// source: google/cloud/dialogflow/v2/conversation.proto

#include "google/cloud/dialogflow_es/internal/conversations_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/conversations_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_es::ConversationsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_es::ConversationsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_es::ConversationsBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<dialogflow_es::ConversationsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dialogflow_es::ConversationsConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ConversationsConnectionImpl::ConversationsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::ConversationsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ConversationsConnection::options())) {}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsConnectionImpl::CreateConversation(
    google::cloud::dialogflow::v2::CreateConversationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateConversation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::CreateConversationRequest const&
                 request) {
        return stub_->CreateConversation(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::dialogflow::v2::Conversation>
ConversationsConnectionImpl::ListConversations(
    google::cloud::dialogflow::v2::ListConversationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListConversations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Conversation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::ConversationsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::dialogflow::v2::ListConversationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::dialogflow::v2::ListConversationsRequest const&
                    request) {
              return stub->ListConversations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::dialogflow::v2::ListConversationsResponse r) {
        std::vector<google::cloud::dialogflow::v2::Conversation> result(
            r.conversations().size());
        auto& messages = *r.mutable_conversations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsConnectionImpl::GetConversation(
    google::cloud::dialogflow::v2::GetConversationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConversation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::GetConversationRequest const&
                 request) {
        return stub_->GetConversation(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsConnectionImpl::CompleteConversation(
    google::cloud::dialogflow::v2::CompleteConversationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CompleteConversation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::CompleteConversationRequest const&
                 request) {
        return stub_->CompleteConversation(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::IngestContextReferencesResponse>
ConversationsConnectionImpl::IngestContextReferences(
    google::cloud::dialogflow::v2::IngestContextReferencesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->IngestContextReferences(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::IngestContextReferencesRequest const&
              request) {
        return stub_->IngestContextReferences(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::dialogflow::v2::Message>
ConversationsConnectionImpl::ListMessages(
    google::cloud::dialogflow::v2::ListMessagesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListMessages(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Message>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::ConversationsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::dialogflow::v2::ListMessagesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::dialogflow::v2::ListMessagesRequest const&
                       request) {
              return stub->ListMessages(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::dialogflow::v2::ListMessagesResponse r) {
        std::vector<google::cloud::dialogflow::v2::Message> result(
            r.messages().size());
        auto& messages = *r.mutable_messages();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
ConversationsConnectionImpl::SuggestConversationSummary(
    google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SuggestConversationSummary(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::
                 SuggestConversationSummaryRequest const& request) {
        return stub_->SuggestConversationSummary(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSummaryResponse>
ConversationsConnectionImpl::GenerateStatelessSummary(
    google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateStatelessSummary(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::GenerateStatelessSummaryRequest const&
              request) {
        return stub_->GenerateStatelessSummary(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::GenerateStatelessSuggestionResponse>
ConversationsConnectionImpl::GenerateStatelessSuggestion(
    google::cloud::dialogflow::v2::GenerateStatelessSuggestionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateStatelessSuggestion(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::
                 GenerateStatelessSuggestionRequest const& request) {
        return stub_->GenerateStatelessSuggestion(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::SearchKnowledgeResponse>
ConversationsConnectionImpl::SearchKnowledge(
    google::cloud::dialogflow::v2::SearchKnowledgeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SearchKnowledge(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::SearchKnowledgeRequest const&
                 request) {
        return stub_->SearchKnowledge(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::GenerateSuggestionsResponse>
ConversationsConnectionImpl::GenerateSuggestions(
    google::cloud::dialogflow::v2::GenerateSuggestionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateSuggestions(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::GenerateSuggestionsRequest const&
                 request) {
        return stub_->GenerateSuggestions(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::location::Location>
ConversationsConnectionImpl::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListLocations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::location::Location>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::ConversationsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::location::ListLocationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::location::ListLocationsRequest const& request) {
              return stub->ListLocations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::location::ListLocationsResponse r) {
        std::vector<google::cloud::location::Location> result(
            r.locations().size());
        auto& messages = *r.mutable_locations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::location::Location>
ConversationsConnectionImpl::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLocation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return stub_->GetLocation(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::longrunning::Operation>
ConversationsConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::ConversationsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::longrunning::ListOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::longrunning::ListOperationsRequest const& request) {
              return stub->ListOperations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::longrunning::ListOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::longrunning::Operation>
ConversationsConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

Status ConversationsConnectionImpl::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return stub_->CancelOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
