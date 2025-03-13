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
// source: google/bigtable/v2/bigtable.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_INTERNAL_BIGTABLE_ROUND_ROBIN_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_INTERNAL_BIGTABLE_ROUND_ROBIN_DECORATOR_H

#include "google/cloud/bigtable/internal/bigtable_stub.h"
#include "google/cloud/version.h"
#include <memory>
#include <mutex>
#include <vector>

namespace google {
namespace cloud {
namespace bigtable_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigtableRoundRobin : public BigtableStub {
 public:
  explicit BigtableRoundRobin(
      std::vector<std::shared_ptr<BigtableStub>> children);
  ~BigtableRoundRobin() override = default;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::bigtable::v2::ReadRowsResponse>>
  ReadRows(std::shared_ptr<grpc::ClientContext> context, Options const& options,
           google::bigtable::v2::ReadRowsRequest const& request) override;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::bigtable::v2::SampleRowKeysResponse>>
  SampleRowKeys(
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::bigtable::v2::SampleRowKeysRequest const& request) override;

  StatusOr<google::bigtable::v2::MutateRowResponse> MutateRow(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::v2::MutateRowRequest const& request) override;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::bigtable::v2::MutateRowsResponse>>
  MutateRows(std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::bigtable::v2::MutateRowsRequest const& request) override;

  StatusOr<google::bigtable::v2::CheckAndMutateRowResponse> CheckAndMutateRow(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::v2::CheckAndMutateRowRequest const& request) override;

  StatusOr<google::bigtable::v2::PingAndWarmResponse> PingAndWarm(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::v2::PingAndWarmRequest const& request) override;

  StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse> ReadModifyWriteRow(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::v2::ReadModifyWriteRowRequest const& request) override;

  StatusOr<google::bigtable::v2::PrepareQueryResponse> PrepareQuery(
      grpc::ClientContext& context, Options const& options,
      google::bigtable::v2::PrepareQueryRequest const& request) override;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::bigtable::v2::ExecuteQueryResponse>>
  ExecuteQuery(
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::bigtable::v2::ExecuteQueryRequest const& request) override;

  std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
      google::bigtable::v2::ReadRowsResponse>>
  AsyncReadRows(google::cloud::CompletionQueue const& cq,
                std::shared_ptr<grpc::ClientContext> context,
                google::cloud::internal::ImmutableOptions options,
                google::bigtable::v2::ReadRowsRequest const& request) override;

  std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
      google::bigtable::v2::SampleRowKeysResponse>>
  AsyncSampleRowKeys(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::v2::SampleRowKeysRequest const& request) override;

  future<StatusOr<google::bigtable::v2::MutateRowResponse>> AsyncMutateRow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::v2::MutateRowRequest const& request) override;

  std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
      google::bigtable::v2::MutateRowsResponse>>
  AsyncMutateRows(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::v2::MutateRowsRequest const& request) override;

  future<StatusOr<google::bigtable::v2::CheckAndMutateRowResponse>>
  AsyncCheckAndMutateRow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::v2::CheckAndMutateRowRequest const& request) override;

  future<StatusOr<google::bigtable::v2::ReadModifyWriteRowResponse>>
  AsyncReadModifyWriteRow(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::bigtable::v2::ReadModifyWriteRowRequest const& request) override;

 private:
  std::shared_ptr<BigtableStub> Child();

  std::vector<std::shared_ptr<BigtableStub>> const children_;
  std::mutex mu_;
  std::size_t current_ = 0;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_INTERNAL_BIGTABLE_ROUND_ROBIN_DECORATOR_H
