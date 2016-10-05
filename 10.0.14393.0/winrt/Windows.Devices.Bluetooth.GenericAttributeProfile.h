// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Bluetooth.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Devices.Bluetooth.GenericAttributeProfile.3.h"
#include "Windows.Devices.Bluetooth.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
{
    HRESULT __stdcall abi_GetDescriptors(GUID descriptorUuid, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDescriptors(descriptorUuid));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacteristicProperties(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CharacteristicProperties());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) noexcept override
    {
        try
        {
            this->shim().ProtectionLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDescription(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uuid(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributeHandle(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttributeHandle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationFormats(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PresentationFormats());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadValueAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadValueAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadValueWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadValueAsync(cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteValueAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> value, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().WriteValueAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteValueWithOptionAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().WriteValueAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value), writeOption));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadClientCharacteristicConfigurationDescriptorAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().ReadClientCharacteristicConfigurationDescriptorAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteClientCharacteristicConfigurationDescriptorAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().WriteClientCharacteristicConfigurationDescriptorAsync(clientCharacteristicConfigurationDescriptorValue));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ValueChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>> valueChangedHandler, event_token * valueChangedEventCookie) noexcept override
    {
        try
        {
            *valueChangedEventCookie = detach(this->shim().ValueChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> *>(&valueChangedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueChanged(event_token valueChangedEventCookie) noexcept override
    {
        try
        {
            this->shim().ValueChanged(valueChangedEventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2>
{
    HRESULT __stdcall get_Service(abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Service());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAllDescriptors(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>> descriptors) noexcept override
    {
        try
        {
            *descriptors = detach(this->shim().GetAllDescriptors());
            return S_OK;
        }
        catch (...)
        {
            *descriptors = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
{
    HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * characteristicUuid) noexcept override
    {
        try
        {
            *characteristicUuid = detach(this->shim().ConvertShortIdToUuid(shortId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>
{
    HRESULT __stdcall get_BatteryLevel(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BatteryLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BloodPressureFeature(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BloodPressureFeature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BloodPressureMeasurement(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BloodPressureMeasurement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BodySensorLocation(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BodySensorLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CscFeature(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CscFeature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CscMeasurement(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CscMeasurement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GlucoseFeature(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GlucoseFeature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GlucoseMeasurement(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GlucoseMeasurement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GlucoseMeasurementContext(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GlucoseMeasurementContext());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeartRateControlPoint(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeartRateControlPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeartRateMeasurement(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeartRateMeasurement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IntermediateCuffPressure(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IntermediateCuffPressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IntermediateTemperature(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IntermediateTemperature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MeasurementInterval(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MeasurementInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordAccessControlPoint(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecordAccessControlPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RscFeature(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RscFeature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RscMeasurement(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RscMeasurement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SCControlPoint(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SCControlPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SensorLocation(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SensorLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TemperatureMeasurement(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TemperatureMeasurement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TemperatureType(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TemperatureType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>
{
    HRESULT __stdcall get_AlertCategoryId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlertCategoryId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlertCategoryIdBitMask(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlertCategoryIdBitMask());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlertLevel(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlertLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlertNotificationControlPoint(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlertNotificationControlPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlertStatus(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlertStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GapAppearance(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GapAppearance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BootKeyboardInputReport(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BootKeyboardInputReport());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BootKeyboardOutputReport(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BootKeyboardOutputReport());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BootMouseInputReport(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BootMouseInputReport());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentTime(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CyclingPowerControlPoint(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CyclingPowerControlPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CyclingPowerFeature(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CyclingPowerFeature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CyclingPowerMeasurement(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CyclingPowerMeasurement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CyclingPowerVector(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CyclingPowerVector());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateTime(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DayDateTime(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DayDateTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DayOfWeek(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DayOfWeek());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GapDeviceName(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GapDeviceName());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DstOffset(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DstOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExactTime256(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExactTime256());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirmwareRevisionString(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FirmwareRevisionString());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareRevisionString(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HardwareRevisionString());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HidControlPoint(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HidControlPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HidInformation(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HidInformation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ieee1107320601RegulatoryCertificationDataList(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ieee1107320601RegulatoryCertificationDataList());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LnControlPoint(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LnControlPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LnFeature(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LnFeature());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalTimeInformation(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalTimeInformation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocationAndSpeed(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocationAndSpeed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManufacturerNameString(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManufacturerNameString());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModelNumberString(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ModelNumberString());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Navigation(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Navigation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewAlert(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewAlert());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GapPeripheralPreferredConnectionParameters(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GapPeripheralPreferredConnectionParameters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GapPeripheralPrivacyFlag(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GapPeripheralPrivacyFlag());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PnpId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PnpId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionQuality(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PositionQuality());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolMode(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtocolMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GapReconnectionAddress(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GapReconnectionAddress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReferenceTimeInformation(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReferenceTimeInformation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Report(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Report());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReportMap(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReportMap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RingerControlPoint(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RingerControlPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RingerSetting(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RingerSetting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScanIntervalWindow(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScanIntervalWindow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScanRefresh(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScanRefresh());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SerialNumberString(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SerialNumberString());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GattServiceChanged(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GattServiceChanged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SoftwareRevisionString(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SoftwareRevisionString());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedNewAlertCategory(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedNewAlertCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportUnreadAlertCategory(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportUnreadAlertCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeAccuracy(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeAccuracy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeSource(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeUpdateControlPoint(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeUpdateControlPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeUpdateState(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeUpdateState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeWithDst(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeWithDst());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeZone(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeZone());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TxPowerLevel(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TxPowerLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnreadAlertStatus(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnreadAlertStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
{
    HRESULT __stdcall get_ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) noexcept override
    {
        try
        {
            this->shim().ProtectionLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uuid(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributeHandle(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttributeHandle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadValueAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadValueAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadValueWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadValueAsync(cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteValueAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> value, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> action) noexcept override
    {
        try
        {
            *action = detach(this->shim().WriteValueAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
{
    HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * descriptorUuid) noexcept override
    {
        try
        {
            *descriptorUuid = detach(this->shim().ConvertShortIdToUuid(shortId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>
{
    HRESULT __stdcall get_CharacteristicAggregateFormat(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CharacteristicAggregateFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacteristicExtendedProperties(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CharacteristicExtendedProperties());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacteristicPresentationFormat(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CharacteristicPresentationFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacteristicUserDescription(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CharacteristicUserDescription());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClientCharacteristicConfiguration(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClientCharacteristicConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCharacteristicConfiguration(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCharacteristicConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
{
    HRESULT __stdcall abi_GetCharacteristics(GUID characteristicUuid, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCharacteristics(characteristicUuid));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIncludedServices(GUID serviceUuid, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIncludedServices(serviceUuid));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uuid(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributeHandle(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttributeHandle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2>
{
    HRESULT __stdcall get_Device(abi_arg_out<Windows::Devices::Bluetooth::IBluetoothLEDevice> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentServices(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ParentServices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAllCharacteristics(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>> characteristics) noexcept override
    {
        try
        {
            *characteristics = detach(this->shim().GetAllCharacteristics());
            return S_OK;
        }
        catch (...)
        {
            *characteristics = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAllIncludedServices(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> includedServices) noexcept override
    {
        try
        {
            *includedServices = detach(this->shim().GetAllIncludedServices());
            return S_OK;
        }
        catch (...)
        {
            *includedServices = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
{
    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> gattDeviceService) noexcept override
    {
        try
        {
            *gattDeviceService = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *gattDeviceService = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromUuid(GUID serviceUuid, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(this->shim().GetDeviceSelectorFromUuid(serviceUuid));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromShortId(uint16_t serviceShortId, abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            *selector = detach(this->shim().GetDeviceSelectorFromShortId(serviceShortId));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * serviceUuid) noexcept override
    {
        try
        {
            *serviceUuid = detach(this->shim().ConvertShortIdToUuid(shortId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
{
    HRESULT __stdcall get_FormatType(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FormatType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Exponent(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Exponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Unit(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Namespace(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Namespace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
{
    HRESULT __stdcall get_BluetoothSigAssignedNumbers(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BluetoothSigAssignedNumbers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
{
    HRESULT __stdcall get_Boolean(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Boolean());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bit2(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bit2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Nibble(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Nibble());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UInt8(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UInt8());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UInt12(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UInt12());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UInt16(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UInt24(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UInt24());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UInt32(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UInt48(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UInt48());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UInt64(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UInt128(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UInt128());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SInt8(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SInt8());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SInt12(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SInt12());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SInt16(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SInt24(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SInt24());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SInt32(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SInt48(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SInt48());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SInt64(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SInt64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SInt128(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SInt128());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Float32(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Float32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Float64(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Float64());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SFloat(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SFloat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Float(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Float());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DUInt16(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DUInt16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Utf8(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Utf8());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Utf16(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Utf16());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Struct(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Struct());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
{
    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClientCharacteristicConfigurationDescriptor(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClientCharacteristicConfigurationDescriptor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
{
    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
{
    HRESULT __stdcall abi_WriteValue(abi_arg_in<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> characteristic, abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().WriteValue(*reinterpret_cast<const Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic *>(&characteristic), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CommitAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> asyncOp) noexcept override
    {
        try
        {
            *asyncOp = detach(this->shim().CommitAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
{
    HRESULT __stdcall get_Battery(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Battery());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BloodPressure(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BloodPressure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CyclingSpeedAndCadence(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CyclingSpeedAndCadence());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GenericAccess(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GenericAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GenericAttribute(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GenericAttribute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Glucose(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Glucose());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HealthThermometer(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HealthThermometer());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeartRate(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeartRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RunningSpeedAndCadence(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RunningSpeedAndCadence());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>
{
    HRESULT __stdcall get_AlertNotification(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlertNotification());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentTime(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CyclingPower(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CyclingPower());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceInformation(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HumanInterfaceDevice(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HumanInterfaceDevice());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImmediateAlert(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImmediateAlert());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinkLoss(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LinkLoss());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocationAndNavigation(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocationAndNavigation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NextDstChange(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NextDstChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneAlertStatus(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneAlertStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReferenceTimeUpdate(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReferenceTimeUpdate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScanParameters(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScanParameters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TxPower(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TxPower());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
{
    HRESULT __stdcall get_CharacteristicValue(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CharacteristicValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> timestamp) noexcept override
    {
        try
        {
            *timestamp = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceServiceStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> gattDeviceService;
    check_hresult(static_cast<const IGattDeviceServiceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(gattDeviceService)));
    return gattDeviceService;
}

template <typename D> hstring impl_IGattDeviceServiceStatics<D>::GetDeviceSelectorFromUuid(GUID serviceUuid) const
{
    hstring selector;
    check_hresult(static_cast<const IGattDeviceServiceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelectorFromUuid(serviceUuid, put(selector)));
    return selector;
}

template <typename D> hstring impl_IGattDeviceServiceStatics<D>::GetDeviceSelectorFromShortId(uint16_t serviceShortId) const
{
    hstring selector;
    check_hresult(static_cast<const IGattDeviceServiceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelectorFromShortId(serviceShortId, put(selector)));
    return selector;
}

template <typename D> GUID impl_IGattDeviceServiceStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
{
    GUID serviceUuid {};
    check_hresult(static_cast<const IGattDeviceServiceStatics &>(static_cast<const D &>(*this))->abi_ConvertShortIdToUuid(shortId, &serviceUuid));
    return serviceUuid;
}

template <typename D> GUID impl_IGattCharacteristicStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
{
    GUID characteristicUuid {};
    check_hresult(static_cast<const IGattCharacteristicStatics &>(static_cast<const D &>(*this))->abi_ConvertShortIdToUuid(shortId, &characteristicUuid));
    return characteristicUuid;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> impl_IGattCharacteristic<D>::GetDescriptors(GUID descriptorUuid) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> value;
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->abi_GetDescriptors(descriptorUuid, put(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties impl_IGattCharacteristic<D>::CharacteristicProperties() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value {};
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->get_CharacteristicProperties(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattCharacteristic<D>::ProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->get_ProtectionLevel(&value));
    return value;
}

template <typename D> void impl_IGattCharacteristic<D>::ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const
{
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->put_ProtectionLevel(value));
}

template <typename D> hstring impl_IGattCharacteristic<D>::UserDescription() const
{
    hstring value;
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->get_UserDescription(put(value)));
    return value;
}

template <typename D> GUID impl_IGattCharacteristic<D>::Uuid() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->get_Uuid(&value));
    return value;
}

template <typename D> uint16_t impl_IGattCharacteristic<D>::AttributeHandle() const
{
    uint16_t value {};
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->get_AttributeHandle(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> impl_IGattCharacteristic<D>::PresentationFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> value;
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->get_PresentationFormats(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> impl_IGattCharacteristic<D>::ReadValueAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value;
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->abi_ReadValueAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> impl_IGattCharacteristic<D>::ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value;
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->abi_ReadValueWithCacheModeAsync(cacheMode, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattCharacteristic<D>::WriteValueAsync(const Windows::Storage::Streams::IBuffer & value) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp;
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->abi_WriteValueAsync(get(value), put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattCharacteristic<D>::WriteValueAsync(const Windows::Storage::Streams::IBuffer & value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp;
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->abi_WriteValueWithOptionAsync(get(value), writeOption, put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> impl_IGattCharacteristic<D>::ReadClientCharacteristicConfigurationDescriptorAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> asyncOp;
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->abi_ReadClientCharacteristicConfigurationDescriptorAsync(put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattCharacteristic<D>::WriteClientCharacteristicConfigurationDescriptorAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp;
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->abi_WriteClientCharacteristicConfigurationDescriptorAsync(clientCharacteristicConfigurationDescriptorValue, put(asyncOp)));
    return asyncOp;
}

template <typename D> event_token impl_IGattCharacteristic<D>::ValueChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> & valueChangedHandler) const
{
    event_token valueChangedEventCookie {};
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->add_ValueChanged(get(valueChangedHandler), &valueChangedEventCookie));
    return valueChangedEventCookie;
}

template <typename D> event_revoker<IGattCharacteristic> impl_IGattCharacteristic<D>::ValueChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> & valueChangedHandler) const
{
    return impl::make_event_revoker<D, IGattCharacteristic>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic::remove_ValueChanged, ValueChanged(valueChangedHandler));
}

template <typename D> void impl_IGattCharacteristic<D>::ValueChanged(event_token valueChangedEventCookie) const
{
    check_hresult(static_cast<const IGattCharacteristic &>(static_cast<const D &>(*this))->remove_ValueChanged(valueChangedEventCookie));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService impl_IGattCharacteristic2<D>::Service() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService value { nullptr };
    check_hresult(static_cast<const IGattCharacteristic2 &>(static_cast<const D &>(*this))->get_Service(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> impl_IGattCharacteristic2<D>::GetAllDescriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> descriptors;
    check_hresult(static_cast<const IGattCharacteristic2 &>(static_cast<const D &>(*this))->abi_GetAllDescriptors(put(descriptors)));
    return descriptors;
}

template <typename D> GUID impl_IGattDescriptorStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
{
    GUID descriptorUuid {};
    check_hresult(static_cast<const IGattDescriptorStatics &>(static_cast<const D &>(*this))->abi_ConvertShortIdToUuid(shortId, &descriptorUuid));
    return descriptorUuid;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattDescriptor<D>::ProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(static_cast<const IGattDescriptor &>(static_cast<const D &>(*this))->get_ProtectionLevel(&value));
    return value;
}

template <typename D> void impl_IGattDescriptor<D>::ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const
{
    check_hresult(static_cast<const IGattDescriptor &>(static_cast<const D &>(*this))->put_ProtectionLevel(value));
}

template <typename D> GUID impl_IGattDescriptor<D>::Uuid() const
{
    GUID value {};
    check_hresult(static_cast<const IGattDescriptor &>(static_cast<const D &>(*this))->get_Uuid(&value));
    return value;
}

template <typename D> uint16_t impl_IGattDescriptor<D>::AttributeHandle() const
{
    uint16_t value {};
    check_hresult(static_cast<const IGattDescriptor &>(static_cast<const D &>(*this))->get_AttributeHandle(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> impl_IGattDescriptor<D>::ReadValueAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value;
    check_hresult(static_cast<const IGattDescriptor &>(static_cast<const D &>(*this))->abi_ReadValueAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> impl_IGattDescriptor<D>::ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value;
    check_hresult(static_cast<const IGattDescriptor &>(static_cast<const D &>(*this))->abi_ReadValueWithCacheModeAsync(cacheMode, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattDescriptor<D>::WriteValueAsync(const Windows::Storage::Streams::IBuffer & value) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> action;
    check_hresult(static_cast<const IGattDescriptor &>(static_cast<const D &>(*this))->abi_WriteValueAsync(get(value), put(action)));
    return action;
}

template <typename D> uint8_t impl_IGattPresentationFormatStatics<D>::BluetoothSigAssignedNumbers() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatStatics &>(static_cast<const D &>(*this))->get_BluetoothSigAssignedNumbers(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Boolean() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_Boolean(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Bit2() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_Bit2(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Nibble() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_Nibble(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt8() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_UInt8(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt12() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_UInt12(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt16() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_UInt16(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt24() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_UInt24(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt32() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_UInt32(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt48() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_UInt48(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt64() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_UInt64(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt128() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_UInt128(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt8() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_SInt8(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt12() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_SInt12(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt16() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_SInt16(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt24() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_SInt24(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt32() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_SInt32(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt48() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_SInt48(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt64() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_SInt64(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt128() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_SInt128(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Float32() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_Float32(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Float64() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_Float64(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SFloat() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_SFloat(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Float() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_Float(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::DUInt16() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_DUInt16(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Utf8() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_Utf8(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Utf16() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_Utf16(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Struct() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormatTypesStatics &>(static_cast<const D &>(*this))->get_Struct(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormat<D>::FormatType() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormat &>(static_cast<const D &>(*this))->get_FormatType(&value));
    return value;
}

template <typename D> int32_t impl_IGattPresentationFormat<D>::Exponent() const
{
    int32_t value {};
    check_hresult(static_cast<const IGattPresentationFormat &>(static_cast<const D &>(*this))->get_Exponent(&value));
    return value;
}

template <typename D> uint16_t impl_IGattPresentationFormat<D>::Unit() const
{
    uint16_t value {};
    check_hresult(static_cast<const IGattPresentationFormat &>(static_cast<const D &>(*this))->get_Unit(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormat<D>::Namespace() const
{
    uint8_t value {};
    check_hresult(static_cast<const IGattPresentationFormat &>(static_cast<const D &>(*this))->get_Namespace(&value));
    return value;
}

template <typename D> uint16_t impl_IGattPresentationFormat<D>::Description() const
{
    uint16_t value {};
    check_hresult(static_cast<const IGattPresentationFormat &>(static_cast<const D &>(*this))->get_Description(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattValueChangedEventArgs<D>::CharacteristicValue() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IGattValueChangedEventArgs &>(static_cast<const D &>(*this))->get_CharacteristicValue(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IGattValueChangedEventArgs<D>::Timestamp() const
{
    Windows::Foundation::DateTime timestamp {};
    check_hresult(static_cast<const IGattValueChangedEventArgs &>(static_cast<const D &>(*this))->get_Timestamp(put(timestamp)));
    return timestamp;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::Battery() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics &>(static_cast<const D &>(*this))->get_Battery(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::BloodPressure() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics &>(static_cast<const D &>(*this))->get_BloodPressure(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::CyclingSpeedAndCadence() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics &>(static_cast<const D &>(*this))->get_CyclingSpeedAndCadence(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::GenericAccess() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics &>(static_cast<const D &>(*this))->get_GenericAccess(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::GenericAttribute() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics &>(static_cast<const D &>(*this))->get_GenericAttribute(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::Glucose() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics &>(static_cast<const D &>(*this))->get_Glucose(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::HealthThermometer() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics &>(static_cast<const D &>(*this))->get_HealthThermometer(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::HeartRate() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics &>(static_cast<const D &>(*this))->get_HeartRate(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::RunningSpeedAndCadence() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics &>(static_cast<const D &>(*this))->get_RunningSpeedAndCadence(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::AlertNotification() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_AlertNotification(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::CurrentTime() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_CurrentTime(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::CyclingPower() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_CyclingPower(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::DeviceInformation() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_DeviceInformation(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::HumanInterfaceDevice() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_HumanInterfaceDevice(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::ImmediateAlert() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_ImmediateAlert(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::LinkLoss() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_LinkLoss(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::LocationAndNavigation() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_LocationAndNavigation(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::NextDstChange() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_NextDstChange(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::PhoneAlertStatus() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_PhoneAlertStatus(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::ReferenceTimeUpdate() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_ReferenceTimeUpdate(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::ScanParameters() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_ScanParameters(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::TxPower() const
{
    GUID value {};
    check_hresult(static_cast<const IGattServiceUuidsStatics2 &>(static_cast<const D &>(*this))->get_TxPower(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::BatteryLevel() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_BatteryLevel(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::BloodPressureFeature() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_BloodPressureFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::BloodPressureMeasurement() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_BloodPressureMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::BodySensorLocation() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_BodySensorLocation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::CscFeature() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_CscFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::CscMeasurement() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_CscMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::GlucoseFeature() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_GlucoseFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::GlucoseMeasurement() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_GlucoseMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::GlucoseMeasurementContext() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_GlucoseMeasurementContext(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::HeartRateControlPoint() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_HeartRateControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::HeartRateMeasurement() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_HeartRateMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::IntermediateCuffPressure() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_IntermediateCuffPressure(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::IntermediateTemperature() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_IntermediateTemperature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::MeasurementInterval() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_MeasurementInterval(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::RecordAccessControlPoint() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_RecordAccessControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::RscFeature() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_RscFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::RscMeasurement() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_RscMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::SCControlPoint() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_SCControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::SensorLocation() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_SensorLocation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::TemperatureMeasurement() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_TemperatureMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::TemperatureType() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics &>(static_cast<const D &>(*this))->get_TemperatureType(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertCategoryId() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_AlertCategoryId(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertCategoryIdBitMask() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_AlertCategoryIdBitMask(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertLevel() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_AlertLevel(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertNotificationControlPoint() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_AlertNotificationControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertStatus() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_AlertStatus(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapAppearance() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_GapAppearance(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::BootKeyboardInputReport() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_BootKeyboardInputReport(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::BootKeyboardOutputReport() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_BootKeyboardOutputReport(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::BootMouseInputReport() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_BootMouseInputReport(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CurrentTime() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_CurrentTime(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CyclingPowerControlPoint() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_CyclingPowerControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CyclingPowerFeature() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_CyclingPowerFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CyclingPowerMeasurement() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_CyclingPowerMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CyclingPowerVector() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_CyclingPowerVector(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::DateTime() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_DateTime(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::DayDateTime() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_DayDateTime(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::DayOfWeek() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_DayOfWeek(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapDeviceName() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_GapDeviceName(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::DstOffset() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_DstOffset(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ExactTime256() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_ExactTime256(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::FirmwareRevisionString() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_FirmwareRevisionString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::HardwareRevisionString() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_HardwareRevisionString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::HidControlPoint() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_HidControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::HidInformation() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_HidInformation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::Ieee1107320601RegulatoryCertificationDataList() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_Ieee1107320601RegulatoryCertificationDataList(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::LnControlPoint() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_LnControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::LnFeature() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_LnFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::LocalTimeInformation() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_LocalTimeInformation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::LocationAndSpeed() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_LocationAndSpeed(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ManufacturerNameString() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_ManufacturerNameString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ModelNumberString() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_ModelNumberString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::Navigation() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_Navigation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::NewAlert() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_NewAlert(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapPeripheralPreferredConnectionParameters() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_GapPeripheralPreferredConnectionParameters(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapPeripheralPrivacyFlag() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_GapPeripheralPrivacyFlag(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::PnpId() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_PnpId(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::PositionQuality() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_PositionQuality(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ProtocolMode() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_ProtocolMode(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapReconnectionAddress() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_GapReconnectionAddress(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ReferenceTimeInformation() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_ReferenceTimeInformation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::Report() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_Report(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ReportMap() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_ReportMap(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::RingerControlPoint() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_RingerControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::RingerSetting() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_RingerSetting(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ScanIntervalWindow() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_ScanIntervalWindow(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ScanRefresh() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_ScanRefresh(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SerialNumberString() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_SerialNumberString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GattServiceChanged() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_GattServiceChanged(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SoftwareRevisionString() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_SoftwareRevisionString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SupportedNewAlertCategory() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_SupportedNewAlertCategory(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SupportUnreadAlertCategory() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_SupportUnreadAlertCategory(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SystemId() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_SystemId(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeAccuracy() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_TimeAccuracy(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeSource() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_TimeSource(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeUpdateControlPoint() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_TimeUpdateControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeUpdateState() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_TimeUpdateState(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeWithDst() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_TimeWithDst(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeZone() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_TimeZone(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TxPowerLevel() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_TxPowerLevel(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::UnreadAlertStatus() const
{
    GUID value {};
    check_hresult(static_cast<const IGattCharacteristicUuidsStatics2 &>(static_cast<const D &>(*this))->get_UnreadAlertStatus(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::CharacteristicAggregateFormat() const
{
    GUID value {};
    check_hresult(static_cast<const IGattDescriptorUuidsStatics &>(static_cast<const D &>(*this))->get_CharacteristicAggregateFormat(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::CharacteristicExtendedProperties() const
{
    GUID value {};
    check_hresult(static_cast<const IGattDescriptorUuidsStatics &>(static_cast<const D &>(*this))->get_CharacteristicExtendedProperties(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::CharacteristicPresentationFormat() const
{
    GUID value {};
    check_hresult(static_cast<const IGattDescriptorUuidsStatics &>(static_cast<const D &>(*this))->get_CharacteristicPresentationFormat(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::CharacteristicUserDescription() const
{
    GUID value {};
    check_hresult(static_cast<const IGattDescriptorUuidsStatics &>(static_cast<const D &>(*this))->get_CharacteristicUserDescription(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::ClientCharacteristicConfiguration() const
{
    GUID value {};
    check_hresult(static_cast<const IGattDescriptorUuidsStatics &>(static_cast<const D &>(*this))->get_ClientCharacteristicConfiguration(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::ServerCharacteristicConfiguration() const
{
    GUID value {};
    check_hresult(static_cast<const IGattDescriptorUuidsStatics &>(static_cast<const D &>(*this))->get_ServerCharacteristicConfiguration(&value));
    return value;
}

template <typename D> void impl_IGattReliableWriteTransaction<D>::WriteValue(const Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic & characteristic, const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IGattReliableWriteTransaction &>(static_cast<const D &>(*this))->abi_WriteValue(get(characteristic), get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattReliableWriteTransaction<D>::CommitAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp;
    check_hresult(static_cast<const IGattReliableWriteTransaction &>(static_cast<const D &>(*this))->abi_CommitAsync(put(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus impl_IGattReadResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value {};
    check_hresult(static_cast<const IGattReadResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattReadResult<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IGattReadResult &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus impl_IGattReadClientCharacteristicConfigurationDescriptorResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value {};
    check_hresult(static_cast<const IGattReadClientCharacteristicConfigurationDescriptorResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue impl_IGattReadClientCharacteristicConfigurationDescriptorResult<D>::ClientCharacteristicConfigurationDescriptor() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue value {};
    check_hresult(static_cast<const IGattReadClientCharacteristicConfigurationDescriptorResult &>(static_cast<const D &>(*this))->get_ClientCharacteristicConfigurationDescriptor(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> impl_IGattDeviceService<D>::GetCharacteristics(GUID characteristicUuid) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> value;
    check_hresult(static_cast<const IGattDeviceService &>(static_cast<const D &>(*this))->abi_GetCharacteristics(characteristicUuid, put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceService<D>::GetIncludedServices(GUID serviceUuid) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> value;
    check_hresult(static_cast<const IGattDeviceService &>(static_cast<const D &>(*this))->abi_GetIncludedServices(serviceUuid, put(value)));
    return value;
}

template <typename D> hstring impl_IGattDeviceService<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IGattDeviceService &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> GUID impl_IGattDeviceService<D>::Uuid() const
{
    GUID value {};
    check_hresult(static_cast<const IGattDeviceService &>(static_cast<const D &>(*this))->get_Uuid(&value));
    return value;
}

template <typename D> uint16_t impl_IGattDeviceService<D>::AttributeHandle() const
{
    uint16_t value {};
    check_hresult(static_cast<const IGattDeviceService &>(static_cast<const D &>(*this))->get_AttributeHandle(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothLEDevice impl_IGattDeviceService2<D>::Device() const
{
    Windows::Devices::Bluetooth::BluetoothLEDevice value { nullptr };
    check_hresult(static_cast<const IGattDeviceService2 &>(static_cast<const D &>(*this))->get_Device(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceService2<D>::ParentServices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> value;
    check_hresult(static_cast<const IGattDeviceService2 &>(static_cast<const D &>(*this))->get_ParentServices(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> impl_IGattDeviceService2<D>::GetAllCharacteristics() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> characteristics;
    check_hresult(static_cast<const IGattDeviceService2 &>(static_cast<const D &>(*this))->abi_GetAllCharacteristics(put(characteristics)));
    return characteristics;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceService2<D>::GetAllIncludedServices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> includedServices;
    check_hresult(static_cast<const IGattDeviceService2 &>(static_cast<const D &>(*this))->abi_GetAllIncludedServices(put(includedServices)));
    return includedServices;
}

inline GUID GattCharacteristic::ConvertShortIdToUuid(uint16_t shortId)
{
    return get_activation_factory<GattCharacteristic, IGattCharacteristicStatics>().ConvertShortIdToUuid(shortId);
}

inline GUID GattCharacteristicUuids::BatteryLevel()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().BatteryLevel();
}

inline GUID GattCharacteristicUuids::BloodPressureFeature()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().BloodPressureFeature();
}

inline GUID GattCharacteristicUuids::BloodPressureMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().BloodPressureMeasurement();
}

inline GUID GattCharacteristicUuids::BodySensorLocation()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().BodySensorLocation();
}

inline GUID GattCharacteristicUuids::CscFeature()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().CscFeature();
}

inline GUID GattCharacteristicUuids::CscMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().CscMeasurement();
}

inline GUID GattCharacteristicUuids::GlucoseFeature()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().GlucoseFeature();
}

inline GUID GattCharacteristicUuids::GlucoseMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().GlucoseMeasurement();
}

inline GUID GattCharacteristicUuids::GlucoseMeasurementContext()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().GlucoseMeasurementContext();
}

inline GUID GattCharacteristicUuids::HeartRateControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().HeartRateControlPoint();
}

inline GUID GattCharacteristicUuids::HeartRateMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().HeartRateMeasurement();
}

inline GUID GattCharacteristicUuids::IntermediateCuffPressure()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().IntermediateCuffPressure();
}

inline GUID GattCharacteristicUuids::IntermediateTemperature()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().IntermediateTemperature();
}

inline GUID GattCharacteristicUuids::MeasurementInterval()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().MeasurementInterval();
}

inline GUID GattCharacteristicUuids::RecordAccessControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().RecordAccessControlPoint();
}

inline GUID GattCharacteristicUuids::RscFeature()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().RscFeature();
}

inline GUID GattCharacteristicUuids::RscMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().RscMeasurement();
}

inline GUID GattCharacteristicUuids::SCControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().SCControlPoint();
}

inline GUID GattCharacteristicUuids::SensorLocation()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().SensorLocation();
}

inline GUID GattCharacteristicUuids::TemperatureMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().TemperatureMeasurement();
}

inline GUID GattCharacteristicUuids::TemperatureType()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics>().TemperatureType();
}

inline GUID GattCharacteristicUuids::AlertCategoryId()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().AlertCategoryId();
}

inline GUID GattCharacteristicUuids::AlertCategoryIdBitMask()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().AlertCategoryIdBitMask();
}

inline GUID GattCharacteristicUuids::AlertLevel()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().AlertLevel();
}

inline GUID GattCharacteristicUuids::AlertNotificationControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().AlertNotificationControlPoint();
}

inline GUID GattCharacteristicUuids::AlertStatus()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().AlertStatus();
}

inline GUID GattCharacteristicUuids::GapAppearance()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().GapAppearance();
}

inline GUID GattCharacteristicUuids::BootKeyboardInputReport()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().BootKeyboardInputReport();
}

inline GUID GattCharacteristicUuids::BootKeyboardOutputReport()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().BootKeyboardOutputReport();
}

inline GUID GattCharacteristicUuids::BootMouseInputReport()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().BootMouseInputReport();
}

inline GUID GattCharacteristicUuids::CurrentTime()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().CurrentTime();
}

inline GUID GattCharacteristicUuids::CyclingPowerControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().CyclingPowerControlPoint();
}

inline GUID GattCharacteristicUuids::CyclingPowerFeature()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().CyclingPowerFeature();
}

inline GUID GattCharacteristicUuids::CyclingPowerMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().CyclingPowerMeasurement();
}

inline GUID GattCharacteristicUuids::CyclingPowerVector()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().CyclingPowerVector();
}

inline GUID GattCharacteristicUuids::DateTime()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().DateTime();
}

inline GUID GattCharacteristicUuids::DayDateTime()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().DayDateTime();
}

inline GUID GattCharacteristicUuids::DayOfWeek()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().DayOfWeek();
}

inline GUID GattCharacteristicUuids::GapDeviceName()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().GapDeviceName();
}

inline GUID GattCharacteristicUuids::DstOffset()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().DstOffset();
}

inline GUID GattCharacteristicUuids::ExactTime256()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().ExactTime256();
}

inline GUID GattCharacteristicUuids::FirmwareRevisionString()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().FirmwareRevisionString();
}

inline GUID GattCharacteristicUuids::HardwareRevisionString()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().HardwareRevisionString();
}

inline GUID GattCharacteristicUuids::HidControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().HidControlPoint();
}

inline GUID GattCharacteristicUuids::HidInformation()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().HidInformation();
}

inline GUID GattCharacteristicUuids::Ieee1107320601RegulatoryCertificationDataList()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().Ieee1107320601RegulatoryCertificationDataList();
}

inline GUID GattCharacteristicUuids::LnControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().LnControlPoint();
}

inline GUID GattCharacteristicUuids::LnFeature()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().LnFeature();
}

inline GUID GattCharacteristicUuids::LocalTimeInformation()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().LocalTimeInformation();
}

inline GUID GattCharacteristicUuids::LocationAndSpeed()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().LocationAndSpeed();
}

inline GUID GattCharacteristicUuids::ManufacturerNameString()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().ManufacturerNameString();
}

inline GUID GattCharacteristicUuids::ModelNumberString()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().ModelNumberString();
}

inline GUID GattCharacteristicUuids::Navigation()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().Navigation();
}

inline GUID GattCharacteristicUuids::NewAlert()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().NewAlert();
}

inline GUID GattCharacteristicUuids::GapPeripheralPreferredConnectionParameters()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().GapPeripheralPreferredConnectionParameters();
}

inline GUID GattCharacteristicUuids::GapPeripheralPrivacyFlag()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().GapPeripheralPrivacyFlag();
}

inline GUID GattCharacteristicUuids::PnpId()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().PnpId();
}

inline GUID GattCharacteristicUuids::PositionQuality()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().PositionQuality();
}

inline GUID GattCharacteristicUuids::ProtocolMode()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().ProtocolMode();
}

inline GUID GattCharacteristicUuids::GapReconnectionAddress()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().GapReconnectionAddress();
}

inline GUID GattCharacteristicUuids::ReferenceTimeInformation()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().ReferenceTimeInformation();
}

inline GUID GattCharacteristicUuids::Report()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().Report();
}

inline GUID GattCharacteristicUuids::ReportMap()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().ReportMap();
}

inline GUID GattCharacteristicUuids::RingerControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().RingerControlPoint();
}

inline GUID GattCharacteristicUuids::RingerSetting()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().RingerSetting();
}

inline GUID GattCharacteristicUuids::ScanIntervalWindow()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().ScanIntervalWindow();
}

inline GUID GattCharacteristicUuids::ScanRefresh()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().ScanRefresh();
}

inline GUID GattCharacteristicUuids::SerialNumberString()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().SerialNumberString();
}

inline GUID GattCharacteristicUuids::GattServiceChanged()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().GattServiceChanged();
}

inline GUID GattCharacteristicUuids::SoftwareRevisionString()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().SoftwareRevisionString();
}

inline GUID GattCharacteristicUuids::SupportedNewAlertCategory()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().SupportedNewAlertCategory();
}

inline GUID GattCharacteristicUuids::SupportUnreadAlertCategory()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().SupportUnreadAlertCategory();
}

inline GUID GattCharacteristicUuids::SystemId()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().SystemId();
}

inline GUID GattCharacteristicUuids::TimeAccuracy()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().TimeAccuracy();
}

inline GUID GattCharacteristicUuids::TimeSource()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().TimeSource();
}

inline GUID GattCharacteristicUuids::TimeUpdateControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().TimeUpdateControlPoint();
}

inline GUID GattCharacteristicUuids::TimeUpdateState()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().TimeUpdateState();
}

inline GUID GattCharacteristicUuids::TimeWithDst()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().TimeWithDst();
}

inline GUID GattCharacteristicUuids::TimeZone()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().TimeZone();
}

inline GUID GattCharacteristicUuids::TxPowerLevel()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().TxPowerLevel();
}

inline GUID GattCharacteristicUuids::UnreadAlertStatus()
{
    return get_activation_factory<GattCharacteristicUuids, IGattCharacteristicUuidsStatics2>().UnreadAlertStatus();
}

inline GUID GattDescriptor::ConvertShortIdToUuid(uint16_t shortId)
{
    return get_activation_factory<GattDescriptor, IGattDescriptorStatics>().ConvertShortIdToUuid(shortId);
}

inline GUID GattDescriptorUuids::CharacteristicAggregateFormat()
{
    return get_activation_factory<GattDescriptorUuids, IGattDescriptorUuidsStatics>().CharacteristicAggregateFormat();
}

inline GUID GattDescriptorUuids::CharacteristicExtendedProperties()
{
    return get_activation_factory<GattDescriptorUuids, IGattDescriptorUuidsStatics>().CharacteristicExtendedProperties();
}

inline GUID GattDescriptorUuids::CharacteristicPresentationFormat()
{
    return get_activation_factory<GattDescriptorUuids, IGattDescriptorUuidsStatics>().CharacteristicPresentationFormat();
}

inline GUID GattDescriptorUuids::CharacteristicUserDescription()
{
    return get_activation_factory<GattDescriptorUuids, IGattDescriptorUuidsStatics>().CharacteristicUserDescription();
}

inline GUID GattDescriptorUuids::ClientCharacteristicConfiguration()
{
    return get_activation_factory<GattDescriptorUuids, IGattDescriptorUuidsStatics>().ClientCharacteristicConfiguration();
}

inline GUID GattDescriptorUuids::ServerCharacteristicConfiguration()
{
    return get_activation_factory<GattDescriptorUuids, IGattDescriptorUuidsStatics>().ServerCharacteristicConfiguration();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> GattDeviceService::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<GattDeviceService, IGattDeviceServiceStatics>().FromIdAsync(deviceId);
}

inline hstring GattDeviceService::GetDeviceSelectorFromUuid(GUID serviceUuid)
{
    return get_activation_factory<GattDeviceService, IGattDeviceServiceStatics>().GetDeviceSelectorFromUuid(serviceUuid);
}

inline hstring GattDeviceService::GetDeviceSelectorFromShortId(uint16_t serviceShortId)
{
    return get_activation_factory<GattDeviceService, IGattDeviceServiceStatics>().GetDeviceSelectorFromShortId(serviceShortId);
}

inline GUID GattDeviceService::ConvertShortIdToUuid(uint16_t shortId)
{
    return get_activation_factory<GattDeviceService, IGattDeviceServiceStatics>().ConvertShortIdToUuid(shortId);
}

inline uint8_t GattPresentationFormat::BluetoothSigAssignedNumbers()
{
    return get_activation_factory<GattPresentationFormat, IGattPresentationFormatStatics>().BluetoothSigAssignedNumbers();
}

inline uint8_t GattPresentationFormatTypes::Boolean()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().Boolean();
}

inline uint8_t GattPresentationFormatTypes::Bit2()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().Bit2();
}

inline uint8_t GattPresentationFormatTypes::Nibble()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().Nibble();
}

inline uint8_t GattPresentationFormatTypes::UInt8()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().UInt8();
}

inline uint8_t GattPresentationFormatTypes::UInt12()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().UInt12();
}

inline uint8_t GattPresentationFormatTypes::UInt16()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().UInt16();
}

inline uint8_t GattPresentationFormatTypes::UInt24()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().UInt24();
}

inline uint8_t GattPresentationFormatTypes::UInt32()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().UInt32();
}

inline uint8_t GattPresentationFormatTypes::UInt48()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().UInt48();
}

inline uint8_t GattPresentationFormatTypes::UInt64()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().UInt64();
}

inline uint8_t GattPresentationFormatTypes::UInt128()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().UInt128();
}

inline uint8_t GattPresentationFormatTypes::SInt8()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().SInt8();
}

inline uint8_t GattPresentationFormatTypes::SInt12()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().SInt12();
}

inline uint8_t GattPresentationFormatTypes::SInt16()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().SInt16();
}

inline uint8_t GattPresentationFormatTypes::SInt24()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().SInt24();
}

inline uint8_t GattPresentationFormatTypes::SInt32()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().SInt32();
}

inline uint8_t GattPresentationFormatTypes::SInt48()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().SInt48();
}

inline uint8_t GattPresentationFormatTypes::SInt64()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().SInt64();
}

inline uint8_t GattPresentationFormatTypes::SInt128()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().SInt128();
}

inline uint8_t GattPresentationFormatTypes::Float32()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().Float32();
}

inline uint8_t GattPresentationFormatTypes::Float64()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().Float64();
}

inline uint8_t GattPresentationFormatTypes::SFloat()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().SFloat();
}

inline uint8_t GattPresentationFormatTypes::Float()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().Float();
}

inline uint8_t GattPresentationFormatTypes::DUInt16()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().DUInt16();
}

inline uint8_t GattPresentationFormatTypes::Utf8()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().Utf8();
}

inline uint8_t GattPresentationFormatTypes::Utf16()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().Utf16();
}

inline uint8_t GattPresentationFormatTypes::Struct()
{
    return get_activation_factory<GattPresentationFormatTypes, IGattPresentationFormatTypesStatics>().Struct();
}

inline GattReliableWriteTransaction::GattReliableWriteTransaction() :
    GattReliableWriteTransaction(activate_instance<GattReliableWriteTransaction>())
{}

inline GUID GattServiceUuids::Battery()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics>().Battery();
}

inline GUID GattServiceUuids::BloodPressure()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics>().BloodPressure();
}

inline GUID GattServiceUuids::CyclingSpeedAndCadence()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics>().CyclingSpeedAndCadence();
}

inline GUID GattServiceUuids::GenericAccess()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics>().GenericAccess();
}

inline GUID GattServiceUuids::GenericAttribute()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics>().GenericAttribute();
}

inline GUID GattServiceUuids::Glucose()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics>().Glucose();
}

inline GUID GattServiceUuids::HealthThermometer()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics>().HealthThermometer();
}

inline GUID GattServiceUuids::HeartRate()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics>().HeartRate();
}

inline GUID GattServiceUuids::RunningSpeedAndCadence()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics>().RunningSpeedAndCadence();
}

inline GUID GattServiceUuids::AlertNotification()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().AlertNotification();
}

inline GUID GattServiceUuids::CurrentTime()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().CurrentTime();
}

inline GUID GattServiceUuids::CyclingPower()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().CyclingPower();
}

inline GUID GattServiceUuids::DeviceInformation()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().DeviceInformation();
}

inline GUID GattServiceUuids::HumanInterfaceDevice()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().HumanInterfaceDevice();
}

inline GUID GattServiceUuids::ImmediateAlert()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().ImmediateAlert();
}

inline GUID GattServiceUuids::LinkLoss()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().LinkLoss();
}

inline GUID GattServiceUuids::LocationAndNavigation()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().LocationAndNavigation();
}

inline GUID GattServiceUuids::NextDstChange()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().NextDstChange();
}

inline GUID GattServiceUuids::PhoneAlertStatus()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().PhoneAlertStatus();
}

inline GUID GattServiceUuids::ReferenceTimeUpdate()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().ReferenceTimeUpdate();
}

inline GUID GattServiceUuids::ScanParameters()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().ScanParameters();
}

inline GUID GattServiceUuids::TxPower()
{
    return get_activation_factory<GattServiceUuids, IGattServiceUuidsStatics2>().TxPower();
}

}

}
