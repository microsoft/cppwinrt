// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.0.h"
#include "Windows.Devices.Bluetooth.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Bluetooth::GenericAttributeProfile {

struct __declspec(uuid("59cb50c1-5934-4f68-a198-eb864fa44e6b")) __declspec(novtable) IGattCharacteristic : Windows::IInspectable
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

struct __declspec(uuid("ae1ab578-ec06-4764-b780-9835a1d35d6e")) __declspec(novtable) IGattCharacteristic2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Service(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService ** value) = 0;
    virtual HRESULT __stdcall abi_GetAllDescriptors(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> ** descriptors) = 0;
};

struct __declspec(uuid("59cb50c3-5934-4f68-a198-eb864fa44e6b")) __declspec(novtable) IGattCharacteristicStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * characteristicUuid) = 0;
};

struct __declspec(uuid("58fa4586-b1de-470c-b7de-0d11ff44f4b7")) __declspec(novtable) IGattCharacteristicUuidsStatics : Windows::IInspectable
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

struct __declspec(uuid("1855b425-d46e-4a2c-9c3f-ed6dea29e7be")) __declspec(novtable) IGattCharacteristicUuidsStatics2 : Windows::IInspectable
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

struct __declspec(uuid("92055f2b-8084-4344-b4c2-284de19a8506")) __declspec(novtable) IGattDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) = 0;
    virtual HRESULT __stdcall put_ProtectionLevel(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) = 0;
    virtual HRESULT __stdcall get_Uuid(GUID * value) = 0;
    virtual HRESULT __stdcall get_AttributeHandle(uint16_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadValueAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ** value) = 0;
    virtual HRESULT __stdcall abi_ReadValueWithCacheModeAsync(winrt::Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> ** value) = 0;
    virtual HRESULT __stdcall abi_WriteValueAsync(Windows::Storage::Streams::IBuffer * value, Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> ** action) = 0;
};

struct __declspec(uuid("92055f2d-8084-4344-b4c2-284de19a8506")) __declspec(novtable) IGattDescriptorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * descriptorUuid) = 0;
};

struct __declspec(uuid("a6f862ce-9cfc-42f1-9185-ff37b75181d3")) __declspec(novtable) IGattDescriptorUuidsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CharacteristicAggregateFormat(GUID * value) = 0;
    virtual HRESULT __stdcall get_CharacteristicExtendedProperties(GUID * value) = 0;
    virtual HRESULT __stdcall get_CharacteristicPresentationFormat(GUID * value) = 0;
    virtual HRESULT __stdcall get_CharacteristicUserDescription(GUID * value) = 0;
    virtual HRESULT __stdcall get_ClientCharacteristicConfiguration(GUID * value) = 0;
    virtual HRESULT __stdcall get_ServerCharacteristicConfiguration(GUID * value) = 0;
};

struct __declspec(uuid("ac7b7c05-b33c-47cf-990f-6b8f5577df71")) __declspec(novtable) IGattDeviceService : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetCharacteristics(GUID characteristicUuid, Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> ** value) = 0;
    virtual HRESULT __stdcall abi_GetIncludedServices(GUID serviceUuid, Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** value) = 0;
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Uuid(GUID * value) = 0;
    virtual HRESULT __stdcall get_AttributeHandle(uint16_t * value) = 0;
};

struct __declspec(uuid("fc54520b-0b0d-4708-bae0-9ffd9489bc59")) __declspec(novtable) IGattDeviceService2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Device(Windows::Devices::Bluetooth::IBluetoothLEDevice ** value) = 0;
    virtual HRESULT __stdcall get_ParentServices(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** value) = 0;
    virtual HRESULT __stdcall abi_GetAllCharacteristics(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> ** characteristics) = 0;
    virtual HRESULT __stdcall abi_GetAllIncludedServices(Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** includedServices) = 0;
};

struct __declspec(uuid("196d0022-faad-45dc-ae5b-2ac3184e84db")) __declspec(novtable) IGattDeviceServiceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> ** gattDeviceService) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorFromUuid(GUID serviceUuid, hstring * selector) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorFromShortId(uint16_t serviceShortId, hstring * selector) = 0;
    virtual HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * serviceUuid) = 0;
};

struct __declspec(uuid("196d0021-faad-45dc-ae5b-2ac3184e84db")) __declspec(novtable) IGattPresentationFormat : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FormatType(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Exponent(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Unit(uint16_t * value) = 0;
    virtual HRESULT __stdcall get_Namespace(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Description(uint16_t * value) = 0;
};

struct __declspec(uuid("196d0020-faad-45dc-ae5b-2ac3184e84db")) __declspec(novtable) IGattPresentationFormatStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BluetoothSigAssignedNumbers(uint8_t * value) = 0;
};

struct __declspec(uuid("faf1ba0a-30ba-409c-bef7-cffb6d03b8fb")) __declspec(novtable) IGattPresentationFormatTypesStatics : Windows::IInspectable
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

struct __declspec(uuid("63a66f09-1aea-4c4c-a50f-97bae474b348")) __declspec(novtable) IGattReadClientCharacteristicConfigurationDescriptorResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) = 0;
    virtual HRESULT __stdcall get_ClientCharacteristicConfigurationDescriptor(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue * value) = 0;
};

struct __declspec(uuid("63a66f08-1aea-4c4c-a50f-97bae474b348")) __declspec(novtable) IGattReadResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) = 0;
    virtual HRESULT __stdcall get_Value(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("63a66f07-1aea-4c4c-a50f-97bae474b348")) __declspec(novtable) IGattReliableWriteTransaction : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_WriteValue(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic * characteristic, Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall abi_CommitAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> ** asyncOp) = 0;
};

struct __declspec(uuid("6dc57058-9aba-4417-b8f2-dce016d34ee2")) __declspec(novtable) IGattServiceUuidsStatics : Windows::IInspectable
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

struct __declspec(uuid("d2ae94f5-3d15-4f79-9c0c-eaafa675155c")) __declspec(novtable) IGattServiceUuidsStatics2 : Windows::IInspectable
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

struct __declspec(uuid("d21bdb54-06e3-4ed8-a263-acfac8ba7313")) __declspec(novtable) IGattValueChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CharacteristicValue(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime * timestamp) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction; };
template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> { using default_interface = Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs; };

}

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

template <typename T> struct impl_IGattCharacteristic;
template <typename T> struct impl_IGattCharacteristic2;
template <typename T> struct impl_IGattCharacteristicStatics;
template <typename T> struct impl_IGattCharacteristicUuidsStatics;
template <typename T> struct impl_IGattCharacteristicUuidsStatics2;
template <typename T> struct impl_IGattDescriptor;
template <typename T> struct impl_IGattDescriptorStatics;
template <typename T> struct impl_IGattDescriptorUuidsStatics;
template <typename T> struct impl_IGattDeviceService;
template <typename T> struct impl_IGattDeviceService2;
template <typename T> struct impl_IGattDeviceServiceStatics;
template <typename T> struct impl_IGattPresentationFormat;
template <typename T> struct impl_IGattPresentationFormatStatics;
template <typename T> struct impl_IGattPresentationFormatTypesStatics;
template <typename T> struct impl_IGattReadClientCharacteristicConfigurationDescriptorResult;
template <typename T> struct impl_IGattReadResult;
template <typename T> struct impl_IGattReliableWriteTransaction;
template <typename T> struct impl_IGattServiceUuidsStatics;
template <typename T> struct impl_IGattServiceUuidsStatics2;
template <typename T> struct impl_IGattValueChangedEventArgs;

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

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDescriptor<D>;
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

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattDeviceServiceStatics<D>;
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

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattPresentationFormatTypesStatics<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReadClientCharacteristicConfigurationDescriptorResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReadResult<D>;
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattReliableWriteTransaction<D>;
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

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs;
    template <typename D> using consume = Windows::Devices::Bluetooth::GenericAttributeProfile::impl_IGattValueChangedEventArgs<D>;
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

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptor"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDescriptorUuids"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattDeviceService"; }
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

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattReadClientCharacteristicConfigurationDescriptorResult"; }
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

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattServiceUuids"; }
};

template <> struct traits<Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Bluetooth.GenericAttributeProfile.GattValueChangedEventArgs"; }
};

}

}
