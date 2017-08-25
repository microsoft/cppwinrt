// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Bluetooth.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Background.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Background {

struct WINRT_EBO IBluetoothLEAdvertisementPublisherTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisherTriggerDetails>
{
    IBluetoothLEAdvertisementPublisherTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementWatcherTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcherTriggerDetails>
{
    IBluetoothLEAdvertisementWatcherTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTriggerDetails>
{
    IGattCharacteristicNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattCharacteristicNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattCharacteristicNotificationTriggerDetails2>
{
    IGattCharacteristicNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderConnection>
{
    IGattServiceProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderConnectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderConnectionStatics>
{
    IGattServiceProviderConnectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGattServiceProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGattServiceProviderTriggerDetails>
{
    IGattServiceProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommConnectionTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommConnectionTriggerDetails>
{
    IRfcommConnectionTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommInboundConnectionInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommInboundConnectionInformation>
{
    IRfcommInboundConnectionInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommOutboundConnectionInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommOutboundConnectionInformation>
{
    IRfcommOutboundConnectionInformation(std::nullptr_t = nullptr) noexcept {}
};

}
