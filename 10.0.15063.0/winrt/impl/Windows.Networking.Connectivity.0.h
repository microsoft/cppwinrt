// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

enum class DomainNameType;
enum class HostNameSortOptions : unsigned;
struct EndpointPair;
struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity {

enum class CellularApnAuthenticationType
{
    None = 0,
    Pap = 1,
    Chap = 2,
    Mschapv2 = 3,
};

enum class DataUsageGranularity
{
    PerMinute = 0,
    PerHour = 1,
    PerDay = 2,
    Total = 3,
};

enum class DomainConnectivityLevel
{
    None = 0,
    Unauthenticated = 1,
    Authenticated = 2,
};

enum class NetworkAuthenticationType
{
    None = 0,
    Unknown = 1,
    Open80211 = 2,
    SharedKey80211 = 3,
    Wpa = 4,
    WpaPsk = 5,
    WpaNone = 6,
    Rsna = 7,
    RsnaPsk = 8,
    Ihv = 9,
};

enum class NetworkConnectivityLevel
{
    None = 0,
    LocalAccess = 1,
    ConstrainedInternetAccess = 2,
    InternetAccess = 3,
};

enum class NetworkCostType
{
    Unknown = 0,
    Unrestricted = 1,
    Fixed = 2,
    Variable = 3,
};

enum class NetworkEncryptionType
{
    None = 0,
    Unknown = 1,
    Wep = 2,
    Wep40 = 3,
    Wep104 = 4,
    Tkip = 5,
    Ccmp = 6,
    WpaUseGroup = 7,
    RsnUseGroup = 8,
    Ihv = 9,
};

enum class NetworkTypes : unsigned
{
    None = 0x0,
    Internet = 0x1,
    PrivateNetwork = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(NetworkTypes)

enum class RoamingStates : unsigned
{
    None = 0x0,
    NotRoaming = 0x1,
    Roaming = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(RoamingStates)

enum class TriStates
{
    DoNotCare = 0,
    No = 1,
    Yes = 2,
};

enum class WwanDataClass : unsigned
{
    None = 0x0,
    Gprs = 0x1,
    Edge = 0x2,
    Umts = 0x4,
    Hsdpa = 0x8,
    Hsupa = 0x10,
    LteAdvanced = 0x20,
    Cdma1xRtt = 0x10000,
    Cdma1xEvdo = 0x20000,
    Cdma1xEvdoRevA = 0x40000,
    Cdma1xEvdv = 0x80000,
    Cdma3xRtt = 0x100000,
    Cdma1xEvdoRevB = 0x200000,
    CdmaUmb = 0x400000,
    Custom = 0x80000000,
};

DEFINE_ENUM_FLAG_OPERATORS(WwanDataClass)

enum class WwanNetworkRegistrationState
{
    None = 0,
    Deregistered = 1,
    Searching = 2,
    Home = 3,
    Roaming = 4,
    Partner = 5,
    Denied = 6,
};

struct IAttributedNetworkUsage;
struct ICellularApnContext;
struct IConnectionCost;
struct IConnectionCost2;
struct IConnectionProfile;
struct IConnectionProfile2;
struct IConnectionProfile3;
struct IConnectionProfileFilter;
struct IConnectionProfileFilter2;
struct IConnectionSession;
struct IConnectivityInterval;
struct IConnectivityManagerStatics;
struct IDataPlanStatus;
struct IDataPlanUsage;
struct IDataUsage;
struct IIPInformation;
struct ILanIdentifier;
struct ILanIdentifierData;
struct INetworkAdapter;
struct INetworkInformationStatics;
struct INetworkInformationStatics2;
struct INetworkItem;
struct INetworkSecuritySettings;
struct INetworkStateChangeEventDetails;
struct INetworkStateChangeEventDetails2;
struct INetworkUsage;
struct IProxyConfiguration;
struct IRoutePolicy;
struct IRoutePolicyFactory;
struct IWlanConnectionProfileDetails;
struct IWwanConnectionProfileDetails;
struct AttributedNetworkUsage;
struct CellularApnContext;
struct ConnectionCost;
struct ConnectionProfile;
struct ConnectionProfileFilter;
struct ConnectionSession;
struct ConnectivityInterval;
struct ConnectivityManager;
struct DataPlanStatus;
struct DataPlanUsage;
struct DataUsage;
struct IPInformation;
struct LanIdentifier;
struct LanIdentifierData;
struct NetworkAdapter;
struct NetworkInformation;
struct NetworkItem;
struct NetworkSecuritySettings;
struct NetworkStateChangeEventDetails;
struct NetworkUsage;
struct ProxyConfiguration;
struct RoutePolicy;
struct WlanConnectionProfileDetails;
struct WwanConnectionProfileDetails;
struct NetworkUsageStates;
struct NetworkStatusChangedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Networking::Connectivity::IAttributedNetworkUsage>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::ICellularApnContext>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectionCost>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectionCost2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectionProfile>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectionProfile2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectionProfile3>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectionProfileFilter>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectionProfileFilter2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectionSession>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectivityInterval>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IConnectivityManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IDataPlanStatus>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IDataPlanUsage>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IDataUsage>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IIPInformation>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::ILanIdentifier>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::ILanIdentifierData>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::INetworkAdapter>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::INetworkInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::INetworkInformationStatics2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::INetworkItem>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::INetworkSecuritySettings>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::INetworkStateChangeEventDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::INetworkUsage>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IProxyConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IRoutePolicy>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IRoutePolicyFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IWlanConnectionProfileDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::IWwanConnectionProfileDetails>{ using type = interface_category; };
template <> struct category<Windows::Networking::Connectivity::AttributedNetworkUsage>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::CellularApnContext>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::ConnectionCost>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::ConnectionProfile>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::ConnectionProfileFilter>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::ConnectionSession>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::ConnectivityInterval>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::ConnectivityManager>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::DataPlanStatus>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::DataPlanUsage>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::DataUsage>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::IPInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::LanIdentifier>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::LanIdentifierData>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkAdapter>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkInformation>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkItem>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkSecuritySettings>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkStateChangeEventDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkUsage>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::ProxyConfiguration>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::RoutePolicy>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::WlanConnectionProfileDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::WwanConnectionProfileDetails>{ using type = class_category; };
template <> struct category<Windows::Networking::Connectivity::CellularApnAuthenticationType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::DataUsageGranularity>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::DomainConnectivityLevel>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkAuthenticationType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkConnectivityLevel>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkCostType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkEncryptionType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkTypes>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::RoamingStates>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::TriStates>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::WwanDataClass>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::WwanNetworkRegistrationState>{ using type = enum_category; };
template <> struct category<Windows::Networking::Connectivity::NetworkUsageStates>{ using type = struct_category<Windows::Networking::Connectivity::TriStates,Windows::Networking::Connectivity::TriStates>; };
template <> struct category<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::Networking::Connectivity::IAttributedNetworkUsage>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IAttributedNetworkUsage" }; };
template <> struct name<Windows::Networking::Connectivity::ICellularApnContext>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ICellularApnContext" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectionCost>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectionCost" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectionCost2>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectionCost2" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectionProfile>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectionProfile" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectionProfile2>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectionProfile2" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectionProfile3>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectionProfile3" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectionProfileFilter>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectionProfileFilter" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectionProfileFilter2>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectionProfileFilter2" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectionSession>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectionSession" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectivityInterval>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectivityInterval" }; };
template <> struct name<Windows::Networking::Connectivity::IConnectivityManagerStatics>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IConnectivityManagerStatics" }; };
template <> struct name<Windows::Networking::Connectivity::IDataPlanStatus>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IDataPlanStatus" }; };
template <> struct name<Windows::Networking::Connectivity::IDataPlanUsage>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IDataPlanUsage" }; };
template <> struct name<Windows::Networking::Connectivity::IDataUsage>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IDataUsage" }; };
template <> struct name<Windows::Networking::Connectivity::IIPInformation>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IIPInformation" }; };
template <> struct name<Windows::Networking::Connectivity::ILanIdentifier>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ILanIdentifier" }; };
template <> struct name<Windows::Networking::Connectivity::ILanIdentifierData>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ILanIdentifierData" }; };
template <> struct name<Windows::Networking::Connectivity::INetworkAdapter>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.INetworkAdapter" }; };
template <> struct name<Windows::Networking::Connectivity::INetworkInformationStatics>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.INetworkInformationStatics" }; };
template <> struct name<Windows::Networking::Connectivity::INetworkInformationStatics2>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.INetworkInformationStatics2" }; };
template <> struct name<Windows::Networking::Connectivity::INetworkItem>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.INetworkItem" }; };
template <> struct name<Windows::Networking::Connectivity::INetworkSecuritySettings>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.INetworkSecuritySettings" }; };
template <> struct name<Windows::Networking::Connectivity::INetworkStateChangeEventDetails>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails" }; };
template <> struct name<Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails2" }; };
template <> struct name<Windows::Networking::Connectivity::INetworkUsage>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.INetworkUsage" }; };
template <> struct name<Windows::Networking::Connectivity::IProxyConfiguration>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IProxyConfiguration" }; };
template <> struct name<Windows::Networking::Connectivity::IRoutePolicy>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IRoutePolicy" }; };
template <> struct name<Windows::Networking::Connectivity::IRoutePolicyFactory>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IRoutePolicyFactory" }; };
template <> struct name<Windows::Networking::Connectivity::IWlanConnectionProfileDetails>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IWlanConnectionProfileDetails" }; };
template <> struct name<Windows::Networking::Connectivity::IWwanConnectionProfileDetails>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IWwanConnectionProfileDetails" }; };
template <> struct name<Windows::Networking::Connectivity::AttributedNetworkUsage>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.AttributedNetworkUsage" }; };
template <> struct name<Windows::Networking::Connectivity::CellularApnContext>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.CellularApnContext" }; };
template <> struct name<Windows::Networking::Connectivity::ConnectionCost>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ConnectionCost" }; };
template <> struct name<Windows::Networking::Connectivity::ConnectionProfile>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ConnectionProfile" }; };
template <> struct name<Windows::Networking::Connectivity::ConnectionProfileFilter>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ConnectionProfileFilter" }; };
template <> struct name<Windows::Networking::Connectivity::ConnectionSession>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ConnectionSession" }; };
template <> struct name<Windows::Networking::Connectivity::ConnectivityInterval>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ConnectivityInterval" }; };
template <> struct name<Windows::Networking::Connectivity::ConnectivityManager>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ConnectivityManager" }; };
template <> struct name<Windows::Networking::Connectivity::DataPlanStatus>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.DataPlanStatus" }; };
template <> struct name<Windows::Networking::Connectivity::DataPlanUsage>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.DataPlanUsage" }; };
template <> struct name<Windows::Networking::Connectivity::DataUsage>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.DataUsage" }; };
template <> struct name<Windows::Networking::Connectivity::IPInformation>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.IPInformation" }; };
template <> struct name<Windows::Networking::Connectivity::LanIdentifier>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.LanIdentifier" }; };
template <> struct name<Windows::Networking::Connectivity::LanIdentifierData>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.LanIdentifierData" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkAdapter>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkAdapter" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkInformation>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkInformation" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkItem>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkItem" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkSecuritySettings>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkSecuritySettings" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkStateChangeEventDetails>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkStateChangeEventDetails" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkUsage>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkUsage" }; };
template <> struct name<Windows::Networking::Connectivity::ProxyConfiguration>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.ProxyConfiguration" }; };
template <> struct name<Windows::Networking::Connectivity::RoutePolicy>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.RoutePolicy" }; };
template <> struct name<Windows::Networking::Connectivity::WlanConnectionProfileDetails>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.WlanConnectionProfileDetails" }; };
template <> struct name<Windows::Networking::Connectivity::WwanConnectionProfileDetails>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.WwanConnectionProfileDetails" }; };
template <> struct name<Windows::Networking::Connectivity::CellularApnAuthenticationType>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.CellularApnAuthenticationType" }; };
template <> struct name<Windows::Networking::Connectivity::DataUsageGranularity>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.DataUsageGranularity" }; };
template <> struct name<Windows::Networking::Connectivity::DomainConnectivityLevel>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.DomainConnectivityLevel" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkAuthenticationType>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkAuthenticationType" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkConnectivityLevel>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkConnectivityLevel" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkCostType>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkCostType" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkEncryptionType>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkEncryptionType" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkTypes>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkTypes" }; };
template <> struct name<Windows::Networking::Connectivity::RoamingStates>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.RoamingStates" }; };
template <> struct name<Windows::Networking::Connectivity::TriStates>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.TriStates" }; };
template <> struct name<Windows::Networking::Connectivity::WwanDataClass>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.WwanDataClass" }; };
template <> struct name<Windows::Networking::Connectivity::WwanNetworkRegistrationState>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.WwanNetworkRegistrationState" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkUsageStates>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkUsageStates" }; };
template <> struct name<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>{ static constexpr auto & value{ L"Windows.Networking.Connectivity.NetworkStatusChangedEventHandler" }; };
template <> struct guid<Windows::Networking::Connectivity::IAttributedNetworkUsage>{ static constexpr GUID value{ 0xF769B039,0xECA2,0x45EB,{ 0xAD,0xE1,0xB0,0x36,0x8B,0x75,0x6C,0x49 } }; };
template <> struct guid<Windows::Networking::Connectivity::ICellularApnContext>{ static constexpr GUID value{ 0x6FA529F4,0xEFFD,0x4542,{ 0x9A,0xB2,0x70,0x5B,0xBF,0x94,0x94,0x3A } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectionCost>{ static constexpr GUID value{ 0xBAD7D829,0x3416,0x4B10,{ 0xA2,0x02,0xBA,0xC0,0xB0,0x75,0xBD,0xAE } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectionCost2>{ static constexpr GUID value{ 0x8E113A05,0xE209,0x4549,{ 0xBB,0x25,0x5E,0x0D,0xB6,0x91,0xCB,0x05 } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectionProfile>{ static constexpr GUID value{ 0x71BA143C,0x598E,0x49D0,{ 0x84,0xEB,0x8F,0xEB,0xAE,0xDC,0xC1,0x95 } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectionProfile2>{ static constexpr GUID value{ 0xE2045145,0x4C9F,0x400C,{ 0x91,0x50,0x7E,0xC7,0xD6,0xE2,0x88,0x8A } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectionProfile3>{ static constexpr GUID value{ 0x578C2528,0x4CD9,0x4161,{ 0x80,0x45,0x20,0x1C,0xFD,0x5B,0x11,0x5C } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectionProfileFilter>{ static constexpr GUID value{ 0x204C7CC8,0xBD2D,0x4E8D,{ 0xA4,0xB3,0x45,0x5E,0xC3,0x37,0x38,0x8A } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectionProfileFilter2>{ static constexpr GUID value{ 0xCD068EE1,0xC3FC,0x4FAD,{ 0x9D,0xDC,0x59,0x3F,0xAA,0x4B,0x78,0x85 } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectionSession>{ static constexpr GUID value{ 0xFF905D4C,0xF83B,0x41B0,{ 0x8A,0x0C,0x14,0x62,0xD9,0xC5,0x6B,0x73 } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectivityInterval>{ static constexpr GUID value{ 0x4FAA3FFF,0x6746,0x4824,{ 0xA9,0x64,0xEE,0xD8,0xE8,0x7F,0x87,0x09 } }; };
template <> struct guid<Windows::Networking::Connectivity::IConnectivityManagerStatics>{ static constexpr GUID value{ 0x5120D4B1,0x4FB1,0x48B0,{ 0xAF,0xC9,0x42,0xE0,0x09,0x2A,0x81,0x64 } }; };
template <> struct guid<Windows::Networking::Connectivity::IDataPlanStatus>{ static constexpr GUID value{ 0x977A8B8C,0x3885,0x40F3,{ 0x88,0x51,0x42,0xCD,0x2B,0xD5,0x68,0xBB } }; };
template <> struct guid<Windows::Networking::Connectivity::IDataPlanUsage>{ static constexpr GUID value{ 0xB921492D,0x3B44,0x47FF,{ 0xB3,0x61,0xBE,0x59,0xE6,0x9E,0xD1,0xB0 } }; };
template <> struct guid<Windows::Networking::Connectivity::IDataUsage>{ static constexpr GUID value{ 0xC1431DD3,0xB146,0x4D39,{ 0xB9,0x59,0x0C,0x69,0xB0,0x96,0xC5,0x12 } }; };
template <> struct guid<Windows::Networking::Connectivity::IIPInformation>{ static constexpr GUID value{ 0xD85145E0,0x138F,0x47D7,{ 0x9B,0x3A,0x36,0xBB,0x48,0x8C,0xEF,0x33 } }; };
template <> struct guid<Windows::Networking::Connectivity::ILanIdentifier>{ static constexpr GUID value{ 0x48AA53AA,0x1108,0x4546,{ 0xA6,0xCB,0x9A,0x74,0xDA,0x4B,0x7B,0xA0 } }; };
template <> struct guid<Windows::Networking::Connectivity::ILanIdentifierData>{ static constexpr GUID value{ 0xA74E83C3,0xD639,0x45BE,{ 0xA3,0x6A,0xC4,0xE4,0xAE,0xAF,0x6D,0x9B } }; };
template <> struct guid<Windows::Networking::Connectivity::INetworkAdapter>{ static constexpr GUID value{ 0x3B542E03,0x5388,0x496C,{ 0xA8,0xA3,0xAF,0xFD,0x39,0xAE,0xC2,0xE6 } }; };
template <> struct guid<Windows::Networking::Connectivity::INetworkInformationStatics>{ static constexpr GUID value{ 0x5074F851,0x950D,0x4165,{ 0x9C,0x15,0x36,0x56,0x19,0x48,0x1E,0xEA } }; };
template <> struct guid<Windows::Networking::Connectivity::INetworkInformationStatics2>{ static constexpr GUID value{ 0x459CED14,0x2832,0x49B6,{ 0xBA,0x6E,0xE2,0x65,0xF0,0x47,0x86,0xA8 } }; };
template <> struct guid<Windows::Networking::Connectivity::INetworkItem>{ static constexpr GUID value{ 0x01BC4D39,0xF5E0,0x4567,{ 0xA2,0x8C,0x42,0x08,0x0C,0x83,0x1B,0x2B } }; };
template <> struct guid<Windows::Networking::Connectivity::INetworkSecuritySettings>{ static constexpr GUID value{ 0x7CA07E8D,0x917B,0x4B5F,{ 0xB8,0x4D,0x28,0xF7,0xA5,0xAC,0x54,0x02 } }; };
template <> struct guid<Windows::Networking::Connectivity::INetworkStateChangeEventDetails>{ static constexpr GUID value{ 0x1F0CF333,0xD7A6,0x44DD,{ 0xA4,0xE9,0x68,0x7C,0x47,0x6B,0x90,0x3D } }; };
template <> struct guid<Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>{ static constexpr GUID value{ 0xD643C0E8,0x30D3,0x4F6A,{ 0xAD,0x47,0x6A,0x18,0x73,0xCE,0xB3,0xC1 } }; };
template <> struct guid<Windows::Networking::Connectivity::INetworkUsage>{ static constexpr GUID value{ 0x49DA8FCE,0x9985,0x4927,{ 0xBF,0x5B,0x07,0x2B,0x5C,0x65,0xF8,0xD9 } }; };
template <> struct guid<Windows::Networking::Connectivity::IProxyConfiguration>{ static constexpr GUID value{ 0xEF3A60B4,0x9004,0x4DD6,{ 0xB7,0xD8,0xB3,0xE5,0x02,0xF4,0xAA,0xD0 } }; };
template <> struct guid<Windows::Networking::Connectivity::IRoutePolicy>{ static constexpr GUID value{ 0x11ABC4AC,0x0FC7,0x42E4,{ 0x87,0x42,0x56,0x99,0x23,0xB1,0xCA,0x11 } }; };
template <> struct guid<Windows::Networking::Connectivity::IRoutePolicyFactory>{ static constexpr GUID value{ 0x36027933,0xA18E,0x4DB5,{ 0xA6,0x97,0xF5,0x8F,0xA7,0x36,0x4E,0x44 } }; };
template <> struct guid<Windows::Networking::Connectivity::IWlanConnectionProfileDetails>{ static constexpr GUID value{ 0x562098CB,0xB35A,0x4BF1,{ 0xA8,0x84,0xB7,0x55,0x7E,0x88,0xFF,0x86 } }; };
template <> struct guid<Windows::Networking::Connectivity::IWwanConnectionProfileDetails>{ static constexpr GUID value{ 0x0E4DA8FE,0x835F,0x4DF3,{ 0x82,0xFD,0xDF,0x55,0x6E,0xBC,0x09,0xEF } }; };
template <> struct guid<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>{ static constexpr GUID value{ 0x71BA143F,0x598E,0x49D0,{ 0x84,0xEB,0x8F,0xEB,0xAE,0xDC,0xC1,0x95 } }; };
template <> struct default_interface<Windows::Networking::Connectivity::AttributedNetworkUsage>{ using type = Windows::Networking::Connectivity::IAttributedNetworkUsage; };
template <> struct default_interface<Windows::Networking::Connectivity::CellularApnContext>{ using type = Windows::Networking::Connectivity::ICellularApnContext; };
template <> struct default_interface<Windows::Networking::Connectivity::ConnectionCost>{ using type = Windows::Networking::Connectivity::IConnectionCost; };
template <> struct default_interface<Windows::Networking::Connectivity::ConnectionProfile>{ using type = Windows::Networking::Connectivity::IConnectionProfile; };
template <> struct default_interface<Windows::Networking::Connectivity::ConnectionProfileFilter>{ using type = Windows::Networking::Connectivity::IConnectionProfileFilter; };
template <> struct default_interface<Windows::Networking::Connectivity::ConnectionSession>{ using type = Windows::Networking::Connectivity::IConnectionSession; };
template <> struct default_interface<Windows::Networking::Connectivity::ConnectivityInterval>{ using type = Windows::Networking::Connectivity::IConnectivityInterval; };
template <> struct default_interface<Windows::Networking::Connectivity::DataPlanStatus>{ using type = Windows::Networking::Connectivity::IDataPlanStatus; };
template <> struct default_interface<Windows::Networking::Connectivity::DataPlanUsage>{ using type = Windows::Networking::Connectivity::IDataPlanUsage; };
template <> struct default_interface<Windows::Networking::Connectivity::DataUsage>{ using type = Windows::Networking::Connectivity::IDataUsage; };
template <> struct default_interface<Windows::Networking::Connectivity::IPInformation>{ using type = Windows::Networking::Connectivity::IIPInformation; };
template <> struct default_interface<Windows::Networking::Connectivity::LanIdentifier>{ using type = Windows::Networking::Connectivity::ILanIdentifier; };
template <> struct default_interface<Windows::Networking::Connectivity::LanIdentifierData>{ using type = Windows::Networking::Connectivity::ILanIdentifierData; };
template <> struct default_interface<Windows::Networking::Connectivity::NetworkAdapter>{ using type = Windows::Networking::Connectivity::INetworkAdapter; };
template <> struct default_interface<Windows::Networking::Connectivity::NetworkItem>{ using type = Windows::Networking::Connectivity::INetworkItem; };
template <> struct default_interface<Windows::Networking::Connectivity::NetworkSecuritySettings>{ using type = Windows::Networking::Connectivity::INetworkSecuritySettings; };
template <> struct default_interface<Windows::Networking::Connectivity::NetworkStateChangeEventDetails>{ using type = Windows::Networking::Connectivity::INetworkStateChangeEventDetails; };
template <> struct default_interface<Windows::Networking::Connectivity::NetworkUsage>{ using type = Windows::Networking::Connectivity::INetworkUsage; };
template <> struct default_interface<Windows::Networking::Connectivity::ProxyConfiguration>{ using type = Windows::Networking::Connectivity::IProxyConfiguration; };
template <> struct default_interface<Windows::Networking::Connectivity::RoutePolicy>{ using type = Windows::Networking::Connectivity::IRoutePolicy; };
template <> struct default_interface<Windows::Networking::Connectivity::WlanConnectionProfileDetails>{ using type = Windows::Networking::Connectivity::IWlanConnectionProfileDetails; };
template <> struct default_interface<Windows::Networking::Connectivity::WwanConnectionProfileDetails>{ using type = Windows::Networking::Connectivity::IWwanConnectionProfileDetails; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IAttributedNetworkUsage
{
    uint64_t BytesSent() const;
    uint64_t BytesReceived() const;
    hstring AttributionId() const;
    hstring AttributionName() const;
    Windows::Storage::Streams::IRandomAccessStreamReference AttributionThumbnail() const;
};
template <> struct consume<Windows::Networking::Connectivity::IAttributedNetworkUsage> { template <typename D> using type = consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_ICellularApnContext
{
    hstring ProviderId() const;
    void ProviderId(param::hstring const& value) const;
    hstring AccessPointName() const;
    void AccessPointName(param::hstring const& value) const;
    hstring UserName() const;
    void UserName(param::hstring const& value) const;
    hstring Password() const;
    void Password(param::hstring const& value) const;
    bool IsCompressionEnabled() const;
    void IsCompressionEnabled(bool value) const;
    Windows::Networking::Connectivity::CellularApnAuthenticationType AuthenticationType() const;
    void AuthenticationType(Windows::Networking::Connectivity::CellularApnAuthenticationType const& value) const;
};
template <> struct consume<Windows::Networking::Connectivity::ICellularApnContext> { template <typename D> using type = consume_Windows_Networking_Connectivity_ICellularApnContext<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectionCost
{
    Windows::Networking::Connectivity::NetworkCostType NetworkCostType() const;
    bool Roaming() const;
    bool OverDataLimit() const;
    bool ApproachingDataLimit() const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectionCost> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionCost<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectionCost2
{
    bool BackgroundDataUsageRestricted() const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectionCost2> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionCost2<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectionProfile
{
    hstring ProfileName() const;
    Windows::Networking::Connectivity::NetworkConnectivityLevel GetNetworkConnectivityLevel() const;
    Windows::Foundation::Collections::IVectorView<hstring> GetNetworkNames() const;
    Windows::Networking::Connectivity::ConnectionCost GetConnectionCost() const;
    Windows::Networking::Connectivity::DataPlanStatus GetDataPlanStatus() const;
    Windows::Networking::Connectivity::NetworkAdapter NetworkAdapter() const;
    [[deprecated("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")]] Windows::Networking::Connectivity::DataUsage GetLocalUsage(Windows::Foundation::DateTime const& StartTime, Windows::Foundation::DateTime const& EndTime) const;
    [[deprecated("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")]] Windows::Networking::Connectivity::DataUsage GetLocalUsage(Windows::Foundation::DateTime const& StartTime, Windows::Foundation::DateTime const& EndTime, Windows::Networking::Connectivity::RoamingStates const& States) const;
    Windows::Networking::Connectivity::NetworkSecuritySettings NetworkSecuritySettings() const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectionProfile> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfile<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectionProfile2
{
    bool IsWwanConnectionProfile() const;
    bool IsWlanConnectionProfile() const;
    Windows::Networking::Connectivity::WwanConnectionProfileDetails WwanConnectionProfileDetails() const;
    Windows::Networking::Connectivity::WlanConnectionProfileDetails WlanConnectionProfileDetails() const;
    Windows::Foundation::IReference<GUID> ServiceProviderGuid() const;
    Windows::Foundation::IReference<uint8_t> GetSignalBars() const;
    Windows::Networking::Connectivity::DomainConnectivityLevel GetDomainConnectivityLevel() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::NetworkUsage>> GetNetworkUsageAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::DataUsageGranularity const& granularity, Windows::Networking::Connectivity::NetworkUsageStates const& states) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectivityInterval>> GetConnectivityIntervalsAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::NetworkUsageStates const& states) const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectionProfile2> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfile2<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectionProfile3
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::AttributedNetworkUsage>> GetAttributedNetworkUsageAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::NetworkUsageStates const& states) const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectionProfile3> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfile3<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectionProfileFilter
{
    void IsConnected(bool value) const;
    bool IsConnected() const;
    void IsWwanConnectionProfile(bool value) const;
    bool IsWwanConnectionProfile() const;
    void IsWlanConnectionProfile(bool value) const;
    bool IsWlanConnectionProfile() const;
    void NetworkCostType(Windows::Networking::Connectivity::NetworkCostType const& value) const;
    Windows::Networking::Connectivity::NetworkCostType NetworkCostType() const;
    void ServiceProviderGuid(optional<GUID> const& value) const;
    Windows::Foundation::IReference<GUID> ServiceProviderGuid() const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectionProfileFilter> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectionProfileFilter2
{
    void IsRoaming(optional<bool> const& value) const;
    Windows::Foundation::IReference<bool> IsRoaming() const;
    void IsOverDataLimit(optional<bool> const& value) const;
    Windows::Foundation::IReference<bool> IsOverDataLimit() const;
    void IsBackgroundDataUsageRestricted(optional<bool> const& value) const;
    Windows::Foundation::IReference<bool> IsBackgroundDataUsageRestricted() const;
    Windows::Storage::Streams::IBuffer RawData() const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectionProfileFilter2> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectionSession
{
    Windows::Networking::Connectivity::ConnectionProfile ConnectionProfile() const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectionSession> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectionSession<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectivityInterval
{
    Windows::Foundation::DateTime StartTime() const;
    Windows::Foundation::TimeSpan ConnectionDuration() const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectivityInterval> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectivityInterval<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IConnectivityManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> AcquireConnectionAsync(Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext) const;
    void AddHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const;
    void RemoveHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const;
};
template <> struct consume<Windows::Networking::Connectivity::IConnectivityManagerStatics> { template <typename D> using type = consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IDataPlanStatus
{
    Windows::Networking::Connectivity::DataPlanUsage DataPlanUsage() const;
    Windows::Foundation::IReference<uint32_t> DataLimitInMegabytes() const;
    Windows::Foundation::IReference<uint64_t> InboundBitsPerSecond() const;
    Windows::Foundation::IReference<uint64_t> OutboundBitsPerSecond() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> NextBillingCycle() const;
    Windows::Foundation::IReference<uint32_t> MaxTransferSizeInMegabytes() const;
};
template <> struct consume<Windows::Networking::Connectivity::IDataPlanStatus> { template <typename D> using type = consume_Windows_Networking_Connectivity_IDataPlanStatus<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IDataPlanUsage
{
    uint32_t MegabytesUsed() const;
    Windows::Foundation::DateTime LastSyncTime() const;
};
template <> struct consume<Windows::Networking::Connectivity::IDataPlanUsage> { template <typename D> using type = consume_Windows_Networking_Connectivity_IDataPlanUsage<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IDataUsage
{
    [[deprecated("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")]] uint64_t BytesSent() const;
    [[deprecated("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")]] uint64_t BytesReceived() const;
};
template <> struct consume<Windows::Networking::Connectivity::IDataUsage> { template <typename D> using type = consume_Windows_Networking_Connectivity_IDataUsage<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IIPInformation
{
    Windows::Networking::Connectivity::NetworkAdapter NetworkAdapter() const;
    Windows::Foundation::IReference<uint8_t> PrefixLength() const;
};
template <> struct consume<Windows::Networking::Connectivity::IIPInformation> { template <typename D> using type = consume_Windows_Networking_Connectivity_IIPInformation<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_ILanIdentifier
{
    Windows::Networking::Connectivity::LanIdentifierData InfrastructureId() const;
    Windows::Networking::Connectivity::LanIdentifierData PortId() const;
    GUID NetworkAdapterId() const;
};
template <> struct consume<Windows::Networking::Connectivity::ILanIdentifier> { template <typename D> using type = consume_Windows_Networking_Connectivity_ILanIdentifier<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_ILanIdentifierData
{
    uint32_t Type() const;
    Windows::Foundation::Collections::IVectorView<uint8_t> Value() const;
};
template <> struct consume<Windows::Networking::Connectivity::ILanIdentifierData> { template <typename D> using type = consume_Windows_Networking_Connectivity_ILanIdentifierData<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_INetworkAdapter
{
    uint64_t OutboundMaxBitsPerSecond() const;
    uint64_t InboundMaxBitsPerSecond() const;
    uint32_t IanaInterfaceType() const;
    Windows::Networking::Connectivity::NetworkItem NetworkItem() const;
    GUID NetworkAdapterId() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionProfile> GetConnectedProfileAsync() const;
};
template <> struct consume<Windows::Networking::Connectivity::INetworkAdapter> { template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkAdapter<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_INetworkInformationStatics
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> GetConnectionProfiles() const;
    Windows::Networking::Connectivity::ConnectionProfile GetInternetConnectionProfile() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> GetLanIdentifiers() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> GetHostNames() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> GetProxyConfigurationAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> GetSortedEndpointPairs(param::iterable<Windows::Networking::EndpointPair> const& destinationList, Windows::Networking::HostNameSortOptions const& sortOptions) const;
    event_token NetworkStatusChanged(Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const;
    using NetworkStatusChanged_revoker = event_revoker<Windows::Networking::Connectivity::INetworkInformationStatics>;
    NetworkStatusChanged_revoker NetworkStatusChanged(auto_revoke_t, Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const;
    void NetworkStatusChanged(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Networking::Connectivity::INetworkInformationStatics> { template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_INetworkInformationStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> FindConnectionProfilesAsync(Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter) const;
};
template <> struct consume<Windows::Networking::Connectivity::INetworkInformationStatics2> { template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkInformationStatics2<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_INetworkItem
{
    GUID NetworkId() const;
    Windows::Networking::Connectivity::NetworkTypes GetNetworkTypes() const;
};
template <> struct consume<Windows::Networking::Connectivity::INetworkItem> { template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkItem<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_INetworkSecuritySettings
{
    Windows::Networking::Connectivity::NetworkAuthenticationType NetworkAuthenticationType() const;
    Windows::Networking::Connectivity::NetworkEncryptionType NetworkEncryptionType() const;
};
template <> struct consume<Windows::Networking::Connectivity::INetworkSecuritySettings> { template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkSecuritySettings<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails
{
    bool HasNewInternetConnectionProfile() const;
    bool HasNewConnectionCost() const;
    bool HasNewNetworkConnectivityLevel() const;
    bool HasNewDomainConnectivityLevel() const;
    bool HasNewHostNameList() const;
    bool HasNewWwanRegistrationState() const;
};
template <> struct consume<Windows::Networking::Connectivity::INetworkStateChangeEventDetails> { template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2
{
    bool HasNewTetheringOperationalState() const;
    bool HasNewTetheringClientCount() const;
};
template <> struct consume<Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> { template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_INetworkUsage
{
    uint64_t BytesSent() const;
    uint64_t BytesReceived() const;
    Windows::Foundation::TimeSpan ConnectionDuration() const;
};
template <> struct consume<Windows::Networking::Connectivity::INetworkUsage> { template <typename D> using type = consume_Windows_Networking_Connectivity_INetworkUsage<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IProxyConfiguration
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> ProxyUris() const;
    bool CanConnectDirectly() const;
};
template <> struct consume<Windows::Networking::Connectivity::IProxyConfiguration> { template <typename D> using type = consume_Windows_Networking_Connectivity_IProxyConfiguration<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IRoutePolicy
{
    Windows::Networking::Connectivity::ConnectionProfile ConnectionProfile() const;
    Windows::Networking::HostName HostName() const;
    Windows::Networking::DomainNameType HostNameType() const;
};
template <> struct consume<Windows::Networking::Connectivity::IRoutePolicy> { template <typename D> using type = consume_Windows_Networking_Connectivity_IRoutePolicy<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IRoutePolicyFactory
{
    Windows::Networking::Connectivity::RoutePolicy CreateRoutePolicy(Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, Windows::Networking::HostName const& hostName, Windows::Networking::DomainNameType const& type) const;
};
template <> struct consume<Windows::Networking::Connectivity::IRoutePolicyFactory> { template <typename D> using type = consume_Windows_Networking_Connectivity_IRoutePolicyFactory<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IWlanConnectionProfileDetails
{
    hstring GetConnectedSsid() const;
};
template <> struct consume<Windows::Networking::Connectivity::IWlanConnectionProfileDetails> { template <typename D> using type = consume_Windows_Networking_Connectivity_IWlanConnectionProfileDetails<D>; };

template <typename D>
struct consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails
{
    hstring HomeProviderId() const;
    hstring AccessPointName() const;
    Windows::Networking::Connectivity::WwanNetworkRegistrationState GetNetworkRegistrationState() const;
    Windows::Networking::Connectivity::WwanDataClass GetCurrentDataClass() const;
};
template <> struct consume<Windows::Networking::Connectivity::IWwanConnectionProfileDetails> { template <typename D> using type = consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>; };

template <> struct abi<Windows::Networking::Connectivity::IAttributedNetworkUsage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BytesSent(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_BytesReceived(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_AttributionId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AttributionName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AttributionThumbnail(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::ICellularApnContext>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProviderId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ProviderId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AccessPointName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AccessPointName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_UserName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_UserName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Password(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Password(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsCompressionEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCompressionEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_AuthenticationType(abi_t<Windows::Networking::Connectivity::CellularApnAuthenticationType>* value) = 0;
    virtual HRESULT __stdcall put_AuthenticationType(abi_t<Windows::Networking::Connectivity::CellularApnAuthenticationType> value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectionCost>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkCostType(abi_t<Windows::Networking::Connectivity::NetworkCostType>* value) = 0;
    virtual HRESULT __stdcall get_Roaming(bool* value) = 0;
    virtual HRESULT __stdcall get_OverDataLimit(bool* value) = 0;
    virtual HRESULT __stdcall get_ApproachingDataLimit(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectionCost2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BackgroundDataUsageRestricted(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectionProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProfileName(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetNetworkConnectivityLevel(abi_t<Windows::Networking::Connectivity::NetworkConnectivityLevel>* value) = 0;
    virtual HRESULT __stdcall GetNetworkNames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetConnectionCost(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDataPlanStatus(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NetworkAdapter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLocalUsage(abi_t<Windows::Foundation::DateTime> StartTime, abi_t<Windows::Foundation::DateTime> EndTime, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLocalUsagePerRoamingStates(abi_t<Windows::Foundation::DateTime> StartTime, abi_t<Windows::Foundation::DateTime> EndTime, abi_t<Windows::Networking::Connectivity::RoamingStates> States, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NetworkSecuritySettings(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectionProfile2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsWwanConnectionProfile(bool* value) = 0;
    virtual HRESULT __stdcall get_IsWlanConnectionProfile(bool* value) = 0;
    virtual HRESULT __stdcall get_WwanConnectionProfileDetails(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WlanConnectionProfileDetails(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServiceProviderGuid(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetSignalBars(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDomainConnectivityLevel(abi_t<Windows::Networking::Connectivity::DomainConnectivityLevel>* value) = 0;
    virtual HRESULT __stdcall GetNetworkUsageAsync(abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::Foundation::DateTime> endTime, abi_t<Windows::Networking::Connectivity::DataUsageGranularity> granularity, abi_t<Windows::Networking::Connectivity::NetworkUsageStates> states, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetConnectivityIntervalsAsync(abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::Foundation::DateTime> endTime, abi_t<Windows::Networking::Connectivity::NetworkUsageStates> states, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectionProfile3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAttributedNetworkUsageAsync(abi_t<Windows::Foundation::DateTime> startTime, abi_t<Windows::Foundation::DateTime> endTime, abi_t<Windows::Networking::Connectivity::NetworkUsageStates> states, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectionProfileFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_IsConnected(bool value) = 0;
    virtual HRESULT __stdcall get_IsConnected(bool* value) = 0;
    virtual HRESULT __stdcall put_IsWwanConnectionProfile(bool value) = 0;
    virtual HRESULT __stdcall get_IsWwanConnectionProfile(bool* value) = 0;
    virtual HRESULT __stdcall put_IsWlanConnectionProfile(bool value) = 0;
    virtual HRESULT __stdcall get_IsWlanConnectionProfile(bool* value) = 0;
    virtual HRESULT __stdcall put_NetworkCostType(abi_t<Windows::Networking::Connectivity::NetworkCostType> value) = 0;
    virtual HRESULT __stdcall get_NetworkCostType(abi_t<Windows::Networking::Connectivity::NetworkCostType>* value) = 0;
    virtual HRESULT __stdcall put_ServiceProviderGuid(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ServiceProviderGuid(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectionProfileFilter2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_IsRoaming(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_IsRoaming(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_IsOverDataLimit(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_IsOverDataLimit(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_IsBackgroundDataUsageRestricted(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_IsBackgroundDataUsageRestricted(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RawData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectionSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConnectionProfile(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectivityInterval>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StartTime(abi_t<Windows::Foundation::DateTime>* startTime) = 0;
    virtual HRESULT __stdcall get_ConnectionDuration(abi_t<Windows::Foundation::TimeSpan>* duration) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IConnectivityManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AcquireConnectionAsync(::IUnknown* cellularApnContext, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AddHttpRoutePolicy(::IUnknown* routePolicy) = 0;
    virtual HRESULT __stdcall RemoveHttpRoutePolicy(::IUnknown* routePolicy) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IDataPlanStatus>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataPlanUsage(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DataLimitInMegabytes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InboundBitsPerSecond(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OutboundBitsPerSecond(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NextBillingCycle(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaxTransferSizeInMegabytes(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IDataPlanUsage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MegabytesUsed(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_LastSyncTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IDataUsage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BytesSent(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_BytesReceived(uint64_t* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IIPInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAdapter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PrefixLength(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::ILanIdentifier>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InfrastructureId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PortId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NetworkAdapterId(abi_t<GUID>* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::ILanIdentifierData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::INetworkAdapter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OutboundMaxBitsPerSecond(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_InboundMaxBitsPerSecond(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_IanaInterfaceType(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_NetworkItem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NetworkAdapterId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall GetConnectedProfileAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::INetworkInformationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetConnectionProfiles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetInternetConnectionProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLanIdentifiers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetHostNames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetProxyConfigurationAsync(::IUnknown* uri, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetSortedEndpointPairs(::IUnknown* destinationList, abi_t<Windows::Networking::HostNameSortOptions> sortOptions, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_NetworkStatusChanged(::IUnknown* networkStatusHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_NetworkStatusChanged(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::INetworkInformationStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindConnectionProfilesAsync(::IUnknown* pProfileFilter, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::INetworkItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall GetNetworkTypes(abi_t<Windows::Networking::Connectivity::NetworkTypes>* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::INetworkSecuritySettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAuthenticationType(abi_t<Windows::Networking::Connectivity::NetworkAuthenticationType>* value) = 0;
    virtual HRESULT __stdcall get_NetworkEncryptionType(abi_t<Windows::Networking::Connectivity::NetworkEncryptionType>* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::INetworkStateChangeEventDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HasNewInternetConnectionProfile(bool* value) = 0;
    virtual HRESULT __stdcall get_HasNewConnectionCost(bool* value) = 0;
    virtual HRESULT __stdcall get_HasNewNetworkConnectivityLevel(bool* value) = 0;
    virtual HRESULT __stdcall get_HasNewDomainConnectivityLevel(bool* value) = 0;
    virtual HRESULT __stdcall get_HasNewHostNameList(bool* value) = 0;
    virtual HRESULT __stdcall get_HasNewWwanRegistrationState(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HasNewTetheringOperationalState(bool* value) = 0;
    virtual HRESULT __stdcall get_HasNewTetheringClientCount(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::INetworkUsage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BytesSent(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_BytesReceived(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_ConnectionDuration(abi_t<Windows::Foundation::TimeSpan>* duration) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IProxyConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProxyUris(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CanConnectDirectly(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IRoutePolicy>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConnectionProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HostNameType(abi_t<Windows::Networking::DomainNameType>* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IRoutePolicyFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateRoutePolicy(::IUnknown* connectionProfile, ::IUnknown* hostName, abi_t<Windows::Networking::DomainNameType> type, ::IUnknown** routePolicy) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IWlanConnectionProfileDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetConnectedSsid(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::IWwanConnectionProfileDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HomeProviderId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AccessPointName(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetNetworkRegistrationState(abi_t<Windows::Networking::Connectivity::WwanNetworkRegistrationState>* value) = 0;
    virtual HRESULT __stdcall GetCurrentDataClass(abi_t<Windows::Networking::Connectivity::WwanDataClass>* value) = 0;
};};

template <> struct abi<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender) = 0;
};};

}
