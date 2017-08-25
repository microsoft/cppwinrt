// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.Connectivity.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Networking.1.h"

WINRT_EXPORT namespace winrt::Windows::Networking {

struct WINRT_EBO EndpointPair :
    Windows::Networking::IEndpointPair
{
    EndpointPair(std::nullptr_t) noexcept {}
    EndpointPair(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName, Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName);
};

struct WINRT_EBO HostName :
    Windows::Networking::IHostName,
    impl::require<HostName, Windows::Foundation::IStringable>
{
    HostName(std::nullptr_t) noexcept {}
    HostName(param::hstring const& hostName);
    static int32_t Compare(param::hstring const& value1, param::hstring const& value2);
};

}
