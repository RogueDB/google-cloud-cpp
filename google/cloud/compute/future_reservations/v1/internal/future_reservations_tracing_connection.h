// Copyright 2024 Google LLC
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
// source: google/cloud/compute/future_reservations/v1/future_reservations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FUTURE_RESERVATIONS_V1_INTERNAL_FUTURE_RESERVATIONS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FUTURE_RESERVATIONS_V1_INTERNAL_FUTURE_RESERVATIONS_TRACING_CONNECTION_H

#include "google/cloud/compute/future_reservations/v1/future_reservations_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_future_reservations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class FutureReservationsTracingConnection
    : public compute_future_reservations_v1::FutureReservationsConnection {
 public:
  ~FutureReservationsTracingConnection() override = default;

  explicit FutureReservationsTracingConnection(
      std::shared_ptr<
          compute_future_reservations_v1::FutureReservationsConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::FutureReservationsScopedList>>
  AggregatedListFutureReservations(
      google::cloud::cpp::compute::future_reservations::v1::
          AggregatedListFutureReservationsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Cancel(
      google::cloud::cpp::compute::future_reservations::v1::CancelRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Cancel(
      NoAwaitTag,
      google::cloud::cpp::compute::future_reservations::v1::CancelRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Cancel(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFutureReservation(
      google::cloud::cpp::compute::future_reservations::v1::
          DeleteFutureReservationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteFutureReservation(
      NoAwaitTag, google::cloud::cpp::compute::future_reservations::v1::
                      DeleteFutureReservationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteFutureReservation(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::FutureReservation>
  GetFutureReservation(google::cloud::cpp::compute::future_reservations::v1::
                           GetFutureReservationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFutureReservation(
      google::cloud::cpp::compute::future_reservations::v1::
          InsertFutureReservationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertFutureReservation(
      NoAwaitTag, google::cloud::cpp::compute::future_reservations::v1::
                      InsertFutureReservationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertFutureReservation(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::FutureReservation>
  ListFutureReservations(google::cloud::cpp::compute::future_reservations::v1::
                             ListFutureReservationsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateFutureReservation(
      google::cloud::cpp::compute::future_reservations::v1::
          UpdateFutureReservationRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateFutureReservation(
      NoAwaitTag, google::cloud::cpp::compute::future_reservations::v1::
                      UpdateFutureReservationRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateFutureReservation(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  std::shared_ptr<compute_future_reservations_v1::FutureReservationsConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_future_reservations_v1::FutureReservationsConnection>
MakeFutureReservationsTracingConnection(
    std::shared_ptr<
        compute_future_reservations_v1::FutureReservationsConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_future_reservations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_FUTURE_RESERVATIONS_V1_INTERNAL_FUTURE_RESERVATIONS_TRACING_CONNECTION_H
