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
// google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_MOCKS_MOCK_NETWORK_FIREWALL_POLICIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_MOCKS_MOCK_NETWORK_FIREWALL_POLICIES_CONNECTION_H

#include "google/cloud/compute/network_firewall_policies/v1/network_firewall_policies_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_network_firewall_policies_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NetworkFirewallPoliciesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NetworkFirewallPoliciesClient`. To
 * do so, construct an object of type `NetworkFirewallPoliciesClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNetworkFirewallPoliciesConnection
    : public compute_network_firewall_policies_v1::
          NetworkFirewallPoliciesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddAssociation(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::AddAssociationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddAssociation,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   AddAssociationRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, AddAssociation(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              AddAssociation,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   AddAssociationRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddAssociation(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddAssociation,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddPacketMirroringRule(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::AddPacketMirroringRuleRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddPacketMirroringRule,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   AddPacketMirroringRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, AddPacketMirroringRule(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              AddPacketMirroringRule,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   AddPacketMirroringRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddPacketMirroringRule(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddPacketMirroringRule,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddRule(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::AddRuleRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddRule,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   AddRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, AddRule(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, AddRule,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   AddRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddRule(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddRule,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                              FirewallPoliciesScopedList>>),
      AggregatedListNetworkFirewallPolicies,
      (google::cloud::cpp::compute::network_firewall_policies::v1::
           AggregatedListNetworkFirewallPoliciesRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CloneRules(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::CloneRulesRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              CloneRules,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   CloneRulesRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CloneRules(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, CloneRules,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   CloneRulesRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CloneRules(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              CloneRules,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteFirewallPolicy(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::DeleteFirewallPolicyRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteFirewallPolicy,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   DeleteFirewallPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteFirewallPolicy(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteFirewallPolicy,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   DeleteFirewallPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteFirewallPolicy(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteFirewallPolicy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>,
              GetFirewallPolicy,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   GetFirewallPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>,
      GetAssociation,
      (google::cloud::cpp::compute::network_firewall_policies::v1::
           GetAssociationRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, GetIamPolicy,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>,
              GetPacketMirroringRule,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   GetPacketMirroringRuleRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>,
              GetRule,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   GetRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertFirewallPolicy(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::InsertFirewallPolicyRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertFirewallPolicy,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   InsertFirewallPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, InsertFirewallPolicy(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertFirewallPolicy,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   InsertFirewallPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertFirewallPolicy(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertFirewallPolicy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>),
              ListNetworkFirewallPolicies,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   ListNetworkFirewallPoliciesRequest request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchFirewallPolicy(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::PatchFirewallPolicyRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchFirewallPolicy,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   PatchFirewallPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PatchFirewallPolicy(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchFirewallPolicy,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   PatchFirewallPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchFirewallPolicy(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchFirewallPolicy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchPacketMirroringRule(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::PatchPacketMirroringRuleRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchPacketMirroringRule,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   PatchPacketMirroringRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PatchPacketMirroringRule(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchPacketMirroringRule,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   PatchPacketMirroringRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchPacketMirroringRule(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchPacketMirroringRule,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchRule(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::PatchRuleRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchRule,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   PatchRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PatchRule(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, PatchRule,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   PatchRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchRule(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchRule,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveAssociation(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::RemoveAssociationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveAssociation,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   RemoveAssociationRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RemoveAssociation(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              RemoveAssociation,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   RemoveAssociationRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveAssociation(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveAssociation,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemovePacketMirroringRule(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::RemovePacketMirroringRuleRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemovePacketMirroringRule,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   RemovePacketMirroringRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RemovePacketMirroringRule(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              RemovePacketMirroringRule,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   RemovePacketMirroringRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemovePacketMirroringRule(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemovePacketMirroringRule,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveRule(Matcher<google::cloud::cpp::compute::network_firewall_policies::v1::RemoveRuleRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveRule,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   RemoveRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RemoveRule(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, RemoveRule,
              (NoAwaitTag,
               google::cloud::cpp::compute::network_firewall_policies::v1::
                   RemoveRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveRule(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveRule,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Policy>, SetIamPolicy,
              (google::cloud::cpp::compute::network_firewall_policies::v1::
                   SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>,
      TestIamPermissions,
      (google::cloud::cpp::compute::network_firewall_policies::v1::
           TestIamPermissionsRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_firewall_policies_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_MOCKS_MOCK_NETWORK_FIREWALL_POLICIES_CONNECTION_H
