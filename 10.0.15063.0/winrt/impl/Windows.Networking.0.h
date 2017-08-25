// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity {

struct IPInformation;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

enum class DomainNameType
{
    Suffix = 0,
    FullyQualified = 1,
};

enum class HostNameSortOptions : unsigned
{
    None = 0x0,
    OptimizeForLongConnections = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(HostNameSortOptions)

enum class HostNameType
{
    DomainName = 0,
    Ipv4 = 1,
    Ipv6 = 2,
    Bluetooth = 3,
};

struct IEndpointPair;
struct IEndpointPairFactory;
struct IHostName;
struct IHostNameFactory;
struct IHostNameStatics;
struct EndpointPair;
struct HostName;

}

namespace winrt::impl {

template <> struct category<Windows::Networking::IEndpointPair>{ using type = interface_category; };
template <> struct category<Windows::Networking::IEndpointPairFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::IHostName>{ using type = interface_category; };
template <> struct category<Windows::Networking::IHostNameFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::IHostNameStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::EndpointPair>{ using type = class_category; };
template <> struct category<Windows::Networking::HostName>{ using type = class_category; };
template <> struct category<Windows::Networking::DomainNameType>{ using type = enum_category; };
template <> struct category<Windows::Networking::HostNameSortOptions>{ using type = enum_category; };
template <> struct category<Windows::Networking::HostNameType>{ using type = enum_category; };
template <> struct name<Windows::Networking::IEndpointPair>{ static constexpr auto & value{ L"Windows.Networking.IEndpointPair" }; };
template <> struct name<Windows::Networking::IEndpointPairFactory>{ static constexpr auto & value{ L"Windows.Networking.IEndpointPairFactory" }; };
template <> struct name<Windows::Networking::IHostName>{ static constexpr auto & value{ L"Windows.Networking.IHostName" }; };
template <> struct name<Windows::Networking::IHostNameFactory>{ static constexpr auto & value{ L"Windows.Networking.IHostNameFactory" }; };
template <> struct name<Windows::Networking::IHostNameStatics>{ static constexpr auto & value{ L"Windows.Networking.IHostNameStatics" }; };
template <> struct name<Windows::Networking::EndpointPair>{ static constexpr auto & value{ L"Windows.Networking.EndpointPair" }; };
template <> struct name<Windows::Networking::HostName>{ static constexpr auto & value{ L"Windows.Networking.HostName" }; };
template <> struct name<Windows::Networking::DomainNameType>{ static constexpr auto & value{ L"Windows.Networking.DomainNameType" }; };
template <> struct name<Windows::Networking::HostNameSortOptions>{ static constexpr auto & value{ L"Windows.Networking.HostNameSortOptions" }; };
template <> struct name<Windows::Networking::HostNameType>{ static constexpr auto & value{ L"Windows.Networking.HostNameType" }; };
template <> struct guid<Windows::Networking::IEndpointPair>{ static constexpr GUID value{ 0x33A0AA36,0xF8FA,0x4B30,{ 0xB8,0x56,0x76,0x51,0x7C,0x3B,0xD0,0x6D } }; };
template <> struct guid<Windows::Networking::IEndpointPairFactory>{ static constexpr GUID value{ 0xB609D971,0x64E0,0x442B,{ 0xAA,0x6F,0xCC,0x8C,0x8F,0x18,0x1F,0x78 } }; };
template <> struct guid<Windows::Networking::IHostName>{ static constexpr GUID value{ 0xBF8ECAAD,0xED96,0x49A7,{ 0x90,0x84,0xD4,0x16,0xCA,0xE8,0x8D,0xCB } }; };
template <> struct guid<Windows::Networking::IHostNameFactory>{ static constexpr GUID value{ 0x458C23ED,0x712F,0x4576,{ 0xAD,0xF1,0xC2,0x0B,0x2C,0x64,0x35,0x58 } }; };
template <> struct guid<Windows::Networking::IHostNameStatics>{ static constexpr GUID value{ 0xF68CD4BF,0xA388,0x4E8B,{ 0x91,0xEA,0x54,0xDD,0x6D,0xD9,0x01,0xC0 } }; };
template <> struct default_interface<Windows::Networking::EndpointPair>{ using type = Windows::Networking::IEndpointPair; };
template <> struct default_interface<Windows::Networking::HostName>{ using type = Windows::Networking::IHostName; };

template <typename D>
struct consume_Windows_Networking_IEndpointPair
{
    Windows::Networking::HostName LocalHostName() const;
    void LocalHostName(Windows::Networking::HostName const& value) const;
    hstring LocalServiceName() const;
    void LocalServiceName(param::hstring const& value) const;
    Windows::Networking::HostName RemoteHostName() const;
    void RemoteHostName(Windows::Networking::HostName const& value) const;
    hstring RemoteServiceName() const;
    void RemoteServiceName(param::hstring const& value) const;
};
template <> struct consume<Windows::Networking::IEndpointPair> { template <typename D> using type = consume_Windows_Networking_IEndpointPair<D>; };

template <typename D>
struct consume_Windows_Networking_IEndpointPairFactory
{
    Windows::Networking::EndpointPair CreateEndpointPair(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName, Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const;
};
template <> struct consume<Windows::Networking::IEndpointPairFactory> { template <typename D> using type = consume_Windows_Networking_IEndpointPairFactory<D>; };

template <typename D>
struct consume_Windows_Networking_IHostName
{
    Windows::Networking::Connectivity::IPInformation IPInformation() const;
    hstring RawName() const;
    hstring DisplayName() const;
    hstring CanonicalName() const;
    Windows::Networking::HostNameType Type() const;
    bool IsEqual(Windows::Networking::HostName const& hostName) const;
};
template <> struct consume<Windows::Networking::IHostName> { template <typename D> using type = consume_Windows_Networking_IHostName<D>; };

template <typename D>
struct consume_Windows_Networking_IHostNameFactory
{
    Windows::Networking::HostName CreateHostName(param::hstring const& hostName) const;
};
template <> struct consume<Windows::Networking::IHostNameFactory> { template <typename D> using type = consume_Windows_Networking_IHostNameFactory<D>; };

template <typename D>
struct consume_Windows_Networking_IHostNameStatics
{
    int32_t Compare(param::hstring const& value1, param::hstring const& value2) const;
};
template <> struct consume<Windows::Networking::IHostNameStatics> { template <typename D> using type = consume_Windows_Networking_IHostNameStatics<D>; };

template <> struct abi<Windows::Networking::IEndpointPair>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocalHostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_LocalHostName(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_LocalServiceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_LocalServiceName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_RemoteHostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RemoteHostName(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RemoteServiceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RemoteServiceName(HSTRING value) = 0;
};};

template <> struct abi<Windows::Networking::IEndpointPairFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateEndpointPair(::IUnknown* localHostName, HSTRING localServiceName, ::IUnknown* remoteHostName, HSTRING remoteServiceName, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::IHostName>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IPInformation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RawName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CanonicalName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Networking::HostNameType>* value) = 0;
    virtual HRESULT __stdcall IsEqual(::IUnknown* hostName, bool* isEqual) = 0;
};};

template <> struct abi<Windows::Networking::IHostNameFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateHostName(HSTRING hostName, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::IHostNameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Compare(HSTRING value1, HSTRING value2, int32_t* result) = 0;
};};

}
