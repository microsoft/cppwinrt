// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Networking.XboxLive.1.h"

WINRT_EXPORT namespace winrt::Windows::Networking::XboxLive {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Networking::XboxLive {

struct WINRT_EBO XboxLiveDeviceAddress :
    Windows::Networking::XboxLive::IXboxLiveDeviceAddress
{
    XboxLiveDeviceAddress(std::nullptr_t) noexcept {}
    static Windows::Networking::XboxLive::XboxLiveDeviceAddress CreateFromSnapshotBase64(param::hstring const& base64);
    static Windows::Networking::XboxLive::XboxLiveDeviceAddress CreateFromSnapshotBuffer(Windows::Storage::Streams::IBuffer const& buffer);
    static Windows::Networking::XboxLive::XboxLiveDeviceAddress CreateFromSnapshotBytes(array_view<uint8_t const> buffer);
    static Windows::Networking::XboxLive::XboxLiveDeviceAddress GetLocal();
    static uint32_t MaxSnapshotBytesSize();
};

struct WINRT_EBO XboxLiveEndpointPair :
    Windows::Networking::XboxLive::IXboxLiveEndpointPair
{
    XboxLiveEndpointPair(std::nullptr_t) noexcept {}
    static Windows::Networking::XboxLive::XboxLiveEndpointPair FindEndpointPairBySocketAddressBytes(array_view<uint8_t const> localSocketAddress, array_view<uint8_t const> remoteSocketAddress);
    static Windows::Networking::XboxLive::XboxLiveEndpointPair FindEndpointPairByHostNamesAndPorts(Windows::Networking::HostName const& localHostName, param::hstring const& localPort, Windows::Networking::HostName const& remoteHostName, param::hstring const& remotePort);
};

struct WINRT_EBO XboxLiveEndpointPairCreationResult :
    Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult
{
    XboxLiveEndpointPairCreationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XboxLiveEndpointPairStateChangedEventArgs :
    Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs
{
    XboxLiveEndpointPairStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XboxLiveEndpointPairTemplate :
    Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate
{
    XboxLiveEndpointPairTemplate(std::nullptr_t) noexcept {}
    static Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate GetTemplateByName(param::hstring const& name);
    static Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> Templates();
};

struct WINRT_EBO XboxLiveInboundEndpointPairCreatedEventArgs :
    Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs
{
    XboxLiveInboundEndpointPairCreatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XboxLiveQualityOfServiceMeasurement :
    Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement
{
    XboxLiveQualityOfServiceMeasurement(std::nullptr_t) noexcept {}
    XboxLiveQualityOfServiceMeasurement();
    static void PublishPrivatePayloadBytes(array_view<uint8_t const> payload);
    static void ClearPrivatePayload();
    static uint32_t MaxSimultaneousProbeConnections();
    static void MaxSimultaneousProbeConnections(uint32_t value);
    static bool IsSystemOutboundBandwidthConstrained();
    static void IsSystemOutboundBandwidthConstrained(bool value);
    static bool IsSystemInboundBandwidthConstrained();
    static void IsSystemInboundBandwidthConstrained(bool value);
    static Windows::Storage::Streams::IBuffer PublishedPrivatePayload();
    static void PublishedPrivatePayload(Windows::Storage::Streams::IBuffer const& value);
    static uint32_t MaxPrivatePayloadSize();
};

struct WINRT_EBO XboxLiveQualityOfServiceMetricResult :
    Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult
{
    XboxLiveQualityOfServiceMetricResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO XboxLiveQualityOfServicePrivatePayloadResult :
    Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult
{
    XboxLiveQualityOfServicePrivatePayloadResult(std::nullptr_t) noexcept {}
};

}
