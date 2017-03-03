// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Devices.Bluetooth.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Devices.Bluetooth.GenericAttributeProfile.3.h"
#include "Windows.Devices.Bluetooth.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
{
    HRESULT __stdcall abi_GetDescriptors(GUID descriptorUuid, impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDescriptors(descriptorUuid));
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacteristicProperties());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtectionLevel());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDescription(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserDescription());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uuid());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttributeHandle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationFormats(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PresentationFormats());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadValueAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadValueAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadValueWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadValueAsync(cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteValueAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().WriteValueAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteValueWithOptionAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().WriteValueAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value), writeOption));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadClientCharacteristicConfigurationDescriptorAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>> asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().ReadClientCharacteristicConfigurationDescriptorAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteClientCharacteristicConfigurationDescriptorAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().WriteClientCharacteristicConfigurationDescriptorAsync(clientCharacteristicConfigurationDescriptorValue));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ValueChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>> valueChangedHandler, event_token * valueChangedEventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *valueChangedEventCookie = detach_abi(this->shim().ValueChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> *>(&valueChangedHandler)));
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_Service(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Service());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAllDescriptors(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>> descriptors) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *descriptors = detach_abi(this->shim().GetAllDescriptors());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
{
    HRESULT __stdcall abi_GetDescriptorsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDescriptorsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDescriptorsWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDescriptorsAsync(cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDescriptorsForUuidAsync(GUID descriptorUuid, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDescriptorsForUuidAsync(descriptorUuid));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDescriptorsForUuidWithCacheModeAsync(GUID descriptorUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDescriptorsForUuidAsync(descriptorUuid, cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteValueWithResultAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteValueWithResultAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteValueWithResultAndOptionAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteValueWithResultAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value), writeOption));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteClientCharacteristicConfigurationDescriptorWithResultAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteClientCharacteristicConfigurationDescriptorWithResultAsync(clientCharacteristicConfigurationDescriptorValue));
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
{
    HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * characteristicUuid) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *characteristicUuid = detach_abi(this->shim().ConvertShortIdToUuid(shortId));
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BatteryLevel());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BloodPressureFeature());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BloodPressureMeasurement());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BodySensorLocation());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CscFeature());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CscMeasurement());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GlucoseFeature());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GlucoseMeasurement());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GlucoseMeasurementContext());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeartRateControlPoint());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeartRateMeasurement());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IntermediateCuffPressure());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IntermediateTemperature());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MeasurementInterval());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecordAccessControlPoint());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RscFeature());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RscMeasurement());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SCControlPoint());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SensorLocation());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TemperatureMeasurement());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TemperatureType());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlertCategoryId());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlertCategoryIdBitMask());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlertLevel());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlertNotificationControlPoint());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlertStatus());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GapAppearance());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BootKeyboardInputReport());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BootKeyboardOutputReport());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BootMouseInputReport());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentTime());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CyclingPowerControlPoint());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CyclingPowerFeature());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CyclingPowerMeasurement());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CyclingPowerVector());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DateTime());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DayDateTime());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DayOfWeek());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GapDeviceName());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DstOffset());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExactTime256());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirmwareRevisionString());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareRevisionString());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HidControlPoint());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HidInformation());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ieee1107320601RegulatoryCertificationDataList());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LnControlPoint());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LnFeature());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalTimeInformation());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocationAndSpeed());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ManufacturerNameString());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ModelNumberString());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Navigation());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewAlert());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GapPeripheralPreferredConnectionParameters());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GapPeripheralPrivacyFlag());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PnpId());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionQuality());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolMode());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GapReconnectionAddress());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReferenceTimeInformation());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Report());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReportMap());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RingerControlPoint());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RingerSetting());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScanIntervalWindow());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScanRefresh());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SerialNumberString());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GattServiceChanged());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SoftwareRevisionString());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedNewAlertCategory());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportUnreadAlertCategory());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemId());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeAccuracy());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeSource());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeUpdateControlPoint());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeUpdateState());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeWithDst());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeZone());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TxPowerLevel());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnreadAlertStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult>
{
    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolError(impl::abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Characteristics(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Characteristics());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult>
{
    HRESULT __stdcall get_SubscribedClient(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubscribedClient());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolError(impl::abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolError());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
{
    HRESULT __stdcall get_ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtectionLevel());
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
            typename D::abi_guard guard(this->shim());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uuid());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttributeHandle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadValueAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadValueAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadValueWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadValueAsync(cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteValueAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().WriteValueAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value)));
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
{
    HRESULT __stdcall abi_WriteValueWithResultAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteValueWithResultAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value)));
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
{
    HRESULT __stdcall abi_ConvertShortIdToUuid(uint16_t shortId, GUID * descriptorUuid) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *descriptorUuid = detach_abi(this->shim().ConvertShortIdToUuid(shortId));
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacteristicAggregateFormat());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacteristicExtendedProperties());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacteristicPresentationFormat());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacteristicUserDescription());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClientCharacteristicConfiguration());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServerCharacteristicConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult>
{
    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolError(impl::abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptors(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Descriptors());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
{
    HRESULT __stdcall abi_GetCharacteristics(GUID characteristicUuid, impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCharacteristics(characteristicUuid));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIncludedServices(GUID serviceUuid, impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIncludedServices(serviceUuid));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uuid());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttributeHandle());
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
    HRESULT __stdcall get_Device(impl::abi_arg_out<Windows::Devices::Bluetooth::IBluetoothLEDevice> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentServices(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ParentServices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAllCharacteristics(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>> characteristics) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *characteristics = detach_abi(this->shim().GetAllCharacteristics());
            return S_OK;
        }
        catch (...)
        {
            *characteristics = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAllIncludedServices(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> includedServices) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *includedServices = detach_abi(this->shim().GetAllIncludedServices());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
{
    HRESULT __stdcall get_DeviceAccessInformation(impl::abi_arg_out<Windows::Devices::Enumeration::IDeviceAccessInformation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceAccessInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Session(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SharingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus>> value) noexcept override
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

    HRESULT __stdcall abi_OpenAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenAsync(sharingMode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCharacteristicsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCharacteristicsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCharacteristicsWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCharacteristicsAsync(cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCharacteristicsForUuidAsync(GUID characteristicUuid, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCharacteristicsForUuidAsync(characteristicUuid));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCharacteristicsForUuidWithCacheModeAsync(GUID characteristicUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCharacteristicsForUuidAsync(characteristicUuid, cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIncludedServicesAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIncludedServicesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIncludedServicesWithCacheModeAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIncludedServicesAsync(cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIncludedServicesForUuidAsync(GUID serviceUuid, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIncludedServicesForUuidAsync(serviceUuid));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIncludedServicesForUuidWithCacheModeAsync(GUID serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIncludedServicesForUuidAsync(serviceUuid, cacheMode));
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
{
    HRESULT __stdcall abi_FromIdAsync(impl::abi_arg_in<hstring> deviceId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromUuid(GUID serviceUuid, impl::abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelectorFromUuid(serviceUuid));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromShortId(uint16_t serviceShortId, impl::abi_arg_out<hstring> selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelectorFromShortId(serviceShortId));
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
            typename D::abi_guard guard(this->shim());
            *serviceUuid = detach_abi(this->shim().ConvertShortIdToUuid(shortId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>
{
    HRESULT __stdcall abi_FromIdWithSharingModeAsync(impl::abi_arg_in<hstring> deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId), sharingMode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceId(impl::abi_arg_in<Windows::Devices::Bluetooth::IBluetoothDeviceId> bluetoothDeviceId, impl::abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceId(*reinterpret_cast<const Windows::Devices::Bluetooth::BluetoothDeviceId *>(&bluetoothDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceIdWithCacheMode(impl::abi_arg_in<Windows::Devices::Bluetooth::IBluetoothDeviceId> bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceId(*reinterpret_cast<const Windows::Devices::Bluetooth::BluetoothDeviceId *>(&bluetoothDeviceId), cacheMode));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceIdAndUuid(impl::abi_arg_in<Windows::Devices::Bluetooth::IBluetoothDeviceId> bluetoothDeviceId, GUID serviceUuid, impl::abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceIdAndUuid(*reinterpret_cast<const Windows::Devices::Bluetooth::BluetoothDeviceId *>(&bluetoothDeviceId), serviceUuid));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode(impl::abi_arg_in<Windows::Devices::Bluetooth::IBluetoothDeviceId> bluetoothDeviceId, GUID serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode, impl::abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceIdAndUuid(*reinterpret_cast<const Windows::Devices::Bluetooth::BluetoothDeviceId *>(&bluetoothDeviceId), serviceUuid, cacheMode));
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult>
{
    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolError(impl::abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Services(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Services());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>
{
    HRESULT __stdcall get_Uuid(GUID * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StaticValue(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StaticValue());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacteristicProperties());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WriteProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDescriptorAsync(GUID descriptorUuid, impl::abi_arg_in<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters> parameters, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateDescriptorAsync(descriptorUuid, *reinterpret_cast<const Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters *>(&parameters)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptors(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Descriptors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDescription(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationFormats(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PresentationFormats());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubscribedClients(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubscribedClients());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SubscribedClientsChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SubscribedClientsChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SubscribedClientsChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubscribedClientsChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReadRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WriteRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().WriteRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WriteRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyValueAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().NotifyValueAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_NotifyValueForSubscribedClientAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value, impl::abi_arg_in<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient> subscribedClient, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().NotifyValueAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value), *reinterpret_cast<const Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient *>(&subscribedClient)));
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters>
{
    HRESULT __stdcall put_StaticValue(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StaticValue(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StaticValue(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StaticValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharacteristicProperties(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacteristicProperties(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacteristicProperties(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacteristicProperties());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadProtectionLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteProtectionLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WriteProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserDescription(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserDescription(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDescription(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationFormats(impl::abi_arg_out<Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PresentationFormats());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult>
{
    HRESULT __stdcall get_Characteristic(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Characteristic());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>
{
    HRESULT __stdcall get_Uuid(GUID * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StaticValue(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StaticValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WriteProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReadRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WriteRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().WriteRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WriteRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters>
{
    HRESULT __stdcall put_StaticValue(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StaticValue(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StaticValue(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StaticValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadProtectionLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteProtectionLevel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WriteProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult>
{
    HRESULT __stdcall get_Descriptor(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Descriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService>
{
    HRESULT __stdcall get_Uuid(GUID * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uuid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCharacteristicAsync(GUID characteristicUuid, impl::abi_arg_in<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters> parameters, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateCharacteristicAsync(characteristicUuid, *reinterpret_cast<const Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters *>(&parameters)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Characteristics(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Characteristics());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
{
    HRESULT __stdcall get_FormatType(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormatType());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exponent());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Unit());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Namespace());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BluetoothSigAssignedNumbers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>
{
    HRESULT __stdcall abi_FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description, impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromParts(formatType, exponent, unit, namespaceId, description));
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
{
    HRESULT __stdcall get_Boolean(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Boolean());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bit2());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Nibble());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UInt8());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UInt12());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UInt16());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UInt24());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UInt32());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UInt48());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UInt64());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UInt128());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SInt8());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SInt12());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SInt16());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SInt24());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SInt32());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SInt48());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SInt64());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SInt128());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Float32());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Float64());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SFloat());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Float());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DUInt16());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Utf8());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Utf16());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Struct());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>
{
    HRESULT __stdcall get_InvalidHandle(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InvalidHandle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadNotPermitted(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadNotPermitted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteNotPermitted(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WriteNotPermitted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidPdu(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InvalidPdu());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InsufficientAuthentication(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InsufficientAuthentication());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestNotSupported(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestNotSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidOffset(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InvalidOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InsufficientAuthorization(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InsufficientAuthorization());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrepareQueueFull(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrepareQueueFull());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributeNotFound(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttributeNotFound());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttributeNotLong(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AttributeNotLong());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InsufficientEncryptionKeySize(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InsufficientEncryptionKeySize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidAttributeValueLength(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InvalidAttributeValueLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnlikelyError(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnlikelyError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InsufficientEncryption(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InsufficientEncryption());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UnsupportedGroupType(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnsupportedGroupType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InsufficientResources(uint8_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InsufficientResources());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClientCharacteristicConfigurationDescriptor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
{
    HRESULT __stdcall get_ProtocolError(impl::abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolError());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>
{
    HRESULT __stdcall get_Offset(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RespondWithValue(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RespondWithValue(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RespondWithProtocolError(uint8_t protocolError) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RespondWithProtocolError(protocolError);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs>
{
    HRESULT __stdcall get_Session(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRequestAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetRequestAsync());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
{
    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
{
    HRESULT __stdcall get_ProtocolError(impl::abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolError());
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
    HRESULT __stdcall abi_WriteValue(impl::abi_arg_in<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> characteristic, impl::abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteValue(*reinterpret_cast<const Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic *>(&characteristic), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CommitAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>> asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().CommitAsync());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
{
    HRESULT __stdcall abi_CommitWithResultAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CommitWithResultAsync());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>
{
    HRESULT __stdcall get_Service(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Service());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisementStatus(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisementStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AdvertisementStatusChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AdvertisementStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AdvertisementStatusChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvertisementStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAdvertising() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAdvertising();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAdvertisingWithParameters(impl::abi_arg_in<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters> parameters) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAdvertising(*reinterpret_cast<const Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters *>(&parameters));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAdvertising() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAdvertising();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs>
{
    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters>
{
    HRESULT __stdcall put_IsConnectable(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsConnectable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsConnectable(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsConnectable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDiscoverable(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDiscoverable(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDiscoverable(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDiscoverable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult>
{
    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceProvider(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceProvider());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>
{
    HRESULT __stdcall abi_CreateAsync(GUID serviceUuid, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateAsync(serviceUuid));
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
{
    HRESULT __stdcall get_Battery(GUID * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Battery());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BloodPressure());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CyclingSpeedAndCadence());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GenericAccess());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GenericAttribute());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Glucose());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HealthThermometer());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeartRate());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RunningSpeedAndCadence());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlertNotification());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentTime());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CyclingPower());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceInformation());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HumanInterfaceDevice());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImmediateAlert());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinkLoss());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocationAndNavigation());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NextDstChange());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneAlertStatus());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReferenceTimeUpdate());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScanParameters());
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
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TxPower());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>
{
    HRESULT __stdcall get_DeviceId(impl::abi_arg_out<Windows::Devices::Bluetooth::IBluetoothDeviceId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanMaintainConnection(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanMaintainConnection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaintainConnection(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaintainConnection(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaintainConnection(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaintainConnection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPduSize(uint16_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPduSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionStatus(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MaxPduSizeChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MaxPduSizeChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MaxPduSizeChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPduSizeChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SessionStatusChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SessionStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionStatusChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionStatusChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>
{
    HRESULT __stdcall abi_FromDeviceIdAsync(impl::abi_arg_in<Windows::Devices::Bluetooth::IBluetoothDeviceId> deviceId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromDeviceIdAsync(*reinterpret_cast<const Windows::Devices::Bluetooth::BluetoothDeviceId *>(&deviceId)));
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs>
{
    HRESULT __stdcall get_Error(Windows::Devices::Bluetooth::BluetoothError * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>
{
    HRESULT __stdcall get_Session(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxNotificationSize(uint16_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxNotificationSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MaxNotificationSizeChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MaxNotificationSizeChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MaxNotificationSizeChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxNotificationSizeChanged(token);
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
    HRESULT __stdcall get_CharacteristicValue(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacteristicValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(impl::abi_arg_out<Windows::Foundation::DateTime> timestamp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *timestamp = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>
{
    HRESULT __stdcall get_Value(impl::abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Option(Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Option());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Respond() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Respond();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RespondWithProtocolError(uint8_t protocolError) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RespondWithProtocolError(protocolError);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs>
{
    HRESULT __stdcall get_Session(impl::abi_arg_out<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRequestAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetRequestAsync());
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
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult>
{
    HRESULT __stdcall get_Status(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolError(impl::abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Bluetooth::GenericAttributeProfile {

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::InvalidHandle() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_InvalidHandle(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::ReadNotPermitted() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_ReadNotPermitted(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::WriteNotPermitted() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_WriteNotPermitted(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::InvalidPdu() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_InvalidPdu(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::InsufficientAuthentication() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_InsufficientAuthentication(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::RequestNotSupported() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_RequestNotSupported(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::InvalidOffset() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_InvalidOffset(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::InsufficientAuthorization() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_InsufficientAuthorization(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::PrepareQueueFull() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_PrepareQueueFull(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::AttributeNotFound() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_AttributeNotFound(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::AttributeNotLong() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_AttributeNotLong(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::InsufficientEncryptionKeySize() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_InsufficientEncryptionKeySize(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::InvalidAttributeValueLength() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_InvalidAttributeValueLength(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::UnlikelyError() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_UnlikelyError(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::InsufficientEncryption() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_InsufficientEncryption(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::UnsupportedGroupType() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_UnsupportedGroupType(&value));
    return value;
}

template <typename D> uint8_t impl_IGattProtocolErrorStatics<D>::InsufficientResources() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattProtocolErrorStatics)->get_InsufficientResources(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> impl_IGattSessionStatics<D>::FromDeviceIdAsync(const Windows::Devices::Bluetooth::BluetoothDeviceId & deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> operation;
    check_hresult(WINRT_SHIM(IGattSessionStatics)->abi_FromDeviceIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDeviceId impl_IGattSession<D>::DeviceId() const
{
    Windows::Devices::Bluetooth::BluetoothDeviceId value { nullptr };
    check_hresult(WINRT_SHIM(IGattSession)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> bool impl_IGattSession<D>::CanMaintainConnection() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IGattSession)->get_CanMaintainConnection(&value));
    return value;
}

template <typename D> void impl_IGattSession<D>::MaintainConnection(bool value) const
{
    check_hresult(WINRT_SHIM(IGattSession)->put_MaintainConnection(value));
}

template <typename D> bool impl_IGattSession<D>::MaintainConnection() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IGattSession)->get_MaintainConnection(&value));
    return value;
}

template <typename D> uint16_t impl_IGattSession<D>::MaxPduSize() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IGattSession)->get_MaxPduSize(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus impl_IGattSession<D>::SessionStatus() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus value {};
    check_hresult(WINRT_SHIM(IGattSession)->get_SessionStatus(&value));
    return value;
}

template <typename D> event_token impl_IGattSession<D>::MaxPduSizeChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattSession)->add_MaxPduSizeChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattSession> impl_IGattSession<D>::MaxPduSizeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGattSession>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession::remove_MaxPduSizeChanged, MaxPduSizeChanged(handler));
}

template <typename D> void impl_IGattSession<D>::MaxPduSizeChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattSession)->remove_MaxPduSizeChanged(token));
}

template <typename D> event_token impl_IGattSession<D>::SessionStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattSession)->add_SessionStatusChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattSession> impl_IGattSession<D>::SessionStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGattSession>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession::remove_SessionStatusChanged, SessionStatusChanged(handler));
}

template <typename D> void impl_IGattSession<D>::SessionStatusChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattSession)->remove_SessionStatusChanged(token));
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IGattSessionStatusChangedEventArgs<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(WINRT_SHIM(IGattSessionStatusChangedEventArgs)->get_Error(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus impl_IGattSessionStatusChangedEventArgs<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus value {};
    check_hresult(WINRT_SHIM(IGattSessionStatusChangedEventArgs)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceServiceStatics<D>::FromIdAsync(hstring_view deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> asyncOp;
    check_hresult(WINRT_SHIM(IGattDeviceServiceStatics)->abi_FromIdAsync(get_abi(deviceId), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> hstring impl_IGattDeviceServiceStatics<D>::GetDeviceSelectorFromUuid(GUID serviceUuid) const
{
    hstring selector;
    check_hresult(WINRT_SHIM(IGattDeviceServiceStatics)->abi_GetDeviceSelectorFromUuid(serviceUuid, put_abi(selector)));
    return selector;
}

template <typename D> hstring impl_IGattDeviceServiceStatics<D>::GetDeviceSelectorFromShortId(uint16_t serviceShortId) const
{
    hstring selector;
    check_hresult(WINRT_SHIM(IGattDeviceServiceStatics)->abi_GetDeviceSelectorFromShortId(serviceShortId, put_abi(selector)));
    return selector;
}

template <typename D> GUID impl_IGattDeviceServiceStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
{
    GUID serviceUuid {};
    check_hresult(WINRT_SHIM(IGattDeviceServiceStatics)->abi_ConvertShortIdToUuid(shortId, &serviceUuid));
    return serviceUuid;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceServiceStatics2<D>::FromIdAsync(hstring_view deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> operation;
    check_hresult(WINRT_SHIM(IGattDeviceServiceStatics2)->abi_FromIdWithSharingModeAsync(get_abi(deviceId), sharingMode, put_abi(operation)));
    return operation;
}

template <typename D> hstring impl_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceId(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId) const
{
    hstring result;
    check_hresult(WINRT_SHIM(IGattDeviceServiceStatics2)->abi_GetDeviceSelectorForBluetoothDeviceId(get_abi(bluetoothDeviceId), put_abi(result)));
    return result;
}

template <typename D> hstring impl_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceId(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    hstring result;
    check_hresult(WINRT_SHIM(IGattDeviceServiceStatics2)->abi_GetDeviceSelectorForBluetoothDeviceIdWithCacheMode(get_abi(bluetoothDeviceId), cacheMode, put_abi(result)));
    return result;
}

template <typename D> hstring impl_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceIdAndUuid(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, GUID serviceUuid) const
{
    hstring result;
    check_hresult(WINRT_SHIM(IGattDeviceServiceStatics2)->abi_GetDeviceSelectorForBluetoothDeviceIdAndUuid(get_abi(bluetoothDeviceId), serviceUuid, put_abi(result)));
    return result;
}

template <typename D> hstring impl_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceIdAndUuid(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, GUID serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    hstring result;
    check_hresult(WINRT_SHIM(IGattDeviceServiceStatics2)->abi_GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode(get_abi(bluetoothDeviceId), serviceUuid, cacheMode, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> impl_IGattDeviceService<D>::GetCharacteristics(GUID characteristicUuid) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> value;
    check_hresult(WINRT_SHIM(IGattDeviceService)->abi_GetCharacteristics(characteristicUuid, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceService<D>::GetIncludedServices(GUID serviceUuid) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> value;
    check_hresult(WINRT_SHIM(IGattDeviceService)->abi_GetIncludedServices(serviceUuid, put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGattDeviceService<D>::DeviceId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGattDeviceService)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> GUID impl_IGattDeviceService<D>::Uuid() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattDeviceService)->get_Uuid(&value));
    return value;
}

template <typename D> uint16_t impl_IGattDeviceService<D>::AttributeHandle() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IGattDeviceService)->get_AttributeHandle(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothLEDevice impl_IGattDeviceService2<D>::Device() const
{
    Windows::Devices::Bluetooth::BluetoothLEDevice value { nullptr };
    check_hresult(WINRT_SHIM(IGattDeviceService2)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceService2<D>::ParentServices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> value;
    check_hresult(WINRT_SHIM(IGattDeviceService2)->get_ParentServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> impl_IGattDeviceService2<D>::GetAllCharacteristics() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> characteristics;
    check_hresult(WINRT_SHIM(IGattDeviceService2)->abi_GetAllCharacteristics(put_abi(characteristics)));
    return characteristics;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceService2<D>::GetAllIncludedServices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> includedServices;
    check_hresult(WINRT_SHIM(IGattDeviceService2)->abi_GetAllIncludedServices(put_abi(includedServices)));
    return includedServices;
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessInformation impl_IGattDeviceService3<D>::DeviceAccessInformation() const
{
    Windows::Devices::Enumeration::DeviceAccessInformation value { nullptr };
    check_hresult(WINRT_SHIM(IGattDeviceService3)->get_DeviceAccessInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession impl_IGattDeviceService3<D>::Session() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession value { nullptr };
    check_hresult(WINRT_SHIM(IGattDeviceService3)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode impl_IGattDeviceService3<D>::SharingMode() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode value {};
    check_hresult(WINRT_SHIM(IGattDeviceService3)->get_SharingMode(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> impl_IGattDeviceService3<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Enumeration::DeviceAccessStatus> value;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_RequestAccessAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus> impl_IGattDeviceService3<D>::OpenAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus> operation;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_OpenAsync(sharingMode, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> impl_IGattDeviceService3<D>::GetCharacteristicsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> operation;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_GetCharacteristicsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> impl_IGattDeviceService3<D>::GetCharacteristicsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> operation;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_GetCharacteristicsWithCacheModeAsync(cacheMode, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> impl_IGattDeviceService3<D>::GetCharacteristicsForUuidAsync(GUID characteristicUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> operation;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_GetCharacteristicsForUuidAsync(characteristicUuid, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> impl_IGattDeviceService3<D>::GetCharacteristicsForUuidAsync(GUID characteristicUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> operation;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_GetCharacteristicsForUuidWithCacheModeAsync(characteristicUuid, cacheMode, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> impl_IGattDeviceService3<D>::GetIncludedServicesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_GetIncludedServicesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> impl_IGattDeviceService3<D>::GetIncludedServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_GetIncludedServicesWithCacheModeAsync(cacheMode, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> impl_IGattDeviceService3<D>::GetIncludedServicesForUuidAsync(GUID serviceUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_GetIncludedServicesForUuidAsync(serviceUuid, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> impl_IGattDeviceService3<D>::GetIncludedServicesForUuidAsync(GUID serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation;
    check_hresult(WINRT_SHIM(IGattDeviceService3)->abi_GetIncludedServicesForUuidWithCacheModeAsync(serviceUuid, cacheMode, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus impl_IGattDeviceServicesResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value {};
    check_hresult(WINRT_SHIM(IGattDeviceServicesResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IGattDeviceServicesResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(WINRT_SHIM(IGattDeviceServicesResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> impl_IGattDeviceServicesResult<D>::Services() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> value;
    check_hresult(WINRT_SHIM(IGattDeviceServicesResult)->get_Services(put_abi(value)));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
{
    GUID characteristicUuid {};
    check_hresult(WINRT_SHIM(IGattCharacteristicStatics)->abi_ConvertShortIdToUuid(shortId, &characteristicUuid));
    return characteristicUuid;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> impl_IGattCharacteristic<D>::GetDescriptors(GUID descriptorUuid) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> value;
    check_hresult(WINRT_SHIM(IGattCharacteristic)->abi_GetDescriptors(descriptorUuid, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties impl_IGattCharacteristic<D>::CharacteristicProperties() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value {};
    check_hresult(WINRT_SHIM(IGattCharacteristic)->get_CharacteristicProperties(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattCharacteristic<D>::ProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattCharacteristic)->get_ProtectionLevel(&value));
    return value;
}

template <typename D> void impl_IGattCharacteristic<D>::ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const
{
    check_hresult(WINRT_SHIM(IGattCharacteristic)->put_ProtectionLevel(value));
}

template <typename D> hstring impl_IGattCharacteristic<D>::UserDescription() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGattCharacteristic)->get_UserDescription(put_abi(value)));
    return value;
}

template <typename D> GUID impl_IGattCharacteristic<D>::Uuid() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristic)->get_Uuid(&value));
    return value;
}

template <typename D> uint16_t impl_IGattCharacteristic<D>::AttributeHandle() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IGattCharacteristic)->get_AttributeHandle(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> impl_IGattCharacteristic<D>::PresentationFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> value;
    check_hresult(WINRT_SHIM(IGattCharacteristic)->get_PresentationFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> impl_IGattCharacteristic<D>::ReadValueAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value;
    check_hresult(WINRT_SHIM(IGattCharacteristic)->abi_ReadValueAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> impl_IGattCharacteristic<D>::ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value;
    check_hresult(WINRT_SHIM(IGattCharacteristic)->abi_ReadValueWithCacheModeAsync(cacheMode, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattCharacteristic<D>::WriteValueAsync(const Windows::Storage::Streams::IBuffer & value) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp;
    check_hresult(WINRT_SHIM(IGattCharacteristic)->abi_WriteValueAsync(get_abi(value), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattCharacteristic<D>::WriteValueAsync(const Windows::Storage::Streams::IBuffer & value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp;
    check_hresult(WINRT_SHIM(IGattCharacteristic)->abi_WriteValueWithOptionAsync(get_abi(value), writeOption, put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> impl_IGattCharacteristic<D>::ReadClientCharacteristicConfigurationDescriptorAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> asyncOp;
    check_hresult(WINRT_SHIM(IGattCharacteristic)->abi_ReadClientCharacteristicConfigurationDescriptorAsync(put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattCharacteristic<D>::WriteClientCharacteristicConfigurationDescriptorAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp;
    check_hresult(WINRT_SHIM(IGattCharacteristic)->abi_WriteClientCharacteristicConfigurationDescriptorAsync(clientCharacteristicConfigurationDescriptorValue, put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> event_token impl_IGattCharacteristic<D>::ValueChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> & valueChangedHandler) const
{
    event_token valueChangedEventCookie {};
    check_hresult(WINRT_SHIM(IGattCharacteristic)->add_ValueChanged(get_abi(valueChangedHandler), &valueChangedEventCookie));
    return valueChangedEventCookie;
}

template <typename D> event_revoker<IGattCharacteristic> impl_IGattCharacteristic<D>::ValueChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> & valueChangedHandler) const
{
    return impl::make_event_revoker<D, IGattCharacteristic>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic::remove_ValueChanged, ValueChanged(valueChangedHandler));
}

template <typename D> void impl_IGattCharacteristic<D>::ValueChanged(event_token valueChangedEventCookie) const
{
    check_hresult(WINRT_SHIM(IGattCharacteristic)->remove_ValueChanged(valueChangedEventCookie));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService impl_IGattCharacteristic2<D>::Service() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService value { nullptr };
    check_hresult(WINRT_SHIM(IGattCharacteristic2)->get_Service(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> impl_IGattCharacteristic2<D>::GetAllDescriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> descriptors;
    check_hresult(WINRT_SHIM(IGattCharacteristic2)->abi_GetAllDescriptors(put_abi(descriptors)));
    return descriptors;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> impl_IGattCharacteristic3<D>::GetDescriptorsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> operation;
    check_hresult(WINRT_SHIM(IGattCharacteristic3)->abi_GetDescriptorsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> impl_IGattCharacteristic3<D>::GetDescriptorsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> operation;
    check_hresult(WINRT_SHIM(IGattCharacteristic3)->abi_GetDescriptorsWithCacheModeAsync(cacheMode, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> impl_IGattCharacteristic3<D>::GetDescriptorsForUuidAsync(GUID descriptorUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> operation;
    check_hresult(WINRT_SHIM(IGattCharacteristic3)->abi_GetDescriptorsForUuidAsync(descriptorUuid, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> impl_IGattCharacteristic3<D>::GetDescriptorsForUuidAsync(GUID descriptorUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> operation;
    check_hresult(WINRT_SHIM(IGattCharacteristic3)->abi_GetDescriptorsForUuidWithCacheModeAsync(descriptorUuid, cacheMode, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> impl_IGattCharacteristic3<D>::WriteValueWithResultAsync(const Windows::Storage::Streams::IBuffer & value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation;
    check_hresult(WINRT_SHIM(IGattCharacteristic3)->abi_WriteValueWithResultAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> impl_IGattCharacteristic3<D>::WriteValueWithResultAsync(const Windows::Storage::Streams::IBuffer & value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption writeOption) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation;
    check_hresult(WINRT_SHIM(IGattCharacteristic3)->abi_WriteValueWithResultAndOptionAsync(get_abi(value), writeOption, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> impl_IGattCharacteristic3<D>::WriteClientCharacteristicConfigurationDescriptorWithResultAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue clientCharacteristicConfigurationDescriptorValue) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation;
    check_hresult(WINRT_SHIM(IGattCharacteristic3)->abi_WriteClientCharacteristicConfigurationDescriptorWithResultAsync(clientCharacteristicConfigurationDescriptorValue, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus impl_IGattCharacteristicsResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicsResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IGattCharacteristicsResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(WINRT_SHIM(IGattCharacteristicsResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> impl_IGattCharacteristicsResult<D>::Characteristics() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> value;
    check_hresult(WINRT_SHIM(IGattCharacteristicsResult)->get_Characteristics(put_abi(value)));
    return value;
}

template <typename D> GUID impl_IGattDescriptorStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
{
    GUID descriptorUuid {};
    check_hresult(WINRT_SHIM(IGattDescriptorStatics)->abi_ConvertShortIdToUuid(shortId, &descriptorUuid));
    return descriptorUuid;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattDescriptor<D>::ProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattDescriptor)->get_ProtectionLevel(&value));
    return value;
}

template <typename D> void impl_IGattDescriptor<D>::ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const
{
    check_hresult(WINRT_SHIM(IGattDescriptor)->put_ProtectionLevel(value));
}

template <typename D> GUID impl_IGattDescriptor<D>::Uuid() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattDescriptor)->get_Uuid(&value));
    return value;
}

template <typename D> uint16_t impl_IGattDescriptor<D>::AttributeHandle() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IGattDescriptor)->get_AttributeHandle(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> impl_IGattDescriptor<D>::ReadValueAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value;
    check_hresult(WINRT_SHIM(IGattDescriptor)->abi_ReadValueAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> impl_IGattDescriptor<D>::ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value;
    check_hresult(WINRT_SHIM(IGattDescriptor)->abi_ReadValueWithCacheModeAsync(cacheMode, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattDescriptor<D>::WriteValueAsync(const Windows::Storage::Streams::IBuffer & value) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> action;
    check_hresult(WINRT_SHIM(IGattDescriptor)->abi_WriteValueAsync(get_abi(value), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> impl_IGattDescriptor2<D>::WriteValueWithResultAsync(const Windows::Storage::Streams::IBuffer & value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation;
    check_hresult(WINRT_SHIM(IGattDescriptor2)->abi_WriteValueWithResultAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus impl_IGattDescriptorsResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value {};
    check_hresult(WINRT_SHIM(IGattDescriptorsResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IGattDescriptorsResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(WINRT_SHIM(IGattDescriptorsResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> impl_IGattDescriptorsResult<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> value;
    check_hresult(WINRT_SHIM(IGattDescriptorsResult)->get_Descriptors(put_abi(value)));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Boolean() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_Boolean(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Bit2() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_Bit2(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Nibble() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_Nibble(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt8() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_UInt8(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt12() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_UInt12(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt16() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_UInt16(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt24() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_UInt24(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt32() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_UInt32(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt48() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_UInt48(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt64() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_UInt64(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::UInt128() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_UInt128(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt8() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_SInt8(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt12() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_SInt12(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt16() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_SInt16(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt24() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_SInt24(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt32() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_SInt32(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt48() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_SInt48(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt64() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_SInt64(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SInt128() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_SInt128(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Float32() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_Float32(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Float64() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_Float64(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::SFloat() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_SFloat(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Float() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_Float(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::DUInt16() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_DUInt16(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Utf8() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_Utf8(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Utf16() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_Utf16(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatTypesStatics<D>::Struct() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatTypesStatics)->get_Struct(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormatStatics<D>::BluetoothSigAssignedNumbers() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormatStatics)->get_BluetoothSigAssignedNumbers(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat impl_IGattPresentationFormatStatics2<D>::FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description) const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat result { nullptr };
    check_hresult(WINRT_SHIM(IGattPresentationFormatStatics2)->abi_FromParts(formatType, exponent, unit, namespaceId, description, put_abi(result)));
    return result;
}

template <typename D> uint8_t impl_IGattPresentationFormat<D>::FormatType() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormat)->get_FormatType(&value));
    return value;
}

template <typename D> int32_t impl_IGattPresentationFormat<D>::Exponent() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormat)->get_Exponent(&value));
    return value;
}

template <typename D> uint16_t impl_IGattPresentationFormat<D>::Unit() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormat)->get_Unit(&value));
    return value;
}

template <typename D> uint8_t impl_IGattPresentationFormat<D>::Namespace() const
{
    uint8_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormat)->get_Namespace(&value));
    return value;
}

template <typename D> uint16_t impl_IGattPresentationFormat<D>::Description() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IGattPresentationFormat)->get_Description(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattValueChangedEventArgs<D>::CharacteristicValue() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IGattValueChangedEventArgs)->get_CharacteristicValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IGattValueChangedEventArgs<D>::Timestamp() const
{
    Windows::Foundation::DateTime timestamp {};
    check_hresult(WINRT_SHIM(IGattValueChangedEventArgs)->get_Timestamp(put_abi(timestamp)));
    return timestamp;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::Battery() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics)->get_Battery(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::BloodPressure() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics)->get_BloodPressure(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::CyclingSpeedAndCadence() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics)->get_CyclingSpeedAndCadence(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::GenericAccess() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics)->get_GenericAccess(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::GenericAttribute() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics)->get_GenericAttribute(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::Glucose() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics)->get_Glucose(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::HealthThermometer() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics)->get_HealthThermometer(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::HeartRate() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics)->get_HeartRate(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics<D>::RunningSpeedAndCadence() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics)->get_RunningSpeedAndCadence(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::AlertNotification() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_AlertNotification(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::CurrentTime() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_CurrentTime(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::CyclingPower() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_CyclingPower(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::DeviceInformation() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_DeviceInformation(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::HumanInterfaceDevice() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_HumanInterfaceDevice(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::ImmediateAlert() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_ImmediateAlert(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::LinkLoss() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_LinkLoss(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::LocationAndNavigation() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_LocationAndNavigation(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::NextDstChange() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_NextDstChange(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::PhoneAlertStatus() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_PhoneAlertStatus(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::ReferenceTimeUpdate() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_ReferenceTimeUpdate(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::ScanParameters() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_ScanParameters(&value));
    return value;
}

template <typename D> GUID impl_IGattServiceUuidsStatics2<D>::TxPower() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattServiceUuidsStatics2)->get_TxPower(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::BatteryLevel() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_BatteryLevel(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::BloodPressureFeature() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_BloodPressureFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::BloodPressureMeasurement() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_BloodPressureMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::BodySensorLocation() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_BodySensorLocation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::CscFeature() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_CscFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::CscMeasurement() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_CscMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::GlucoseFeature() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_GlucoseFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::GlucoseMeasurement() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_GlucoseMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::GlucoseMeasurementContext() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_GlucoseMeasurementContext(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::HeartRateControlPoint() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_HeartRateControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::HeartRateMeasurement() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_HeartRateMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::IntermediateCuffPressure() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_IntermediateCuffPressure(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::IntermediateTemperature() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_IntermediateTemperature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::MeasurementInterval() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_MeasurementInterval(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::RecordAccessControlPoint() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_RecordAccessControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::RscFeature() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_RscFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::RscMeasurement() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_RscMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::SCControlPoint() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_SCControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::SensorLocation() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_SensorLocation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::TemperatureMeasurement() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_TemperatureMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics<D>::TemperatureType() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics)->get_TemperatureType(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertCategoryId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_AlertCategoryId(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertCategoryIdBitMask() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_AlertCategoryIdBitMask(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertLevel() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_AlertLevel(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertNotificationControlPoint() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_AlertNotificationControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::AlertStatus() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_AlertStatus(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapAppearance() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_GapAppearance(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::BootKeyboardInputReport() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_BootKeyboardInputReport(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::BootKeyboardOutputReport() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_BootKeyboardOutputReport(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::BootMouseInputReport() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_BootMouseInputReport(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CurrentTime() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_CurrentTime(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CyclingPowerControlPoint() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_CyclingPowerControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CyclingPowerFeature() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_CyclingPowerFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CyclingPowerMeasurement() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_CyclingPowerMeasurement(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::CyclingPowerVector() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_CyclingPowerVector(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::DateTime() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_DateTime(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::DayDateTime() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_DayDateTime(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::DayOfWeek() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_DayOfWeek(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapDeviceName() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_GapDeviceName(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::DstOffset() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_DstOffset(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ExactTime256() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_ExactTime256(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::FirmwareRevisionString() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_FirmwareRevisionString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::HardwareRevisionString() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_HardwareRevisionString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::HidControlPoint() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_HidControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::HidInformation() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_HidInformation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::Ieee1107320601RegulatoryCertificationDataList() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_Ieee1107320601RegulatoryCertificationDataList(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::LnControlPoint() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_LnControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::LnFeature() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_LnFeature(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::LocalTimeInformation() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_LocalTimeInformation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::LocationAndSpeed() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_LocationAndSpeed(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ManufacturerNameString() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_ManufacturerNameString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ModelNumberString() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_ModelNumberString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::Navigation() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_Navigation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::NewAlert() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_NewAlert(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapPeripheralPreferredConnectionParameters() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_GapPeripheralPreferredConnectionParameters(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapPeripheralPrivacyFlag() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_GapPeripheralPrivacyFlag(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::PnpId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_PnpId(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::PositionQuality() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_PositionQuality(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ProtocolMode() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_ProtocolMode(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GapReconnectionAddress() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_GapReconnectionAddress(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ReferenceTimeInformation() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_ReferenceTimeInformation(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::Report() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_Report(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ReportMap() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_ReportMap(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::RingerControlPoint() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_RingerControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::RingerSetting() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_RingerSetting(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ScanIntervalWindow() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_ScanIntervalWindow(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::ScanRefresh() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_ScanRefresh(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SerialNumberString() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_SerialNumberString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::GattServiceChanged() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_GattServiceChanged(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SoftwareRevisionString() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_SoftwareRevisionString(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SupportedNewAlertCategory() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_SupportedNewAlertCategory(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SupportUnreadAlertCategory() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_SupportUnreadAlertCategory(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::SystemId() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_SystemId(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeAccuracy() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_TimeAccuracy(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeSource() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_TimeSource(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeUpdateControlPoint() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_TimeUpdateControlPoint(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeUpdateState() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_TimeUpdateState(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeWithDst() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_TimeWithDst(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TimeZone() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_TimeZone(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::TxPowerLevel() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_TxPowerLevel(&value));
    return value;
}

template <typename D> GUID impl_IGattCharacteristicUuidsStatics2<D>::UnreadAlertStatus() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattCharacteristicUuidsStatics2)->get_UnreadAlertStatus(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::CharacteristicAggregateFormat() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattDescriptorUuidsStatics)->get_CharacteristicAggregateFormat(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::CharacteristicExtendedProperties() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattDescriptorUuidsStatics)->get_CharacteristicExtendedProperties(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::CharacteristicPresentationFormat() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattDescriptorUuidsStatics)->get_CharacteristicPresentationFormat(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::CharacteristicUserDescription() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattDescriptorUuidsStatics)->get_CharacteristicUserDescription(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::ClientCharacteristicConfiguration() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattDescriptorUuidsStatics)->get_ClientCharacteristicConfiguration(&value));
    return value;
}

template <typename D> GUID impl_IGattDescriptorUuidsStatics<D>::ServerCharacteristicConfiguration() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattDescriptorUuidsStatics)->get_ServerCharacteristicConfiguration(&value));
    return value;
}

template <typename D> void impl_IGattReliableWriteTransaction<D>::WriteValue(const Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic & characteristic, const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(WINRT_SHIM(IGattReliableWriteTransaction)->abi_WriteValue(get_abi(characteristic), get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> impl_IGattReliableWriteTransaction<D>::CommitAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp;
    check_hresult(WINRT_SHIM(IGattReliableWriteTransaction)->abi_CommitAsync(put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> impl_IGattReliableWriteTransaction2<D>::CommitWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation;
    check_hresult(WINRT_SHIM(IGattReliableWriteTransaction2)->abi_CommitWithResultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus impl_IGattReadResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value {};
    check_hresult(WINRT_SHIM(IGattReadResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattReadResult<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IGattReadResult)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IGattReadResult2<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(WINRT_SHIM(IGattReadResult2)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus impl_IGattWriteResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value {};
    check_hresult(WINRT_SHIM(IGattWriteResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IGattWriteResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(WINRT_SHIM(IGattWriteResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus impl_IGattReadClientCharacteristicConfigurationDescriptorResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value {};
    check_hresult(WINRT_SHIM(IGattReadClientCharacteristicConfigurationDescriptorResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue impl_IGattReadClientCharacteristicConfigurationDescriptorResult<D>::ClientCharacteristicConfigurationDescriptor() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue value {};
    check_hresult(WINRT_SHIM(IGattReadClientCharacteristicConfigurationDescriptorResult)->get_ClientCharacteristicConfigurationDescriptor(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IGattReadClientCharacteristicConfigurationDescriptorResult2<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(WINRT_SHIM(IGattReadClientCharacteristicConfigurationDescriptorResult2)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> void impl_IGattServiceProviderAdvertisingParameters<D>::IsConnectable(bool value) const
{
    check_hresult(WINRT_SHIM(IGattServiceProviderAdvertisingParameters)->put_IsConnectable(value));
}

template <typename D> bool impl_IGattServiceProviderAdvertisingParameters<D>::IsConnectable() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IGattServiceProviderAdvertisingParameters)->get_IsConnectable(&value));
    return value;
}

template <typename D> void impl_IGattServiceProviderAdvertisingParameters<D>::IsDiscoverable(bool value) const
{
    check_hresult(WINRT_SHIM(IGattServiceProviderAdvertisingParameters)->put_IsDiscoverable(value));
}

template <typename D> bool impl_IGattServiceProviderAdvertisingParameters<D>::IsDiscoverable() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IGattServiceProviderAdvertisingParameters)->get_IsDiscoverable(&value));
    return value;
}

template <typename D> void impl_IGattLocalCharacteristicParameters<D>::StaticValue(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->put_StaticValue(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattLocalCharacteristicParameters<D>::StaticValue() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->get_StaticValue(put_abi(value)));
    return value;
}

template <typename D> void impl_IGattLocalCharacteristicParameters<D>::CharacteristicProperties(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value) const
{
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->put_CharacteristicProperties(value));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties impl_IGattLocalCharacteristicParameters<D>::CharacteristicProperties() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->get_CharacteristicProperties(&value));
    return value;
}

template <typename D> void impl_IGattLocalCharacteristicParameters<D>::ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const
{
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->put_ReadProtectionLevel(value));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattLocalCharacteristicParameters<D>::ReadProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->get_ReadProtectionLevel(&value));
    return value;
}

template <typename D> void impl_IGattLocalCharacteristicParameters<D>::WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const
{
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->put_WriteProtectionLevel(value));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattLocalCharacteristicParameters<D>::WriteProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->get_WriteProtectionLevel(&value));
    return value;
}

template <typename D> void impl_IGattLocalCharacteristicParameters<D>::UserDescription(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->put_UserDescription(get_abi(value)));
}

template <typename D> hstring impl_IGattLocalCharacteristicParameters<D>::UserDescription() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->get_UserDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> impl_IGattLocalCharacteristicParameters<D>::PresentationFormats() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> value;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicParameters)->get_PresentationFormats(put_abi(value)));
    return value;
}

template <typename D> void impl_IGattLocalDescriptorParameters<D>::StaticValue(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(WINRT_SHIM(IGattLocalDescriptorParameters)->put_StaticValue(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattLocalDescriptorParameters<D>::StaticValue() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IGattLocalDescriptorParameters)->get_StaticValue(put_abi(value)));
    return value;
}

template <typename D> void impl_IGattLocalDescriptorParameters<D>::ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const
{
    check_hresult(WINRT_SHIM(IGattLocalDescriptorParameters)->put_ReadProtectionLevel(value));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattLocalDescriptorParameters<D>::ReadProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattLocalDescriptorParameters)->get_ReadProtectionLevel(&value));
    return value;
}

template <typename D> void impl_IGattLocalDescriptorParameters<D>::WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value) const
{
    check_hresult(WINRT_SHIM(IGattLocalDescriptorParameters)->put_WriteProtectionLevel(value));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattLocalDescriptorParameters<D>::WriteProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattLocalDescriptorParameters)->get_WriteProtectionLevel(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> impl_IGattServiceProviderStatics<D>::CreateAsync(GUID serviceUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> operation;
    check_hresult(WINRT_SHIM(IGattServiceProviderStatics)->abi_CreateAsync(serviceUuid, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService impl_IGattServiceProvider<D>::Service() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService value { nullptr };
    check_hresult(WINRT_SHIM(IGattServiceProvider)->get_Service(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus impl_IGattServiceProvider<D>::AdvertisementStatus() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus value {};
    check_hresult(WINRT_SHIM(IGattServiceProvider)->get_AdvertisementStatus(&value));
    return value;
}

template <typename D> event_token impl_IGattServiceProvider<D>::AdvertisementStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattServiceProvider)->add_AdvertisementStatusChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattServiceProvider> impl_IGattServiceProvider<D>::AdvertisementStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGattServiceProvider>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider::remove_AdvertisementStatusChanged, AdvertisementStatusChanged(handler));
}

template <typename D> void impl_IGattServiceProvider<D>::AdvertisementStatusChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattServiceProvider)->remove_AdvertisementStatusChanged(token));
}

template <typename D> void impl_IGattServiceProvider<D>::StartAdvertising() const
{
    check_hresult(WINRT_SHIM(IGattServiceProvider)->abi_StartAdvertising());
}

template <typename D> void impl_IGattServiceProvider<D>::StartAdvertising(const Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters & parameters) const
{
    check_hresult(WINRT_SHIM(IGattServiceProvider)->abi_StartAdvertisingWithParameters(get_abi(parameters)));
}

template <typename D> void impl_IGattServiceProvider<D>::StopAdvertising() const
{
    check_hresult(WINRT_SHIM(IGattServiceProvider)->abi_StopAdvertising());
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IGattServiceProviderAdvertisementStatusChangedEventArgs<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(WINRT_SHIM(IGattServiceProviderAdvertisementStatusChangedEventArgs)->get_Error(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus impl_IGattServiceProviderAdvertisementStatusChangedEventArgs<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus value {};
    check_hresult(WINRT_SHIM(IGattServiceProviderAdvertisementStatusChangedEventArgs)->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IGattServiceProviderResult<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(WINRT_SHIM(IGattServiceProviderResult)->get_Error(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider impl_IGattServiceProviderResult<D>::ServiceProvider() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider value { nullptr };
    check_hresult(WINRT_SHIM(IGattServiceProviderResult)->get_ServiceProvider(put_abi(value)));
    return value;
}

template <typename D> GUID impl_IGattLocalService<D>::Uuid() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattLocalService)->get_Uuid(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> impl_IGattLocalService<D>::CreateCharacteristicAsync(GUID characteristicUuid, const Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters & parameters) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> operation;
    check_hresult(WINRT_SHIM(IGattLocalService)->abi_CreateCharacteristicAsync(characteristicUuid, get_abi(parameters), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> impl_IGattLocalService<D>::Characteristics() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> value;
    check_hresult(WINRT_SHIM(IGattLocalService)->get_Characteristics(put_abi(value)));
    return value;
}

template <typename D> GUID impl_IGattLocalCharacteristic<D>::Uuid() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->get_Uuid(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattLocalCharacteristic<D>::StaticValue() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->get_StaticValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties impl_IGattLocalCharacteristic<D>::CharacteristicProperties() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->get_CharacteristicProperties(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattLocalCharacteristic<D>::ReadProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->get_ReadProtectionLevel(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattLocalCharacteristic<D>::WriteProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->get_WriteProtectionLevel(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> impl_IGattLocalCharacteristic<D>::CreateDescriptorAsync(GUID descriptorUuid, const Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters & parameters) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> operation;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->abi_CreateDescriptorAsync(descriptorUuid, get_abi(parameters), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> impl_IGattLocalCharacteristic<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> value;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->get_Descriptors(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IGattLocalCharacteristic<D>::UserDescription() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->get_UserDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> impl_IGattLocalCharacteristic<D>::PresentationFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> value;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->get_PresentationFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> impl_IGattLocalCharacteristic<D>::SubscribedClients() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> value;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->get_SubscribedClients(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IGattLocalCharacteristic<D>::SubscribedClientsChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->add_SubscribedClientsChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattLocalCharacteristic> impl_IGattLocalCharacteristic<D>::SubscribedClientsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGattLocalCharacteristic>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic::remove_SubscribedClientsChanged, SubscribedClientsChanged(handler));
}

template <typename D> void impl_IGattLocalCharacteristic<D>::SubscribedClientsChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->remove_SubscribedClientsChanged(token));
}

template <typename D> event_token impl_IGattLocalCharacteristic<D>::ReadRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->add_ReadRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattLocalCharacteristic> impl_IGattLocalCharacteristic<D>::ReadRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGattLocalCharacteristic>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic::remove_ReadRequested, ReadRequested(handler));
}

template <typename D> void impl_IGattLocalCharacteristic<D>::ReadRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->remove_ReadRequested(token));
}

template <typename D> event_token impl_IGattLocalCharacteristic<D>::WriteRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->add_WriteRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattLocalCharacteristic> impl_IGattLocalCharacteristic<D>::WriteRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGattLocalCharacteristic>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic::remove_WriteRequested, WriteRequested(handler));
}

template <typename D> void impl_IGattLocalCharacteristic<D>::WriteRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->remove_WriteRequested(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>> impl_IGattLocalCharacteristic<D>::NotifyValueAsync(const Windows::Storage::Streams::IBuffer & value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>> operation;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->abi_NotifyValueAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> impl_IGattLocalCharacteristic<D>::NotifyValueAsync(const Windows::Storage::Streams::IBuffer & value, const Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient & subscribedClient) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> operation;
    check_hresult(WINRT_SHIM(IGattLocalCharacteristic)->abi_NotifyValueForSubscribedClientAsync(get_abi(value), get_abi(subscribedClient), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic impl_IGattLocalCharacteristicResult<D>::Characteristic() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic value { nullptr };
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicResult)->get_Characteristic(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IGattLocalCharacteristicResult<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(WINRT_SHIM(IGattLocalCharacteristicResult)->get_Error(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession impl_IGattSubscribedClient<D>::Session() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession value { nullptr };
    check_hresult(WINRT_SHIM(IGattSubscribedClient)->get_Session(put_abi(value)));
    return value;
}

template <typename D> uint16_t impl_IGattSubscribedClient<D>::MaxNotificationSize() const
{
    uint16_t value {};
    check_hresult(WINRT_SHIM(IGattSubscribedClient)->get_MaxNotificationSize(&value));
    return value;
}

template <typename D> event_token impl_IGattSubscribedClient<D>::MaxNotificationSizeChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattSubscribedClient)->add_MaxNotificationSizeChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattSubscribedClient> impl_IGattSubscribedClient<D>::MaxNotificationSizeChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IGattSubscribedClient>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient::remove_MaxNotificationSizeChanged, MaxNotificationSizeChanged(handler));
}

template <typename D> void impl_IGattSubscribedClient<D>::MaxNotificationSizeChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattSubscribedClient)->remove_MaxNotificationSizeChanged(token));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient impl_IGattClientNotificationResult<D>::SubscribedClient() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient value { nullptr };
    check_hresult(WINRT_SHIM(IGattClientNotificationResult)->get_SubscribedClient(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus impl_IGattClientNotificationResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value {};
    check_hresult(WINRT_SHIM(IGattClientNotificationResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IGattClientNotificationResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(WINRT_SHIM(IGattClientNotificationResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> GUID impl_IGattLocalDescriptor<D>::Uuid() const
{
    GUID value {};
    check_hresult(WINRT_SHIM(IGattLocalDescriptor)->get_Uuid(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattLocalDescriptor<D>::StaticValue() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IGattLocalDescriptor)->get_StaticValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattLocalDescriptor<D>::ReadProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattLocalDescriptor)->get_ReadProtectionLevel(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel impl_IGattLocalDescriptor<D>::WriteProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value {};
    check_hresult(WINRT_SHIM(IGattLocalDescriptor)->get_WriteProtectionLevel(&value));
    return value;
}

template <typename D> event_token impl_IGattLocalDescriptor<D>::ReadRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattLocalDescriptor)->add_ReadRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattLocalDescriptor> impl_IGattLocalDescriptor<D>::ReadRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGattLocalDescriptor>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor::remove_ReadRequested, ReadRequested(handler));
}

template <typename D> void impl_IGattLocalDescriptor<D>::ReadRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattLocalDescriptor)->remove_ReadRequested(token));
}

template <typename D> event_token impl_IGattLocalDescriptor<D>::WriteRequested(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattLocalDescriptor)->add_WriteRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattLocalDescriptor> impl_IGattLocalDescriptor<D>::WriteRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGattLocalDescriptor>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor::remove_WriteRequested, WriteRequested(handler));
}

template <typename D> void impl_IGattLocalDescriptor<D>::WriteRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattLocalDescriptor)->remove_WriteRequested(token));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor impl_IGattLocalDescriptorResult<D>::Descriptor() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor value { nullptr };
    check_hresult(WINRT_SHIM(IGattLocalDescriptorResult)->get_Descriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IGattLocalDescriptorResult<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(WINRT_SHIM(IGattLocalDescriptorResult)->get_Error(&value));
    return value;
}

template <typename D> uint32_t impl_IGattReadRequest<D>::Offset() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IGattReadRequest)->get_Offset(&value));
    return value;
}

template <typename D> uint32_t impl_IGattReadRequest<D>::Length() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IGattReadRequest)->get_Length(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState impl_IGattReadRequest<D>::State() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState value {};
    check_hresult(WINRT_SHIM(IGattReadRequest)->get_State(&value));
    return value;
}

template <typename D> event_token impl_IGattReadRequest<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattReadRequest)->add_StateChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattReadRequest> impl_IGattReadRequest<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGattReadRequest>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest::remove_StateChanged, StateChanged(handler));
}

template <typename D> void impl_IGattReadRequest<D>::StateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattReadRequest)->remove_StateChanged(token));
}

template <typename D> void impl_IGattReadRequest<D>::RespondWithValue(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(WINRT_SHIM(IGattReadRequest)->abi_RespondWithValue(get_abi(value)));
}

template <typename D> void impl_IGattReadRequest<D>::RespondWithProtocolError(uint8_t protocolError) const
{
    check_hresult(WINRT_SHIM(IGattReadRequest)->abi_RespondWithProtocolError(protocolError));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IGattWriteRequest<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(WINRT_SHIM(IGattWriteRequest)->get_Value(put_abi(value)));
    return value;
}

template <typename D> uint32_t impl_IGattWriteRequest<D>::Offset() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IGattWriteRequest)->get_Offset(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption impl_IGattWriteRequest<D>::Option() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption value {};
    check_hresult(WINRT_SHIM(IGattWriteRequest)->get_Option(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState impl_IGattWriteRequest<D>::State() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState value {};
    check_hresult(WINRT_SHIM(IGattWriteRequest)->get_State(&value));
    return value;
}

template <typename D> event_token impl_IGattWriteRequest<D>::StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IGattWriteRequest)->add_StateChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IGattWriteRequest> impl_IGattWriteRequest<D>::StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IGattWriteRequest>(this, &ABI::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest::remove_StateChanged, StateChanged(handler));
}

template <typename D> void impl_IGattWriteRequest<D>::StateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IGattWriteRequest)->remove_StateChanged(token));
}

template <typename D> void impl_IGattWriteRequest<D>::Respond() const
{
    check_hresult(WINRT_SHIM(IGattWriteRequest)->abi_Respond());
}

template <typename D> void impl_IGattWriteRequest<D>::RespondWithProtocolError(uint8_t protocolError) const
{
    check_hresult(WINRT_SHIM(IGattWriteRequest)->abi_RespondWithProtocolError(protocolError));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession impl_IGattReadRequestedEventArgs<D>::Session() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession value { nullptr };
    check_hresult(WINRT_SHIM(IGattReadRequestedEventArgs)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IGattReadRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IGattReadRequestedEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> impl_IGattReadRequestedEventArgs<D>::GetRequestAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> operation;
    check_hresult(WINRT_SHIM(IGattReadRequestedEventArgs)->abi_GetRequestAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession impl_IGattWriteRequestedEventArgs<D>::Session() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession value { nullptr };
    check_hresult(WINRT_SHIM(IGattWriteRequestedEventArgs)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IGattWriteRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IGattWriteRequestedEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> impl_IGattWriteRequestedEventArgs<D>::GetRequestAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> operation;
    check_hresult(WINRT_SHIM(IGattWriteRequestedEventArgs)->abi_GetRequestAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState impl_IGattRequestStateChangedEventArgs<D>::State() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState value {};
    check_hresult(WINRT_SHIM(IGattRequestStateChangedEventArgs)->get_State(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError impl_IGattRequestStateChangedEventArgs<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value {};
    check_hresult(WINRT_SHIM(IGattRequestStateChangedEventArgs)->get_Error(&value));
    return value;
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

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> GattDeviceService::FromIdAsync(hstring_view deviceId)
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

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> GattDeviceService::FromIdAsync(hstring_view deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode sharingMode)
{
    return get_activation_factory<GattDeviceService, IGattDeviceServiceStatics2>().FromIdAsync(deviceId, sharingMode);
}

inline hstring GattDeviceService::GetDeviceSelectorForBluetoothDeviceId(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId)
{
    return get_activation_factory<GattDeviceService, IGattDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceId(bluetoothDeviceId);
}

inline hstring GattDeviceService::GetDeviceSelectorForBluetoothDeviceId(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode)
{
    return get_activation_factory<GattDeviceService, IGattDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceId(bluetoothDeviceId, cacheMode);
}

inline hstring GattDeviceService::GetDeviceSelectorForBluetoothDeviceIdAndUuid(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, GUID serviceUuid)
{
    return get_activation_factory<GattDeviceService, IGattDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceIdAndUuid(bluetoothDeviceId, serviceUuid);
}

inline hstring GattDeviceService::GetDeviceSelectorForBluetoothDeviceIdAndUuid(const Windows::Devices::Bluetooth::BluetoothDeviceId & bluetoothDeviceId, GUID serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode cacheMode)
{
    return get_activation_factory<GattDeviceService, IGattDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceIdAndUuid(bluetoothDeviceId, serviceUuid, cacheMode);
}

inline GattLocalCharacteristicParameters::GattLocalCharacteristicParameters() :
    GattLocalCharacteristicParameters(activate_instance<GattLocalCharacteristicParameters>())
{}

inline GattLocalDescriptorParameters::GattLocalDescriptorParameters() :
    GattLocalDescriptorParameters(activate_instance<GattLocalDescriptorParameters>())
{}

inline uint8_t GattPresentationFormat::BluetoothSigAssignedNumbers()
{
    return get_activation_factory<GattPresentationFormat, IGattPresentationFormatStatics>().BluetoothSigAssignedNumbers();
}

inline Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat GattPresentationFormat::FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description)
{
    return get_activation_factory<GattPresentationFormat, IGattPresentationFormatStatics2>().FromParts(formatType, exponent, unit, namespaceId, description);
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

inline uint8_t GattProtocolError::InvalidHandle()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().InvalidHandle();
}

inline uint8_t GattProtocolError::ReadNotPermitted()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().ReadNotPermitted();
}

inline uint8_t GattProtocolError::WriteNotPermitted()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().WriteNotPermitted();
}

inline uint8_t GattProtocolError::InvalidPdu()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().InvalidPdu();
}

inline uint8_t GattProtocolError::InsufficientAuthentication()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().InsufficientAuthentication();
}

inline uint8_t GattProtocolError::RequestNotSupported()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().RequestNotSupported();
}

inline uint8_t GattProtocolError::InvalidOffset()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().InvalidOffset();
}

inline uint8_t GattProtocolError::InsufficientAuthorization()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().InsufficientAuthorization();
}

inline uint8_t GattProtocolError::PrepareQueueFull()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().PrepareQueueFull();
}

inline uint8_t GattProtocolError::AttributeNotFound()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().AttributeNotFound();
}

inline uint8_t GattProtocolError::AttributeNotLong()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().AttributeNotLong();
}

inline uint8_t GattProtocolError::InsufficientEncryptionKeySize()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().InsufficientEncryptionKeySize();
}

inline uint8_t GattProtocolError::InvalidAttributeValueLength()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().InvalidAttributeValueLength();
}

inline uint8_t GattProtocolError::UnlikelyError()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().UnlikelyError();
}

inline uint8_t GattProtocolError::InsufficientEncryption()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().InsufficientEncryption();
}

inline uint8_t GattProtocolError::UnsupportedGroupType()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().UnsupportedGroupType();
}

inline uint8_t GattProtocolError::InsufficientResources()
{
    return get_activation_factory<GattProtocolError, IGattProtocolErrorStatics>().InsufficientResources();
}

inline GattReliableWriteTransaction::GattReliableWriteTransaction() :
    GattReliableWriteTransaction(activate_instance<GattReliableWriteTransaction>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> GattServiceProvider::CreateAsync(GUID serviceUuid)
{
    return get_activation_factory<GattServiceProvider, IGattServiceProviderStatics>().CreateAsync(serviceUuid);
}

inline GattServiceProviderAdvertisingParameters::GattServiceProviderAdvertisingParameters() :
    GattServiceProviderAdvertisingParameters(activate_instance<GattServiceProviderAdvertisingParameters>())
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

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> GattSession::FromDeviceIdAsync(const Windows::Devices::Bluetooth::BluetoothDeviceId & deviceId)
{
    return get_activation_factory<GattSession, IGattSessionStatics>().FromDeviceIdAsync(deviceId);
}

}

}

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult>
{
    size_t operator()(const winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
