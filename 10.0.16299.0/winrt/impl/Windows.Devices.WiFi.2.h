// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.Connectivity.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Devices.WiFi.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::WiFi {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Devices::WiFi {

struct WINRT_EBO WiFiAdapter :
    Windows::Devices::WiFi::IWiFiAdapter,
    impl::require<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapter2>
{
    WiFiAdapter(std::nullptr_t) noexcept {}
    using impl::consume_t<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapter2>::ConnectAsync;
    using Windows::Devices::WiFi::IWiFiAdapter::ConnectAsync;
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> FindAllAdaptersAsync();
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> FromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAccessStatus> RequestAccessAsync();
};

struct WINRT_EBO WiFiAvailableNetwork :
    Windows::Devices::WiFi::IWiFiAvailableNetwork
{
    WiFiAvailableNetwork(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WiFiConnectionResult :
    Windows::Devices::WiFi::IWiFiConnectionResult
{
    WiFiConnectionResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WiFiNetworkReport :
    Windows::Devices::WiFi::IWiFiNetworkReport
{
    WiFiNetworkReport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WiFiWpsConfigurationResult :
    Windows::Devices::WiFi::IWiFiWpsConfigurationResult
{
    WiFiWpsConfigurationResult(std::nullptr_t) noexcept {}
};

}
