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
// source: google/cloud/discoveryengine/v1/document_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_MOCKS_MOCK_DOCUMENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_MOCKS_MOCK_DOCUMENT_CONNECTION_H

#include "google/cloud/discoveryengine/v1/document_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace discoveryengine_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DocumentServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DocumentServiceClient`. To do so,
 * construct an object of type `DocumentServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDocumentServiceConnection
    : public discoveryengine_v1::DocumentServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::discoveryengine::v1::Document>, GetDocument,
      (google::cloud::discoveryengine::v1::GetDocumentRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::discoveryengine::v1::Document>),
      ListDocuments,
      (google::cloud::discoveryengine::v1::ListDocumentsRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::discoveryengine::v1::Document>,
              CreateDocument,
              (google::cloud::discoveryengine::v1::CreateDocumentRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::discoveryengine::v1::Document>,
              UpdateDocument,
              (google::cloud::discoveryengine::v1::UpdateDocumentRequest const&
                   request),
              (override));

  MOCK_METHOD(Status, DeleteDocument,
              (google::cloud::discoveryengine::v1::DeleteDocumentRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ImportDocuments(Matcher<google::cloud::discoveryengine::v1::ImportDocumentsRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<
                  google::cloud::discoveryengine::v1::ImportDocumentsResponse>>,
              ImportDocuments,
              (google::cloud::discoveryengine::v1::ImportDocumentsRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ImportDocuments(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ImportDocuments,
              (NoAwaitTag,
               google::cloud::discoveryengine::v1::ImportDocumentsRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, ImportDocuments(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<
                  google::cloud::discoveryengine::v1::ImportDocumentsResponse>>,
              ImportDocuments,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PurgeDocuments(Matcher<google::cloud::discoveryengine::v1::PurgeDocumentsRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::discoveryengine::v1::PurgeDocumentsResponse>>,
      PurgeDocuments,
      (google::cloud::discoveryengine::v1::PurgeDocumentsRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PurgeDocuments(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, PurgeDocuments,
              (NoAwaitTag,
               google::cloud::discoveryengine::v1::PurgeDocumentsRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, PurgeDocuments(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::discoveryengine::v1::PurgeDocumentsResponse>>,
      PurgeDocuments, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::discoveryengine::v1::
                           BatchGetDocumentsMetadataResponse>,
              BatchGetDocumentsMetadata,
              (google::cloud::discoveryengine::v1::
                   BatchGetDocumentsMetadataRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_MOCKS_MOCK_DOCUMENT_CONNECTION_H
