// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Bluetooth.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Advertisement {

struct WINRT_EBO IBluetoothLEAdvertisement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisement>
{
    IBluetoothLEAdvertisement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementBytePattern :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementBytePattern>
{
    IBluetoothLEAdvertisementBytePattern(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementBytePatternFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementBytePatternFactory>
{
    IBluetoothLEAdvertisementBytePatternFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementDataSection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementDataSection>
{
    IBluetoothLEAdvertisementDataSection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementDataSectionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementDataSectionFactory>
{
    IBluetoothLEAdvertisementDataSectionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementDataTypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementDataTypesStatics>
{
    IBluetoothLEAdvertisementDataTypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementFilter>
{
    IBluetoothLEAdvertisementFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementPublisher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisher>
{
    IBluetoothLEAdvertisementPublisher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementPublisherFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisherFactory>
{
    IBluetoothLEAdvertisementPublisherFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementPublisherStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementPublisherStatusChangedEventArgs>
{
    IBluetoothLEAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementReceivedEventArgs>
{
    IBluetoothLEAdvertisementReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcher>
{
    IBluetoothLEAdvertisementWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementWatcherFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcherFactory>
{
    IBluetoothLEAdvertisementWatcherFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAdvertisementWatcherStoppedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAdvertisementWatcherStoppedEventArgs>
{
    IBluetoothLEAdvertisementWatcherStoppedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEManufacturerData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEManufacturerData>
{
    IBluetoothLEManufacturerData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEManufacturerDataFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEManufacturerDataFactory>
{
    IBluetoothLEManufacturerDataFactory(std::nullptr_t = nullptr) noexcept {}
};

}
