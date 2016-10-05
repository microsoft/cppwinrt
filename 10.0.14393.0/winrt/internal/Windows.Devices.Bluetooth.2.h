// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Bluetooth.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
#define WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
template <> struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800")) __declspec(novtable) IReference<Windows::Foundation::TimeSpan> : impl_IReference<Windows::Foundation::TimeSpan> {};
#endif

#ifndef WINRT_GENERIC_b58d8d19_44bd_5ac0_a0d6_1b50800f3181
#define WINRT_GENERIC_b58d8d19_44bd_5ac0_a0d6_1b50800f3181
template <> struct __declspec(uuid("b58d8d19-44bd-5ac0-a0d6-1b50800f3181")) __declspec(novtable) IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> : impl_IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_fd944562_11d6_5eab_bd72_701993b68fac
#define WINRT_GENERIC_fd944562_11d6_5eab_bd72_701993b68fac
template <> struct __declspec(uuid("fd944562-11d6-5eab-bd72-701993b68fac")) __declspec(novtable) IVectorView<Windows::Storage::Streams::IBuffer> : impl_IVectorView<Windows::Storage::Streams::IBuffer> {};
#endif

#ifndef WINRT_GENERIC_97df6b82_d15c_597e_ba69_492207a1c108
#define WINRT_GENERIC_97df6b82_d15c_597e_ba69_492207a1c108
template <> struct __declspec(uuid("97df6b82-d15c-597e-ba69-492207a1c108")) __declspec(novtable) IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> : impl_IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_db56ce1c_5e9f_5138_9227_b1a66d60bc1b
#define WINRT_GENERIC_db56ce1c_5e9f_5138_9227_b1a66d60bc1b
template <> struct __declspec(uuid("db56ce1c-5e9f-5138-9227-b1a66d60bc1b")) __declspec(novtable) TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::IInspectable> : impl_TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_c00bc2f2_a7f8_5f3f_80d1_2808ef6bca10
#define WINRT_GENERIC_c00bc2f2_a7f8_5f3f_80d1_2808ef6bca10
template <> struct __declspec(uuid("c00bc2f2-a7f8-5f3f-80d1-2808ef6bca10")) __declspec(novtable) IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> : impl_IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_b7f2f74d_bf9c_5721_bf6e_03f1b4409588
#define WINRT_GENERIC_b7f2f74d_bf9c_5721_bf6e_03f1b4409588
template <> struct __declspec(uuid("b7f2f74d-bf9c-5721-bf6e-03f1b4409588")) __declspec(novtable) IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> : impl_IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_7c8e7fdd_a1a1_528a_81d1_296769227a08
#define WINRT_GENERIC_7c8e7fdd_a1a1_528a_81d1_296769227a08
template <> struct __declspec(uuid("7c8e7fdd-a1a1-528a-81d1-296769227a08")) __declspec(novtable) IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> : impl_IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_a90661e2_372e_5d1e_bbbb_b8a2ce0e7c4d
#define WINRT_GENERIC_a90661e2_372e_5d1e_bbbb_b8a2ce0e7c4d
template <> struct __declspec(uuid("a90661e2-372e-5d1e-bbbb-b8a2ce0e7c4d")) __declspec(novtable) TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::IInspectable> : impl_TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_375f9d67_74a2_5f91_a11d_169093718d41
#define WINRT_GENERIC_375f9d67_74a2_5f91_a11d_169093718d41
template <> struct __declspec(uuid("375f9d67-74a2-5f91-a11d-169093718d41")) __declspec(novtable) IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> : impl_IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> {};
#endif

#ifndef WINRT_GENERIC_6ec9e41b_6709_5647_9918_a1270110fc4e
#define WINRT_GENERIC_6ec9e41b_6709_5647_9918_a1270110fc4e
template <> struct __declspec(uuid("6ec9e41b-6709-5647-9918-a1270110fc4e")) __declspec(novtable) IReference<int16_t> : impl_IReference<int16_t> {};
#endif

#ifndef WINRT_GENERIC_b2e8cdd1_66aa_5892_85a3_8f0b165e43fc
#define WINRT_GENERIC_b2e8cdd1_66aa_5892_85a3_8f0b165e43fc
template <> struct __declspec(uuid("b2e8cdd1-66aa-5892-85a3-8f0b165e43fc")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Bluetooth::BluetoothDevice> : impl_AsyncOperationCompletedHandler<Windows::Devices::Bluetooth::BluetoothDevice> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_afee38e0_f882_5f10_9655_1fc98cc8cce5
#define WINRT_GENERIC_afee38e0_f882_5f10_9655_1fc98cc8cce5
template <> struct __declspec(uuid("afee38e0-f882-5f10-9655-1fc98cc8cce5")) __declspec(novtable) IIterator<Windows::Storage::Streams::IBuffer> : impl_IIterator<Windows::Storage::Streams::IBuffer> {};
#endif

#ifndef WINRT_GENERIC_902972bf_a984_5443_b1c5_2f04a99e1fca
#define WINRT_GENERIC_902972bf_a984_5443_b1c5_2f04a99e1fca
template <> struct __declspec(uuid("902972bf-a984-5443-b1c5-2f04a99e1fca")) __declspec(novtable) IIterable<Windows::Storage::Streams::IBuffer> : impl_IIterable<Windows::Storage::Streams::IBuffer> {};
#endif

#ifndef WINRT_GENERIC_64ab0132_c64c_5a87_8113_613ef356924c
#define WINRT_GENERIC_64ab0132_c64c_5a87_8113_613ef356924c
template <> struct __declspec(uuid("64ab0132-c64c-5a87-8113-613ef356924c")) __declspec(novtable) IIterator<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> : impl_IIterator<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> {};
#endif

#ifndef WINRT_GENERIC_3378e9a6_f6e2_50ea_bfee_b8109631feca
#define WINRT_GENERIC_3378e9a6_f6e2_50ea_bfee_b8109631feca
template <> struct __declspec(uuid("3378e9a6-f6e2-50ea-bfee-b8109631feca")) __declspec(novtable) IIterable<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> : impl_IIterable<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ee154d83_805b_53e8_8469_90715036d013
#define WINRT_GENERIC_ee154d83_805b_53e8_8469_90715036d013
template <> struct __declspec(uuid("ee154d83-805b-53e8-8469-90715036d013")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_522c25d1_866b_5de4_bd8e_1feb5ae60d47
#define WINRT_GENERIC_522c25d1_866b_5de4_bd8e_1feb5ae60d47
template <> struct __declspec(uuid("522c25d1-866b-5de4-bd8e-1feb5ae60d47")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> : impl_AsyncOperationCompletedHandler<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8beb3a26_73ca_50f3_a1d3_418c60a9f3b2
#define WINRT_GENERIC_8beb3a26_73ca_50f3_a1d3_418c60a9f3b2
template <> struct __declspec(uuid("8beb3a26-73ca-50f3-a1d3-418c60a9f3b2")) __declspec(novtable) IIterator<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> : impl_IIterator<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> {};
#endif

#ifndef WINRT_GENERIC_4b192e23_4893_56b2_8eff_439c3ab7fd1f
#define WINRT_GENERIC_4b192e23_4893_56b2_8eff_439c3ab7fd1f
template <> struct __declspec(uuid("4b192e23-4893-56b2-8eff-439c3ab7fd1f")) __declspec(novtable) IIterable<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> : impl_IIterable<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_9156b79f_c54a_5277_8f8b_d2cc43c7e004
#define WINRT_GENERIC_9156b79f_c54a_5277_8f8b_d2cc43c7e004
template <> struct __declspec(uuid("9156b79f-c54a-5277-8f8b-d2cc43c7e004")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::Bluetooth::BluetoothLEDevice> : impl_AsyncOperationCompletedHandler<Windows::Devices::Bluetooth::BluetoothLEDevice> {};
#endif


}

namespace Windows::Devices::Bluetooth {

template <typename D>
struct WINRT_EBO impl_IBluetoothClassOfDevice
{
    uint32_t RawValue() const;
    Windows::Devices::Bluetooth::BluetoothMajorClass MajorClass() const;
    Windows::Devices::Bluetooth::BluetoothMinorClass MinorClass() const;
    Windows::Devices::Bluetooth::BluetoothServiceCapabilities ServiceCapabilities() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothClassOfDeviceStatics
{
    Windows::Devices::Bluetooth::BluetoothClassOfDevice FromRawValue(uint32_t rawValue) const;
    Windows::Devices::Bluetooth::BluetoothClassOfDevice FromParts(Windows::Devices::Bluetooth::BluetoothMajorClass majorClass, Windows::Devices::Bluetooth::BluetoothMinorClass minorClass, Windows::Devices::Bluetooth::BluetoothServiceCapabilities serviceCapabilities) const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothDevice
{
    hstring DeviceId() const;
    Windows::Networking::HostName HostName() const;
    hstring Name() const;
    Windows::Devices::Bluetooth::BluetoothClassOfDevice ClassOfDevice() const;
    Windows::Foundation::Collections::IVectorView<Windows::Storage::Streams::IBuffer> SdpRecords() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> RfcommServices() const;
    Windows::Devices::Bluetooth::BluetoothConnectionStatus ConnectionStatus() const;
    uint64_t BluetoothAddress() const;
    event_token NameChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::IInspectable> & handler) const;
    using NameChanged_revoker = event_revoker<IBluetoothDevice>;
    NameChanged_revoker NameChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::IInspectable> & handler) const;
    void NameChanged(event_token token) const;
    event_token SdpRecordsChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::IInspectable> & handler) const;
    using SdpRecordsChanged_revoker = event_revoker<IBluetoothDevice>;
    SdpRecordsChanged_revoker SdpRecordsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::IInspectable> & handler) const;
    void SdpRecordsChanged(event_token token) const;
    event_token ConnectionStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::IInspectable> & handler) const;
    using ConnectionStatusChanged_revoker = event_revoker<IBluetoothDevice>;
    ConnectionStatusChanged_revoker ConnectionStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::IInspectable> & handler) const;
    void ConnectionStatusChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothDevice2
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothDevice3
{
    Windows::Devices::Enumeration::DeviceAccessInformation DeviceAccessInformation() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> GetRfcommServicesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> GetRfcommServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> GetRfcommServicesForIdAsync(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> GetRfcommServicesForIdAsync(const Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId & serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothDeviceStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> FromIdAsync(hstring_ref deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> FromHostNameAsync(const Windows::Networking::HostName & hostName) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> FromBluetoothAddressAsync(uint64_t address) const;
    hstring GetDeviceSelector() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothDeviceStatics2
{
    hstring GetDeviceSelectorFromPairingState(bool pairingState) const;
    hstring GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus connectionStatus) const;
    hstring GetDeviceSelectorFromDeviceName(hstring_ref deviceName) const;
    hstring GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress) const;
    hstring GetDeviceSelectorFromClassOfDevice(const Windows::Devices::Bluetooth::BluetoothClassOfDevice & classOfDevice) const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEAppearance
{
    uint16_t RawValue() const;
    uint16_t Category() const;
    uint16_t SubCategory() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEAppearanceCategoriesStatics
{
    uint16_t Uncategorized() const;
    uint16_t Phone() const;
    uint16_t Computer() const;
    uint16_t Watch() const;
    uint16_t Clock() const;
    uint16_t Display() const;
    uint16_t RemoteControl() const;
    uint16_t EyeGlasses() const;
    uint16_t Tag() const;
    uint16_t Keyring() const;
    uint16_t MediaPlayer() const;
    uint16_t BarcodeScanner() const;
    uint16_t Thermometer() const;
    uint16_t HeartRate() const;
    uint16_t BloodPressure() const;
    uint16_t HumanInterfaceDevice() const;
    uint16_t GlucoseMeter() const;
    uint16_t RunningWalking() const;
    uint16_t Cycling() const;
    uint16_t PulseOximeter() const;
    uint16_t WeightScale() const;
    uint16_t OutdoorSportActivity() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEAppearanceStatics
{
    Windows::Devices::Bluetooth::BluetoothLEAppearance FromRawValue(uint16_t rawValue) const;
    Windows::Devices::Bluetooth::BluetoothLEAppearance FromParts(uint16_t appearanceCategory, uint16_t appearanceSubCategory) const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEAppearanceSubcategoriesStatics
{
    uint16_t Generic() const;
    uint16_t SportsWatch() const;
    uint16_t ThermometerEar() const;
    uint16_t HeartRateBelt() const;
    uint16_t BloodPressureArm() const;
    uint16_t BloodPressureWrist() const;
    uint16_t Keyboard() const;
    uint16_t Mouse() const;
    uint16_t Joystick() const;
    uint16_t Gamepad() const;
    uint16_t DigitizerTablet() const;
    uint16_t CardReader() const;
    uint16_t DigitalPen() const;
    uint16_t BarcodeScanner() const;
    uint16_t RunningWalkingInShoe() const;
    uint16_t RunningWalkingOnShoe() const;
    uint16_t RunningWalkingOnHip() const;
    uint16_t CyclingComputer() const;
    uint16_t CyclingSpeedSensor() const;
    uint16_t CyclingCadenceSensor() const;
    uint16_t CyclingPowerSensor() const;
    uint16_t CyclingSpeedCadenceSensor() const;
    uint16_t OximeterFingertip() const;
    uint16_t OximeterWristWorn() const;
    uint16_t LocationDisplay() const;
    uint16_t LocationNavigationDisplay() const;
    uint16_t LocationPod() const;
    uint16_t LocationNavigationPod() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEDevice
{
    hstring DeviceId() const;
    hstring Name() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> GattServices() const;
    Windows::Devices::Bluetooth::BluetoothConnectionStatus ConnectionStatus() const;
    uint64_t BluetoothAddress() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService GetGattService(GUID serviceUuid) const;
    event_token NameChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::IInspectable> & handler) const;
    using NameChanged_revoker = event_revoker<IBluetoothLEDevice>;
    NameChanged_revoker NameChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::IInspectable> & handler) const;
    void NameChanged(event_token token) const;
    event_token GattServicesChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::IInspectable> & handler) const;
    using GattServicesChanged_revoker = event_revoker<IBluetoothLEDevice>;
    GattServicesChanged_revoker GattServicesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::IInspectable> & handler) const;
    void GattServicesChanged(event_token token) const;
    event_token ConnectionStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::IInspectable> & handler) const;
    using ConnectionStatusChanged_revoker = event_revoker<IBluetoothLEDevice>;
    ConnectionStatusChanged_revoker ConnectionStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::IInspectable> & handler) const;
    void ConnectionStatusChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEDevice2
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
    Windows::Devices::Bluetooth::BluetoothLEAppearance Appearance() const;
    Windows::Devices::Bluetooth::BluetoothAddressType BluetoothAddressType() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEDeviceStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> FromIdAsync(hstring_ref deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> FromBluetoothAddressAsync(uint64_t bluetoothAddress) const;
    hstring GetDeviceSelector() const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothLEDeviceStatics2
{
    hstring GetDeviceSelectorFromPairingState(bool pairingState) const;
    hstring GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus connectionStatus) const;
    hstring GetDeviceSelectorFromDeviceName(hstring_ref deviceName) const;
    hstring GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress) const;
    hstring GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType bluetoothAddressType) const;
    hstring GetDeviceSelectorFromAppearance(const Windows::Devices::Bluetooth::BluetoothLEAppearance & appearance) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> FromBluetoothAddressAsync(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType bluetoothAddressType) const;
};

template <typename D>
struct WINRT_EBO impl_IBluetoothSignalStrengthFilter
{
    Windows::Foundation::IReference<int16_t> InRangeThresholdInDBm() const;
    void InRangeThresholdInDBm(const Windows::Foundation::IReference<int16_t> & value) const;
    Windows::Foundation::IReference<int16_t> OutOfRangeThresholdInDBm() const;
    void OutOfRangeThresholdInDBm(const Windows::Foundation::IReference<int16_t> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> OutOfRangeTimeout() const;
    void OutOfRangeTimeout(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> SamplingInterval() const;
    void SamplingInterval(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
};

struct IBluetoothClassOfDevice :
    Windows::IInspectable,
    impl::consume<IBluetoothClassOfDevice>
{
    IBluetoothClassOfDevice(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothClassOfDevice>(m_ptr); }
};

struct IBluetoothClassOfDeviceStatics :
    Windows::IInspectable,
    impl::consume<IBluetoothClassOfDeviceStatics>
{
    IBluetoothClassOfDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothClassOfDeviceStatics>(m_ptr); }
};

struct IBluetoothDevice :
    Windows::IInspectable,
    impl::consume<IBluetoothDevice>
{
    IBluetoothDevice(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothDevice>(m_ptr); }
};

struct IBluetoothDevice2 :
    Windows::IInspectable,
    impl::consume<IBluetoothDevice2>,
    impl::require<IBluetoothDevice2, Windows::Devices::Bluetooth::IBluetoothDevice>
{
    IBluetoothDevice2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothDevice2>(m_ptr); }
};

struct IBluetoothDevice3 :
    Windows::IInspectable,
    impl::consume<IBluetoothDevice3>,
    impl::require<IBluetoothDevice3, Windows::Devices::Bluetooth::IBluetoothDevice, Windows::Devices::Bluetooth::IBluetoothDevice2>
{
    IBluetoothDevice3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothDevice3>(m_ptr); }
};

struct IBluetoothDeviceStatics :
    Windows::IInspectable,
    impl::consume<IBluetoothDeviceStatics>
{
    IBluetoothDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothDeviceStatics>(m_ptr); }
};

struct IBluetoothDeviceStatics2 :
    Windows::IInspectable,
    impl::consume<IBluetoothDeviceStatics2>,
    impl::require<IBluetoothDeviceStatics2, Windows::Devices::Bluetooth::IBluetoothDeviceStatics>
{
    IBluetoothDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothDeviceStatics2>(m_ptr); }
};

struct IBluetoothLEAppearance :
    Windows::IInspectable,
    impl::consume<IBluetoothLEAppearance>
{
    IBluetoothLEAppearance(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEAppearance>(m_ptr); }
};

struct IBluetoothLEAppearanceCategoriesStatics :
    Windows::IInspectable,
    impl::consume<IBluetoothLEAppearanceCategoriesStatics>
{
    IBluetoothLEAppearanceCategoriesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEAppearanceCategoriesStatics>(m_ptr); }
};

struct IBluetoothLEAppearanceStatics :
    Windows::IInspectable,
    impl::consume<IBluetoothLEAppearanceStatics>
{
    IBluetoothLEAppearanceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEAppearanceStatics>(m_ptr); }
};

struct IBluetoothLEAppearanceSubcategoriesStatics :
    Windows::IInspectable,
    impl::consume<IBluetoothLEAppearanceSubcategoriesStatics>
{
    IBluetoothLEAppearanceSubcategoriesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEAppearanceSubcategoriesStatics>(m_ptr); }
};

struct IBluetoothLEDevice :
    Windows::IInspectable,
    impl::consume<IBluetoothLEDevice>
{
    IBluetoothLEDevice(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEDevice>(m_ptr); }
};

struct IBluetoothLEDevice2 :
    Windows::IInspectable,
    impl::consume<IBluetoothLEDevice2>,
    impl::require<IBluetoothLEDevice2, Windows::Devices::Bluetooth::IBluetoothLEDevice>
{
    IBluetoothLEDevice2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEDevice2>(m_ptr); }
};

struct IBluetoothLEDeviceStatics :
    Windows::IInspectable,
    impl::consume<IBluetoothLEDeviceStatics>
{
    IBluetoothLEDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEDeviceStatics>(m_ptr); }
};

struct IBluetoothLEDeviceStatics2 :
    Windows::IInspectable,
    impl::consume<IBluetoothLEDeviceStatics2>
{
    IBluetoothLEDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothLEDeviceStatics2>(m_ptr); }
};

struct IBluetoothSignalStrengthFilter :
    Windows::IInspectable,
    impl::consume<IBluetoothSignalStrengthFilter>
{
    IBluetoothSignalStrengthFilter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBluetoothSignalStrengthFilter>(m_ptr); }
};

}

}
