// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity {

struct NetworkAdapter;
struct NetworkSecuritySettings;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;

}

WINRT_EXPORT namespace winrt::Windows::Devices::WiFi {

enum class WiFiAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    DeniedByUser = 2,
    DeniedBySystem = 3,
};

enum class WiFiConnectionStatus
{
    UnspecifiedFailure = 0,
    Success = 1,
    AccessRevoked = 2,
    InvalidCredential = 3,
    NetworkNotAvailable = 4,
    Timeout = 5,
    UnsupportedAuthenticationProtocol = 6,
};

enum class WiFiNetworkKind
{
    Any = 0,
    Infrastructure = 1,
    Adhoc = 2,
};

enum class WiFiPhyKind
{
    Unknown = 0,
    Fhss = 1,
    Dsss = 2,
    IRBaseband = 3,
    Ofdm = 4,
    Hrdsss = 5,
    Erp = 6,
    HT = 7,
    Vht = 8,
    Dmg = 9,
};

enum class WiFiReconnectionKind
{
    Automatic = 0,
    Manual = 1,
};

struct IWiFiAdapter;
struct IWiFiAdapterStatics;
struct IWiFiAvailableNetwork;
struct IWiFiConnectionResult;
struct IWiFiNetworkReport;
struct WiFiAdapter;
struct WiFiAvailableNetwork;
struct WiFiConnectionResult;
struct WiFiNetworkReport;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::WiFi::IWiFiAdapter>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFi::IWiFiAdapterStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFi::IWiFiAvailableNetwork>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFi::IWiFiConnectionResult>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFi::IWiFiNetworkReport>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFi::WiFiAdapter>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFi::WiFiAvailableNetwork>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFi::WiFiConnectionResult>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFi::WiFiNetworkReport>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFi::WiFiAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFi::WiFiConnectionStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFi::WiFiNetworkKind>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFi::WiFiPhyKind>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFi::WiFiReconnectionKind>{ using type = enum_category; };
template <> struct name<Windows::Devices::WiFi::IWiFiAdapter>{ static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiAdapter" }; };
template <> struct name<Windows::Devices::WiFi::IWiFiAdapterStatics>{ static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiAdapterStatics" }; };
template <> struct name<Windows::Devices::WiFi::IWiFiAvailableNetwork>{ static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiAvailableNetwork" }; };
template <> struct name<Windows::Devices::WiFi::IWiFiConnectionResult>{ static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiConnectionResult" }; };
template <> struct name<Windows::Devices::WiFi::IWiFiNetworkReport>{ static constexpr auto & value{ L"Windows.Devices.WiFi.IWiFiNetworkReport" }; };
template <> struct name<Windows::Devices::WiFi::WiFiAdapter>{ static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiAdapter" }; };
template <> struct name<Windows::Devices::WiFi::WiFiAvailableNetwork>{ static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiAvailableNetwork" }; };
template <> struct name<Windows::Devices::WiFi::WiFiConnectionResult>{ static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiConnectionResult" }; };
template <> struct name<Windows::Devices::WiFi::WiFiNetworkReport>{ static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiNetworkReport" }; };
template <> struct name<Windows::Devices::WiFi::WiFiAccessStatus>{ static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiAccessStatus" }; };
template <> struct name<Windows::Devices::WiFi::WiFiConnectionStatus>{ static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiConnectionStatus" }; };
template <> struct name<Windows::Devices::WiFi::WiFiNetworkKind>{ static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiNetworkKind" }; };
template <> struct name<Windows::Devices::WiFi::WiFiPhyKind>{ static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiPhyKind" }; };
template <> struct name<Windows::Devices::WiFi::WiFiReconnectionKind>{ static constexpr auto & value{ L"Windows.Devices.WiFi.WiFiReconnectionKind" }; };
template <> struct guid<Windows::Devices::WiFi::IWiFiAdapter>{ static constexpr GUID value{ 0xA6C4E423,0x3D75,0x43A4,{ 0xB9,0xDE,0x11,0xE2,0x6B,0x72,0xD9,0xB0 } }; };
template <> struct guid<Windows::Devices::WiFi::IWiFiAdapterStatics>{ static constexpr GUID value{ 0xDA25FDDD,0xD24C,0x43E3,{ 0xAA,0xBD,0xC4,0x65,0x9F,0x73,0x0F,0x99 } }; };
template <> struct guid<Windows::Devices::WiFi::IWiFiAvailableNetwork>{ static constexpr GUID value{ 0x26E96246,0x183E,0x4704,{ 0x98,0x26,0x71,0xB4,0xA2,0xF0,0xF6,0x68 } }; };
template <> struct guid<Windows::Devices::WiFi::IWiFiConnectionResult>{ static constexpr GUID value{ 0x143BDFD9,0xC37D,0x40BE,{ 0xA5,0xC8,0x85,0x7B,0xCE,0x85,0xA9,0x31 } }; };
template <> struct guid<Windows::Devices::WiFi::IWiFiNetworkReport>{ static constexpr GUID value{ 0x9524DED2,0x5911,0x445E,{ 0x81,0x94,0xBE,0x4F,0x1A,0x70,0x48,0x95 } }; };
template <> struct default_interface<Windows::Devices::WiFi::WiFiAdapter>{ using type = Windows::Devices::WiFi::IWiFiAdapter; };
template <> struct default_interface<Windows::Devices::WiFi::WiFiAvailableNetwork>{ using type = Windows::Devices::WiFi::IWiFiAvailableNetwork; };
template <> struct default_interface<Windows::Devices::WiFi::WiFiConnectionResult>{ using type = Windows::Devices::WiFi::IWiFiConnectionResult; };
template <> struct default_interface<Windows::Devices::WiFi::WiFiNetworkReport>{ using type = Windows::Devices::WiFi::IWiFiNetworkReport; };

template <typename D>
struct consume_Windows_Devices_WiFi_IWiFiAdapter
{
    Windows::Networking::Connectivity::NetworkAdapter NetworkAdapter() const;
    Windows::Foundation::IAsyncAction ScanAsync() const;
    Windows::Devices::WiFi::WiFiNetworkReport NetworkReport() const;
    event_token AvailableNetworksChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const& args) const;
    using AvailableNetworksChanged_revoker = event_revoker<Windows::Devices::WiFi::IWiFiAdapter>;
    AvailableNetworksChanged_revoker AvailableNetworksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const& args) const;
    void AvailableNetworksChanged(event_token const& eventCookie) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential, param::hstring const& ssid) const;
    void Disconnect() const;
};
template <> struct consume<Windows::Devices::WiFi::IWiFiAdapter> { template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAdapter<D>; };

template <typename D>
struct consume_Windows_Devices_WiFi_IWiFiAdapterStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> FindAllAdaptersAsync() const;
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAccessStatus> RequestAccessAsync() const;
};
template <> struct consume<Windows::Devices::WiFi::IWiFiAdapterStatics> { template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>; };

template <typename D>
struct consume_Windows_Devices_WiFi_IWiFiAvailableNetwork
{
    Windows::Foundation::TimeSpan Uptime() const;
    hstring Ssid() const;
    hstring Bssid() const;
    int32_t ChannelCenterFrequencyInKilohertz() const;
    double NetworkRssiInDecibelMilliwatts() const;
    uint8_t SignalBars() const;
    Windows::Devices::WiFi::WiFiNetworkKind NetworkKind() const;
    Windows::Devices::WiFi::WiFiPhyKind PhyKind() const;
    Windows::Networking::Connectivity::NetworkSecuritySettings SecuritySettings() const;
    Windows::Foundation::TimeSpan BeaconInterval() const;
    bool IsWiFiDirect() const;
};
template <> struct consume<Windows::Devices::WiFi::IWiFiAvailableNetwork> { template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>; };

template <typename D>
struct consume_Windows_Devices_WiFi_IWiFiConnectionResult
{
    Windows::Devices::WiFi::WiFiConnectionStatus ConnectionStatus() const;
};
template <> struct consume<Windows::Devices::WiFi::IWiFiConnectionResult> { template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiConnectionResult<D>; };

template <typename D>
struct consume_Windows_Devices_WiFi_IWiFiNetworkReport
{
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork> AvailableNetworks() const;
};
template <> struct consume<Windows::Devices::WiFi::IWiFiNetworkReport> { template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiNetworkReport<D>; };

template <> struct abi<Windows::Devices::WiFi::IWiFiAdapter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NetworkAdapter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ScanAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NetworkReport(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_AvailableNetworksChanged(::IUnknown* args, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_AvailableNetworksChanged(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall ConnectAsync(::IUnknown* availableNetwork, abi_t<Windows::Devices::WiFi::WiFiReconnectionKind> reconnectionKind, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall ConnectWithPasswordCredentialAsync(::IUnknown* availableNetwork, abi_t<Windows::Devices::WiFi::WiFiReconnectionKind> reconnectionKind, ::IUnknown* passwordCredential, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall ConnectWithPasswordCredentialAndSsidAsync(::IUnknown* availableNetwork, abi_t<Windows::Devices::WiFi::WiFiReconnectionKind> reconnectionKind, ::IUnknown* passwordCredential, HSTRING ssid, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall Disconnect() = 0;
};};

template <> struct abi<Windows::Devices::WiFi::IWiFiAdapterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindAllAdaptersAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** asyncOp) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::WiFi::IWiFiAvailableNetwork>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uptime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Ssid(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Bssid(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ChannelCenterFrequencyInKilohertz(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NetworkRssiInDecibelMilliwatts(double* value) = 0;
    virtual HRESULT __stdcall get_SignalBars(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_NetworkKind(abi_t<Windows::Devices::WiFi::WiFiNetworkKind>* value) = 0;
    virtual HRESULT __stdcall get_PhyKind(abi_t<Windows::Devices::WiFi::WiFiPhyKind>* value) = 0;
    virtual HRESULT __stdcall get_SecuritySettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BeaconInterval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_IsWiFiDirect(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::WiFi::IWiFiConnectionResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConnectionStatus(abi_t<Windows::Devices::WiFi::WiFiConnectionStatus>* value) = 0;
};};

template <> struct abi<Windows::Devices::WiFi::IWiFiNetworkReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_AvailableNetworks(::IUnknown** value) = 0;
};};

}
