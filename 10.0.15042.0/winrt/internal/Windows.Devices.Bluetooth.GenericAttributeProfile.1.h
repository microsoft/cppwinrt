// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
#include "Windows.Devices.Bluetooth.0.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Devices.Enumeration.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Bluetooth::GenericAttributeProfile {

struct __declspec(uuid("59cb50c1-5934-4f68-a198-eb864fa44e6b")) __declspec(novtable) IGattCharacteristic : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDescriptors(GUID descriptorUuid, Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> ** value) = 0;
    virtual HRESULT __stdcall get_CharacteristicProperties(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties * value) = 0;
    virtual HRESULT __stdcall get_ProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall put_ProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) = 0;
    virtual HRESULT __stdcall get_UserDescription(hstring * value) = 0;
    virtual HRESULT __stdcall get_Uuid(GUID * value) = 0;
    virtual HRESULT __stdcall get_AttributeHandle(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_PresentationFormats(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> ** value) = 0;
    virtual HRESULT __stdcall abi_ReadValueAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ** value) = 0;
    virtual HRESULT __stdcall abi_ReadValueWithCacheModeAsync(winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ** value) = 0;
    virtual HRESULT __stdcall abi_WriteValueAsync(Windows::Storage::Streams::IBuffer * value, Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_WriteValueWithOptionAsync(Windows::Storage::Streams::IBuffer * value, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption, Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_ReadClientCharacteristicConfigurationDescriptorAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_WriteClientCharacteristicConfigurationDescriptorAsync(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue, Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> ** asyncOp) = 0;
    virtual HRESULT __stdcall add_ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> * valueChangedHandler, event_token * valueChangedEventCookie) = 0;
    virtual HRESULT __stdcall remove_ValueChanged(event_token valueChangedEventCookie) = 0;
};

struct __declspec(uuid("ae1ab578-ec06-4764-b780-9835a1d35d6e")) __declspec(novtable) IGattCharacteristic2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Service(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService ** value) = 0;
    virtual HRESULT __stdcall abi_GetAllDescriptors(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> ** descriptors) = 0;
};

struct __declspec(uuid("3f3c663e-93d4-406b-b817-db81f8ed53b3")) __declspec(novtable) IGattCharacteristic3 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDescriptorsAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetDescriptorsWithCacheModeAsync(winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetDescriptorsForUuidAsync(GUID descriptorUuid, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetDescriptorsForUuidWithCacheModeAsync(GUID descriptorUuid, winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer * value, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_WriteValueWithResultAndOptionAsync(Windows::Storage::Streams::IBuffer * value, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_WriteClientCharacteristicConfigurationDescriptorWithResultAsync(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> ** operation) = 0;
};

struct __declspec(uuid("59cb50c3-5934-4f68-a198-eb864fa44e6b")) __declspec(novtable) IGattCharacteristicStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * characteristicUuid) = 0;
};

struct __declspec(uuid("58fa4586-b1de-470c-b7de-0d11ff44f4b7")) __declspec(novtable) IGattCharacteristicUuidsStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_BatteryLevel(GUID * value) = 0;
    virtual HRESULT __stdcall get_BloodPressureFeature(GUID * value) = 0;
    virtual HRESULT __stdcall get_BloodPressureMeasurement(GUID * value) = 0;
    virtual HRESULT __stdcall get_BodySensorLocation(GUID * value) = 0;
    virtual HRESULT __stdcall get_CscFeature(GUID * value) = 0;
    virtual HRESULT __stdcall get_CscMeasurement(GUID * value) = 0;
    virtual HRESULT __stdcall get_GlucoseFeature(GUID * value) = 0;
    virtual HRESULT __stdcall get_GlucoseMeasurement(GUID * value) = 0;
    virtual HRESULT __stdcall get_GlucoseMeasurementContext(GUID * value) = 0;
    virtual HRESULT __stdcall get_HeartRateControlPoint(GUID * value) = 0;
    virtual HRESULT __stdcall get_HeartRateMeasurement(GUID * value) = 0;
    virtual HRESULT __stdcall get_IntermediateCuffPressure(GUID * value) = 0;
    virtual HRESULT __stdcall get_IntermediateTemperature(GUID * value) = 0;
    virtual HRESULT __stdcall get_MeasurementInterval(GUID * value) = 0;
    virtual HRESULT __stdcall get_RecordAccessControlPoint(GUID * value) = 0;
    virtual HRESULT __stdcall get_RscFeature(GUID * value) = 0;
    virtual HRESULT __stdcall get_RscMeasurement(GUID * value) = 0;
    virtual HRESULT __stdcall get_SCControlPoint(GUID * value) = 0;
    virtual HRESULT __stdcall get_SensorLocation(GUID * value) = 0;
    virtual HRESULT __stdcall get_TemperatureMeasurement(GUID * value) = 0;
    virtual HRESULT __stdcall get_TemperatureType(GUID * value) = 0;
};

struct __declspec(uuid("1855b425-d46e-4a2c-9c3f-ed6dea29e7be")) __declspec(novtable) IGattCharacteristicUuidsStatics2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AlertCategoryId(GUID * value) = 0;
    virtual HRESULT __stdcall get_AlertCategoryIdBitMask(GUID * value) = 0;
    virtual HRESULT __stdcall get_AlertLevel(GUID * value) = 0;
    virtual HRESULT __stdcall get_AlertNotificationControlPoint(GUID * value) = 0;
    virtual HRESULT __stdcall get_AlertStatus(GUID * value) = 0;
    virtual HRESULT __stdcall get_GapAppearance(GUID * value) = 0;
    virtual HRESULT __stdcall get_BootKeyboardInputReport(GUID * value) = 0;
    virtual HRESULT __stdcall get_BootKeyboardOutputReport(GUID * value) = 0;
    virtual HRESULT __stdcall get_BootMouseInputReport(GUID * value) = 0;
    virtual HRESULT __stdcall get_CurrentTime(GUID * value) = 0;
    virtual HRESULT __stdcall get_CyclingPowerControlPoint(GUID * value) = 0;
    virtual HRESULT __stdcall get_CyclingPowerFeature(GUID * value) = 0;
    virtual HRESULT __stdcall get_CyclingPowerMeasurement(GUID * value) = 0;
    virtual HRESULT __stdcall get_CyclingPowerVector(GUID * value) = 0;
    virtual HRESULT __stdcall get_DateTime(GUID * value) = 0;
    virtual HRESULT __stdcall get_DayDateTime(GUID * value) = 0;
    virtual HRESULT __stdcall get_DayOfWeek(GUID * value) = 0;
    virtual HRESULT __stdcall get_GapDeviceName(GUID * value) = 0;
    virtual HRESULT __stdcall get_DstOffset(GUID * value) = 0;
    virtual HRESULT __stdcall get_ExactTime256(GUID * value) = 0;
    virtual HRESULT __stdcall get_FirmwareRevisionString(GUID * value) = 0;
    virtual HRESULT __stdcall get_HardwareRevisionString(GUID * value) = 0;
    virtual HRESULT __stdcall get_HidControlPoint(GUID * value) = 0;
    virtual HRESULT __stdcall get_HidInformation(GUID * value) = 0;
    virtual HRESULT __stdcall get_Ieee1107320601RegulatoryCertificationDataList(GUID * value) = 0;
    virtual HRESULT __stdcall get_LnControlPoint(GUID * value) = 0;
    virtual HRESULT __stdcall get_LnFeature(GUID * value) = 0;
    virtual HRESULT __stdcall get_LocalTimeInformation(GUID * value) = 0;
    virtual HRESULT __stdcall get_LocationAndSpeed(GUID * value) = 0;
    virtual HRESULT __stdcall get_ManufacturerNameString(GUID * value) = 0;
    virtual HRESULT __stdcall get_ModelNumberString(GUID * value) = 0;
    virtual HRESULT __stdcall get_Navigation(GUID * value) = 0;
    virtual HRESULT __stdcall get_NewAlert(GUID * value) = 0;
    virtual HRESULT __stdcall get_GapPeripheralPreferredConnectionParameters(GUID * value) = 0;
    virtual HRESULT __stdcall get_GapPeripheralPrivacyFlag(GUID * value) = 0;
    virtual HRESULT __stdcall get_PnpId(GUID * value) = 0;
    virtual HRESULT __stdcall get_PositionQuality(GUID * value) = 0;
    virtual HRESULT __stdcall get_ProtocolMode(GUID * value) = 0;
    virtual HRESULT __stdcall get_GapReconnectionAddress(GUID * value) = 0;
    virtual HRESULT __stdcall get_ReferenceTimeInformation(GUID * value) = 0;
    virtual HRESULT __stdcall get_Report(GUID * value) = 0;
    virtual HRESULT __stdcall get_ReportMap(GUID * value) = 0;
    virtual HRESULT __stdcall get_RingerControlPoint(GUID * value) = 0;
    virtual HRESULT __stdcall get_RingerSetting(GUID * value) = 0;
    virtual HRESULT __stdcall get_ScanIntervalWindow(GUID * value) = 0;
    virtual HRESULT __stdcall get_ScanRefresh(GUID * value) = 0;
    virtual HRESULT __stdcall get_SerialNumberString(GUID * value) = 0;
    virtual HRESULT __stdcall get_GattServiceChanged(GUID * value) = 0;
    virtual HRESULT __stdcall get_SoftwareRevisionString(GUID * value) = 0;
    virtual HRESULT __stdcall get_SupportedNewAlertCategory(GUID * value) = 0;
    virtual HRESULT __stdcall get_SupportUnreadAlertCategory(GUID * value) = 0;
    virtual HRESULT __stdcall get_SystemId(GUID * value) = 0;
    virtual HRESULT __stdcall get_TimeAccuracy(GUID * value) = 0;
    virtual HRESULT __stdcall get_TimeSource(GUID * value) = 0;
    virtual HRESULT __stdcall get_TimeUpdateControlPoint(GUID * value) = 0;
    virtual HRESULT __stdcall get_TimeUpdateState(GUID * value) = 0;
    virtual HRESULT __stdcall get_TimeWithDst(GUID * value) = 0;
    virtual HRESULT __stdcall get_TimeZone(GUID * value) = 0;
    virtual HRESULT __stdcall get_TxPowerLevel(GUID * value) = 0;
    virtual HRESULT __stdcall get_UnreadAlertStatus(GUID * value) = 0;
};

struct __declspec(uuid("1194945c-b257-4f3e-9db7-f68bc9a9aef2")) __declspec(novtable) IGattCharacteristicsResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) = 0;
    virtual HRESULT __stdcall get_ProtocolError(Windows::Foundation::IReference<uint8_t> ** value) = 0;
    virtual HRESULT __stdcall get_Characteristics(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> ** value) = 0;
};

struct __declspec(uuid("506d5599-0112-419a-8e3b-ae21afabd2c2")) __declspec(novtable) IGattClientNotificationResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SubscribedClient(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient ** value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) = 0;
    virtual HRESULT __stdcall get_ProtocolError(Windows::Foundation::IReference<uint8_t> ** value) = 0;
};

struct __declspec(uuid("92055f2b-8084-4344-b4c2-284de19a8506")) __declspec(novtable) IGattDescriptor : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall put_ProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) = 0;
    virtual HRESULT __stdcall get_Uuid(GUID * value) = 0;
    virtual HRESULT __stdcall get_AttributeHandle(uint16_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadValueAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ** value) = 0;
    virtual HRESULT __stdcall abi_ReadValueWithCacheModeAsync(winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ** value) = 0;
    virtual HRESULT __stdcall abi_WriteValueAsync(Windows::Storage::Streams::IBuffer * value, Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> ** action) = 0;
};

struct __declspec(uuid("8f563d39-d630-406c-ba11-10cdd16b0e5e")) __declspec(novtable) IGattDescriptor2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer * value, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> ** operation) = 0;
};

struct __declspec(uuid("92055f2d-8084-4344-b4c2-284de19a8506")) __declspec(novtable) IGattDescriptorStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * descriptorUuid) = 0;
};

struct __declspec(uuid("a6f862ce-9cfc-42f1-9185-ff37b75181d3")) __declspec(novtable) IGattDescriptorUuidsStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_CharacteristicAggregateFormat(GUID * value) = 0;
    virtual HRESULT __stdcall get_CharacteristicExtendedProperties(GUID * value) = 0;
    virtual HRESULT __stdcall get_CharacteristicPresentationFormat(GUID * value) = 0;
    virtual HRESULT __stdcall get_CharacteristicUserDescription(GUID * value) = 0;
    virtual HRESULT __stdcall get_ClientCharacteristicConfiguration(GUID * value) = 0;
    virtual HRESULT __stdcall get_ServerCharacteristicConfiguration(GUID * value) = 0;
};

struct __declspec(uuid("9bc091f3-95e7-4489-8d25-ff81955a57b9")) __declspec(novtable) IGattDescriptorsResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) = 0;
    virtual HRESULT __stdcall get_ProtocolError(Windows::Foundation::IReference<uint8_t> ** value) = 0;
    virtual HRESULT __stdcall get_Descriptors(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> ** value) = 0;
};

struct __declspec(uuid("ac7b7c05-b33c-47cf-990f-6b8f5577df71")) __declspec(novtable) IGattDeviceService : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetCharacteristics(GUID characteristicUuid, Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> ** value) = 0;
    virtual HRESULT __stdcall abi_GetIncludedServices(GUID serviceUuid, Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** value) = 0;
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Uuid(GUID * value) = 0;
    virtual HRESULT __stdcall get_AttributeHandle(uint16_t * value) = 0;
};

struct __declspec(uuid("fc54520b-0b0d-4708-bae0-9ffd9489bc59")) __declspec(novtable) IGattDeviceService2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Device(Windows::Devices::Bluetooth::IBluetoothLEDevice ** value) = 0;
    virtual HRESULT __stdcall get_ParentServices(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** value) = 0;
    virtual HRESULT __stdcall abi_GetAllCharacteristics(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> ** characteristics) = 0;
    virtual HRESULT __stdcall abi_GetAllIncludedServices(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** includedServices) = 0;
};

struct __declspec(uuid("b293a950-0c53-437c-a9b3-5c3210c6e569")) __declspec(novtable) IGattDeviceService3 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_DeviceAccessInformation(Windows::Devices::Enumeration::IDeviceAccessInformation ** value) = 0;
    virtual HRESULT __stdcall get_Session(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession ** value) = 0;
    virtual HRESULT __stdcall get_SharingMode(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode * value) = 0;
    virtual HRESULT __stdcall abi_RequestAccessAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> ** value) = 0;
    virtual HRESULT __stdcall abi_OpenAsync(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode, Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetCharacteristicsAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetCharacteristicsWithCacheModeAsync(winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetCharacteristicsForUuidAsync(GUID characteristicUuid, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetCharacteristicsForUuidWithCacheModeAsync(GUID characteristicUuid, winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetIncludedServicesAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetIncludedServicesWithCacheModeAsync(winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetIncludedServicesForUuidAsync(GUID serviceUuid, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetIncludedServicesForUuidWithCacheModeAsync(GUID serviceUuid, winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> ** operation) = 0;
};

struct __declspec(uuid("196d0022-faad-45dc-ae5b-2ac3184e84db")) __declspec(novtable) IGattDeviceServiceStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorFromUuid(GUID serviceUuid, hstring * selector) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorFromShortId(uint16_t serviceShortId, hstring * selector) = 0;
    virtual HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * serviceUuid) = 0;
};

struct __declspec(uuid("0604186e-24a6-4b0d-a2f2-30cc01545d25")) __declspec(novtable) IGattDeviceServiceStatics2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_FromIdWithSharingModeAsync(hstring deviceId, winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::IBluetoothDeviceId * bluetoothDeviceId, hstring * result) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceIdWithCacheMode(Windows::Devices::Bluetooth::IBluetoothDeviceId * bluetoothDeviceId, winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, hstring * result) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::IBluetoothDeviceId * bluetoothDeviceId, GUID serviceUuid, hstring * result) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode(Windows::Devices::Bluetooth::IBluetoothDeviceId * bluetoothDeviceId, GUID serviceUuid, winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, hstring * result) = 0;
};

struct __declspec(uuid("171dd3ee-016d-419d-838a-576cf475a3d8")) __declspec(novtable) IGattDeviceServicesResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) = 0;
    virtual HRESULT __stdcall get_ProtocolError(Windows::Foundation::IReference<uint8_t> ** value) = 0;
    virtual HRESULT __stdcall get_Services(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** value) = 0;
};

struct __declspec(uuid("aede376d-5412-4d74-92a8-8deb8526829c")) __declspec(novtable) IGattLocalCharacteristic : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Uuid(GUID * value) = 0;
    virtual HRESULT __stdcall get_StaticValue(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_CharacteristicProperties(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties * value) = 0;
    virtual HRESULT __stdcall get_ReadProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall get_WriteProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall abi_CreateDescriptorAsync(GUID descriptorUuid, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters * parameters, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> ** operation) = 0;
    virtual HRESULT __stdcall get_Descriptors(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> ** value) = 0;
    virtual HRESULT __stdcall get_UserDescription(hstring * value) = 0;
    virtual HRESULT __stdcall get_PresentationFormats(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> ** value) = 0;
    virtual HRESULT __stdcall get_SubscribedClients(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> ** value) = 0;
    virtual HRESULT __stdcall add_SubscribedClientsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SubscribedClientsChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_ReadRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ReadRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_WriteRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_WriteRequested(event_token token) = 0;
    virtual HRESULT __stdcall abi_NotifyValueAsync(Windows::Storage::Streams::IBuffer * value, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>> ** operation) = 0;
    virtual HRESULT __stdcall abi_NotifyValueForSubscribedClientAsync(Windows::Storage::Streams::IBuffer * value, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient * subscribedClient, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> ** operation) = 0;
};

struct __declspec(uuid("faf73db4-4cff-44c7-8445-040e6ead0063")) __declspec(novtable) IGattLocalCharacteristicParameters : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_StaticValue(Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall get_StaticValue(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall put_CharacteristicProperties(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value) = 0;
    virtual HRESULT __stdcall get_CharacteristicProperties(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties * value) = 0;
    virtual HRESULT __stdcall put_ReadProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) = 0;
    virtual HRESULT __stdcall get_ReadProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall put_WriteProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) = 0;
    virtual HRESULT __stdcall get_WriteProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall put_UserDescription(hstring value) = 0;
    virtual HRESULT __stdcall get_UserDescription(hstring * value) = 0;
    virtual HRESULT __stdcall get_PresentationFormats(Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> ** value) = 0;
};

struct __declspec(uuid("7975de9b-0170-4397-9666-92f863f12ee6")) __declspec(novtable) IGattLocalCharacteristicResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Characteristic(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic ** value) = 0;
    virtual HRESULT __stdcall get_Error(winrt::Windows::Devices::Bluetooth::BluetoothError * value) = 0;
};

struct __declspec(uuid("f48ebe06-789d-4a4b-8652-bd017b5d2fc6")) __declspec(novtable) IGattLocalDescriptor : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Uuid(GUID * value) = 0;
    virtual HRESULT __stdcall get_StaticValue(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_ReadProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall get_WriteProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall add_ReadRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ReadRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_WriteRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_WriteRequested(event_token token) = 0;
};

struct __declspec(uuid("5fdede6a-f3c1-4b66-8c4b-e3d2293b40e9")) __declspec(novtable) IGattLocalDescriptorParameters : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_StaticValue(Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall get_StaticValue(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall put_ReadProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) = 0;
    virtual HRESULT __stdcall get_ReadProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall put_WriteProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) = 0;
    virtual HRESULT __stdcall get_WriteProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
};

struct __declspec(uuid("375791be-321f-4366-bfc1-3bc6b82c79f8")) __declspec(novtable) IGattLocalDescriptorResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Descriptor(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor ** value) = 0;
    virtual HRESULT __stdcall get_Error(winrt::Windows::Devices::Bluetooth::BluetoothError * value) = 0;
};

struct __declspec(uuid("f513e258-f7f7-4902-b803-57fcc7d6fe83")) __declspec(novtable) IGattLocalService : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Uuid(GUID * value) = 0;
    virtual HRESULT __stdcall abi_CreateCharacteristicAsync(GUID characteristicUuid, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters * parameters, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> ** operation) = 0;
    virtual HRESULT __stdcall get_Characteristics(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> ** value) = 0;
};

struct __declspec(uuid("196d0021-faad-45dc-ae5b-2ac3184e84db")) __declspec(novtable) IGattPresentationFormat : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_FormatType(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Exponent(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Unit(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_Namespace(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Description(uint16_t * value) = 0;
};

struct __declspec(uuid("196d0020-faad-45dc-ae5b-2ac3184e84db")) __declspec(novtable) IGattPresentationFormatStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_BluetoothSigAssignedNumbers(uint8_t * value) = 0;
};

struct __declspec(uuid("a9c21713-b82f-435e-b634-21fd85a43c07")) __declspec(novtable) IGattPresentationFormatStatics2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat ** result) = 0;
};

struct __declspec(uuid("faf1ba0a-30ba-409c-bef7-cffb6d03b8fb")) __declspec(novtable) IGattPresentationFormatTypesStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Boolean(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Bit2(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Nibble(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UInt8(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UInt12(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UInt16(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UInt24(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UInt32(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UInt48(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UInt64(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UInt128(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SInt8(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SInt12(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SInt16(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SInt24(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SInt32(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SInt48(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SInt64(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SInt128(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Float32(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Float64(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SFloat(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Float(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_DUInt16(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Utf8(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Utf16(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Struct(uint8_t * value) = 0;
};

struct __declspec(uuid("ca46c5c5-0ecc-4809-bea3-cf79bc991e37")) __declspec(novtable) IGattProtocolErrorStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_InvalidHandle(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_ReadNotPermitted(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_WriteNotPermitted(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidPdu(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_InsufficientAuthentication(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_RequestNotSupported(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidOffset(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_InsufficientAuthorization(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_PrepareQueueFull(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_AttributeNotFound(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_AttributeNotLong(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_InsufficientEncryptionKeySize(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_InvalidAttributeValueLength(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UnlikelyError(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_InsufficientEncryption(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_UnsupportedGroupType(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_InsufficientResources(uint8_t * value) = 0;
};

struct __declspec(uuid("63a66f09-1aea-4c4c-a50f-97bae474b348")) __declspec(novtable) IGattReadClientCharacteristicConfigurationDescriptorResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) = 0;
    virtual HRESULT __stdcall get_ClientCharacteristicConfigurationDescriptor(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue * value) = 0;
};

struct __declspec(uuid("1bf1a59d-ba4d-4622-8651-f4ee150d0a5d")) __declspec(novtable) IGattReadClientCharacteristicConfigurationDescriptorResult2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ProtocolError(Windows::Foundation::IReference<uint8_t> ** value) = 0;
};

struct __declspec(uuid("f1dd6535-6acd-42a6-a4bb-d789dae0043e")) __declspec(novtable) IGattReadRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Offset(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState * value) = 0;
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_RespondWithValue(Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall abi_RespondWithProtocolError(uint8_t protocolError) = 0;
};

struct __declspec(uuid("93497243-f39c-484b-8ab6-996ba486cfa3")) __declspec(novtable) IGattReadRequestedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Session(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
    virtual HRESULT __stdcall abi_GetRequestAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> ** operation) = 0;
};

struct __declspec(uuid("63a66f08-1aea-4c4c-a50f-97bae474b348")) __declspec(novtable) IGattReadResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("a10f50a0-fb43-48af-baaa-638a5c6329fe")) __declspec(novtable) IGattReadResult2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ProtocolError(Windows::Foundation::IReference<uint8_t> ** value) = 0;
};

struct __declspec(uuid("63a66f07-1aea-4c4c-a50f-97bae474b348")) __declspec(novtable) IGattReliableWriteTransaction : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_WriteValue(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic * characteristic, Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall abi_CommitAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> ** asyncOp) = 0;
};

struct __declspec(uuid("51113987-ef12-462f-9fb2-a1a43a679416")) __declspec(novtable) IGattReliableWriteTransaction2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CommitWithResultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> ** operation) = 0;
};

struct __declspec(uuid("e834d92c-27be-44b3-9d0d-4fc6e808dd3f")) __declspec(novtable) IGattRequestStateChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_State(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState * value) = 0;
    virtual HRESULT __stdcall get_Error(winrt::Windows::Devices::Bluetooth::BluetoothError * value) = 0;
};

struct __declspec(uuid("7822b3cd-2889-4f86-a051-3f0aed1c2760")) __declspec(novtable) IGattServiceProvider : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Service(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService ** value) = 0;
    virtual HRESULT __stdcall get_AdvertisementStatus(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus * value) = 0;
    virtual HRESULT __stdcall add_AdvertisementStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AdvertisementStatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_StartAdvertising() = 0;
    virtual HRESULT __stdcall abi_StartAdvertisingWithParameters(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters * parameters) = 0;
    virtual HRESULT __stdcall abi_StopAdvertising() = 0;
};

struct __declspec(uuid("59a5aa65-fa21-4ffc-b155-04d928012686")) __declspec(novtable) IGattServiceProviderAdvertisementStatusChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Error(winrt::Windows::Devices::Bluetooth::BluetoothError * value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus * value) = 0;
};

struct __declspec(uuid("e2ce31ab-6315-4c22-9bd7-781dbc3d8d82")) __declspec(novtable) IGattServiceProviderAdvertisingParameters : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall put_IsConnectable(bool value) = 0;
    virtual HRESULT __stdcall get_IsConnectable(bool * value) = 0;
    virtual HRESULT __stdcall put_IsDiscoverable(bool value) = 0;
    virtual HRESULT __stdcall get_IsDiscoverable(bool * value) = 0;
};

struct __declspec(uuid("764696d8-c53e-428c-8a48-67afe02c3ae6")) __declspec(novtable) IGattServiceProviderResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Error(winrt::Windows::Devices::Bluetooth::BluetoothError * value) = 0;
    virtual HRESULT __stdcall get_ServiceProvider(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider ** value) = 0;
};

struct __declspec(uuid("31794063-5256-4054-a4f4-7bbe7755a57e")) __declspec(novtable) IGattServiceProviderStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CreateAsync(GUID serviceUuid, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> ** operation) = 0;
};

struct __declspec(uuid("6dc57058-9aba-4417-b8f2-dce016d34ee2")) __declspec(novtable) IGattServiceUuidsStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Battery(GUID * value) = 0;
    virtual HRESULT __stdcall get_BloodPressure(GUID * value) = 0;
    virtual HRESULT __stdcall get_CyclingSpeedAndCadence(GUID * value) = 0;
    virtual HRESULT __stdcall get_GenericAccess(GUID * value) = 0;
    virtual HRESULT __stdcall get_GenericAttribute(GUID * value) = 0;
    virtual HRESULT __stdcall get_Glucose(GUID * value) = 0;
    virtual HRESULT __stdcall get_HealthThermometer(GUID * value) = 0;
    virtual HRESULT __stdcall get_HeartRate(GUID * value) = 0;
    virtual HRESULT __stdcall get_RunningSpeedAndCadence(GUID * value) = 0;
};

struct __declspec(uuid("d2ae94f5-3d15-4f79-9c0c-eaafa675155c")) __declspec(novtable) IGattServiceUuidsStatics2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AlertNotification(GUID * value) = 0;
    virtual HRESULT __stdcall get_CurrentTime(GUID * value) = 0;
    virtual HRESULT __stdcall get_CyclingPower(GUID * value) = 0;
    virtual HRESULT __stdcall get_DeviceInformation(GUID * value) = 0;
    virtual HRESULT __stdcall get_HumanInterfaceDevice(GUID * value) = 0;
    virtual HRESULT __stdcall get_ImmediateAlert(GUID * value) = 0;
    virtual HRESULT __stdcall get_LinkLoss(GUID * value) = 0;
    virtual HRESULT __stdcall get_LocationAndNavigation(GUID * value) = 0;
    virtual HRESULT __stdcall get_NextDstChange(GUID * value) = 0;
    virtual HRESULT __stdcall get_PhoneAlertStatus(GUID * value) = 0;
    virtual HRESULT __stdcall get_ReferenceTimeUpdate(GUID * value) = 0;
    virtual HRESULT __stdcall get_ScanParameters(GUID * value) = 0;
    virtual HRESULT __stdcall get_TxPower(GUID * value) = 0;
};

struct __declspec(uuid("d23b5143-e04e-4c24-999c-9c256f9856b1")) __declspec(novtable) IGattSession : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(Windows::Devices::Bluetooth::IBluetoothDeviceId ** value) = 0;
    virtual HRESULT __stdcall get_CanMaintainConnection(bool * value) = 0;
    virtual HRESULT __stdcall put_MaintainConnection(bool value) = 0;
    virtual HRESULT __stdcall get_MaintainConnection(bool * value) = 0;
    virtual HRESULT __stdcall get_MaxPduSize(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_SessionStatus(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus * value) = 0;
    virtual HRESULT __stdcall add_MaxPduSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MaxPduSizeChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_SessionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SessionStatusChanged(event_token token) = 0;
};

struct __declspec(uuid("2e65b95c-539f-4db7-82a8-73bdbbf73ebf")) __declspec(novtable) IGattSessionStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_FromDeviceIdAsync(Windows::Devices::Bluetooth::IBluetoothDeviceId * deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> ** operation) = 0;
};

struct __declspec(uuid("7605b72e-837f-404c-ab34-3163f39ddf32")) __declspec(novtable) IGattSessionStatusChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Error(winrt::Windows::Devices::Bluetooth::BluetoothError * value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus * value) = 0;
};

struct __declspec(uuid("736e9001-15a4-4ec2-9248-e3f20d463be9")) __declspec(novtable) IGattSubscribedClient : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Session(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession ** value) = 0;
    virtual HRESULT __stdcall get_MaxNotificationSize(uint16_t * value) = 0;
    virtual HRESULT __stdcall add_MaxNotificationSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_MaxNotificationSizeChanged(event_token token) = 0;
};

struct __declspec(uuid("d21bdb54-06e3-4ed8-a263-acfac8ba7313")) __declspec(novtable) IGattValueChangedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_CharacteristicValue(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * timestamp) = 0;
};

struct __declspec(uuid("aeb6a9ed-de2f-4fc2-a9a8-94ea7844f13d")) __declspec(novtable) IGattWriteRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Value(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_Offset(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Option(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption * value) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState * value) = 0;
    virtual HRESULT __stdcall add_StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_Respond() = 0;
    virtual HRESULT __stdcall abi_RespondWithProtocolError(uint8_t protocolError) = 0;
};

struct __declspec(uuid("2dec8bbe-a73a-471a-94d5-037deadd0806")) __declspec(novtable) IGattWriteRequestedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Session(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
    virtual HRESULT __stdcall abi_GetRequestAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> ** operation) = 0;
};

struct __declspec(uuid("4991ddb1-cb2b-44f7-99fc-d29a2871dc9b")) __declspec(novtable) IGattWriteResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) = 0;
    virtual HRESULT __stdcall get_ProtocolError(Windows::Foundation::IReference<uint8_t> ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult; };

}

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

template <typename D>
struct WINRT_EBO impl_IGattCharacteristic
{
    [[deprecated("Use GetDescriptorsForUuidAsync instead of GetDescriptors.  For more information, see MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> GetDescriptors(GUID descriptorUuid) const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties CharacteristicProperties() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel ProtectionLevel() const;
    void ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const;
    hstring UserDescription() const;
    GUID Uuid() const;
    uint16_t AttributeHandle() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> PresentationFormats() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ReadValueAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> WriteValueAsync(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> WriteValueAsync(const Windows::Storage::Streams::IBuffer & value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> ReadClientCharacteristicConfigurationDescriptorAsync() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> WriteClientCharacteristicConfigurationDescriptorAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue) const;
    event_token ValueChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> & valueChangedHandler) const;
    using ValueChanged_revoker = event_revoker<IGattCharacteristic>;
    ValueChanged_revoker ValueChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> & valueChangedHandler) const;
    void ValueChanged(event_token valueChangedEventCookie) const;
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristic2
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService Service() const;
    [[deprecated("Use GetDescriptorsAsync instead of GetAllDescriptors.  For more information, see MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> GetAllDescriptors() const;
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristic3
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> GetDescriptorsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> GetDescriptorsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> GetDescriptorsForUuidAsync(GUID descriptorUuid) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> GetDescriptorsForUuidAsync(GUID descriptorUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> WriteValueWithResultAsync(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> WriteValueWithResultAsync(const Windows::Storage::Streams::IBuffer & value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> WriteClientCharacteristicConfigurationDescriptorWithResultAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue) const;
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristicStatics
{
    [[deprecated("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")]] GUID ConvertShortIdToUuid(uint16_t shortId) const;
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristicUuidsStatics
{
    GUID BatteryLevel() const;
    GUID BloodPressureFeature() const;
    GUID BloodPressureMeasurement() const;
    GUID BodySensorLocation() const;
    GUID CscFeature() const;
    GUID CscMeasurement() const;
    GUID GlucoseFeature() const;
    GUID GlucoseMeasurement() const;
    GUID GlucoseMeasurementContext() const;
    GUID HeartRateControlPoint() const;
    GUID HeartRateMeasurement() const;
    GUID IntermediateCuffPressure() const;
    GUID IntermediateTemperature() const;
    GUID MeasurementInterval() const;
    GUID RecordAccessControlPoint() const;
    GUID RscFeature() const;
    GUID RscMeasurement() const;
    GUID SCControlPoint() const;
    GUID SensorLocation() const;
    GUID TemperatureMeasurement() const;
    GUID TemperatureType() const;
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristicUuidsStatics2
{
    GUID AlertCategoryId() const;
    GUID AlertCategoryIdBitMask() const;
    GUID AlertLevel() const;
    GUID AlertNotificationControlPoint() const;
    GUID AlertStatus() const;
    GUID GapAppearance() const;
    GUID BootKeyboardInputReport() const;
    GUID BootKeyboardOutputReport() const;
    GUID BootMouseInputReport() const;
    GUID CurrentTime() const;
    GUID CyclingPowerControlPoint() const;
    GUID CyclingPowerFeature() const;
    GUID CyclingPowerMeasurement() const;
    GUID CyclingPowerVector() const;
    GUID DateTime() const;
    GUID DayDateTime() const;
    GUID DayOfWeek() const;
    GUID GapDeviceName() const;
    GUID DstOffset() const;
    GUID ExactTime256() const;
    GUID FirmwareRevisionString() const;
    GUID HardwareRevisionString() const;
    GUID HidControlPoint() const;
    GUID HidInformation() const;
    GUID Ieee1107320601RegulatoryCertificationDataList() const;
    GUID LnControlPoint() const;
    GUID LnFeature() const;
    GUID LocalTimeInformation() const;
    GUID LocationAndSpeed() const;
    GUID ManufacturerNameString() const;
    GUID ModelNumberString() const;
    GUID Navigation() const;
    GUID NewAlert() const;
    GUID GapPeripheralPreferredConnectionParameters() const;
    GUID GapPeripheralPrivacyFlag() const;
    GUID PnpId() const;
    GUID PositionQuality() const;
    GUID ProtocolMode() const;
    GUID GapReconnectionAddress() const;
    GUID ReferenceTimeInformation() const;
    GUID Report() const;
    GUID ReportMap() const;
    GUID RingerControlPoint() const;
    GUID RingerSetting() const;
    GUID ScanIntervalWindow() const;
    GUID ScanRefresh() const;
    GUID SerialNumberString() const;
    GUID GattServiceChanged() const;
    GUID SoftwareRevisionString() const;
    GUID SupportedNewAlertCategory() const;
    GUID SupportUnreadAlertCategory() const;
    GUID SystemId() const;
    GUID TimeAccuracy() const;
    GUID TimeSource() const;
    GUID TimeUpdateControlPoint() const;
    GUID TimeUpdateState() const;
    GUID TimeWithDst() const;
    GUID TimeZone() const;
    GUID TxPowerLevel() const;
    GUID UnreadAlertStatus() const;
};

template <typename D>
struct WINRT_EBO impl_IGattCharacteristicsResult
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus Status() const;
    Windows::Foundation::IReference<uint8_t> ProtocolError() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> Characteristics() const;
};

template <typename D>
struct WINRT_EBO impl_IGattClientNotificationResult
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient SubscribedClient() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus Status() const;
    Windows::Foundation::IReference<uint8_t> ProtocolError() const;
};

template <typename D>
struct WINRT_EBO impl_IGattDescriptor
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel ProtectionLevel() const;
    void ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const;
    GUID Uuid() const;
    uint16_t AttributeHandle() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ReadValueAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> WriteValueAsync(const Windows::Storage::Streams::IBuffer & value) const;
};

template <typename D>
struct WINRT_EBO impl_IGattDescriptor2
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> WriteValueWithResultAsync(const Windows::Storage::Streams::IBuffer & value) const;
};

template <typename D>
struct WINRT_EBO impl_IGattDescriptorStatics
{
    [[deprecated("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")]] GUID ConvertShortIdToUuid(uint16_t shortId) const;
};

template <typename D>
struct WINRT_EBO impl_IGattDescriptorUuidsStatics
{
    GUID CharacteristicAggregateFormat() const;
    GUID CharacteristicExtendedProperties() const;
    GUID CharacteristicPresentationFormat() const;
    GUID CharacteristicUserDescription() const;
    GUID ClientCharacteristicConfiguration() const;
    GUID ServerCharacteristicConfiguration() const;
};

template <typename D>
struct WINRT_EBO impl_IGattDescriptorsResult
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus Status() const;
    Windows::Foundation::IReference<uint8_t> ProtocolError() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> Descriptors() const;
};

template <typename D>
struct WINRT_EBO impl_IGattDeviceService
{
    [[deprecated("Use GetCharacteristicsForUuidAsync instead of GetCharacteristics.  For more information, see MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> GetCharacteristics(GUID characteristicUuid) const;
    [[deprecated("Use GetIncludedServicesForUuidAsync instead of GetIncludedServices.  For more information, see MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> GetIncludedServices(GUID serviceUuid) const;
    hstring DeviceId() const;
    GUID Uuid() const;
    uint16_t AttributeHandle() const;
};

template <typename D>
struct WINRT_EBO impl_IGattDeviceService2
{
    [[deprecated("Use Session instead of Device property.  For more information, see MSDN.")]] Windows::Devices::Bluetooth::BluetoothLEDevice Device() const;
    [[deprecated("ParentServices may be altered or unavailable in future releases.  For more information, see MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ParentServices() const;
    [[deprecated("Use GetCharacteristicsAsync instead of GetAllCharacteristics.  For more information, see MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> GetAllCharacteristics() const;
    [[deprecated("Use GetIncludedServicesAsync instead of GetAllIncludedServices.  For more information, see MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> GetAllIncludedServices() const;
};

template <typename D>
struct WINRT_EBO impl_IGattDeviceService3
{
    Windows::Devices::Enumeration::DeviceAccessInformation DeviceAccessInformation() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession Session() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode SharingMode() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus> OpenAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> GetCharacteristicsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> GetCharacteristicsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> GetCharacteristicsForUuidAsync(GUID characteristicUuid) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> GetCharacteristicsForUuidAsync(GUID characteristicUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> GetIncludedServicesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> GetIncludedServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> GetIncludedServicesForUuidAsync(GUID serviceUuid) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> GetIncludedServicesForUuidAsync(GUID serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
};

template <typename D>
struct WINRT_EBO impl_IGattDeviceServiceStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> FromIdAsync(hstring_view deviceId) const;
    hstring GetDeviceSelectorFromUuid(GUID serviceUuid) const;
    [[deprecated("Use GetDeviceSelectorFromUuid instead of GetDeviceSelectorFromShortId.  For more information, see MSDN.")]] hstring GetDeviceSelectorFromShortId(uint16_t serviceShortId) const;
    [[deprecated("Use BluetoothUuidHelper instead of ConvertShortIdToUuid.  For more information, see MSDN.")]] GUID ConvertShortIdToUuid(uint16_t shortId) const;
};

template <typename D>
struct WINRT_EBO impl_IGattDeviceServiceStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> FromIdAsync(hstring_view deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode) const;
    hstring GetDeviceSelectorForBluetoothDeviceId(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId) const;
    hstring GetDeviceSelectorForBluetoothDeviceId(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
    hstring GetDeviceSelectorForBluetoothDeviceIdAndUuid(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, GUID serviceUuid) const;
    hstring GetDeviceSelectorForBluetoothDeviceIdAndUuid(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, GUID serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const;
};

template <typename D>
struct WINRT_EBO impl_IGattDeviceServicesResult
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus Status() const;
    Windows::Foundation::IReference<uint8_t> ProtocolError() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> Services() const;
};

template <typename D>
struct WINRT_EBO impl_IGattLocalCharacteristic
{
    GUID Uuid() const;
    Windows::Storage::Streams::IBuffer StaticValue() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties CharacteristicProperties() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel ReadProtectionLevel() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel WriteProtectionLevel() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> CreateDescriptorAsync(GUID descriptorUuid, const Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters & parameters) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> Descriptors() const;
    hstring UserDescription() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> PresentationFormats() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> SubscribedClients() const;
    event_token SubscribedClientsChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> & handler) const;
    using SubscribedClientsChanged_revoker = event_revoker<IGattLocalCharacteristic>;
    SubscribedClientsChanged_revoker SubscribedClientsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> & handler) const;
    void SubscribedClientsChanged(event_token token) const;
    event_token ReadRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> & handler) const;
    using ReadRequested_revoker = event_revoker<IGattLocalCharacteristic>;
    ReadRequested_revoker ReadRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> & handler) const;
    void ReadRequested(event_token token) const;
    event_token WriteRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> & handler) const;
    using WriteRequested_revoker = event_revoker<IGattLocalCharacteristic>;
    WriteRequested_revoker WriteRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> & handler) const;
    void WriteRequested(event_token token) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>> NotifyValueAsync(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> NotifyValueAsync(const Windows::Storage::Streams::IBuffer & value, const Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient & subscribedClient) const;
};

template <typename D>
struct WINRT_EBO impl_IGattLocalCharacteristicParameters
{
    void StaticValue(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Storage::Streams::IBuffer StaticValue() const;
    void CharacteristicProperties(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value) const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties CharacteristicProperties() const;
    void ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel ReadProtectionLevel() const;
    void WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel WriteProtectionLevel() const;
    void UserDescription(hstring_view value) const;
    hstring UserDescription() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> PresentationFormats() const;
};

template <typename D>
struct WINRT_EBO impl_IGattLocalCharacteristicResult
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic Characteristic() const;
    Windows::Devices::Bluetooth::BluetoothError Error() const;
};

template <typename D>
struct WINRT_EBO impl_IGattLocalDescriptor
{
    GUID Uuid() const;
    Windows::Storage::Streams::IBuffer StaticValue() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel ReadProtectionLevel() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel WriteProtectionLevel() const;
    event_token ReadRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> & handler) const;
    using ReadRequested_revoker = event_revoker<IGattLocalDescriptor>;
    ReadRequested_revoker ReadRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> & handler) const;
    void ReadRequested(event_token token) const;
    event_token WriteRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> & handler) const;
    using WriteRequested_revoker = event_revoker<IGattLocalDescriptor>;
    WriteRequested_revoker WriteRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> & handler) const;
    void WriteRequested(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IGattLocalDescriptorParameters
{
    void StaticValue(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Storage::Streams::IBuffer StaticValue() const;
    void ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel ReadProtectionLevel() const;
    void WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel WriteProtectionLevel() const;
};

template <typename D>
struct WINRT_EBO impl_IGattLocalDescriptorResult
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor Descriptor() const;
    Windows::Devices::Bluetooth::BluetoothError Error() const;
};

template <typename D>
struct WINRT_EBO impl_IGattLocalService
{
    GUID Uuid() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> CreateCharacteristicAsync(GUID characteristicUuid, const Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters & parameters) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> Characteristics() const;
};

template <typename D>
struct WINRT_EBO impl_IGattPresentationFormat
{
    uint8_t FormatType() const;
    int32_t Exponent() const;
    uint16_t Unit() const;
    uint8_t Namespace() const;
    uint16_t Description() const;
};

template <typename D>
struct WINRT_EBO impl_IGattPresentationFormatStatics
{
    uint8_t BluetoothSigAssignedNumbers() const;
};

template <typename D>
struct WINRT_EBO impl_IGattPresentationFormatStatics2
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description) const;
};

template <typename D>
struct WINRT_EBO impl_IGattPresentationFormatTypesStatics
{
    uint8_t Boolean() const;
    uint8_t Bit2() const;
    uint8_t Nibble() const;
    uint8_t UInt8() const;
    uint8_t UInt12() const;
    uint8_t UInt16() const;
    uint8_t UInt24() const;
    uint8_t UInt32() const;
    uint8_t UInt48() const;
    uint8_t UInt64() const;
    uint8_t UInt128() const;
    uint8_t SInt8() const;
    uint8_t SInt12() const;
    uint8_t SInt16() const;
    uint8_t SInt24() const;
    uint8_t SInt32() const;
    uint8_t SInt48() const;
    uint8_t SInt64() const;
    uint8_t SInt128() const;
    uint8_t Float32() const;
    uint8_t Float64() const;
    uint8_t SFloat() const;
    uint8_t Float() const;
    uint8_t DUInt16() const;
    uint8_t Utf8() const;
    uint8_t Utf16() const;
    uint8_t Struct() const;
};

template <typename D>
struct WINRT_EBO impl_IGattProtocolErrorStatics
{
    uint8_t InvalidHandle() const;
    uint8_t ReadNotPermitted() const;
    uint8_t WriteNotPermitted() const;
    uint8_t InvalidPdu() const;
    uint8_t InsufficientAuthentication() const;
    uint8_t RequestNotSupported() const;
    uint8_t InvalidOffset() const;
    uint8_t InsufficientAuthorization() const;
    uint8_t PrepareQueueFull() const;
    uint8_t AttributeNotFound() const;
    uint8_t AttributeNotLong() const;
    uint8_t InsufficientEncryptionKeySize() const;
    uint8_t InvalidAttributeValueLength() const;
    uint8_t UnlikelyError() const;
    uint8_t InsufficientEncryption() const;
    uint8_t UnsupportedGroupType() const;
    uint8_t InsufficientResources() const;
};

template <typename D>
struct WINRT_EBO impl_IGattReadClientCharacteristicConfigurationDescriptorResult
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus Status() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue ClientCharacteristicConfigurationDescriptor() const;
};

template <typename D>
struct WINRT_EBO impl_IGattReadClientCharacteristicConfigurationDescriptorResult2
{
    Windows::Foundation::IReference<uint8_t> ProtocolError() const;
};

template <typename D>
struct WINRT_EBO impl_IGattReadRequest
{
    uint32_t Offset() const;
    uint32_t Length() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState State() const;
    event_token StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> & handler) const;
    using StateChanged_revoker = event_revoker<IGattReadRequest>;
    StateChanged_revoker StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> & handler) const;
    void StateChanged(event_token token) const;
    void RespondWithValue(const Windows::Storage::Streams::IBuffer & value) const;
    void RespondWithProtocolError(uint8_t protocolError) const;
};

template <typename D>
struct WINRT_EBO impl_IGattReadRequestedEventArgs
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession Session() const;
    Windows::Foundation::Deferral GetDeferral() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> GetRequestAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IGattReadResult
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus Status() const;
    Windows::Storage::Streams::IBuffer Value() const;
};

template <typename D>
struct WINRT_EBO impl_IGattReadResult2
{
    Windows::Foundation::IReference<uint8_t> ProtocolError() const;
};

template <typename D>
struct WINRT_EBO impl_IGattReliableWriteTransaction
{
    void WriteValue(const Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic & characteristic, const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> CommitAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IGattReliableWriteTransaction2
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> CommitWithResultAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IGattRequestStateChangedEventArgs
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState State() const;
    Windows::Devices::Bluetooth::BluetoothError Error() const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceProvider
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService Service() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus AdvertisementStatus() const;
    event_token AdvertisementStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> & handler) const;
    using AdvertisementStatusChanged_revoker = event_revoker<IGattServiceProvider>;
    AdvertisementStatusChanged_revoker AdvertisementStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> & handler) const;
    void AdvertisementStatusChanged(event_token token) const;
    void StartAdvertising() const;
    void StartAdvertising(const Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters & parameters) const;
    void StopAdvertising() const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceProviderAdvertisementStatusChangedEventArgs
{
    Windows::Devices::Bluetooth::BluetoothError Error() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceProviderAdvertisingParameters
{
    void IsConnectable(bool value) const;
    bool IsConnectable() const;
    void IsDiscoverable(bool value) const;
    bool IsDiscoverable() const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceProviderResult
{
    Windows::Devices::Bluetooth::BluetoothError Error() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider ServiceProvider() const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceProviderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> CreateAsync(GUID serviceUuid) const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceUuidsStatics
{
    GUID Battery() const;
    GUID BloodPressure() const;
    GUID CyclingSpeedAndCadence() const;
    GUID GenericAccess() const;
    GUID GenericAttribute() const;
    GUID Glucose() const;
    GUID HealthThermometer() const;
    GUID HeartRate() const;
    GUID RunningSpeedAndCadence() const;
};

template <typename D>
struct WINRT_EBO impl_IGattServiceUuidsStatics2
{
    GUID AlertNotification() const;
    GUID CurrentTime() const;
    GUID CyclingPower() const;
    GUID DeviceInformation() const;
    GUID HumanInterfaceDevice() const;
    GUID ImmediateAlert() const;
    GUID LinkLoss() const;
    GUID LocationAndNavigation() const;
    GUID NextDstChange() const;
    GUID PhoneAlertStatus() const;
    GUID ReferenceTimeUpdate() const;
    GUID ScanParameters() const;
    GUID TxPower() const;
};

template <typename D>
struct WINRT_EBO impl_IGattSession
{
    Windows::Devices::Bluetooth::BluetoothDeviceId DeviceId() const;
    bool CanMaintainConnection() const;
    void MaintainConnection(bool value) const;
    bool MaintainConnection() const;
    uint16_t MaxPduSize() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus SessionStatus() const;
    event_token MaxPduSizeChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> & handler) const;
    using MaxPduSizeChanged_revoker = event_revoker<IGattSession>;
    MaxPduSizeChanged_revoker MaxPduSizeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> & handler) const;
    void MaxPduSizeChanged(event_token token) const;
    event_token SessionStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> & handler) const;
    using SessionStatusChanged_revoker = event_revoker<IGattSession>;
    SessionStatusChanged_revoker SessionStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> & handler) const;
    void SessionStatusChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IGattSessionStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> FromDeviceIdAsync(const Windows::Devices::Bluetooth::BluetoothDeviceId & deviceId) const;
};

template <typename D>
struct WINRT_EBO impl_IGattSessionStatusChangedEventArgs
{
    Windows::Devices::Bluetooth::BluetoothError Error() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus Status() const;
};

template <typename D>
struct WINRT_EBO impl_IGattSubscribedClient
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession Session() const;
    uint16_t MaxNotificationSize() const;
    event_token MaxNotificationSizeChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> & handler) const;
    using MaxNotificationSizeChanged_revoker = event_revoker<IGattSubscribedClient>;
    MaxNotificationSizeChanged_revoker MaxNotificationSizeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> & handler) const;
    void MaxNotificationSizeChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IGattValueChangedEventArgs
{
    Windows::Storage::Streams::IBuffer CharacteristicValue() const;
    Windows::Foundation::DateTime Timestamp() const;
};

template <typename D>
struct WINRT_EBO impl_IGattWriteRequest
{
    Windows::Storage::Streams::IBuffer Value() const;
    uint32_t Offset() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption Option() const;
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState State() const;
    event_token StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> & handler) const;
    using StateChanged_revoker = event_revoker<IGattWriteRequest>;
    StateChanged_revoker StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> & handler) const;
    void StateChanged(event_token token) const;
    void Respond() const;
    void RespondWithProtocolError(uint8_t protocolError) const;
};

template <typename D>
struct WINRT_EBO impl_IGattWriteRequestedEventArgs
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession Session() const;
    Windows::Foundation::Deferral GetDeferral() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> GetRequestAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IGattWriteResult
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus Status() const;
    Windows::Foundation::IReference<uint8_t> ProtocolError() const;
};

}

namespace impl {

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattCharacteristic<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattCharacteristic2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattCharacteristic3<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattCharacteristicStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattCharacteristicUuidsStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattCharacteristicUuidsStatics2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattCharacteristicsResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattClientNotificationResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDescriptor<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDescriptor2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDescriptorStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDescriptorUuidsStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDescriptorsResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDeviceService<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDeviceService2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDeviceService3<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDeviceServiceStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDeviceServiceStatics2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDeviceServicesResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattLocalCharacteristic<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattLocalCharacteristicParameters<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattLocalCharacteristicResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattLocalDescriptor<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattLocalDescriptorParameters<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattLocalDescriptorResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattLocalService<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattPresentationFormat<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattPresentationFormatStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattPresentationFormatStatics2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattPresentationFormatTypesStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattProtocolErrorStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReadClientCharacteristicConfigurationDescriptorResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReadClientCharacteristicConfigurationDescriptorResult2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReadRequest<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReadRequestedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReadResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReadResult2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReliableWriteTransaction<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReliableWriteTransaction2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattRequestStateChangedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattServiceProvider<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattServiceProviderAdvertisementStatusChangedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattServiceProviderAdvertisingParameters<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattServiceProviderResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattServiceProviderStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattServiceUuidsStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattServiceUuidsStatics2<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattSession<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattSessionStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattSessionStatusChangedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattSubscribedClient<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattValueChangedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattWriteRequest<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattWriteRequestedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattWriteResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristic"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristicUuids"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattCharacteristicsResult"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattClientNotificationResult"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptor"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptorUuids"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptorsResult"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceService"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceServicesResult"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalCharacteristic"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalCharacteristicParameters"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalCharacteristicResult"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalDescriptor"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalDescriptorParameters"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalDescriptorResult"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattLocalService"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattPresentationFormat"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattPresentationFormatTypes"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattProtocolError"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadClientCharacteristicConfigurationDescriptorResult"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadRequest"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadRequestedEventArgs"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadResult"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReliableWriteTransaction"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattRequestStateChangedEventArgs"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProvider"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderAdvertisementStatusChangedEventArgs"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderAdvertisingParameters"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceProviderResult"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceUuids"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSession"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSessionStatusChangedEventArgs"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattSubscribedClient"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattValueChangedEventArgs"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteRequest"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteRequestedEventArgs"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattWriteResult"; }
};

}

}
