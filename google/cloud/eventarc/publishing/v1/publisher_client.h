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
// source: google/cloud/eventarc/publishing/v1/publisher.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_PUBLISHING_V1_PUBLISHER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_PUBLISHING_V1_PUBLISHER_CLIENT_H

#include "google/cloud/eventarc/publishing/v1/publisher_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace eventarc_publishing_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Eventarc processes events generated by an event provider and delivers them
/// to a subscriber.
///
/// An event provider is a software-as-a-service (SaaS) system or
/// product that can generate and deliver events through Eventarc.
///
/// A third-party event provider is an event provider from outside of Google.
///
/// A partner is a third-party event provider that is integrated with Eventarc.
///
/// A subscriber is a Google Cloud customer interested in receiving events.
///
/// Channel is a first-class Eventarc resource that is created and managed
/// by the subscriber in their Google Cloud project. A Channel represents a
/// subscriber's intent to receive events from an event provider. A Channel is
/// associated with exactly one event provider.
///
/// ChannelConnection is a first-class Eventarc resource that
/// is created and managed by the partner in their Google Cloud project. A
/// ChannelConnection represents a connection between a partner and a
/// subscriber's Channel. A ChannelConnection has a one-to-one mapping with a
/// Channel.
///
/// Bus is a first-class Eventarc resource that is created and managed in a
/// Google Cloud project. A Bus provides a discoverable endpoint for events and
/// is a router that receives all events published by event providers and
/// delivers them to zero or more subscribers.
///
/// Publisher allows an event provider to publish events to Eventarc.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class PublisherClient {
 public:
  explicit PublisherClient(std::shared_ptr<PublisherConnection> connection,
                           Options opts = {});
  ~PublisherClient();

  ///@{
  /// @name Copy and move support
  PublisherClient(PublisherClient const&) = default;
  PublisherClient& operator=(PublisherClient const&) = default;
  PublisherClient(PublisherClient&&) = default;
  PublisherClient& operator=(PublisherClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(PublisherClient const& a, PublisherClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PublisherClient const& a, PublisherClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Publish events to a ChannelConnection in a partner's project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.eventarc.publishing.v1.PublishChannelConnectionEventsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.eventarc.publishing.v1.PublishChannelConnectionEventsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.eventarc.publishing.v1.PublishChannelConnectionEventsRequest]: @googleapis_reference_link{google/cloud/eventarc/publishing/v1/publisher.proto#L95}
  /// [google.cloud.eventarc.publishing.v1.PublishChannelConnectionEventsResponse]: @googleapis_reference_link{google/cloud/eventarc/publishing/v1/publisher.proto#L113}
  ///
  // clang-format on
  StatusOr<google::cloud::eventarc::publishing::v1::
               PublishChannelConnectionEventsResponse>
  PublishChannelConnectionEvents(
      google::cloud::eventarc::publishing::v1::
          PublishChannelConnectionEventsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Publish events to a subscriber's channel.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.eventarc.publishing.v1.PublishEventsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.eventarc.publishing.v1.PublishEventsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.eventarc.publishing.v1.PublishEventsRequest]: @googleapis_reference_link{google/cloud/eventarc/publishing/v1/publisher.proto#L116}
  /// [google.cloud.eventarc.publishing.v1.PublishEventsResponse]: @googleapis_reference_link{google/cloud/eventarc/publishing/v1/publisher.proto#L134}
  ///
  // clang-format on
  StatusOr<google::cloud::eventarc::publishing::v1::PublishEventsResponse>
  PublishEvents(
      google::cloud::eventarc::publishing::v1::PublishEventsRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Publish events to a message bus.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.eventarc.publishing.v1.PublishRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.eventarc.publishing.v1.PublishResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.eventarc.publishing.v1.PublishRequest]: @googleapis_reference_link{google/cloud/eventarc/publishing/v1/publisher.proto#L137}
  /// [google.cloud.eventarc.publishing.v1.PublishResponse]: @googleapis_reference_link{google/cloud/eventarc/publishing/v1/publisher.proto#L161}
  ///
  // clang-format on
  StatusOr<google::cloud::eventarc::publishing::v1::PublishResponse> Publish(
      google::cloud::eventarc::publishing::v1::PublishRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<PublisherConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_publishing_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_PUBLISHING_V1_PUBLISHER_CLIENT_H
