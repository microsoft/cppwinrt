// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Networking.Connectivity.0.h"

WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity {

struct WINRT_EBO IAttributedNetworkUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAttributedNetworkUsage>
{
    IAttributedNetworkUsage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICellularApnContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICellularApnContext>
{
    ICellularApnContext(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectionCost :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionCost>
{
    IConnectionCost(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectionCost2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionCost2>
{
    IConnectionCost2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectionProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfile>
{
    IConnectionProfile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectionProfile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfile2>
{
    IConnectionProfile2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectionProfile3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfile3>
{
    IConnectionProfile3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectionProfileFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfileFilter>
{
    IConnectionProfileFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectionProfileFilter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionProfileFilter2>
{
    IConnectionProfileFilter2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectionSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionSession>,
    impl::require<IConnectionSession, Windows::Foundation::IClosable>
{
    IConnectionSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectivityInterval :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectivityInterval>
{
    IConnectivityInterval(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IConnectivityManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectivityManagerStatics>
{
    IConnectivityManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPlanStatus :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPlanStatus>
{
    IDataPlanStatus(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPlanUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPlanUsage>
{
    IDataPlanUsage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")]] IDataUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataUsage>
{
    IDataUsage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IIPInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIPInformation>
{
    IIPInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILanIdentifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanIdentifier>
{
    ILanIdentifier(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILanIdentifierData :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILanIdentifierData>
{
    ILanIdentifierData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkAdapter :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkAdapter>
{
    INetworkAdapter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkInformationStatics>
{
    INetworkInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkInformationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkInformationStatics2>
{
    INetworkInformationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkItem>
{
    INetworkItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkSecuritySettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkSecuritySettings>
{
    INetworkSecuritySettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkStateChangeEventDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkStateChangeEventDetails>
{
    INetworkStateChangeEventDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkStateChangeEventDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkStateChangeEventDetails2>
{
    INetworkStateChangeEventDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INetworkUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<INetworkUsage>
{
    INetworkUsage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProxyConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProxyConfiguration>
{
    IProxyConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRoutePolicy :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRoutePolicy>
{
    IRoutePolicy(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRoutePolicyFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRoutePolicyFactory>
{
    IRoutePolicyFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWlanConnectionProfileDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWlanConnectionProfileDetails>
{
    IWlanConnectionProfileDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWwanConnectionProfileDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWwanConnectionProfileDetails>
{
    IWwanConnectionProfileDetails(std::nullptr_t = nullptr) noexcept {}
};

}
