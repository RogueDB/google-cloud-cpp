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
// google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_TEMPLATES_V1_REGION_INSTANCE_TEMPLATES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_TEMPLATES_V1_REGION_INSTANCE_TEMPLATES_CLIENT_H

#include "google/cloud/compute/region_instance_templates/v1/region_instance_templates_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_templates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regionInstanceTemplates resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regionInstanceTemplates
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
class RegionInstanceTemplatesClient {
 public:
  explicit RegionInstanceTemplatesClient(
      ExperimentalTag,
      std::shared_ptr<RegionInstanceTemplatesConnection> connection,
      Options opts = {});
  ~RegionInstanceTemplatesClient();

  ///@{
  /// @name Copy and move support
  RegionInstanceTemplatesClient(RegionInstanceTemplatesClient const&) = default;
  RegionInstanceTemplatesClient& operator=(
      RegionInstanceTemplatesClient const&) = default;
  RegionInstanceTemplatesClient(RegionInstanceTemplatesClient&&) = default;
  RegionInstanceTemplatesClient& operator=(RegionInstanceTemplatesClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionInstanceTemplatesClient const& a,
                         RegionInstanceTemplatesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionInstanceTemplatesClient const& a,
                         RegionInstanceTemplatesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified instance template. Deleting an instance template is
  /// permanent and cannot be undone.
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region for this request.
  /// @param instance_template  The name of the instance template to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_templates.v1.DeleteRegionInstanceTemplatesRequest]: @googleapis_reference_link{google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto#L84}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionInstanceTemplates(std::string const& project,
                                std::string const& region,
                                std::string const& instance_template,
                                Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified instance template. Deleting an instance template is
  /// permanent and cannot be undone.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_instance_templates.v1.DeleteRegionInstanceTemplatesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_templates.v1.DeleteRegionInstanceTemplatesRequest]: @googleapis_reference_link{google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto#L84}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionInstanceTemplates(
      google::cloud::cpp::compute::region_instance_templates::v1::
          DeleteRegionInstanceTemplatesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified instance template.
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region for this request.
  /// @param instance_template  The name of the instance template.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.InstanceTemplate])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_templates.v1.GetRegionInstanceTemplatesRequest]: @googleapis_reference_link{google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto#L114}
  /// [google.cloud.cpp.compute.v1.InstanceTemplate]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L11687}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
  GetRegionInstanceTemplates(std::string const& project,
                             std::string const& region,
                             std::string const& instance_template,
                             Options opts = {});

  // clang-format off
  ///
  /// Returns the specified instance template.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_instance_templates.v1.GetRegionInstanceTemplatesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.InstanceTemplate])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_templates.v1.GetRegionInstanceTemplatesRequest]: @googleapis_reference_link{google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto#L114}
  /// [google.cloud.cpp.compute.v1.InstanceTemplate]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L11687}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
  GetRegionInstanceTemplates(
      google::cloud::cpp::compute::region_instance_templates::v1::
          GetRegionInstanceTemplatesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an instance template in the specified project and region using the
  /// global instance template whose URL is included in the request.
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the region for this request.
  /// @param instance_template_resource  The InstanceTemplate for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_templates.v1.InsertRegionInstanceTemplatesRequest]: @googleapis_reference_link{google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto#L126}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionInstanceTemplates(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::InstanceTemplate const&
          instance_template_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an instance template in the specified project and region using the
  /// global instance template whose URL is included in the request.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_instance_templates.v1.InsertRegionInstanceTemplatesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_templates.v1.InsertRegionInstanceTemplatesRequest]: @googleapis_reference_link{google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto#L126}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionInstanceTemplates(
      google::cloud::cpp::compute::region_instance_templates::v1::
          InsertRegionInstanceTemplatesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of instance templates that are contained within the
  /// specified project and region.
  ///
  /// @param project  Project ID for this request.
  /// @param region  The name of the regions for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.InstanceTemplate], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_templates.v1.ListRegionInstanceTemplatesRequest]: @googleapis_reference_link{google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto#L157}
  /// [google.cloud.cpp.compute.v1.InstanceTemplate]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L11687}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>
  ListRegionInstanceTemplates(std::string const& project,
                              std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a list of instance templates that are contained within the
  /// specified project and region.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_instance_templates.v1.ListRegionInstanceTemplatesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.InstanceTemplate], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_instance_templates.v1.ListRegionInstanceTemplatesRequest]: @googleapis_reference_link{google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto#L157}
  /// [google.cloud.cpp.compute.v1.InstanceTemplate]: @googleapis_reference_link{google/cloud/compute/v1/internal/common.proto#L11687}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>
  ListRegionInstanceTemplates(
      google::cloud::cpp::compute::region_instance_templates::v1::
          ListRegionInstanceTemplatesRequest request,
      Options opts = {});

 private:
  std::shared_ptr<RegionInstanceTemplatesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_templates_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_TEMPLATES_V1_REGION_INSTANCE_TEMPLATES_CLIENT_H
