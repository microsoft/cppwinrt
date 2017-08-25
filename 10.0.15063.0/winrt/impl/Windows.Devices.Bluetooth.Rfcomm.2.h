// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Bluetooth.1.h"
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Networking.Sockets.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Rfcomm {

struct WINRT_EBO RfcommDeviceService :
    Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService,
    impl::require<RfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3, Windows::Foundation::IClosable>
{
    RfcommDeviceService(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> FromIdAsync(param::hstring const& deviceId);
    static hstring GetDeviceSelector(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId);
    static hstring GetDeviceSelectorForBluetoothDevice(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice);
    static hstring GetDeviceSelectorForBluetoothDevice(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode);
    static hstring GetDeviceSelectorForBluetoothDeviceAndServiceId(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId);
    static hstring GetDeviceSelectorForBluetoothDeviceAndServiceId(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode);
};

struct WINRT_EBO RfcommDeviceServicesResult :
    Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult
{
    RfcommDeviceServicesResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RfcommServiceId :
    Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId
{
    RfcommServiceId(std::nullptr_t) noexcept {}
    static Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId FromUuid(GUID const& uuid);
    static Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId FromShortId(uint32_t shortId);
    static Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId SerialPort();
    static Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId ObexObjectPush();
    static Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId ObexFileTransfer();
    static Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId PhoneBookAccessPce();
    static Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId PhoneBookAccessPse();
    static Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId GenericFileTransfer();
};

struct WINRT_EBO RfcommServiceProvider :
    Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider,
    impl::require<RfcommServiceProvider, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>
{
    RfcommServiceProvider(std::nullptr_t) noexcept {}
    using impl::consume_t<RfcommServiceProvider, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>::StartAdvertising;
    using Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider::StartAdvertising;
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> CreateAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId);
};

}
