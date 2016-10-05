// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Networking.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Networking {

struct WINRT_EBO EndpointPair :
    Windows::Networking::IEndpointPair
{
    EndpointPair(std::nullptr_t) noexcept {}
    EndpointPair(const Windows::Networking::HostName & localHostName, hstring_ref localServiceName, const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName);
};

struct WINRT_EBO HostName :
    Windows::Networking::IHostName,
    impl::require<HostName, Windows::Foundation::IStringable>
{
    HostName(std::nullptr_t) noexcept {}
    HostName(hstring_ref hostName);
    static int32_t Compare(hstring_ref value1, hstring_ref value2);
};

}

}
