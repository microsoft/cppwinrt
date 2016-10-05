// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Networking.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Networking {

template <typename D>
struct WINRT_EBO impl_IEndpointPair
{
    Windows::Networking::HostName LocalHostName() const;
    void LocalHostName(const Windows::Networking::HostName & value) const;
    hstring LocalServiceName() const;
    void LocalServiceName(hstring_ref value) const;
    Windows::Networking::HostName RemoteHostName() const;
    void RemoteHostName(const Windows::Networking::HostName & value) const;
    hstring RemoteServiceName() const;
    void RemoteServiceName(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IEndpointPairFactory
{
    Windows::Networking::EndpointPair CreateEndpointPair(const Windows::Networking::HostName & localHostName, hstring_ref localServiceName, const Windows::Networking::HostName & remoteHostName, hstring_ref remoteServiceName) const;
};

template <typename D>
struct WINRT_EBO impl_IHostName
{
    Windows::Networking::Connectivity::IPInformation IPInformation() const;
    hstring RawName() const;
    hstring DisplayName() const;
    hstring CanonicalName() const;
    Windows::Networking::HostNameType Type() const;
    bool IsEqual(const Windows::Networking::HostName & hostName) const;
};

template <typename D>
struct WINRT_EBO impl_IHostNameFactory
{
    Windows::Networking::HostName CreateHostName(hstring_ref hostName) const;
};

template <typename D>
struct WINRT_EBO impl_IHostNameStatics
{
    int32_t Compare(hstring_ref value1, hstring_ref value2) const;
};

struct IEndpointPair :
    Windows::IInspectable,
    impl::consume<IEndpointPair>
{
    IEndpointPair(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEndpointPair>(m_ptr); }
};

struct IEndpointPairFactory :
    Windows::IInspectable,
    impl::consume<IEndpointPairFactory>
{
    IEndpointPairFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEndpointPairFactory>(m_ptr); }
};

struct IHostName :
    Windows::IInspectable,
    impl::consume<IHostName>
{
    IHostName(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHostName>(m_ptr); }
};

struct IHostNameFactory :
    Windows::IInspectable,
    impl::consume<IHostNameFactory>
{
    IHostNameFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHostNameFactory>(m_ptr); }
};

struct IHostNameStatics :
    Windows::IInspectable,
    impl::consume<IHostNameStatics>
{
    IHostNameStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHostNameStatics>(m_ptr); }
};

}

}
