// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Networking.XboxLive.0.h"

WINRT_EXPORT namespace winrt::Windows::Networking::XboxLive {

struct WINRT_EBO IXboxLiveDeviceAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveDeviceAddress>
{
    IXboxLiveDeviceAddress(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveDeviceAddressStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveDeviceAddressStatics>
{
    IXboxLiveDeviceAddressStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveEndpointPair :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveEndpointPair>
{
    IXboxLiveEndpointPair(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveEndpointPairCreationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveEndpointPairCreationResult>
{
    IXboxLiveEndpointPairCreationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveEndpointPairStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveEndpointPairStateChangedEventArgs>
{
    IXboxLiveEndpointPairStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveEndpointPairStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveEndpointPairStatics>
{
    IXboxLiveEndpointPairStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveEndpointPairTemplate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveEndpointPairTemplate>
{
    IXboxLiveEndpointPairTemplate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveEndpointPairTemplateStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveEndpointPairTemplateStatics>
{
    IXboxLiveEndpointPairTemplateStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveInboundEndpointPairCreatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveInboundEndpointPairCreatedEventArgs>
{
    IXboxLiveInboundEndpointPairCreatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveQualityOfServiceMeasurement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveQualityOfServiceMeasurement>
{
    IXboxLiveQualityOfServiceMeasurement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveQualityOfServiceMeasurementStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveQualityOfServiceMeasurementStatics>
{
    IXboxLiveQualityOfServiceMeasurementStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveQualityOfServiceMetricResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveQualityOfServiceMetricResult>
{
    IXboxLiveQualityOfServiceMetricResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IXboxLiveQualityOfServicePrivatePayloadResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IXboxLiveQualityOfServicePrivatePayloadResult>
{
    IXboxLiveQualityOfServicePrivatePayloadResult(std::nullptr_t = nullptr) noexcept {}
};

}
