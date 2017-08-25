// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.Connectivity.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.0.h"

WINRT_EXPORT namespace winrt::Windows::Networking {

struct WINRT_EBO IEndpointPair :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEndpointPair>
{
    IEndpointPair(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEndpointPairFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEndpointPairFactory>
{
    IEndpointPairFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHostName :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHostName>
{
    IHostName(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHostNameFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHostNameFactory>
{
    IHostNameFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHostNameStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHostNameStatics>
{
    IHostNameStatics(std::nullptr_t = nullptr) noexcept {}
};

}
