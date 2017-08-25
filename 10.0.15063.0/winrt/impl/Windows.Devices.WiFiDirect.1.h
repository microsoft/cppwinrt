// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect {

struct WINRT_EBO IWiFiDirectAdvertisement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectAdvertisement>
{
    IWiFiDirectAdvertisement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectAdvertisement2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectAdvertisement2>
{
    IWiFiDirectAdvertisement2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectAdvertisementPublisher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectAdvertisementPublisher>
{
    IWiFiDirectAdvertisementPublisher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectAdvertisementPublisherStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>
{
    IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectConnectionListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionListener>
{
    IWiFiDirectConnectionListener(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectConnectionParameters :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionParameters>
{
    IWiFiDirectConnectionParameters(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectConnectionParameters2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionParameters2>
{
    IWiFiDirectConnectionParameters2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectConnectionParametersStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionParametersStatics>
{
    IWiFiDirectConnectionParametersStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectConnectionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionRequest>,
    impl::require<IWiFiDirectConnectionRequest, Windows::Foundation::IClosable>
{
    IWiFiDirectConnectionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectConnectionRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectConnectionRequestedEventArgs>
{
    IWiFiDirectConnectionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectDevice>,
    impl::require<IWiFiDirectDevice, Windows::Foundation::IClosable>
{
    IWiFiDirectDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectDeviceStatics>
{
    IWiFiDirectDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectDeviceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectDeviceStatics2>
{
    IWiFiDirectDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectInformationElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectInformationElement>
{
    IWiFiDirectInformationElement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectInformationElementStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectInformationElementStatics>
{
    IWiFiDirectInformationElementStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectLegacySettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectLegacySettings>
{
    IWiFiDirectLegacySettings(std::nullptr_t = nullptr) noexcept {}
};

}
