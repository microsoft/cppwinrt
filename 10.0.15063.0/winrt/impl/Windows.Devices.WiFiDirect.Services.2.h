// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Networking.Sockets.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.Services.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect::Services {

struct WINRT_EBO WiFiDirectService :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectService
{
    WiFiDirectService(std::nullptr_t) noexcept {}
    static hstring GetSelector(param::hstring const& serviceName);
    static hstring GetSelector(param::hstring const& serviceName, Windows::Storage::Streams::IBuffer const& serviceInfoFilter);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::Services::WiFiDirectService> FromIdAsync(param::hstring const& deviceId);
};

struct WINRT_EBO WiFiDirectServiceAdvertiser :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAdvertiser
{
    WiFiDirectServiceAdvertiser(std::nullptr_t) noexcept {}
    WiFiDirectServiceAdvertiser(param::hstring const& serviceName);
};

struct WINRT_EBO WiFiDirectServiceAutoAcceptSessionConnectedEventArgs :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs
{
    WiFiDirectServiceAutoAcceptSessionConnectedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WiFiDirectServiceProvisioningInfo :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceProvisioningInfo
{
    WiFiDirectServiceProvisioningInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WiFiDirectServiceRemotePortAddedEventArgs :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceRemotePortAddedEventArgs
{
    WiFiDirectServiceRemotePortAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WiFiDirectServiceSession :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession
{
    WiFiDirectServiceSession(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WiFiDirectServiceSessionDeferredEventArgs :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionDeferredEventArgs
{
    WiFiDirectServiceSessionDeferredEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WiFiDirectServiceSessionRequest :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest
{
    WiFiDirectServiceSessionRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WiFiDirectServiceSessionRequestedEventArgs :
    Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequestedEventArgs
{
    WiFiDirectServiceSessionRequestedEventArgs(std::nullptr_t) noexcept {}
};

}
