// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth {

enum class BluetoothError;
enum class BluetoothServiceCapabilities : unsigned;
struct BluetoothDevice;
struct BluetoothSignalStrengthFilter;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Advertisement {

enum class BluetoothLEAdvertisementPublisherStatus;
struct BluetoothLEAdvertisementReceivedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile {

struct GattCharacteristic;
struct GattLocalService;
struct GattValueChangedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Rfcomm {

struct RfcommServiceId;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

struct StreamSocket;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Background {

enum class BluetoothEventTriggeringMode
{
    Serial = 0,
    Batch = 1,
    KeepLatest = 2,
};

struct IBluetoothLEAdvertisementPublisherTriggerDetails;
struct IBluetoothLEAdvertisementWatcherTriggerDetails;
struct IGattCharacteristicNotificationTriggerDetails;
struct IGattCharacteristicNotificationTriggerDetails2;
struct IGattServiceProviderConnection;
struct IGattServiceProviderConnectionStatics;
struct IGattServiceProviderTriggerDetails;
struct IRfcommConnectionTriggerDetails;
struct IRfcommInboundConnectionInformation;
struct IRfcommOutboundConnectionInformation;
struct BluetoothLEAdvertisementPublisherTriggerDetails;
struct BluetoothLEAdvertisementWatcherTriggerDetails;
struct GattCharacteristicNotificationTriggerDetails;
struct GattServiceProviderConnection;
struct GattServiceProviderTriggerDetails;
struct RfcommConnectionTriggerDetails;
struct RfcommInboundConnectionInformation;
struct RfcommOutboundConnectionInformation;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode>{ using type = enum_category; };
template <> struct name<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementPublisherTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IBluetoothLEAdvertisementWatcherTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IGattCharacteristicNotificationTriggerDetails2" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IGattServiceProviderConnection" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IGattServiceProviderConnectionStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IGattServiceProviderTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IRfcommConnectionTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IRfcommInboundConnectionInformation" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.IRfcommOutboundConnectionInformation" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementPublisherTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementWatcherTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.GattServiceProviderConnection" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.GattServiceProviderTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.RfcommConnectionTriggerDetails" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.RfcommInboundConnectionInformation" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.RfcommOutboundConnectionInformation" }; };
template <> struct name<Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Background.BluetoothEventTriggeringMode" }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails>{ static constexpr GUID value{ 0x610ECA86,0x3480,0x41C9,{ 0xA9,0x18,0x7D,0xDA,0xDF,0x20,0x7E,0x00 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails>{ static constexpr GUID value{ 0xA7DB5AD7,0x2257,0x4E69,{ 0x97,0x84,0xFE,0xE6,0x45,0xC1,0xDC,0xE0 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails>{ static constexpr GUID value{ 0x9BA03B18,0x0FEC,0x436A,{ 0x93,0xB1,0xF4,0x6C,0x69,0x75,0x32,0xA2 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>{ static constexpr GUID value{ 0x727A50DC,0x949D,0x454A,{ 0xB1,0x92,0x98,0x34,0x67,0xE3,0xD5,0x0F } }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection>{ static constexpr GUID value{ 0x7FA1B9B9,0x2F13,0x40B5,{ 0x95,0x82,0x8E,0xB7,0x8E,0x98,0xEF,0x13 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics>{ static constexpr GUID value{ 0x3D509F4B,0x0B0E,0x4466,{ 0xB8,0xCD,0x6E,0xBD,0xDA,0x1F,0xA1,0x7D } }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails>{ static constexpr GUID value{ 0xAE8C0625,0x05FF,0x4AFB,{ 0xB1,0x6A,0xDE,0x95,0xF3,0xCF,0x01,0x58 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails>{ static constexpr GUID value{ 0xF922734D,0x2E3C,0x4EFC,{ 0xAB,0x59,0xFC,0x5C,0xF9,0x6F,0x97,0xE3 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation>{ static constexpr GUID value{ 0x6D3E75A8,0x5429,0x4059,{ 0x92,0xE3,0x1E,0x8B,0x65,0x52,0x87,0x07 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation>{ static constexpr GUID value{ 0xB091227B,0xF434,0x4CB0,{ 0x99,0xB1,0x4A,0xB8,0xCE,0xDA,0xED,0xD7 } }; };
template <> struct default_interface<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails>{ using type = Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails; };
template <> struct default_interface<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails>{ using type = Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails; };
template <> struct default_interface<Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails>{ using type = Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails; };
template <> struct default_interface<Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>{ using type = Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection; };
template <> struct default_interface<Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails>{ using type = Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails; };
template <> struct default_interface<Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails>{ using type = Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails; };
template <> struct default_interface<Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>{ using type = Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation; };
template <> struct default_interface<Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>{ using type = Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus Status() const;
    Windows::Devices::Bluetooth::BluetoothError Error() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementPublisherTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails
{
    Windows::Devices::Bluetooth::BluetoothError Error() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> Advertisements() const;
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter SignalStrengthFilter() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IBluetoothLEAdvertisementWatcherTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic Characteristic() const;
    Windows::Storage::Streams::IBuffer Value() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2
{
    Windows::Devices::Bluetooth::BluetoothError Error() const;
    Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode EventTriggeringMode() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> ValueChangedEvents() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IGattCharacteristicNotificationTriggerDetails2<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection
{
    hstring TriggerId() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService Service() const;
    void Start() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnection<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnectionStatics
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> AllServices() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderConnectionStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderTriggerDetails
{
    Windows::Devices::Bluetooth::Background::GattServiceProviderConnection Connection() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IGattServiceProviderTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails
{
    Windows::Networking::Sockets::StreamSocket Socket() const;
    bool Incoming() const;
    Windows::Devices::Bluetooth::BluetoothDevice RemoteDevice() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IRfcommConnectionTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation
{
    Windows::Storage::Streams::IBuffer SdpRecord() const;
    void SdpRecord(Windows::Storage::Streams::IBuffer const& value) const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId LocalServiceId() const;
    void LocalServiceId(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& value) const;
    Windows::Devices::Bluetooth::BluetoothServiceCapabilities ServiceCapabilities() const;
    void ServiceCapabilities(Windows::Devices::Bluetooth::BluetoothServiceCapabilities const& value) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IRfcommInboundConnectionInformation<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Background_IRfcommOutboundConnectionInformation
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RemoteServiceId() const;
    void RemoteServiceId(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& value) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Background_IRfcommOutboundConnectionInformation<D>; };

template <> struct abi<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus>* value) = 0;
    virtual HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) = 0;
    virtual HRESULT __stdcall get_Advertisements(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SignalStrengthFilter(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Characteristic(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) = 0;
    virtual HRESULT __stdcall get_EventTriggeringMode(abi_t<Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode>* value) = 0;
    virtual HRESULT __stdcall get_ValueChangedEvents(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TriggerId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Service(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Start() = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllServices(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Connection(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Socket(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Incoming(bool* value) = 0;
    virtual HRESULT __stdcall get_RemoteDevice(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SdpRecord(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SdpRecord(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_LocalServiceId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_LocalServiceId(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ServiceCapabilities(abi_t<Windows::Devices::Bluetooth::BluetoothServiceCapabilities>* value) = 0;
    virtual HRESULT __stdcall put_ServiceCapabilities(abi_t<Windows::Devices::Bluetooth::BluetoothServiceCapabilities> value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteServiceId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RemoteServiceId(::IUnknown* value) = 0;
};};

}
