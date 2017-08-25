// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

enum class DevicePairingKinds : unsigned;
struct DeviceInformation;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

struct EndpointPair;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect {

enum class WiFiDirectAdvertisementListenStateDiscoverability
{
    None = 0,
    Normal = 1,
    Intensive = 2,
};

enum class WiFiDirectAdvertisementPublisherStatus
{
    Created = 0,
    Started = 1,
    Stopped = 2,
    Aborted = 3,
};

enum class WiFiDirectConfigurationMethod
{
    ProvidePin = 0,
    DisplayPin = 1,
    PushButton = 2,
};

enum class WiFiDirectConnectionStatus
{
    Disconnected = 0,
    Connected = 1,
};

enum class WiFiDirectDeviceSelectorType
{
    DeviceInterface = 0,
    AssociationEndpoint = 1,
};

enum class WiFiDirectError
{
    Success = 0,
    RadioNotAvailable = 1,
    ResourceInUse = 2,
};

enum class WiFiDirectPairingProcedure
{
    GroupOwnerNegotiation = 0,
    Invitation = 1,
};

struct IWiFiDirectAdvertisement;
struct IWiFiDirectAdvertisement2;
struct IWiFiDirectAdvertisementPublisher;
struct IWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
struct IWiFiDirectConnectionListener;
struct IWiFiDirectConnectionParameters;
struct IWiFiDirectConnectionParameters2;
struct IWiFiDirectConnectionParametersStatics;
struct IWiFiDirectConnectionRequest;
struct IWiFiDirectConnectionRequestedEventArgs;
struct IWiFiDirectDevice;
struct IWiFiDirectDeviceStatics;
struct IWiFiDirectDeviceStatics2;
struct IWiFiDirectInformationElement;
struct IWiFiDirectInformationElementStatics;
struct IWiFiDirectLegacySettings;
struct WiFiDirectAdvertisement;
struct WiFiDirectAdvertisementPublisher;
struct WiFiDirectAdvertisementPublisherStatusChangedEventArgs;
struct WiFiDirectConnectionListener;
struct WiFiDirectConnectionParameters;
struct WiFiDirectConnectionRequest;
struct WiFiDirectConnectionRequestedEventArgs;
struct WiFiDirectDevice;
struct WiFiDirectInformationElement;
struct WiFiDirectLegacySettings;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>{ using type = interface_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisement>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectLegacySettings>{ using type = class_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectError>{ using type = enum_category; };
template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure>{ using type = enum_category; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement2" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisher" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisherStatusChangedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionListener" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters2" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParametersStatics" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequest" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequestedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectDevice>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectDevice" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics2" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElement" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElementStatics" }; };
template <> struct name<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.IWiFiDirectLegacySettings" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectAdvertisement>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisement" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectConnectionListener" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectDevice>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectDevice" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectInformationElement" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectLegacySettings>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectLegacySettings" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementListenStateDiscoverability" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatus" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectConfigurationMethod" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectConnectionStatus" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectDeviceSelectorType" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectError>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectError" }; };
template <> struct name<Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure>{ static constexpr auto & value{ L"Windows.Devices.WiFiDirect.WiFiDirectPairingProcedure" }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>{ static constexpr GUID value{ 0xAB511A2D,0x2A06,0x49A1,{ 0xA5,0x84,0x61,0x43,0x5C,0x79,0x05,0xA6 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>{ static constexpr GUID value{ 0xB759AA46,0xD816,0x491B,{ 0x91,0x7A,0xB4,0x0D,0x7D,0xC4,0x03,0xA2 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>{ static constexpr GUID value{ 0xB35A2D1A,0x9B1F,0x45D9,{ 0x92,0x5A,0x69,0x4D,0x66,0xDF,0x68,0xEF } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ static constexpr GUID value{ 0xAAFDE53C,0x5481,0x46E6,{ 0x90,0xDD,0x32,0x11,0x65,0x18,0xF1,0x92 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>{ static constexpr GUID value{ 0x699C1B0D,0x8D13,0x4EE9,{ 0xB9,0xEC,0x9C,0x72,0xF8,0x25,0x1F,0x7D } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>{ static constexpr GUID value{ 0xB2E55405,0x5702,0x4B16,{ 0xA0,0x2C,0xBB,0xCD,0x21,0xEF,0x60,0x98 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>{ static constexpr GUID value{ 0xAB3B0FBE,0xAA82,0x44B4,{ 0x88,0xC8,0xE3,0x05,0x6B,0x89,0x80,0x1D } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>{ static constexpr GUID value{ 0x598AF493,0x7642,0x456F,{ 0xB9,0xD8,0xE8,0xA9,0xEB,0x1F,0x40,0x1A } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>{ static constexpr GUID value{ 0x8EB99605,0x914F,0x49C3,{ 0xA6,0x14,0xD1,0x8D,0xC5,0xB1,0x9B,0x43 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>{ static constexpr GUID value{ 0xF99D20BE,0xD38D,0x484F,{ 0x82,0x15,0xE7,0xB6,0x5A,0xBF,0x24,0x4C } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectDevice>{ static constexpr GUID value{ 0x72DEAAA8,0x72EB,0x4DAE,{ 0x8A,0x28,0x85,0x13,0x35,0x5D,0x27,0x77 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>{ static constexpr GUID value{ 0xE86CB57C,0x3AAC,0x4851,{ 0xA7,0x92,0x48,0x2A,0xAF,0x93,0x1B,0x04 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>{ static constexpr GUID value{ 0x1A953E49,0xB103,0x437E,{ 0x92,0x26,0xAB,0x67,0x97,0x13,0x42,0xF9 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>{ static constexpr GUID value{ 0xAFFB72D6,0x76BB,0x497E,{ 0xAC,0x8B,0xDC,0x72,0x83,0x8B,0xC3,0x09 } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>{ static constexpr GUID value{ 0xDBD02F16,0x11A5,0x4E60,{ 0x8C,0xAA,0x34,0x77,0x21,0x48,0x37,0x8A } }; };
template <> struct guid<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>{ static constexpr GUID value{ 0xA64FDBBA,0xF2FD,0x4567,{ 0xA9,0x1B,0xF5,0xC2,0xF5,0x32,0x10,0x57 } }; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectAdvertisement>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectDevice>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectDevice; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectInformationElement; };
template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectLegacySettings>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> InformationElements() const;
    void InformationElements(param::vector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> const& value) const;
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability ListenStateDiscoverability() const;
    void ListenStateDiscoverability(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability const& value) const;
    bool IsAutonomousGroupOwnerEnabled() const;
    void IsAutonomousGroupOwnerEnabled(bool value) const;
    Windows::Devices::WiFiDirect::WiFiDirectLegacySettings LegacySettings() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement2
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> SupportedConfigurationMethods() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement2<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisement Advertisement() const;
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus Status() const;
    event_token StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> const& handler) const;
    using StatusChanged_revoker = event_revoker<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> const& handler) const;
    void StatusChanged(event_token const& token) const;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs
{
    Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus Status() const;
    Windows::Devices::WiFiDirect::WiFiDirectError Error() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener
{
    event_token ConnectionRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> const& handler) const;
    using ConnectionRequested_revoker = event_revoker<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>;
    ConnectionRequested_revoker ConnectionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> const& handler) const;
    void ConnectionRequested(event_token const& token) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters
{
    int16_t GroupOwnerIntent() const;
    void GroupOwnerIntent(int16_t value) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> PreferenceOrderedConfigurationMethods() const;
    Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure PreferredPairingProcedure() const;
    void PreferredPairingProcedure(Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure const& value) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParametersStatics
{
    Windows::Devices::Enumeration::DevicePairingKinds GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod const& configurationMethod) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParametersStatics<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequest
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequest<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequestedEventArgs
{
    Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest GetConnectionRequest() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice
{
    Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus ConnectionStatus() const;
    hstring DeviceId() const;
    event_token ConnectionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::Foundation::IInspectable> const& handler) const;
    using ConnectionStatusChanged_revoker = event_revoker<Windows::Devices::WiFiDirect::IWiFiDirectDevice>;
    ConnectionStatusChanged_revoker ConnectionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::Foundation::IInspectable> const& handler) const;
    void ConnectionStatusChanged(event_token const& token) const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> GetConnectionEndpointPairs() const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectDevice> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics
{
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> FromIdAsync(param::hstring const& deviceId) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics2
{
    hstring GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType const& type) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice> FromIdAsync(param::hstring const& deviceId, Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters const& connectionParameters) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement
{
    Windows::Storage::Streams::IBuffer Oui() const;
    void Oui(Windows::Storage::Streams::IBuffer const& value) const;
    uint8_t OuiType() const;
    void OuiType(uint8_t value) const;
    Windows::Storage::Streams::IBuffer Value() const;
    void Value(Windows::Storage::Streams::IBuffer const& value) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElementStatics
{
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
    Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> CreateFromDeviceInformation(Windows::Devices::Enumeration::DeviceInformation const& deviceInformation) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElementStatics<D>; };

template <typename D>
struct consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings
{
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    hstring Ssid() const;
    void Ssid(param::hstring const& value) const;
    Windows::Security::Credentials::PasswordCredential Passphrase() const;
    void Passphrase(Windows::Security::Credentials::PasswordCredential const& value) const;
};
template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings> { template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings<D>; };

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InformationElements(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_InformationElements(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ListenStateDiscoverability(abi_t<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability>* value) = 0;
    virtual HRESULT __stdcall put_ListenStateDiscoverability(abi_t<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability> value) = 0;
    virtual HRESULT __stdcall get_IsAutonomousGroupOwnerEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsAutonomousGroupOwnerEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_LegacySettings(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SupportedConfigurationMethods(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Advertisement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus>* value) = 0;
    virtual HRESULT __stdcall add_StatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus>* value) = 0;
    virtual HRESULT __stdcall get_Error(abi_t<Windows::Devices::WiFiDirect::WiFiDirectError>* value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ConnectionRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ConnectionRequested(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GroupOwnerIntent(int16_t* value) = 0;
    virtual HRESULT __stdcall put_GroupOwnerIntent(int16_t value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PreferenceOrderedConfigurationMethods(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PreferredPairingProcedure(abi_t<Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure>* value) = 0;
    virtual HRESULT __stdcall put_PreferredPairingProcedure(abi_t<Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure> value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDevicePairingKinds(abi_t<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> configurationMethod, abi_t<Windows::Devices::Enumeration::DevicePairingKinds>* result) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceInformation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetConnectionRequest(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConnectionStatus(abi_t<Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus>* value) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall add_ConnectionStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ConnectionStatusChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetConnectionEndpointPairs(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** asyncOp) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(abi_t<Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType> type, HSTRING* result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown* connectionParameters, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Oui(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Oui(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OuiType(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_OuiType(uint8_t value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Value(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromBuffer(::IUnknown* buffer, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateFromDeviceInformation(::IUnknown* deviceInformation, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_Ssid(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Ssid(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Passphrase(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Passphrase(::IUnknown* value) = 0;
};};

}
