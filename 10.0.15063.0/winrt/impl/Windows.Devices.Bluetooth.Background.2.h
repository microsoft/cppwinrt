// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Bluetooth.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.1.h"
#include "winrt/impl/Windows.Networking.Sockets.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Background.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Background {

struct WINRT_EBO BluetoothLEAdvertisementPublisherTriggerDetails :
    Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementPublisherTriggerDetails
{
    BluetoothLEAdvertisementPublisherTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BluetoothLEAdvertisementWatcherTriggerDetails :
    Windows::Devices::Bluetooth::Background::IBluetoothLEAdvertisementWatcherTriggerDetails
{
    BluetoothLEAdvertisementWatcherTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattCharacteristicNotificationTriggerDetails :
    Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails,
    impl::require<GattCharacteristicNotificationTriggerDetails, Windows::Devices::Bluetooth::Background::IGattCharacteristicNotificationTriggerDetails2>
{
    GattCharacteristicNotificationTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattServiceProviderConnection :
    Windows::Devices::Bluetooth::Background::IGattServiceProviderConnection
{
    GattServiceProviderConnection(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IMapView<hstring, Windows::Devices::Bluetooth::Background::GattServiceProviderConnection> AllServices();
};

struct WINRT_EBO GattServiceProviderTriggerDetails :
    Windows::Devices::Bluetooth::Background::IGattServiceProviderTriggerDetails
{
    GattServiceProviderTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RfcommConnectionTriggerDetails :
    Windows::Devices::Bluetooth::Background::IRfcommConnectionTriggerDetails
{
    RfcommConnectionTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RfcommInboundConnectionInformation :
    Windows::Devices::Bluetooth::Background::IRfcommInboundConnectionInformation
{
    RfcommInboundConnectionInformation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RfcommOutboundConnectionInformation :
    Windows::Devices::Bluetooth::Background::IRfcommOutboundConnectionInformation
{
    RfcommOutboundConnectionInformation(std::nullptr_t) noexcept {}
};

}
