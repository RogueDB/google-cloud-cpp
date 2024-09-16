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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_ENVIRONMENTS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_ENVIRONMENTS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/orchestration/airflow/service/v1/environments.grpc.pb.h>
#include <google/cloud/orchestration/airflow/service/v1/operations.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EnvironmentsStub {
 public:
  virtual ~EnvironmentsStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateEnvironment(google::cloud::CompletionQueue& cq,
                         std::shared_ptr<grpc::ClientContext> context,
                         google::cloud::internal::ImmutableOptions options,
                         google::cloud::orchestration::airflow::service::v1::
                             CreateEnvironmentRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          CreateEnvironmentRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(grpc::ClientContext& context, Options const& options,
                 google::cloud::orchestration::airflow::service::v1::
                     GetEnvironmentRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsResponse>
  ListEnvironments(grpc::ClientContext& context, Options const& options,
                   google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateEnvironment(google::cloud::CompletionQueue& cq,
                         std::shared_ptr<grpc::ClientContext> context,
                         google::cloud::internal::ImmutableOptions options,
                         google::cloud::orchestration::airflow::service::v1::
                             UpdateEnvironmentRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateEnvironmentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteEnvironment(google::cloud::CompletionQueue& cq,
                         std::shared_ptr<grpc::ClientContext> context,
                         google::cloud::internal::ImmutableOptions options,
                         google::cloud::orchestration::airflow::service::v1::
                             DeleteEnvironmentRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteEnvironmentRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       ExecuteAirflowCommandResponse>
  ExecuteAirflowCommand(grpc::ClientContext& context, Options const& options,
                        google::cloud::orchestration::airflow::service::v1::
                            ExecuteAirflowCommandRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       StopAirflowCommandResponse>
  StopAirflowCommand(grpc::ClientContext& context, Options const& options,
                     google::cloud::orchestration::airflow::service::v1::
                         StopAirflowCommandRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       PollAirflowCommandResponse>
  PollAirflowCommand(grpc::ClientContext& context, Options const& options,
                     google::cloud::orchestration::airflow::service::v1::
                         PollAirflowCommandRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::ListWorkloadsResponse>
  ListWorkloads(grpc::ClientContext& context, Options const& options,
                google::cloud::orchestration::airflow::service::v1::
                    ListWorkloadsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCheckUpgrade(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          CheckUpgradeRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CheckUpgrade(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          CheckUpgradeRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  CreateUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsSecretRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  GetUserWorkloadsSecret(grpc::ClientContext& context, Options const& options,
                         google::cloud::orchestration::airflow::service::v1::
                             GetUserWorkloadsSecretRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       ListUserWorkloadsSecretsResponse>
  ListUserWorkloadsSecrets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          ListUserWorkloadsSecretsRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  UpdateUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsSecretRequest const& request) = 0;

  virtual Status DeleteUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsSecretRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       UserWorkloadsConfigMap>
  CreateUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsConfigMapRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       UserWorkloadsConfigMap>
  GetUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          GetUserWorkloadsConfigMapRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       ListUserWorkloadsConfigMapsResponse>
  ListUserWorkloadsConfigMaps(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          ListUserWorkloadsConfigMapsRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       UserWorkloadsConfigMap>
  UpdateUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsConfigMapRequest const& request) = 0;

  virtual Status DeleteUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsConfigMapRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncSaveSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          SaveSnapshotRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> SaveSnapshot(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          SaveSnapshotRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncLoadSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          LoadSnapshotRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> LoadSnapshot(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          LoadSnapshotRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDatabaseFailover(google::cloud::CompletionQueue& cq,
                        std::shared_ptr<grpc::ClientContext> context,
                        google::cloud::internal::ImmutableOptions options,
                        google::cloud::orchestration::airflow::service::v1::
                            DatabaseFailoverRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DatabaseFailover(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          DatabaseFailoverRequest const& request) = 0;

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       FetchDatabasePropertiesResponse>
  FetchDatabaseProperties(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          FetchDatabasePropertiesRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultEnvironmentsStub : public EnvironmentsStub {
 public:
  DefaultEnvironmentsStub(
      std::unique_ptr<google::cloud::orchestration::airflow::service::v1::
                          Environments::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          CreateEnvironmentRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          CreateEnvironmentRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(grpc::ClientContext& context, Options const& options,
                 google::cloud::orchestration::airflow::service::v1::
                     GetEnvironmentRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListEnvironmentsResponse>
  ListEnvironments(grpc::ClientContext& context, Options const& options,
                   google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateEnvironmentRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateEnvironmentRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteEnvironmentRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteEnvironmentRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ExecuteAirflowCommandResponse>
  ExecuteAirflowCommand(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          ExecuteAirflowCommandRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               StopAirflowCommandResponse>
  StopAirflowCommand(grpc::ClientContext& context, Options const& options,
                     google::cloud::orchestration::airflow::service::v1::
                         StopAirflowCommandRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               PollAirflowCommandResponse>
  PollAirflowCommand(grpc::ClientContext& context, Options const& options,
                     google::cloud::orchestration::airflow::service::v1::
                         PollAirflowCommandRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::ListWorkloadsResponse>
  ListWorkloads(grpc::ClientContext& context, Options const& options,
                google::cloud::orchestration::airflow::service::v1::
                    ListWorkloadsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCheckUpgrade(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          CheckUpgradeRequest const& request) override;

  StatusOr<google::longrunning::Operation> CheckUpgrade(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          CheckUpgradeRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  CreateUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsSecretRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  GetUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          GetUserWorkloadsSecretRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListUserWorkloadsSecretsResponse>
  ListUserWorkloadsSecrets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          ListUserWorkloadsSecretsRequest const& request) override;

  StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  UpdateUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsSecretRequest const& request) override;

  Status DeleteUserWorkloadsSecret(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsSecretRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               UserWorkloadsConfigMap>
  CreateUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsConfigMapRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               UserWorkloadsConfigMap>
  GetUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          GetUserWorkloadsConfigMapRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               ListUserWorkloadsConfigMapsResponse>
  ListUserWorkloadsConfigMaps(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          ListUserWorkloadsConfigMapsRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               UserWorkloadsConfigMap>
  UpdateUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsConfigMapRequest const& request) override;

  Status DeleteUserWorkloadsConfigMap(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsConfigMapRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSaveSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          SaveSnapshotRequest const& request) override;

  StatusOr<google::longrunning::Operation> SaveSnapshot(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          SaveSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncLoadSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          LoadSnapshotRequest const& request) override;

  StatusOr<google::longrunning::Operation> LoadSnapshot(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          LoadSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDatabaseFailover(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::orchestration::airflow::service::v1::
          DatabaseFailoverRequest const& request) override;

  StatusOr<google::longrunning::Operation> DatabaseFailover(
      grpc::ClientContext& context, Options options,
      google::cloud::orchestration::airflow::service::v1::
          DatabaseFailoverRequest const& request) override;

  StatusOr<google::cloud::orchestration::airflow::service::v1::
               FetchDatabasePropertiesResponse>
  FetchDatabaseProperties(
      grpc::ClientContext& context, Options const& options,
      google::cloud::orchestration::airflow::service::v1::
          FetchDatabasePropertiesRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::orchestration::airflow::service::v1::
                      Environments::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_ENVIRONMENTS_STUB_H
