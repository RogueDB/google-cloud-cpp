// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/internal/grpc_channel_credentials_authentication.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
namespace {

using ::google::cloud::testing_util::IsOk;

TEST(GrpcChannelCredentialsAuthenticationTest, Basic) {
  GrpcChannelCredentialsAuthentication auth(grpc::InsecureChannelCredentials());

  auto channel = auth.CreateChannel("localhost:1", grpc::ChannelArguments{});
  EXPECT_NE(nullptr, channel.get());

  grpc::ClientContext context;
  EXPECT_EQ(nullptr, context.credentials());
  auto status = auth.ConfigureContext(context);
  EXPECT_THAT(status, IsOk());
  EXPECT_EQ(nullptr, context.credentials());
}

}  // namespace
}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google
