# ~~~
# Copyright 2023 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ~~~

set(service_dirs
    # cmake-format: sort
    "accelerator_types/v1/"
    "addresses/v1/"
    "autoscalers/v1/"
    "backend_buckets/v1/"
    "backend_services/v1/"
    "disk_types/v1/"
    "disks/v1/"
    "external_vpn_gateways/v1/"
    "firewall_policies/v1/"
    "firewalls/v1/"
    "forwarding_rules/v1/"
    "global_addresses/v1/"
    "global_forwarding_rules/v1/"
    "global_network_endpoint_groups/v1/"
    "global_public_delegated_prefixes/v1/"
    "health_checks/v1/"
    "http_health_checks/v1/"
    "https_health_checks/v1/"
    "image_family_views/v1/"
    "images/v1/"
    "instance_group_manager_resize_requests/v1/"
    "instance_group_managers/v1/"
    "instance_groups/v1/"
    "instance_settings/v1/"
    "instance_templates/v1/"
    "instances/v1/"
    "instant_snapshots/v1/"
    "interconnect_attachments/v1/"
    "interconnect_locations/v1/"
    "interconnect_remote_locations/v1/"
    "interconnects/v1/"
    "license_codes/v1/"
    "licenses/v1/"
    "machine_images/v1/"
    "machine_types/v1/"
    "network_attachments/v1/"
    "network_edge_security_services/v1/"
    "network_endpoint_groups/v1/"
    "network_firewall_policies/v1/"
    "network_profiles/v1/"
    "networks/v1/"
    "node_groups/v1/"
    "node_templates/v1/"
    "node_types/v1/"
    "packet_mirrorings/v1/"
    "projects/v1/"
    "public_advertised_prefixes/v1/"
    "public_delegated_prefixes/v1/"
    "region_autoscalers/v1/"
    "region_backend_services/v1/"
    "region_commitments/v1/"
    "region_disk_types/v1/"
    "region_disks/v1/"
    "region_health_check_services/v1/"
    "region_health_checks/v1/"
    "region_instance_group_managers/v1/"
    "region_instance_groups/v1/"
    "region_instance_templates/v1/"
    "region_instances/v1/"
    "region_instant_snapshots/v1/"
    "region_network_endpoint_groups/v1/"
    "region_network_firewall_policies/v1/"
    "region_notification_endpoints/v1/"
    "region_security_policies/v1/"
    "region_ssl_certificates/v1/"
    "region_ssl_policies/v1/"
    "region_target_http_proxies/v1/"
    "region_target_https_proxies/v1/"
    "region_target_tcp_proxies/v1/"
    "region_url_maps/v1/"
    "region_zones/v1/"
    "regions/v1/"
    "reservations/v1/"
    "resource_policies/v1/"
    "routers/v1/"
    "routes/v1/"
    "security_policies/v1/"
    "service_attachments/v1/"
    "snapshot_settings/v1/"
    "snapshots/v1/"
    "ssl_certificates/v1/"
    "ssl_policies/v1/"
    "storage_pool_types/v1/"
    "storage_pools/v1/"
    "subnetworks/v1/"
    "target_grpc_proxies/v1/"
    "target_http_proxies/v1/"
    "target_https_proxies/v1/"
    "target_instances/v1/"
    "target_pools/v1/"
    "target_ssl_proxies/v1/"
    "target_tcp_proxies/v1/"
    "target_vpn_gateways/v1/"
    "url_maps/v1/"
    "vpn_gateways/v1/"
    "vpn_tunnels/v1/"
    "zones/v1/")

set(operation_service_dirs
    # cmake-format: sort
    "global_operations/v1/" "global_organization_operations/v1/"
    "region_operations/v1/" "zone_operations/v1/")
