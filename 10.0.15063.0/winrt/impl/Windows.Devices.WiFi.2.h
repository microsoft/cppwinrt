// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.Connectivity.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Devices.WiFi.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::WiFi {

struct WINRT_EBO WiFiAdapter :
    Windows::Devices::WiFi::IWiFiAdapter
{
    WiFiAdapter(std::nullptr_t) noexcept {}
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

}
