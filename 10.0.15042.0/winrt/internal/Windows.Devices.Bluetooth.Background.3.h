// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Bluetooth.Background.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Bluetooth::Background {

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

}
