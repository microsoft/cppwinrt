// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.0.h"
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Devices.Radios.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth {

struct WINRT_EBO IBluetoothAdapter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothAdapter>
{
    IBluetoothAdapter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothAdapterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothAdapterStatics>
{
    IBluetoothAdapterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothClassOfDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothClassOfDevice>
{
    IBluetoothClassOfDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothClassOfDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothClassOfDeviceStatics>
{
    IBluetoothClassOfDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDevice>
{
    IBluetoothDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDevice2>,
    impl::require<IBluetoothDevice2, Windows::Devices::Bluetooth::IBluetoothDevice>
{
    IBluetoothDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothDevice3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDevice3>,
    impl::require<IBluetoothDevice3, Windows::Devices::Bluetooth::IBluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDevice2>
{
    IBluetoothDevice3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothDeviceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDeviceId>
{
    IBluetoothDeviceId(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDeviceStatics>
{
    IBluetoothDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothDeviceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothDeviceStatics2>,
    impl::require<IBluetoothDeviceStatics2, Windows::Devices::Bluetooth::IBluetoothDeviceStatics>
{
    IBluetoothDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAppearance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAppearance>
{
    IBluetoothLEAppearance(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAppearanceCategoriesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAppearanceCategoriesStatics>
{
    IBluetoothLEAppearanceCategoriesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAppearanceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAppearanceStatics>
{
    IBluetoothLEAppearanceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEAppearanceSubcategoriesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEAppearanceSubcategoriesStatics>
{
    IBluetoothLEAppearanceSubcategoriesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDevice>
{
    IBluetoothLEDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDevice2>,
    impl::require<IBluetoothLEDevice2, Windows::Devices::Bluetooth::IBluetoothLEDevice>
{
    IBluetoothLEDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEDevice3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDevice3>
{
    IBluetoothLEDevice3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDeviceStatics>
{
    IBluetoothLEDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothLEDeviceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothLEDeviceStatics2>
{
    IBluetoothLEDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothSignalStrengthFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothSignalStrengthFilter>
{
    IBluetoothSignalStrengthFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBluetoothUuidHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBluetoothUuidHelperStatics>
{
    IBluetoothUuidHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

}
