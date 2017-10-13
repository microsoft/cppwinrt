// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Devices.Radios.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapter)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>::BluetoothAddress() const noexcept
{
    uint64_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapter)->get_BluetoothAddress(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>::IsClassicSupported() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapter)->get_IsClassicSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>::IsLowEnergySupported() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapter)->get_IsLowEnergySupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>::IsPeripheralRoleSupported() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapter)->get_IsPeripheralRoleSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>::IsCentralRoleSupported() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapter)->get_IsCentralRoleSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>::IsAdvertisementOffloadSupported() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapter)->get_IsAdvertisementOffloadSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>::GetRadioAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapter)->GetRadioAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothAdapterStatics<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapterStatics)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothAdapter> consume_Windows_Devices_Bluetooth_IBluetoothAdapterStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothAdapter> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapterStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothAdapter> consume_Windows_Devices_Bluetooth_IBluetoothAdapterStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothAdapter> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothAdapterStatics)->GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D> uint32_t consume_Windows_Devices_Bluetooth_IBluetoothClassOfDevice<D>::RawValue() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothClassOfDevice)->get_RawValue(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothMajorClass consume_Windows_Devices_Bluetooth_IBluetoothClassOfDevice<D>::MajorClass() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothMajorClass value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothClassOfDevice)->get_MajorClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothMinorClass consume_Windows_Devices_Bluetooth_IBluetoothClassOfDevice<D>::MinorClass() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothMinorClass value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothClassOfDevice)->get_MinorClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothServiceCapabilities consume_Windows_Devices_Bluetooth_IBluetoothClassOfDevice<D>::ServiceCapabilities() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothServiceCapabilities value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothClassOfDevice)->get_ServiceCapabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothClassOfDevice consume_Windows_Devices_Bluetooth_IBluetoothClassOfDeviceStatics<D>::FromRawValue(uint32_t rawValue) const
{
    Windows::Devices::Bluetooth::BluetoothClassOfDevice classOfDevice{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics)->FromRawValue(rawValue, put_abi(classOfDevice)));
    return classOfDevice;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothClassOfDevice consume_Windows_Devices_Bluetooth_IBluetoothClassOfDeviceStatics<D>::FromParts(Windows::Devices::Bluetooth::BluetoothMajorClass const& majorClass, Windows::Devices::Bluetooth::BluetoothMinorClass const& minorClass, Windows::Devices::Bluetooth::BluetoothServiceCapabilities const& serviceCapabilities) const
{
    Windows::Devices::Bluetooth::BluetoothClassOfDevice classOfDevice{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics)->FromParts(get_abi(majorClass), get_abi(minorClass), get_abi(serviceCapabilities), put_abi(classOfDevice)));
    return classOfDevice;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::HostName() const noexcept
{
    Windows::Networking::HostName value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->get_HostName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::Name() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothClassOfDevice consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::ClassOfDevice() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothClassOfDevice value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->get_ClassOfDevice(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Storage::Streams::IBuffer> consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::SdpRecords() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::Streams::IBuffer> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->get_SdpRecords(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::RfcommServices() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->get_RfcommServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothConnectionStatus consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::ConnectionStatus() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothConnectionStatus value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->get_ConnectionStatus(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::BluetoothAddress() const noexcept
{
    uint64_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->get_BluetoothAddress(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::NameChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->add_NameChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::IBluetoothDevice> consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::NameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::IBluetoothDevice>(this, &abi_t<Windows::Devices::Bluetooth::IBluetoothDevice>::remove_NameChanged, NameChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::NameChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->remove_NameChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::SdpRecordsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->add_SdpRecordsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::IBluetoothDevice> consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::SdpRecordsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::IBluetoothDevice>(this, &abi_t<Windows::Devices::Bluetooth::IBluetoothDevice>::remove_SdpRecordsChanged, SdpRecordsChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::SdpRecordsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->remove_SdpRecordsChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::ConnectionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->add_ConnectionStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::IBluetoothDevice> consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::ConnectionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::IBluetoothDevice>(this, &abi_t<Windows::Devices::Bluetooth::IBluetoothDevice>::remove_ConnectionStatusChanged, ConnectionStatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>::ConnectionStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice)->remove_ConnectionStatusChanged(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Devices_Bluetooth_IBluetoothDevice2<D>::DeviceInformation() const noexcept
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice2)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessInformation consume_Windows_Devices_Bluetooth_IBluetoothDevice3<D>::DeviceAccessInformation() const noexcept
{
    Windows::Devices::Enumeration::DeviceAccessInformation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice3)->get_DeviceAccessInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> consume_Windows_Devices_Bluetooth_IBluetoothDevice3<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice3)->RequestAccessAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> consume_Windows_Devices_Bluetooth_IBluetoothDevice3<D>::GetRfcommServicesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice3)->GetRfcommServicesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> consume_Windows_Devices_Bluetooth_IBluetoothDevice3<D>::GetRfcommServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice3)->GetRfcommServicesWithCacheModeAsync(get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> consume_Windows_Devices_Bluetooth_IBluetoothDevice3<D>::GetRfcommServicesForIdAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice3)->GetRfcommServicesForIdAsync(get_abi(serviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> consume_Windows_Devices_Bluetooth_IBluetoothDevice3<D>::GetRfcommServicesForIdAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice3)->GetRfcommServicesForIdWithCacheModeAsync(get_abi(serviceId), get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDeviceId consume_Windows_Devices_Bluetooth_IBluetoothDevice4<D>::BluetoothDeviceId() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothDeviceId value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDevice4)->get_BluetoothDeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothDeviceId<D>::Id() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceId)->get_Id(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Bluetooth_IBluetoothDeviceId<D>::IsClassicDevice() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceId)->get_IsClassicDevice(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Bluetooth_IBluetoothDeviceId<D>::IsLowEnergyDevice() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceId)->get_IsLowEnergyDevice(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDeviceId consume_Windows_Devices_Bluetooth_IBluetoothDeviceIdStatics<D>::FromId(param::hstring const& deviceId) const
{
    Windows::Devices::Bluetooth::BluetoothDeviceId result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics)->FromId(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics<D>::FromHostNameAsync(Windows::Networking::HostName const& hostName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceStatics)->FromHostNameAsync(get_abi(hostName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics<D>::FromBluetoothAddressAsync(uint64_t address) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceStatics)->FromBluetoothAddressAsync(address, put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics<D>::GetDeviceSelector() const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceStatics)->GetDeviceSelector(put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2<D>::GetDeviceSelectorFromPairingState(bool pairingState) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceStatics2)->GetDeviceSelectorFromPairingState(pairingState, put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2<D>::GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus const& connectionStatus) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceStatics2)->GetDeviceSelectorFromConnectionStatus(get_abi(connectionStatus), put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2<D>::GetDeviceSelectorFromDeviceName(param::hstring const& deviceName) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceStatics2)->GetDeviceSelectorFromDeviceName(get_abi(deviceName), put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2<D>::GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceStatics2)->GetDeviceSelectorFromBluetoothAddress(bluetoothAddress, put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2<D>::GetDeviceSelectorFromClassOfDevice(Windows::Devices::Bluetooth::BluetoothClassOfDevice const& classOfDevice) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothDeviceStatics2)->GetDeviceSelectorFromClassOfDevice(get_abi(classOfDevice), put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearance<D>::RawValue() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearance)->get_RawValue(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearance<D>::Category() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearance)->get_Category(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearance<D>::SubCategory() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearance)->get_SubCategory(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Uncategorized() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Uncategorized(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Phone() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Phone(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Computer() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Computer(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Watch() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Watch(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Clock() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Clock(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Display() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Display(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::RemoteControl() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_RemoteControl(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::EyeGlasses() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_EyeGlasses(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Tag() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Tag(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Keyring() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Keyring(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::MediaPlayer() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_MediaPlayer(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::BarcodeScanner() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_BarcodeScanner(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Thermometer() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Thermometer(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::HeartRate() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_HeartRate(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::BloodPressure() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_BloodPressure(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::HumanInterfaceDevice() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_HumanInterfaceDevice(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::GlucoseMeter() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_GlucoseMeter(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::RunningWalking() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_RunningWalking(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::Cycling() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_Cycling(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::PulseOximeter() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_PulseOximeter(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::WeightScale() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_WeightScale(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>::OutdoorSportActivity() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics)->get_OutdoorSportActivity(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothLEAppearance consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceStatics<D>::FromRawValue(uint16_t rawValue) const
{
    Windows::Devices::Bluetooth::BluetoothLEAppearance appearance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics)->FromRawValue(rawValue, put_abi(appearance)));
    return appearance;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothLEAppearance consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceStatics<D>::FromParts(uint16_t appearanceCategory, uint16_t appearanceSubCategory) const
{
    Windows::Devices::Bluetooth::BluetoothLEAppearance appearance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics)->FromParts(appearanceCategory, appearanceSubCategory, put_abi(appearance)));
    return appearance;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::Generic() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_Generic(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::SportsWatch() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_SportsWatch(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::ThermometerEar() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_ThermometerEar(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::HeartRateBelt() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_HeartRateBelt(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::BloodPressureArm() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_BloodPressureArm(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::BloodPressureWrist() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_BloodPressureWrist(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::Keyboard() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_Keyboard(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::Mouse() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_Mouse(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::Joystick() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_Joystick(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::Gamepad() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_Gamepad(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::DigitizerTablet() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_DigitizerTablet(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::CardReader() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_CardReader(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::DigitalPen() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_DigitalPen(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::BarcodeScanner() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_BarcodeScanner(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::RunningWalkingInShoe() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_RunningWalkingInShoe(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::RunningWalkingOnShoe() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_RunningWalkingOnShoe(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::RunningWalkingOnHip() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_RunningWalkingOnHip(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::CyclingComputer() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_CyclingComputer(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::CyclingSpeedSensor() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_CyclingSpeedSensor(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::CyclingCadenceSensor() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_CyclingCadenceSensor(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::CyclingPowerSensor() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_CyclingPowerSensor(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::CyclingSpeedCadenceSensor() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_CyclingSpeedCadenceSensor(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::OximeterFingertip() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_OximeterFingertip(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::OximeterWristWorn() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_OximeterWristWorn(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::LocationDisplay() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_LocationDisplay(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::LocationNavigationDisplay() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_LocationNavigationDisplay(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::LocationPod() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_LocationPod(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>::LocationNavigationPod() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics)->get_LocationNavigationPod(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::DeviceId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::Name() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::GattServices() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->get_GattServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothConnectionStatus consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::ConnectionStatus() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothConnectionStatus value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->get_ConnectionStatus(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::BluetoothAddress() const noexcept
{
    uint64_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->get_BluetoothAddress(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::GetGattService(GUID const& serviceUuid) const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService service{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->GetGattService(get_abi(serviceUuid), put_abi(service)));
    return service;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::NameChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->add_NameChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::IBluetoothLEDevice> consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::NameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::IBluetoothLEDevice>(this, &abi_t<Windows::Devices::Bluetooth::IBluetoothLEDevice>::remove_NameChanged, NameChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::NameChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->remove_NameChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::GattServicesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->add_GattServicesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::IBluetoothLEDevice> consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::GattServicesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::IBluetoothLEDevice>(this, &abi_t<Windows::Devices::Bluetooth::IBluetoothLEDevice>::remove_GattServicesChanged, GattServicesChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::GattServicesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->remove_GattServicesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::ConnectionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->add_ConnectionStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::IBluetoothLEDevice> consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::ConnectionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::IBluetoothLEDevice>(this, &abi_t<Windows::Devices::Bluetooth::IBluetoothLEDevice>::remove_ConnectionStatusChanged, ConnectionStatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>::ConnectionStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice)->remove_ConnectionStatusChanged(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Devices_Bluetooth_IBluetoothLEDevice2<D>::DeviceInformation() const noexcept
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice2)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothLEAppearance consume_Windows_Devices_Bluetooth_IBluetoothLEDevice2<D>::Appearance() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothLEAppearance value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice2)->get_Appearance(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothAddressType consume_Windows_Devices_Bluetooth_IBluetoothLEDevice2<D>::BluetoothAddressType() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothAddressType value{};
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice2)->get_BluetoothAddressType(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessInformation consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3<D>::DeviceAccessInformation() const noexcept
{
    Windows::Devices::Enumeration::DeviceAccessInformation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice3)->get_DeviceAccessInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice3)->RequestAccessAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3<D>::GetGattServicesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice3)->GetGattServicesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3<D>::GetGattServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice3)->GetGattServicesWithCacheModeAsync(get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3<D>::GetGattServicesForUuidAsync(GUID const& serviceUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice3)->GetGattServicesForUuidAsync(get_abi(serviceUuid), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3<D>::GetGattServicesForUuidAsync(GUID const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice3)->GetGattServicesForUuidWithCacheModeAsync(get_abi(serviceUuid), get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDeviceId consume_Windows_Devices_Bluetooth_IBluetoothLEDevice4<D>::BluetoothDeviceId() const noexcept
{
    Windows::Devices::Bluetooth::BluetoothDeviceId value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDevice4)->get_BluetoothDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics<D>::FromBluetoothAddressAsync(uint64_t bluetoothAddress) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics)->FromBluetoothAddressAsync(bluetoothAddress, put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics<D>::GetDeviceSelector() const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics)->GetDeviceSelector(put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2<D>::GetDeviceSelectorFromPairingState(bool pairingState) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2)->GetDeviceSelectorFromPairingState(pairingState, put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2<D>::GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus const& connectionStatus) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2)->GetDeviceSelectorFromConnectionStatus(get_abi(connectionStatus), put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2<D>::GetDeviceSelectorFromDeviceName(param::hstring const& deviceName) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2)->GetDeviceSelectorFromDeviceName(get_abi(deviceName), put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2<D>::GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2)->GetDeviceSelectorFromBluetoothAddress(bluetoothAddress, put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2<D>::GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType const& bluetoothAddressType) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2)->GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType(bluetoothAddress, get_abi(bluetoothAddressType), put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2<D>::GetDeviceSelectorFromAppearance(Windows::Devices::Bluetooth::BluetoothLEAppearance const& appearance) const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2)->GetDeviceSelectorFromAppearance(get_abi(appearance), put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2<D>::FromBluetoothAddressAsync(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType const& bluetoothAddressType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2)->FromBluetoothAddressWithBluetoothAddressTypeAsync(bluetoothAddress, get_abi(bluetoothAddressType), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IReference<int16_t> consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>::InRangeThresholdInDBm() const noexcept
{
    Windows::Foundation::IReference<int16_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter)->get_InRangeThresholdInDBm(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>::InRangeThresholdInDBm(optional<int16_t> const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter)->put_InRangeThresholdInDBm(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int16_t> consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>::OutOfRangeThresholdInDBm() const noexcept
{
    Windows::Foundation::IReference<int16_t> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter)->get_OutOfRangeThresholdInDBm(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>::OutOfRangeThresholdInDBm(optional<int16_t> const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter)->put_OutOfRangeThresholdInDBm(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>::OutOfRangeTimeout() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter)->get_OutOfRangeTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>::OutOfRangeTimeout(optional<Windows::Foundation::TimeSpan> const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter)->put_OutOfRangeTimeout(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>::SamplingInterval() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter)->get_SamplingInterval(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>::SamplingInterval(optional<Windows::Foundation::TimeSpan> const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter)->put_SamplingInterval(get_abi(value)));
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_IBluetoothUuidHelperStatics<D>::FromShortId(uint32_t shortId) const
{
    GUID result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics)->FromShortId(shortId, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Devices_Bluetooth_IBluetoothUuidHelperStatics<D>::TryGetShortId(GUID const& uuid) const
{
    Windows::Foundation::IReference<uint32_t> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics)->TryGetShortId(get_abi(uuid), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothAdapter> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothAdapter>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_BluetoothAddress(uint64_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BluetoothAddress());
        return S_OK;
    }

    HRESULT __stdcall get_IsClassicSupported(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsClassicSupported());
        return S_OK;
    }

    HRESULT __stdcall get_IsLowEnergySupported(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsLowEnergySupported());
        return S_OK;
    }

    HRESULT __stdcall get_IsPeripheralRoleSupported(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsPeripheralRoleSupported());
        return S_OK;
    }

    HRESULT __stdcall get_IsCentralRoleSupported(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsCentralRoleSupported());
        return S_OK;
    }

    HRESULT __stdcall get_IsAdvertisementOffloadSupported(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsAdvertisementOffloadSupported());
        return S_OK;
    }

    HRESULT __stdcall GetRadioAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetRadioAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothAdapterStatics> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothAdapterStatics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothClassOfDevice> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothClassOfDevice>
{
    HRESULT __stdcall get_RawValue(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RawValue());
        return S_OK;
    }

    HRESULT __stdcall get_MajorClass(Windows::Devices::Bluetooth::BluetoothMajorClass* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MajorClass());
        return S_OK;
    }

    HRESULT __stdcall get_MinorClass(Windows::Devices::Bluetooth::BluetoothMinorClass* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinorClass());
        return S_OK;
    }

    HRESULT __stdcall get_ServiceCapabilities(Windows::Devices::Bluetooth::BluetoothServiceCapabilities* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ServiceCapabilities());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>
{
    HRESULT __stdcall FromRawValue(uint32_t rawValue, ::IUnknown** classOfDevice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *classOfDevice = detach_abi(this->shim().FromRawValue(rawValue));
            return S_OK;
        }
        catch (...)
        {
            *classOfDevice = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromParts(Windows::Devices::Bluetooth::BluetoothMajorClass majorClass, Windows::Devices::Bluetooth::BluetoothMinorClass minorClass, Windows::Devices::Bluetooth::BluetoothServiceCapabilities serviceCapabilities, ::IUnknown** classOfDevice) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *classOfDevice = detach_abi(this->shim().FromParts(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothMajorClass const*>(&majorClass), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothMinorClass const*>(&minorClass), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothServiceCapabilities const*>(&serviceCapabilities)));
            return S_OK;
        }
        catch (...)
        {
            *classOfDevice = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothDevice> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothDevice>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_HostName(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HostName());
        return S_OK;
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Name());
        return S_OK;
    }

    HRESULT __stdcall get_ClassOfDevice(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ClassOfDevice());
        return S_OK;
    }

    HRESULT __stdcall get_SdpRecords(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SdpRecords());
        return S_OK;
    }

    HRESULT __stdcall get_RfcommServices(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RfcommServices());
        return S_OK;
    }

    HRESULT __stdcall get_ConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ConnectionStatus());
        return S_OK;
    }

    HRESULT __stdcall get_BluetoothAddress(uint64_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BluetoothAddress());
        return S_OK;
    }

    HRESULT __stdcall add_NameChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().NameChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NameChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NameChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SdpRecordsChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SdpRecordsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SdpRecordsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SdpRecordsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ConnectionStatusChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ConnectionStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionStatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConnectionStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothDevice2> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothDevice2>
{
    HRESULT __stdcall get_DeviceInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceInformation());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothDevice3> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothDevice3>
{
    HRESULT __stdcall get_DeviceAccessInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceAccessInformation());
        return S_OK;
    }

    HRESULT __stdcall RequestAccessAsync(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRfcommServicesAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetRfcommServicesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRfcommServicesWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetRfcommServicesAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRfcommServicesForIdAsync(::IUnknown* serviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetRfcommServicesForIdAsync(*reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&serviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRfcommServicesForIdWithCacheModeAsync(::IUnknown* serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetRfcommServicesForIdAsync(*reinterpret_cast<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const*>(&serviceId), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothDevice4> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothDevice4>
{
    HRESULT __stdcall get_BluetoothDeviceId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BluetoothDeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothDeviceId> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothDeviceId>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Id());
        return S_OK;
    }

    HRESULT __stdcall get_IsClassicDevice(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsClassicDevice());
        return S_OK;
    }

    HRESULT __stdcall get_IsLowEnergyDevice(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsLowEnergyDevice());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics>
{
    HRESULT __stdcall FromId(HSTRING deviceId, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromId(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothDeviceStatics> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothDeviceStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromHostNameAsync(::IUnknown* hostName, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromHostNameAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&hostName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromBluetoothAddressAsync(uint64_t address, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromBluetoothAddressAsync(address));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothDeviceStatics2> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>
{
    HRESULT __stdcall GetDeviceSelectorFromPairingState(bool pairingState, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromPairingState(pairingState));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus connectionStatus, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromConnectionStatus(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothConnectionStatus const*>(&connectionStatus)));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromDeviceName(HSTRING deviceName, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromDeviceName(*reinterpret_cast<hstring const*>(&deviceName)));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromBluetoothAddress(bluetoothAddress));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromClassOfDevice(::IUnknown* classOfDevice, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromClassOfDevice(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothClassOfDevice const*>(&classOfDevice)));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEAppearance> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEAppearance>
{
    HRESULT __stdcall get_RawValue(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RawValue());
        return S_OK;
    }

    HRESULT __stdcall get_Category(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Category());
        return S_OK;
    }

    HRESULT __stdcall get_SubCategory(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SubCategory());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>
{
    HRESULT __stdcall get_Uncategorized(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Uncategorized());
        return S_OK;
    }

    HRESULT __stdcall get_Phone(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Phone());
        return S_OK;
    }

    HRESULT __stdcall get_Computer(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Computer());
        return S_OK;
    }

    HRESULT __stdcall get_Watch(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Watch());
        return S_OK;
    }

    HRESULT __stdcall get_Clock(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Clock());
        return S_OK;
    }

    HRESULT __stdcall get_Display(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Display());
        return S_OK;
    }

    HRESULT __stdcall get_RemoteControl(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RemoteControl());
        return S_OK;
    }

    HRESULT __stdcall get_EyeGlasses(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().EyeGlasses());
        return S_OK;
    }

    HRESULT __stdcall get_Tag(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Tag());
        return S_OK;
    }

    HRESULT __stdcall get_Keyring(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Keyring());
        return S_OK;
    }

    HRESULT __stdcall get_MediaPlayer(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MediaPlayer());
        return S_OK;
    }

    HRESULT __stdcall get_BarcodeScanner(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BarcodeScanner());
        return S_OK;
    }

    HRESULT __stdcall get_Thermometer(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Thermometer());
        return S_OK;
    }

    HRESULT __stdcall get_HeartRate(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HeartRate());
        return S_OK;
    }

    HRESULT __stdcall get_BloodPressure(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BloodPressure());
        return S_OK;
    }

    HRESULT __stdcall get_HumanInterfaceDevice(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HumanInterfaceDevice());
        return S_OK;
    }

    HRESULT __stdcall get_GlucoseMeter(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().GlucoseMeter());
        return S_OK;
    }

    HRESULT __stdcall get_RunningWalking(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RunningWalking());
        return S_OK;
    }

    HRESULT __stdcall get_Cycling(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Cycling());
        return S_OK;
    }

    HRESULT __stdcall get_PulseOximeter(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PulseOximeter());
        return S_OK;
    }

    HRESULT __stdcall get_WeightScale(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().WeightScale());
        return S_OK;
    }

    HRESULT __stdcall get_OutdoorSportActivity(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().OutdoorSportActivity());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>
{
    HRESULT __stdcall FromRawValue(uint16_t rawValue, ::IUnknown** appearance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *appearance = detach_abi(this->shim().FromRawValue(rawValue));
            return S_OK;
        }
        catch (...)
        {
            *appearance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromParts(uint16_t appearanceCategory, uint16_t appearanceSubCategory, ::IUnknown** appearance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *appearance = detach_abi(this->shim().FromParts(appearanceCategory, appearanceSubCategory));
            return S_OK;
        }
        catch (...)
        {
            *appearance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>
{
    HRESULT __stdcall get_Generic(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Generic());
        return S_OK;
    }

    HRESULT __stdcall get_SportsWatch(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SportsWatch());
        return S_OK;
    }

    HRESULT __stdcall get_ThermometerEar(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ThermometerEar());
        return S_OK;
    }

    HRESULT __stdcall get_HeartRateBelt(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().HeartRateBelt());
        return S_OK;
    }

    HRESULT __stdcall get_BloodPressureArm(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BloodPressureArm());
        return S_OK;
    }

    HRESULT __stdcall get_BloodPressureWrist(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BloodPressureWrist());
        return S_OK;
    }

    HRESULT __stdcall get_Keyboard(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Keyboard());
        return S_OK;
    }

    HRESULT __stdcall get_Mouse(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Mouse());
        return S_OK;
    }

    HRESULT __stdcall get_Joystick(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Joystick());
        return S_OK;
    }

    HRESULT __stdcall get_Gamepad(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Gamepad());
        return S_OK;
    }

    HRESULT __stdcall get_DigitizerTablet(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DigitizerTablet());
        return S_OK;
    }

    HRESULT __stdcall get_CardReader(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CardReader());
        return S_OK;
    }

    HRESULT __stdcall get_DigitalPen(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DigitalPen());
        return S_OK;
    }

    HRESULT __stdcall get_BarcodeScanner(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BarcodeScanner());
        return S_OK;
    }

    HRESULT __stdcall get_RunningWalkingInShoe(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RunningWalkingInShoe());
        return S_OK;
    }

    HRESULT __stdcall get_RunningWalkingOnShoe(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RunningWalkingOnShoe());
        return S_OK;
    }

    HRESULT __stdcall get_RunningWalkingOnHip(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RunningWalkingOnHip());
        return S_OK;
    }

    HRESULT __stdcall get_CyclingComputer(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CyclingComputer());
        return S_OK;
    }

    HRESULT __stdcall get_CyclingSpeedSensor(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CyclingSpeedSensor());
        return S_OK;
    }

    HRESULT __stdcall get_CyclingCadenceSensor(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CyclingCadenceSensor());
        return S_OK;
    }

    HRESULT __stdcall get_CyclingPowerSensor(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CyclingPowerSensor());
        return S_OK;
    }

    HRESULT __stdcall get_CyclingSpeedCadenceSensor(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CyclingSpeedCadenceSensor());
        return S_OK;
    }

    HRESULT __stdcall get_OximeterFingertip(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().OximeterFingertip());
        return S_OK;
    }

    HRESULT __stdcall get_OximeterWristWorn(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().OximeterWristWorn());
        return S_OK;
    }

    HRESULT __stdcall get_LocationDisplay(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LocationDisplay());
        return S_OK;
    }

    HRESULT __stdcall get_LocationNavigationDisplay(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LocationNavigationDisplay());
        return S_OK;
    }

    HRESULT __stdcall get_LocationPod(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LocationPod());
        return S_OK;
    }

    HRESULT __stdcall get_LocationNavigationPod(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().LocationNavigationPod());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEDevice> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEDevice>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceId());
        return S_OK;
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Name());
        return S_OK;
    }

    HRESULT __stdcall get_GattServices(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().GattServices());
        return S_OK;
    }

    HRESULT __stdcall get_ConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ConnectionStatus());
        return S_OK;
    }

    HRESULT __stdcall get_BluetoothAddress(uint64_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BluetoothAddress());
        return S_OK;
    }

    HRESULT __stdcall GetGattService(GUID serviceUuid, ::IUnknown** service) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *service = detach_abi(this->shim().GetGattService(*reinterpret_cast<GUID const*>(&serviceUuid)));
            return S_OK;
        }
        catch (...)
        {
            *service = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NameChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().NameChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NameChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NameChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GattServicesChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GattServicesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GattServicesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GattServicesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ConnectionStatusChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ConnectionStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionStatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConnectionStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEDevice2> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEDevice2>
{
    HRESULT __stdcall get_DeviceInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceInformation());
        return S_OK;
    }

    HRESULT __stdcall get_Appearance(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Appearance());
        return S_OK;
    }

    HRESULT __stdcall get_BluetoothAddressType(Windows::Devices::Bluetooth::BluetoothAddressType* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BluetoothAddressType());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEDevice3> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEDevice3>
{
    HRESULT __stdcall get_DeviceAccessInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceAccessInformation());
        return S_OK;
    }

    HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGattServicesAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetGattServicesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGattServicesWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetGattServicesAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGattServicesForUuidAsync(GUID serviceUuid, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetGattServicesForUuidAsync(*reinterpret_cast<GUID const*>(&serviceUuid)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGattServicesForUuidWithCacheModeAsync(GUID serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetGattServicesForUuidAsync(*reinterpret_cast<GUID const*>(&serviceUuid), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEDevice4> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEDevice4>
{
    HRESULT __stdcall get_BluetoothDeviceId(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BluetoothDeviceId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromBluetoothAddressAsync(uint64_t bluetoothAddress, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromBluetoothAddressAsync(bluetoothAddress));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>
{
    HRESULT __stdcall GetDeviceSelectorFromPairingState(bool pairingState, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromPairingState(pairingState));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus connectionStatus, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromConnectionStatus(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothConnectionStatus const*>(&connectionStatus)));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromDeviceName(HSTRING deviceName, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromDeviceName(*reinterpret_cast<hstring const*>(&deviceName)));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromBluetoothAddress(bluetoothAddress));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType bluetoothAddressType, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromBluetoothAddress(bluetoothAddress, *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothAddressType const*>(&bluetoothAddressType)));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromAppearance(::IUnknown* appearance, HSTRING* deviceSelector) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_abi(this->shim().GetDeviceSelectorFromAppearance(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothLEAppearance const*>(&appearance)));
            return S_OK;
        }
        catch (...)
        {
            *deviceSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromBluetoothAddressWithBluetoothAddressTypeAsync(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType bluetoothAddressType, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromBluetoothAddressAsync(bluetoothAddress, *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothAddressType const*>(&bluetoothAddressType)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>
{
    HRESULT __stdcall get_InRangeThresholdInDBm(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InRangeThresholdInDBm());
        return S_OK;
    }

    HRESULT __stdcall put_InRangeThresholdInDBm(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().InRangeThresholdInDBm(*reinterpret_cast<Windows::Foundation::IReference<int16_t> const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_OutOfRangeThresholdInDBm(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().OutOfRangeThresholdInDBm());
        return S_OK;
    }

    HRESULT __stdcall put_OutOfRangeThresholdInDBm(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().OutOfRangeThresholdInDBm(*reinterpret_cast<Windows::Foundation::IReference<int16_t> const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_OutOfRangeTimeout(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().OutOfRangeTimeout());
        return S_OK;
    }

    HRESULT __stdcall put_OutOfRangeTimeout(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().OutOfRangeTimeout(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_SamplingInterval(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SamplingInterval());
        return S_OK;
    }

    HRESULT __stdcall put_SamplingInterval(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().SamplingInterval(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics> : produce_base<D, Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>
{
    HRESULT __stdcall FromShortId(uint32_t shortId, GUID* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromShortId(shortId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetShortId(GUID uuid, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetShortId(*reinterpret_cast<GUID const*>(&uuid)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth {

inline hstring BluetoothAdapter::GetDeviceSelector()
{
    return get_activation_factory<BluetoothAdapter, Windows::Devices::Bluetooth::IBluetoothAdapterStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothAdapter> BluetoothAdapter::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<BluetoothAdapter, Windows::Devices::Bluetooth::IBluetoothAdapterStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothAdapter> BluetoothAdapter::GetDefaultAsync()
{
    return get_activation_factory<BluetoothAdapter, Windows::Devices::Bluetooth::IBluetoothAdapterStatics>().GetDefaultAsync();
}

inline Windows::Devices::Bluetooth::BluetoothClassOfDevice BluetoothClassOfDevice::FromRawValue(uint32_t rawValue)
{
    return get_activation_factory<BluetoothClassOfDevice, Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>().FromRawValue(rawValue);
}

inline Windows::Devices::Bluetooth::BluetoothClassOfDevice BluetoothClassOfDevice::FromParts(Windows::Devices::Bluetooth::BluetoothMajorClass const& majorClass, Windows::Devices::Bluetooth::BluetoothMinorClass const& minorClass, Windows::Devices::Bluetooth::BluetoothServiceCapabilities const& serviceCapabilities)
{
    return get_activation_factory<BluetoothClassOfDevice, Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>().FromParts(majorClass, minorClass, serviceCapabilities);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> BluetoothDevice::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<BluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDeviceStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> BluetoothDevice::FromHostNameAsync(Windows::Networking::HostName const& hostName)
{
    return get_activation_factory<BluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDeviceStatics>().FromHostNameAsync(hostName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> BluetoothDevice::FromBluetoothAddressAsync(uint64_t address)
{
    return get_activation_factory<BluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDeviceStatics>().FromBluetoothAddressAsync(address);
}

inline hstring BluetoothDevice::GetDeviceSelector()
{
    return get_activation_factory<BluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDeviceStatics>().GetDeviceSelector();
}

inline hstring BluetoothDevice::GetDeviceSelectorFromPairingState(bool pairingState)
{
    return get_activation_factory<BluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>().GetDeviceSelectorFromPairingState(pairingState);
}

inline hstring BluetoothDevice::GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus const& connectionStatus)
{
    return get_activation_factory<BluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>().GetDeviceSelectorFromConnectionStatus(connectionStatus);
}

inline hstring BluetoothDevice::GetDeviceSelectorFromDeviceName(param::hstring const& deviceName)
{
    return get_activation_factory<BluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>().GetDeviceSelectorFromDeviceName(deviceName);
}

inline hstring BluetoothDevice::GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress)
{
    return get_activation_factory<BluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>().GetDeviceSelectorFromBluetoothAddress(bluetoothAddress);
}

inline hstring BluetoothDevice::GetDeviceSelectorFromClassOfDevice(Windows::Devices::Bluetooth::BluetoothClassOfDevice const& classOfDevice)
{
    return get_activation_factory<BluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>().GetDeviceSelectorFromClassOfDevice(classOfDevice);
}

inline Windows::Devices::Bluetooth::BluetoothDeviceId BluetoothDeviceId::FromId(param::hstring const& deviceId)
{
    return get_activation_factory<BluetoothDeviceId, Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics>().FromId(deviceId);
}

inline Windows::Devices::Bluetooth::BluetoothLEAppearance BluetoothLEAppearance::FromRawValue(uint16_t rawValue)
{
    return get_activation_factory<BluetoothLEAppearance, Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>().FromRawValue(rawValue);
}

inline Windows::Devices::Bluetooth::BluetoothLEAppearance BluetoothLEAppearance::FromParts(uint16_t appearanceCategory, uint16_t appearanceSubCategory)
{
    return get_activation_factory<BluetoothLEAppearance, Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>().FromParts(appearanceCategory, appearanceSubCategory);
}

inline uint16_t BluetoothLEAppearanceCategories::Uncategorized()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Uncategorized();
}

inline uint16_t BluetoothLEAppearanceCategories::Phone()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Phone();
}

inline uint16_t BluetoothLEAppearanceCategories::Computer()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Computer();
}

inline uint16_t BluetoothLEAppearanceCategories::Watch()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Watch();
}

inline uint16_t BluetoothLEAppearanceCategories::Clock()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Clock();
}

inline uint16_t BluetoothLEAppearanceCategories::Display()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Display();
}

inline uint16_t BluetoothLEAppearanceCategories::RemoteControl()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().RemoteControl();
}

inline uint16_t BluetoothLEAppearanceCategories::EyeGlasses()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().EyeGlasses();
}

inline uint16_t BluetoothLEAppearanceCategories::Tag()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Tag();
}

inline uint16_t BluetoothLEAppearanceCategories::Keyring()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Keyring();
}

inline uint16_t BluetoothLEAppearanceCategories::MediaPlayer()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().MediaPlayer();
}

inline uint16_t BluetoothLEAppearanceCategories::BarcodeScanner()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().BarcodeScanner();
}

inline uint16_t BluetoothLEAppearanceCategories::Thermometer()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Thermometer();
}

inline uint16_t BluetoothLEAppearanceCategories::HeartRate()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().HeartRate();
}

inline uint16_t BluetoothLEAppearanceCategories::BloodPressure()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().BloodPressure();
}

inline uint16_t BluetoothLEAppearanceCategories::HumanInterfaceDevice()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().HumanInterfaceDevice();
}

inline uint16_t BluetoothLEAppearanceCategories::GlucoseMeter()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().GlucoseMeter();
}

inline uint16_t BluetoothLEAppearanceCategories::RunningWalking()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().RunningWalking();
}

inline uint16_t BluetoothLEAppearanceCategories::Cycling()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().Cycling();
}

inline uint16_t BluetoothLEAppearanceCategories::PulseOximeter()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().PulseOximeter();
}

inline uint16_t BluetoothLEAppearanceCategories::WeightScale()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().WeightScale();
}

inline uint16_t BluetoothLEAppearanceCategories::OutdoorSportActivity()
{
    return get_activation_factory<BluetoothLEAppearanceCategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>().OutdoorSportActivity();
}

inline uint16_t BluetoothLEAppearanceSubcategories::Generic()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().Generic();
}

inline uint16_t BluetoothLEAppearanceSubcategories::SportsWatch()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().SportsWatch();
}

inline uint16_t BluetoothLEAppearanceSubcategories::ThermometerEar()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().ThermometerEar();
}

inline uint16_t BluetoothLEAppearanceSubcategories::HeartRateBelt()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().HeartRateBelt();
}

inline uint16_t BluetoothLEAppearanceSubcategories::BloodPressureArm()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().BloodPressureArm();
}

inline uint16_t BluetoothLEAppearanceSubcategories::BloodPressureWrist()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().BloodPressureWrist();
}

inline uint16_t BluetoothLEAppearanceSubcategories::Keyboard()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().Keyboard();
}

inline uint16_t BluetoothLEAppearanceSubcategories::Mouse()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().Mouse();
}

inline uint16_t BluetoothLEAppearanceSubcategories::Joystick()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().Joystick();
}

inline uint16_t BluetoothLEAppearanceSubcategories::Gamepad()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().Gamepad();
}

inline uint16_t BluetoothLEAppearanceSubcategories::DigitizerTablet()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().DigitizerTablet();
}

inline uint16_t BluetoothLEAppearanceSubcategories::CardReader()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().CardReader();
}

inline uint16_t BluetoothLEAppearanceSubcategories::DigitalPen()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().DigitalPen();
}

inline uint16_t BluetoothLEAppearanceSubcategories::BarcodeScanner()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().BarcodeScanner();
}

inline uint16_t BluetoothLEAppearanceSubcategories::RunningWalkingInShoe()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().RunningWalkingInShoe();
}

inline uint16_t BluetoothLEAppearanceSubcategories::RunningWalkingOnShoe()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().RunningWalkingOnShoe();
}

inline uint16_t BluetoothLEAppearanceSubcategories::RunningWalkingOnHip()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().RunningWalkingOnHip();
}

inline uint16_t BluetoothLEAppearanceSubcategories::CyclingComputer()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().CyclingComputer();
}

inline uint16_t BluetoothLEAppearanceSubcategories::CyclingSpeedSensor()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().CyclingSpeedSensor();
}

inline uint16_t BluetoothLEAppearanceSubcategories::CyclingCadenceSensor()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().CyclingCadenceSensor();
}

inline uint16_t BluetoothLEAppearanceSubcategories::CyclingPowerSensor()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().CyclingPowerSensor();
}

inline uint16_t BluetoothLEAppearanceSubcategories::CyclingSpeedCadenceSensor()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().CyclingSpeedCadenceSensor();
}

inline uint16_t BluetoothLEAppearanceSubcategories::OximeterFingertip()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().OximeterFingertip();
}

inline uint16_t BluetoothLEAppearanceSubcategories::OximeterWristWorn()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().OximeterWristWorn();
}

inline uint16_t BluetoothLEAppearanceSubcategories::LocationDisplay()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().LocationDisplay();
}

inline uint16_t BluetoothLEAppearanceSubcategories::LocationNavigationDisplay()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().LocationNavigationDisplay();
}

inline uint16_t BluetoothLEAppearanceSubcategories::LocationPod()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().LocationPod();
}

inline uint16_t BluetoothLEAppearanceSubcategories::LocationNavigationPod()
{
    return get_activation_factory<BluetoothLEAppearanceSubcategories, Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>().LocationNavigationPod();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> BluetoothLEDevice::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> BluetoothLEDevice::FromBluetoothAddressAsync(uint64_t bluetoothAddress)
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>().FromBluetoothAddressAsync(bluetoothAddress);
}

inline hstring BluetoothLEDevice::GetDeviceSelector()
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>().GetDeviceSelector();
}

inline hstring BluetoothLEDevice::GetDeviceSelectorFromPairingState(bool pairingState)
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>().GetDeviceSelectorFromPairingState(pairingState);
}

inline hstring BluetoothLEDevice::GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus const& connectionStatus)
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>().GetDeviceSelectorFromConnectionStatus(connectionStatus);
}

inline hstring BluetoothLEDevice::GetDeviceSelectorFromDeviceName(param::hstring const& deviceName)
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>().GetDeviceSelectorFromDeviceName(deviceName);
}

inline hstring BluetoothLEDevice::GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress)
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>().GetDeviceSelectorFromBluetoothAddress(bluetoothAddress);
}

inline hstring BluetoothLEDevice::GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType const& bluetoothAddressType)
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>().GetDeviceSelectorFromBluetoothAddress(bluetoothAddress, bluetoothAddressType);
}

inline hstring BluetoothLEDevice::GetDeviceSelectorFromAppearance(Windows::Devices::Bluetooth::BluetoothLEAppearance const& appearance)
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>().GetDeviceSelectorFromAppearance(appearance);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> BluetoothLEDevice::FromBluetoothAddressAsync(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType const& bluetoothAddressType)
{
    return get_activation_factory<BluetoothLEDevice, Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>().FromBluetoothAddressAsync(bluetoothAddress, bluetoothAddressType);
}

inline BluetoothSignalStrengthFilter::BluetoothSignalStrengthFilter() :
    BluetoothSignalStrengthFilter(activate_instance<BluetoothSignalStrengthFilter>())
{}

inline GUID BluetoothUuidHelper::FromShortId(uint32_t shortId)
{
    return get_activation_factory<BluetoothUuidHelper, Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>().FromShortId(shortId);
}

inline Windows::Foundation::IReference<uint32_t> BluetoothUuidHelper::TryGetShortId(GUID const& uuid)
{
    return get_activation_factory<BluetoothUuidHelper, Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>().TryGetShortId(uuid);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothAdapter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothAdapter> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothAdapterStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothAdapterStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothClassOfDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothClassOfDevice> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothDevice> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothDevice2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothDevice2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothDevice3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothDevice3> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothDevice4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothDevice4> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothDeviceStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothDeviceStatics2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEAppearance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEAppearance> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEDevice> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEDevice2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEDevice2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEDevice3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEDevice3> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEDevice4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEDevice4> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothAdapter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothAdapter> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothClassOfDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothClassOfDevice> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothDevice> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothDeviceId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothDeviceId> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearance> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearanceCategories> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearanceCategories> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearanceSubcategories> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothLEAppearanceSubcategories> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothLEDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothLEDevice> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::BluetoothUuidHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::BluetoothUuidHelper> {};

}

WINRT_WARNING_POP
