// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Networking.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Networking.Connectivity.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Networking {

struct __declspec(uuid("33a0aa36-f8fa-4b30-b856-76517c3bd06d")) __declspec(novtable) IEndpointPair : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LocalHostName(Windows::Networking::IHostName ** value) = 0;
    virtual HRESULT __stdcall put_LocalHostName(Windows::Networking::IHostName * value) = 0;
    virtual HRESULT __stdcall get_LocalServiceName(hstring * value) = 0;
    virtual HRESULT __stdcall put_LocalServiceName(hstring value) = 0;
    virtual HRESULT __stdcall get_RemoteHostName(Windows::Networking::IHostName ** value) = 0;
    virtual HRESULT __stdcall put_RemoteHostName(Windows::Networking::IHostName * value) = 0;
    virtual HRESULT __stdcall get_RemoteServiceName(hstring * value) = 0;
    virtual HRESULT __stdcall put_RemoteServiceName(hstring value) = 0;
};

struct __declspec(uuid("b609d971-64e0-442b-aa6f-cc8c8f181f78")) __declspec(novtable) IEndpointPairFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateEndpointPair(Windows::Networking::IHostName * localHostName, hstring localServiceName, Windows::Networking::IHostName * remoteHostName, hstring remoteServiceName, Windows::Networking::IEndpointPair ** value) = 0;
};

struct __declspec(uuid("bf8ecaad-ed96-49a7-9084-d416cae88dcb")) __declspec(novtable) IHostName : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IPInformation(Windows::Networking::Connectivity::IIPInformation ** value) = 0;
    virtual HRESULT __stdcall get_RawName(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_CanonicalName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Type(winrt::Windows::Networking::HostNameType * value) = 0;
    virtual HRESULT __stdcall abi_IsEqual(Windows::Networking::IHostName * hostName, bool * isEqual) = 0;
};

struct __declspec(uuid("458c23ed-712f-4576-adf1-c20b2c643558")) __declspec(novtable) IHostNameFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateHostName(hstring hostName, Windows::Networking::IHostName ** value) = 0;
};

struct __declspec(uuid("f68cd4bf-a388-4e8b-91ea-54dd6dd901c0")) __declspec(novtable) IHostNameStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Compare(hstring value1, hstring value2, int32_t * result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Networking::EndpointPair> { using default_interface = Windows::Networking::IEndpointPair; };
template <> struct traits<Windows::Networking::HostName> { using default_interface = Windows::Networking::IHostName; };

}

namespace Windows::Networking {

template <typename T> struct impl_IEndpointPair;
template <typename T> struct impl_IEndpointPairFactory;
template <typename T> struct impl_IHostName;
template <typename T> struct impl_IHostNameFactory;
template <typename T> struct impl_IHostNameStatics;

}

namespace impl {

template <> struct traits<Windows::Networking::IEndpointPair>
{
    using abi = ABI::Windows::Networking::IEndpointPair;
    template <typename D> using consume = Windows::Networking::impl_IEndpointPair<D>;
};

template <> struct traits<Windows::Networking::IEndpointPairFactory>
{
    using abi = ABI::Windows::Networking::IEndpointPairFactory;
    template <typename D> using consume = Windows::Networking::impl_IEndpointPairFactory<D>;
};

template <> struct traits<Windows::Networking::IHostName>
{
    using abi = ABI::Windows::Networking::IHostName;
    template <typename D> using consume = Windows::Networking::impl_IHostName<D>;
};

template <> struct traits<Windows::Networking::IHostNameFactory>
{
    using abi = ABI::Windows::Networking::IHostNameFactory;
    template <typename D> using consume = Windows::Networking::impl_IHostNameFactory<D>;
};

template <> struct traits<Windows::Networking::IHostNameStatics>
{
    using abi = ABI::Windows::Networking::IHostNameStatics;
    template <typename D> using consume = Windows::Networking::impl_IHostNameStatics<D>;
};

template <> struct traits<Windows::Networking::EndpointPair>
{
    using abi = ABI::Windows::Networking::EndpointPair;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.EndpointPair"; }
};

template <> struct traits<Windows::Networking::HostName>
{
    using abi = ABI::Windows::Networking::HostName;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Networking.HostName"; }
};

}

}
