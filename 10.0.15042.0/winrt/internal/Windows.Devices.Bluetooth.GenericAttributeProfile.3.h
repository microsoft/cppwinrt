// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Bluetooth.GenericAttributeProfile.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

struct WINRT_EBO GattCharacteristic :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic,
    impl::require<GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
{
    GattCharacteristic(std::nullptr_t) noexcept {}
    [[deprecated("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")]] static GUID ConvertShortIdToUuid(uint16_t shortId);
};

struct GattCharacteristicUuids
{
    GattCharacteristicUuids() = delete;
    static GUID BatteryLevel();
    static GUID BloodPressureFeature();
    static GUID BloodPressureMeasurement();
    static GUID BodySensorLocation();
    static GUID CscFeature();
    static GUID CscMeasurement();
    static GUID GlucoseFeature();
    static GUID GlucoseMeasurement();
    static GUID GlucoseMeasurementContext();
    static GUID HeartRateControlPoint();
    static GUID HeartRateMeasurement();
    static GUID IntermediateCuffPressure();
    static GUID IntermediateTemperature();
    static GUID MeasurementInterval();
    static GUID RecordAccessControlPoint();
    static GUID RscFeature();
    static GUID RscMeasurement();
    static GUID SCControlPoint();
    static GUID SensorLocation();
    static GUID TemperatureMeasurement();
    static GUID TemperatureType();
    static GUID AlertCategoryId();
    static GUID AlertCategoryIdBitMask();
    static GUID AlertLevel();
    static GUID AlertNotificationControlPoint();
    static GUID AlertStatus();
    static GUID GapAppearance();
    static GUID BootKeyboardInputReport();
    static GUID BootKeyboardOutputReport();
    static GUID BootMouseInputReport();
    static GUID CurrentTime();
    static GUID CyclingPowerControlPoint();
    static GUID CyclingPowerFeature();
    static GUID CyclingPowerMeasurement();
    static GUID CyclingPowerVector();
    static GUID DateTime();
    static GUID DayDateTime();
    static GUID DayOfWeek();
    static GUID GapDeviceName();
    static GUID DstOffset();
    static GUID ExactTime256();
    static GUID FirmwareRevisionString();
    static GUID HardwareRevisionString();
    static GUID HidControlPoint();
    static GUID HidInformation();
    static GUID Ieee1107320601RegulatoryCertificationDataList();
    static GUID LnControlPoint();
    static GUID LnFeature();
    static GUID LocalTimeInformation();
    static GUID LocationAndSpeed();
    static GUID ManufacturerNameString();
    static GUID ModelNumberString();
    static GUID Navigation();
    static GUID NewAlert();
    static GUID GapPeripheralPreferredConnectionParameters();
    static GUID GapPeripheralPrivacyFlag();
    static GUID PnpId();
    static GUID PositionQuality();
    static GUID ProtocolMode();
    static GUID GapReconnectionAddress();
    static GUID ReferenceTimeInformation();
    static GUID Report();
    static GUID ReportMap();
    static GUID RingerControlPoint();
    static GUID RingerSetting();
    static GUID ScanIntervalWindow();
    static GUID ScanRefresh();
    static GUID SerialNumberString();
    static GUID GattServiceChanged();
    static GUID SoftwareRevisionString();
    static GUID SupportedNewAlertCategory();
    static GUID SupportUnreadAlertCategory();
    static GUID SystemId();
    static GUID TimeAccuracy();
    static GUID TimeSource();
    static GUID TimeUpdateControlPoint();
    static GUID TimeUpdateState();
    static GUID TimeWithDst();
    static GUID TimeZone();
    static GUID TxPowerLevel();
    static GUID UnreadAlertStatus();
};

struct WINRT_EBO GattCharacteristicsResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult
{
    GattCharacteristicsResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattClientNotificationResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult
{
    GattClientNotificationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattDescriptor :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor,
    impl::require<GattDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
{
    GattDescriptor(std::nullptr_t) noexcept {}
    [[deprecated("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")]] static GUID ConvertShortIdToUuid(uint16_t shortId);
};

struct GattDescriptorUuids
{
    GattDescriptorUuids() = delete;
    static GUID CharacteristicAggregateFormat();
    static GUID CharacteristicExtendedProperties();
    static GUID CharacteristicPresentationFormat();
    static GUID CharacteristicUserDescription();
    static GUID ClientCharacteristicConfiguration();
    static GUID ServerCharacteristicConfiguration();
};

struct WINRT_EBO GattDescriptorsResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult
{
    GattDescriptorsResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattDeviceService :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService,
    impl::require<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
{
    GattDeviceService(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> FromIdAsync(hstring_view deviceId);
    static hstring GetDeviceSelectorFromUuid(GUID serviceUuid);
    [[deprecated("Use GetDeviceSelectorFromUuid instead of GetDeviceSelectorFromShortId.  For more information, see MSDN.")]] static hstring GetDeviceSelectorFromShortId(uint16_t serviceShortId);
    [[deprecated("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")]] static GUID ConvertShortIdToUuid(uint16_t shortId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> FromIdAsync(hstring_view deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode);
    static hstring GetDeviceSelectorForBluetoothDeviceId(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId);
    static hstring GetDeviceSelectorForBluetoothDeviceId(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode);
    static hstring GetDeviceSelectorForBluetoothDeviceIdAndUuid(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, GUID serviceUuid);
    static hstring GetDeviceSelectorForBluetoothDeviceIdAndUuid(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, GUID serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode);
};

struct WINRT_EBO GattDeviceServicesResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult
{
    GattDeviceServicesResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattLocalCharacteristic :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic
{
    GattLocalCharacteristic(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattLocalCharacteristicParameters :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters
{
    GattLocalCharacteristicParameters(std::nullptr_t) noexcept {}
    GattLocalCharacteristicParameters();
};

struct WINRT_EBO GattLocalCharacteristicResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult
{
    GattLocalCharacteristicResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattLocalDescriptor :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor
{
    GattLocalDescriptor(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattLocalDescriptorParameters :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters
{
    GattLocalDescriptorParameters(std::nullptr_t) noexcept {}
    GattLocalDescriptorParameters();
};

struct WINRT_EBO GattLocalDescriptorResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult
{
    GattLocalDescriptorResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattLocalService :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService
{
    GattLocalService(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattPresentationFormat :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat
{
    GattPresentationFormat(std::nullptr_t) noexcept {}
    static uint8_t BluetoothSigAssignedNumbers();
    static Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description);
};

struct GattPresentationFormatTypes
{
    GattPresentationFormatTypes() = delete;
    static uint8_t Boolean();
    static uint8_t Bit2();
    static uint8_t Nibble();
    static uint8_t UInt8();
    static uint8_t UInt12();
    static uint8_t UInt16();
    static uint8_t UInt24();
    static uint8_t UInt32();
    static uint8_t UInt48();
    static uint8_t UInt64();
    static uint8_t UInt128();
    static uint8_t SInt8();
    static uint8_t SInt12();
    static uint8_t SInt16();
    static uint8_t SInt24();
    static uint8_t SInt32();
    static uint8_t SInt48();
    static uint8_t SInt64();
    static uint8_t SInt128();
    static uint8_t Float32();
    static uint8_t Float64();
    static uint8_t SFloat();
    static uint8_t Float();
    static uint8_t DUInt16();
    static uint8_t Utf8();
    static uint8_t Utf16();
    static uint8_t Struct();
};

struct GattProtocolError
{
    GattProtocolError() = delete;
    static uint8_t InvalidHandle();
    static uint8_t ReadNotPermitted();
    static uint8_t WriteNotPermitted();
    static uint8_t InvalidPdu();
    static uint8_t InsufficientAuthentication();
    static uint8_t RequestNotSupported();
    static uint8_t InvalidOffset();
    static uint8_t InsufficientAuthorization();
    static uint8_t PrepareQueueFull();
    static uint8_t AttributeNotFound();
    static uint8_t AttributeNotLong();
    static uint8_t InsufficientEncryptionKeySize();
    static uint8_t InvalidAttributeValueLength();
    static uint8_t UnlikelyError();
    static uint8_t InsufficientEncryption();
    static uint8_t UnsupportedGroupType();
    static uint8_t InsufficientResources();
};

struct WINRT_EBO GattReadClientCharacteristicConfigurationDescriptorResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult,
    impl::require<GattReadClientCharacteristicConfigurationDescriptorResult, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
{
    GattReadClientCharacteristicConfigurationDescriptorResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattReadRequest :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest
{
    GattReadRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattReadRequestedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs
{
    GattReadRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattReadResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult,
    impl::require<GattReadResult, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
{
    GattReadResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattReliableWriteTransaction :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction,
    impl::require<GattReliableWriteTransaction, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
{
    GattReliableWriteTransaction(std::nullptr_t) noexcept {}
    GattReliableWriteTransaction();
};

struct WINRT_EBO GattRequestStateChangedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs
{
    GattRequestStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattServiceProvider :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider
{
    GattServiceProvider(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> CreateAsync(GUID serviceUuid);
};

struct WINRT_EBO GattServiceProviderAdvertisementStatusChangedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs
{
    GattServiceProviderAdvertisementStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattServiceProviderAdvertisingParameters :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters
{
    GattServiceProviderAdvertisingParameters(std::nullptr_t) noexcept {}
    GattServiceProviderAdvertisingParameters();
};

struct WINRT_EBO GattServiceProviderResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult
{
    GattServiceProviderResult(std::nullptr_t) noexcept {}
};

struct GattServiceUuids
{
    GattServiceUuids() = delete;
    static GUID Battery();
    static GUID BloodPressure();
    static GUID CyclingSpeedAndCadence();
    static GUID GenericAccess();
    static GUID GenericAttribute();
    static GUID Glucose();
    static GUID HealthThermometer();
    static GUID HeartRate();
    static GUID RunningSpeedAndCadence();
    static GUID AlertNotification();
    static GUID CurrentTime();
    static GUID CyclingPower();
    static GUID DeviceInformation();
    static GUID HumanInterfaceDevice();
    static GUID ImmediateAlert();
    static GUID LinkLoss();
    static GUID LocationAndNavigation();
    static GUID NextDstChange();
    static GUID PhoneAlertStatus();
    static GUID ReferenceTimeUpdate();
    static GUID ScanParameters();
    static GUID TxPower();
};

struct WINRT_EBO GattSession :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession,
    impl::require<GattSession, Windows::Foundation::IClosable>
{
    GattSession(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> FromDeviceIdAsync(const Windows::Devices::Bluetooth::BluetoothDeviceId & deviceId);
};

struct WINRT_EBO GattSessionStatusChangedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs
{
    GattSessionStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattSubscribedClient :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient
{
    GattSubscribedClient(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattValueChangedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs
{
    GattValueChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattWriteRequest :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest
{
    GattWriteRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattWriteRequestedEventArgs :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs
{
    GattWriteRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GattWriteResult :
    Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult
{
    GattWriteResult(std::nullptr_t) noexcept {}
};

}

}
