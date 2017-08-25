// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Networking.Connectivity.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.ServiceDiscovery.Dnssd.0.h"

WINRT_EXPORT namespace winrt::Windows::Networking::ServiceDiscovery::Dnssd {

struct WINRT_EBO IDnssdRegistrationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDnssdRegistrationResult>
{
    IDnssdRegistrationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDnssdServiceInstance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDnssdServiceInstance>
{
    IDnssdServiceInstance(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDnssdServiceInstanceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDnssdServiceInstanceFactory>
{
    IDnssdServiceInstanceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDnssdServiceWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDnssdServiceWatcher>
{
    IDnssdServiceWatcher(std::nullptr_t = nullptr) noexcept {}
};

}
