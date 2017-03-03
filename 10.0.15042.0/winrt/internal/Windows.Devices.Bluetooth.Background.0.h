// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Bluetooth::Background {

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

namespace Windows::Devices::Bluetooth::Background {

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

namespace Windows::Devices::Bluetooth::Background {

template <typename T> struct impl_IBluetoothLEAdvertisementPublisherTriggerDetails;
template <typename T> struct impl_IBluetoothLEAdvertisementWatcherTriggerDetails;
template <typename T> struct impl_IGattCharacteristicNotificationTriggerDetails;
template <typename T> struct impl_IGattCharacteristicNotificationTriggerDetails2;
template <typename T> struct impl_IGattServiceProviderConnection;
template <typename T> struct impl_IGattServiceProviderConnectionStatics;
template <typename T> struct impl_IGattServiceProviderTriggerDetails;
template <typename T> struct impl_IRfcommConnectionTriggerDetails;
template <typename T> struct impl_IRfcommInboundConnectionInformation;
template <typename T> struct impl_IRfcommOutboundConnectionInformation;

}

namespace Windows::Devices::Bluetooth::Background {

enum class BluetoothEventTriggeringMode
{
    Serial = 0,
    Batch = 1,
    KeepLatest = 2,
};

}

}
