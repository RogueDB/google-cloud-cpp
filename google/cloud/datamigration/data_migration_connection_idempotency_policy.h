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
// source: google/cloud/clouddms/v1/clouddms.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_DATA_MIGRATION_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_DATA_MIGRATION_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/clouddms/v1/clouddms.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datamigration {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataMigrationServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DataMigrationServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<DataMigrationServiceConnectionIdempotencyPolicy>
  clone() const = 0;

  virtual google::cloud::internal::Idempotency ListMigrationJobs(
      google::cloud::clouddms::v1::ListMigrationJobsRequest request) = 0;

  virtual google::cloud::internal::Idempotency GetMigrationJob(
      google::cloud::clouddms::v1::GetMigrationJobRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CreateMigrationJob(
      google::cloud::clouddms::v1::CreateMigrationJobRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency UpdateMigrationJob(
      google::cloud::clouddms::v1::UpdateMigrationJobRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency DeleteMigrationJob(
      google::cloud::clouddms::v1::DeleteMigrationJobRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency StartMigrationJob(
      google::cloud::clouddms::v1::StartMigrationJobRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency StopMigrationJob(
      google::cloud::clouddms::v1::StopMigrationJobRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency ResumeMigrationJob(
      google::cloud::clouddms::v1::ResumeMigrationJobRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency PromoteMigrationJob(
      google::cloud::clouddms::v1::PromoteMigrationJobRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency VerifyMigrationJob(
      google::cloud::clouddms::v1::VerifyMigrationJobRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency RestartMigrationJob(
      google::cloud::clouddms::v1::RestartMigrationJobRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency GenerateSshScript(
      google::cloud::clouddms::v1::GenerateSshScriptRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency ListConnectionProfiles(
      google::cloud::clouddms::v1::ListConnectionProfilesRequest request) = 0;

  virtual google::cloud::internal::Idempotency GetConnectionProfile(
      google::cloud::clouddms::v1::GetConnectionProfileRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency CreateConnectionProfile(
      google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency UpdateConnectionProfile(
      google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency DeleteConnectionProfile(
      google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
          request) = 0;
};

std::unique_ptr<DataMigrationServiceConnectionIdempotencyPolicy>
MakeDefaultDataMigrationServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_DATA_MIGRATION_CONNECTION_IDEMPOTENCY_POLICY_H
