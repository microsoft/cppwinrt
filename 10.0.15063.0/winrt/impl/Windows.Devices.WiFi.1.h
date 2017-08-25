// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.Connectivity.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Devices.WiFi.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::WiFi {

struct WINRT_EBO IWiFiAdapter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiAdapter>
{
    IWiFiAdapter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiAdapterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiAdapterStatics>
{
    IWiFiAdapterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiAvailableNetwork :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiAvailableNetwork>
{
    IWiFiAvailableNetwork(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiConnectionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiConnectionResult>
{
    IWiFiConnectionResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiNetworkReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiNetworkReport>
{
    IWiFiNetworkReport(std::nullptr_t = nullptr) noexcept {}
};

}
