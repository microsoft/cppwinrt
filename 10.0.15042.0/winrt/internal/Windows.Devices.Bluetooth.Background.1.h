// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Bluetooth.Background.0.h"
#include "Windows.Devices.Bluetooth.0.h"
#include "Windows.Devices.Bluetooth.Advertisement.0.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
#include "Windows.Devices.Bluetooth.Rfcomm.0.h"
#include "Windows.Networking.Sockets.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Devices.Bluetooth.Advertisement.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Bluetooth::Background {

struct __declspec(uuid("610eca86-3480-41c9-a918-7ddadf207e00")) __declspec(novtable) IBluetoothLEAdvertisementPublisherTriggerDetails : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus * value) = 0;
    virtual HRESULT __stdcall get_Error(winrt::Windows::Devices::Bluetooth::BluetoothError * value) = 0;
};

struct __declspec(uuid("a7db5ad7-2257-4e69-9784-fee645c1dce0")) __declspec(novtable) IBluetoothLEAdvertisementWatcherTriggerDetails : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Error(winrt::Windows::Devices::Bluetooth::BluetoothError * value) = 0;
    virtual HRESULT __stdcall get_Advertisements(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> ** value) = 0;
    virtual HRESULT __stdcall get_SignalStrengthFilter(Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter ** value) = 0;
};

struct __declspec(uuid("9ba03b18-0fec-436a-93b1-f46c697532a2")) __declspec(novtable) IGattCharacteristicNotificationTriggerDetails : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Characteristic(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic ** value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("727a50dc-949d-454a-b192-983467e3d50f")) __declspec(novtable) IGattCharacteristicNotificationTriggerDetails2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Error(winrt::Windows::Devices::Bluetooth::BluetoothError * value) = 0;
    virtual HRESULT __stdcall get_EventTriggeringMode(winrt::Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode * value) = 0;
    virtual HRESULT __stdcall get_ValueChangedEvents(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> ** value) = 0;
};

struct __declspec(uuid("7fa1b9b9-2f13-40b5-9582-8eb78e98ef13")) __declspec(novtable) IGattServiceProviderConnection : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_TriggerId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Service(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService ** value) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
};

struct __declspec(uuid("3d509f4b-0b0e-4466-b8cd-6ebdda1fa17d")) __declspec(novtable) IGattServiceProviderConnectionStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AllServices(Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> ** value) = 0;
};

struct __declspec(uuid("ae8c0625-05ff-4afb-b16a-de95f3cf0158")) __declspec(novtable) IGattServiceProviderTriggerDetails : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Connection(Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection ** value) = 0;
};

struct __declspec(uuid("f922734d-2e3c-4efc-ab59-fc5cf96f97e3")) __declspec(novtable) IRfcommConnectionTriggerDetails : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Socket(Windows::Networking::Sockets::IStreamSocket ** value) = 0;
    virtual HRESULT __stdcall get_Incoming(bool * value) = 0;
    virtual HRESULT __stdcall get_RemoteDevice(Windows::Devices::Bluetooth::IBluetoothDevice ** value) = 0;
};

struct __declspec(uuid("6d3e75a8-5429-4059-92e3-1e8b65528707")) __declspec(novtable) IRfcommInboundConnectionInformation : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SdpRecord(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall put_SdpRecord(Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall get_LocalServiceId(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId ** value) = 0;
    virtual HRESULT __stdcall put_LocalServiceId(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId * value) = 0;
    virtual HRESULT __stdcall get_ServiceCapabilities(winrt::Windows::Devices::Bluetooth::BluetoothServiceCapabilities * value) = 0;
    virtual HRESULT __stdcall put_ServiceCapabilities(winrt::Windows::Devices::Bluetooth::BluetoothServiceCapabilities value) = 0;
};

struct __declspec(uuid("b091227b-f434-4cb0-99b1-4ab8cedaedd7")) __declspec(novtable) IRfcommOutboundConnectionInformation : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteServiceId(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId ** value) = 0;
    virtual HRESULT __stdcall put_RemoteServiceId(Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails> { using default_interface = Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails; };
template <> struct traits<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails> { using default_interface = Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails; };
template <> struct traits<Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails> { using default_interface = Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails; };
template <> struct traits<Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> { using default_interface = Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection; };
template <> struct traits<Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails> { using default_interface = Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails; };
template <> struct traits<Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails> { using default_interface = Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails; };
template <> struct traits<Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation> { using default_interface = Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation; };
template <> struct traits<Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation> { using default_interface = Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation; };

}

namespace Windows::Devices::Bluetooth::Background {

template <typename D>
struct WINRT_EBO impl_IBluetoothLEAdvertisementPublisherTriggerDetails
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus Status() const;
    Windows::Devices::Bluetooth::BluetoothError Error() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEAdvertisementWatcherTriggerDetails
{
    Windows::Devices::Bluetooth::BluetoothError Error() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> Advertisements() const;
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter SignalStrengthFilter() const;
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristicNotificationTriggerDetails
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic Characteristic() const;
    Windows::Storage::Streams::IBuffer Value() const;
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristicNotificationTriggerDetails2
{
    Windows::Devices::Bluetooth::BluetoothError Error() const;
    Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode EventTriggeringMode() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> ValueChangedEvents() const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceProviderConnection
{
    hstring TriggerId() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService Service() const;
    void Start() const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceProviderConnectionStatics
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> AllServices() const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceProviderTriggerDetails
{
    Windows::Devices::Bluetooth::Background::GattServiceProviderConnection Connection() const;
};

template <typename D>
struct WINRT_EBO impl_IRfcommConnectionTriggerDetails
{
    Windows::Networking::Sockets::StreamSocket Socket() const;
    bool Incoming() const;
    Windows::Devices::Bluetooth::BluetoothDevice RemoteDevice() const;
};

template <typename D>
struct WINRT_EBO impl_IRfcommInboundConnectionInformation
{
    Windows::Storage::Streams::IBuffer SdpRecord() const;
    void SdpRecord(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId LocalServiceId() const;
    void LocalServiceId(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & value) const;
    Windows::Devices::Bluetooth::BluetoothServiceCapabilities ServiceCapabilities() const;
    void ServiceCapabilities(Windows::Devices::Bluetooth::BluetoothServiceCapabilities value) const;
};

template <typename D>
struct WINRT_EBO impl_IRfcommOutboundConnectionInformation
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId RemoteServiceId() const;
    void RemoteServiceId(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & value) const;
};

}

namespace impl {

template <> struct traits<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IBluetoothLEAdvertisementPublisherTriggerDetails<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IBluetoothLEAdvertisementWatcherTriggerDetails<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IGattCharacteristicNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IGattCharacteristicNotificationTriggerDetails2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IGattServiceProviderConnection<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderConnectionStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IGattServiceProviderConnectionStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IGattServiceProviderTriggerDetails<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IRfcommConnectionTriggerDetails<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IRfcommInboundConnectionInformation<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation;
    template <typename D> using consume = Windows::Devices::Bluetooth::Background::impl_IRfcommOutboundConnectionInformation<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementPublisherTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementPublisherTriggerDetails"; }
};

template <> struct traits<Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::BluetoothLEAdvertisementWatcherTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.Background.BluetoothLEAdvertisementWatcherTriggerDetails"; }
};

template <> struct traits<Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::GattCharacteristicNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.Background.GattCharacteristicNotificationTriggerDetails"; }
};

template <> struct traits<Windows::Devices::Bluetooth::Background::GattServiceProviderConnection>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::GattServiceProviderConnection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.Background.GattServiceProviderConnection"; }
};

template <> struct traits<Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::GattServiceProviderTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.Background.GattServiceProviderTriggerDetails"; }
};

template <> struct traits<Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::RfcommConnectionTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.Background.RfcommConnectionTriggerDetails"; }
};

template <> struct traits<Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.Background.RfcommInboundConnectionInformation"; }
};

template <> struct traits<Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>
{
    using abi = ABI::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.Background.RfcommOutboundConnectionInformation"; }
};

}

}
