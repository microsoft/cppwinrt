// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Media.Playback.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Protection.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Protection {

struct WINRT_EBO IComponentLoadFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComponentLoadFailedEventArgs>
{
    IComponentLoadFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IComponentRenewalStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IComponentRenewalStatics>
{
    IComponentRenewalStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHdcpSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdcpSession>,
    impl::require<IHdcpSession, Windows::Foundation::IClosable>
{
    IHdcpSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaProtectionManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionManager>
{
    IMediaProtectionManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaProtectionPMPServer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionPMPServer>
{
    IMediaProtectionPMPServer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaProtectionPMPServerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionPMPServerFactory>
{
    IMediaProtectionPMPServerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaProtectionServiceCompletion :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionServiceCompletion>
{
    IMediaProtectionServiceCompletion(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaProtectionServiceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaProtectionServiceRequest>
{
    IMediaProtectionServiceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtectionCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtectionCapabilities>
{
    IProtectionCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRevocationAndRenewalInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRevocationAndRenewalInformation>
{
    IRevocationAndRenewalInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRevocationAndRenewalItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRevocationAndRenewalItem>
{
    IRevocationAndRenewalItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IServiceRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IServiceRequestedEventArgs>
{
    IServiceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IServiceRequestedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IServiceRequestedEventArgs2>
{
    IServiceRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

}
