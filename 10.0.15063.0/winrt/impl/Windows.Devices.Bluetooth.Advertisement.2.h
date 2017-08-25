// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Bluetooth.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Advertisement {

struct WINRT_EBO BluetoothLEAdvertisement :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement
{
    BluetoothLEAdvertisement(std::nullptr_t) noexcept {}
    BluetoothLEAdvertisement();
};

struct WINRT_EBO BluetoothLEAdvertisementBytePattern :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern
{
    BluetoothLEAdvertisementBytePattern(std::nullptr_t) noexcept {}
    BluetoothLEAdvertisementBytePattern();
    BluetoothLEAdvertisementBytePattern(uint8_t dataType, int16_t offset, Windows::Storage::Streams::IBuffer const& data);
};

struct WINRT_EBO BluetoothLEAdvertisementDataSection :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection
{
    BluetoothLEAdvertisementDataSection(std::nullptr_t) noexcept {}
    BluetoothLEAdvertisementDataSection();
    BluetoothLEAdvertisementDataSection(uint8_t dataType, Windows::Storage::Streams::IBuffer const& data);
};

struct BluetoothLEAdvertisementDataTypes
{
    BluetoothLEAdvertisementDataTypes() = delete;
    static uint8_t Flags();
    static uint8_t IncompleteService16BitUuids();
    static uint8_t CompleteService16BitUuids();
    static uint8_t IncompleteService32BitUuids();
    static uint8_t CompleteService32BitUuids();
    static uint8_t IncompleteService128BitUuids();
    static uint8_t CompleteService128BitUuids();
    static uint8_t ShortenedLocalName();
    static uint8_t CompleteLocalName();
    static uint8_t TxPowerLevel();
    static uint8_t SlaveConnectionIntervalRange();
    static uint8_t ServiceSolicitation16BitUuids();
    static uint8_t ServiceSolicitation32BitUuids();
    static uint8_t ServiceSolicitation128BitUuids();
    static uint8_t ServiceData16BitUuids();
    static uint8_t ServiceData32BitUuids();
    static uint8_t ServiceData128BitUuids();
    static uint8_t PublicTargetAddress();
    static uint8_t RandomTargetAddress();
    static uint8_t Appearance();
    static uint8_t AdvertisingInterval();
    static uint8_t ManufacturerSpecificData();
};

struct WINRT_EBO BluetoothLEAdvertisementFilter :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter
{
    BluetoothLEAdvertisementFilter(std::nullptr_t) noexcept {}
    BluetoothLEAdvertisementFilter();
};

struct WINRT_EBO BluetoothLEAdvertisementPublisher :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher
{
    BluetoothLEAdvertisementPublisher(std::nullptr_t) noexcept {}
    BluetoothLEAdvertisementPublisher();
    BluetoothLEAdvertisementPublisher(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement const& advertisement);
};

struct WINRT_EBO BluetoothLEAdvertisementPublisherStatusChangedEventArgs :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs
{
    BluetoothLEAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BluetoothLEAdvertisementReceivedEventArgs :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs
{
    BluetoothLEAdvertisementReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BluetoothLEAdvertisementWatcher :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher
{
    BluetoothLEAdvertisementWatcher(std::nullptr_t) noexcept {}
    BluetoothLEAdvertisementWatcher();
    BluetoothLEAdvertisementWatcher(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& advertisementFilter);
};

struct WINRT_EBO BluetoothLEAdvertisementWatcherStoppedEventArgs :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs
{
    BluetoothLEAdvertisementWatcherStoppedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO BluetoothLEManufacturerData :
    Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData
{
    BluetoothLEManufacturerData(std::nullptr_t) noexcept {}
    BluetoothLEManufacturerData();
    BluetoothLEManufacturerData(uint16_t companyId, Windows::Storage::Streams::IBuffer const& data);
};

}
