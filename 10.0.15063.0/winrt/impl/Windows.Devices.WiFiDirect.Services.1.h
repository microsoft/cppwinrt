// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.Services.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect::Services {

struct WINRT_EBO IWiFiDirectService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectService>
{
    IWiFiDirectService(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceAdvertiser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceAdvertiser>
{
    IWiFiDirectServiceAdvertiser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceAdvertiserFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceAdvertiserFactory>
{
    IWiFiDirectServiceAdvertiserFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
{
    IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceProvisioningInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceProvisioningInfo>
{
    IWiFiDirectServiceProvisioningInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceRemotePortAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceRemotePortAddedEventArgs>
{
    IWiFiDirectServiceRemotePortAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceSession>,
    impl::require<IWiFiDirectServiceSession, Windows::Foundation::IClosable>
{
    IWiFiDirectServiceSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceSessionDeferredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceSessionDeferredEventArgs>
{
    IWiFiDirectServiceSessionDeferredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceSessionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceSessionRequest>,
    impl::require<IWiFiDirectServiceSessionRequest, Windows::Foundation::IClosable>
{
    IWiFiDirectServiceSessionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceSessionRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceSessionRequestedEventArgs>
{
    IWiFiDirectServiceSessionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWiFiDirectServiceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWiFiDirectServiceStatics>
{
    IWiFiDirectServiceStatics(std::nullptr_t = nullptr) noexcept {}
};

}
