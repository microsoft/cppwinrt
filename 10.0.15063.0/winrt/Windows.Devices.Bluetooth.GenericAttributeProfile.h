// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Bluetooth.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.GenericAttributeProfile.2.h"
#include "winrt/Windows.Devices.Bluetooth.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::GetDescriptors(GUID const& descriptorUuid) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->GetDescriptors(get_abi(descriptorUuid), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::CharacteristicProperties() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_CharacteristicProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_ProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->put_ProtectionLevel(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::UserDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_UserDescription(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::Uuid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_Uuid(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::AttributeHandle() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_AttributeHandle(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::PresentationFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->get_PresentationFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ReadValueAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->ReadValueAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->ReadValueWithCacheModeAsync(get_abi(cacheMode), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::WriteValueAsync(Windows::Storage::Streams::IBuffer const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->WriteValueAsync(get_abi(value), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::WriteValueAsync(Windows::Storage::Streams::IBuffer const& value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const& writeOption) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->WriteValueWithOptionAsync(get_abi(value), get_abi(writeOption), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ReadClientCharacteristicConfigurationDescriptorAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->ReadClientCharacteristicConfigurationDescriptorAsync(put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::WriteClientCharacteristicConfigurationDescriptorAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const& clientCharacteristicConfigurationDescriptorValue) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->WriteClientCharacteristicConfigurationDescriptorAsync(get_abi(clientCharacteristicConfigurationDescriptorValue), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> const& valueChangedHandler) const
{
    event_token valueChangedEventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->add_ValueChanged(get_abi(valueChangedHandler), put_abi(valueChangedEventCookie)));
    return valueChangedEventCookie;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> const& valueChangedHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>::remove_ValueChanged, ValueChanged(valueChangedHandler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic<D>::ValueChanged(event_token const& valueChangedEventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic)->remove_ValueChanged(get_abi(valueChangedEventCookie)));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic2<D>::Service() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2)->get_Service(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic2<D>::GetAllDescriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> descriptors{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2)->GetAllDescriptors(put_abi(descriptors)));
    return descriptors;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::GetDescriptorsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->GetDescriptorsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::GetDescriptorsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->GetDescriptorsWithCacheModeAsync(get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::GetDescriptorsForUuidAsync(GUID const& descriptorUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->GetDescriptorsForUuidAsync(get_abi(descriptorUuid), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::GetDescriptorsForUuidAsync(GUID const& descriptorUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->GetDescriptorsForUuidWithCacheModeAsync(get_abi(descriptorUuid), get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->WriteValueWithResultAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer const& value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const& writeOption) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->WriteValueWithResultAndOptionAsync(get_abi(value), get_abi(writeOption), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristic3<D>::WriteClientCharacteristicConfigurationDescriptorWithResultAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const& clientCharacteristicConfigurationDescriptorValue) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3)->WriteClientCharacteristicConfigurationDescriptorWithResultAsync(get_abi(clientCharacteristicConfigurationDescriptorValue), put_abi(operation)));
    return operation;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
{
    GUID characteristicUuid{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics)->ConvertShortIdToUuid(shortId, put_abi(characteristicUuid)));
    return characteristicUuid;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::BatteryLevel() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_BatteryLevel(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::BloodPressureFeature() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_BloodPressureFeature(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::BloodPressureMeasurement() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_BloodPressureMeasurement(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::BodySensorLocation() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_BodySensorLocation(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::CscFeature() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_CscFeature(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::CscMeasurement() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_CscMeasurement(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::GlucoseFeature() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_GlucoseFeature(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::GlucoseMeasurement() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_GlucoseMeasurement(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::GlucoseMeasurementContext() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_GlucoseMeasurementContext(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::HeartRateControlPoint() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_HeartRateControlPoint(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::HeartRateMeasurement() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_HeartRateMeasurement(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::IntermediateCuffPressure() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_IntermediateCuffPressure(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::IntermediateTemperature() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_IntermediateTemperature(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::MeasurementInterval() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_MeasurementInterval(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::RecordAccessControlPoint() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_RecordAccessControlPoint(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::RscFeature() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_RscFeature(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::RscMeasurement() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_RscMeasurement(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::SCControlPoint() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_SCControlPoint(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::SensorLocation() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_SensorLocation(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::TemperatureMeasurement() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_TemperatureMeasurement(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics<D>::TemperatureType() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics)->get_TemperatureType(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertCategoryId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertCategoryId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertCategoryIdBitMask() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertCategoryIdBitMask(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertLevel() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertLevel(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertNotificationControlPoint() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertNotificationControlPoint(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::AlertStatus() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_AlertStatus(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapAppearance() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapAppearance(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::BootKeyboardInputReport() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_BootKeyboardInputReport(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::BootKeyboardOutputReport() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_BootKeyboardOutputReport(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::BootMouseInputReport() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_BootMouseInputReport(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CurrentTime() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CurrentTime(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CyclingPowerControlPoint() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CyclingPowerControlPoint(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CyclingPowerFeature() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CyclingPowerFeature(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CyclingPowerMeasurement() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CyclingPowerMeasurement(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::CyclingPowerVector() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_CyclingPowerVector(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::DateTime() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_DateTime(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::DayDateTime() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_DayDateTime(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::DayOfWeek() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_DayOfWeek(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapDeviceName() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapDeviceName(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::DstOffset() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_DstOffset(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ExactTime256() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ExactTime256(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::FirmwareRevisionString() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_FirmwareRevisionString(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::HardwareRevisionString() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_HardwareRevisionString(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::HidControlPoint() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_HidControlPoint(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::HidInformation() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_HidInformation(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::Ieee1107320601RegulatoryCertificationDataList() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_Ieee1107320601RegulatoryCertificationDataList(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::LnControlPoint() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_LnControlPoint(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::LnFeature() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_LnFeature(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::LocalTimeInformation() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_LocalTimeInformation(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::LocationAndSpeed() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_LocationAndSpeed(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ManufacturerNameString() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ManufacturerNameString(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ModelNumberString() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ModelNumberString(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::Navigation() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_Navigation(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::NewAlert() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_NewAlert(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapPeripheralPreferredConnectionParameters() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapPeripheralPreferredConnectionParameters(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapPeripheralPrivacyFlag() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapPeripheralPrivacyFlag(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::PnpId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_PnpId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::PositionQuality() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_PositionQuality(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ProtocolMode() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ProtocolMode(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GapReconnectionAddress() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GapReconnectionAddress(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ReferenceTimeInformation() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ReferenceTimeInformation(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::Report() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_Report(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ReportMap() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ReportMap(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::RingerControlPoint() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_RingerControlPoint(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::RingerSetting() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_RingerSetting(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ScanIntervalWindow() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ScanIntervalWindow(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::ScanRefresh() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_ScanRefresh(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SerialNumberString() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SerialNumberString(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::GattServiceChanged() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_GattServiceChanged(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SoftwareRevisionString() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SoftwareRevisionString(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SupportedNewAlertCategory() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SupportedNewAlertCategory(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SupportUnreadAlertCategory() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SupportUnreadAlertCategory(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::SystemId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_SystemId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeAccuracy() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeAccuracy(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeSource() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeSource(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeUpdateControlPoint() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeUpdateControlPoint(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeUpdateState() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeUpdateState(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeWithDst() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeWithDst(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TimeZone() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TimeZone(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::TxPowerLevel() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_TxPowerLevel(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicUuidsStatics2<D>::UnreadAlertStatus() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2)->get_UnreadAlertStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicsResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicsResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattCharacteristicsResult<D>::Characteristics() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult)->get_Characteristics(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult<D>::SubscribedClient() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult)->get_SubscribedClient(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattClientNotificationResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::ProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->get_ProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::ProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->put_ProtectionLevel(get_abi(value)));
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::Uuid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->get_Uuid(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::AttributeHandle() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->get_AttributeHandle(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::ReadValueAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->ReadValueAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::ReadValueAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->ReadValueWithCacheModeAsync(get_abi(cacheMode), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor<D>::WriteValueAsync(Windows::Storage::Streams::IBuffer const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor)->WriteValueAsync(get_abi(value), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptor2<D>::WriteValueWithResultAsync(Windows::Storage::Streams::IBuffer const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2)->WriteValueWithResultAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
{
    GUID descriptorUuid{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics)->ConvertShortIdToUuid(shortId, put_abi(descriptorUuid)));
    return descriptorUuid;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::CharacteristicAggregateFormat() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_CharacteristicAggregateFormat(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::CharacteristicExtendedProperties() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_CharacteristicExtendedProperties(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::CharacteristicPresentationFormat() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_CharacteristicPresentationFormat(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::CharacteristicUserDescription() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_CharacteristicUserDescription(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::ClientCharacteristicConfiguration() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_ClientCharacteristicConfiguration(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorUuidsStatics<D>::ServerCharacteristicConfiguration() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics)->get_ServerCharacteristicConfiguration(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorsResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorsResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDescriptorsResult<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult)->get_Descriptors(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::GetCharacteristics(GUID const& characteristicUuid) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->GetCharacteristics(get_abi(characteristicUuid), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::GetIncludedServices(GUID const& serviceUuid) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->GetIncludedServices(get_abi(serviceUuid), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::Uuid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->get_Uuid(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService<D>::AttributeHandle() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService)->get_AttributeHandle(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothLEDevice consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2<D>::Device() const
{
    Windows::Devices::Bluetooth::BluetoothLEDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2<D>::ParentServices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2)->get_ParentServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2<D>::GetAllCharacteristics() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> characteristics{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2)->GetAllCharacteristics(put_abi(characteristics)));
    return characteristics;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService2<D>::GetAllIncludedServices() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> includedServices{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2)->GetAllIncludedServices(put_abi(includedServices)));
    return includedServices;
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessInformation consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::DeviceAccessInformation() const
{
    Windows::Devices::Enumeration::DeviceAccessInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->get_DeviceAccessInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::Session() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::SharingMode() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->get_SharingMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->RequestAccessAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::OpenAsync(Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattOpenStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->OpenAsync(get_abi(sharingMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetCharacteristicsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetCharacteristicsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetCharacteristicsAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetCharacteristicsWithCacheModeAsync(get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetCharacteristicsForUuidAsync(GUID const& characteristicUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetCharacteristicsForUuidAsync(get_abi(characteristicUuid), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetCharacteristicsForUuidAsync(GUID const& characteristicUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetCharacteristicsForUuidWithCacheModeAsync(get_abi(characteristicUuid), get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetIncludedServicesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetIncludedServicesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetIncludedServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetIncludedServicesWithCacheModeAsync(get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetIncludedServicesForUuidAsync(GUID const& serviceUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetIncludedServicesForUuidAsync(get_abi(serviceUuid), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceService3<D>::GetIncludedServicesForUuidAsync(GUID const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3)->GetIncludedServicesForUuidWithCacheModeAsync(get_abi(serviceUuid), get_abi(cacheMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics)->FromIdAsync(get_abi(deviceId), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics<D>::GetDeviceSelectorFromUuid(GUID const& serviceUuid) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics)->GetDeviceSelectorFromUuid(get_abi(serviceUuid), put_abi(selector)));
    return selector;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics<D>::GetDeviceSelectorFromShortId(uint16_t serviceShortId) const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics)->GetDeviceSelectorFromShortId(serviceShortId, put_abi(selector)));
    return selector;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics<D>::ConvertShortIdToUuid(uint16_t shortId) const
{
    GUID serviceUuid{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics)->ConvertShortIdToUuid(shortId, put_abi(serviceUuid)));
    return serviceUuid;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::FromIdAsync(param::hstring const& deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->FromIdWithSharingModeAsync(get_abi(deviceId), get_abi(sharingMode), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceId(get_abi(bluetoothDeviceId), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceIdWithCacheMode(get_abi(bluetoothDeviceId), get_abi(cacheMode), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, GUID const& serviceUuid) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceIdAndUuid(get_abi(bluetoothDeviceId), get_abi(serviceUuid), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServiceStatics2<D>::GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, GUID const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2)->GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode(get_abi(bluetoothDeviceId), get_abi(serviceUuid), get_abi(cacheMode), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServicesResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServicesResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattDeviceServicesResult<D>::Services() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult)->get_Services(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::Uuid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_Uuid(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::StaticValue() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_StaticValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::CharacteristicProperties() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_CharacteristicProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::ReadProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_ReadProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::WriteProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_WriteProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::CreateDescriptorAsync(GUID const& descriptorUuid, Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters const& parameters) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->CreateDescriptorAsync(get_abi(descriptorUuid), get_abi(parameters), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_Descriptors(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::UserDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_UserDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::PresentationFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_PresentationFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::SubscribedClients() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->get_SubscribedClients(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::SubscribedClientsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->add_SubscribedClientsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::SubscribedClientsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>::remove_SubscribedClientsChanged, SubscribedClientsChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::SubscribedClientsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->remove_SubscribedClientsChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::ReadRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->add_ReadRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::ReadRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>::remove_ReadRequested, ReadRequested(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::ReadRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->remove_ReadRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::WriteRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->add_WriteRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::WriteRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic>::remove_WriteRequested, WriteRequested(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::WriteRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->remove_WriteRequested(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::NotifyValueAsync(Windows::Storage::Streams::IBuffer const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->NotifyValueAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristic<D>::NotifyValueAsync(Windows::Storage::Streams::IBuffer const& value, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient const& subscribedClient) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic)->NotifyValueForSubscribedClientAsync(get_abi(value), get_abi(subscribedClient), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::StaticValue(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_StaticValue(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::StaticValue() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_StaticValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::CharacteristicProperties(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_CharacteristicProperties(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::CharacteristicProperties() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_CharacteristicProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_ReadProtectionLevel(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::ReadProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_ReadProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_WriteProtectionLevel(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::WriteProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_WriteProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::UserDescription(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->put_UserDescription(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::UserDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_UserDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicParameters<D>::PresentationFormats() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters)->get_PresentationFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicResult<D>::Characteristic() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult)->get_Characteristic(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalCharacteristicResult<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult)->get_Error(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::Uuid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->get_Uuid(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::StaticValue() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->get_StaticValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::ReadProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->get_ReadProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::WriteProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->get_WriteProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::ReadRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->add_ReadRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::ReadRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>::remove_ReadRequested, ReadRequested(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::ReadRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->remove_ReadRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::WriteRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->add_WriteRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::WriteRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor>::remove_WriteRequested, WriteRequested(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptor<D>::WriteRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor)->remove_WriteRequested(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::StaticValue(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->put_StaticValue(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::StaticValue() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->get_StaticValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::ReadProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->put_ReadProtectionLevel(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::ReadProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->get_ReadProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::WriteProtectionLevel(Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->put_WriteProtectionLevel(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorParameters<D>::WriteProtectionLevel() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters)->get_WriteProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorResult<D>::Descriptor() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult)->get_Descriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalDescriptorResult<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult)->get_Error(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalService<D>::Uuid() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService)->get_Uuid(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalService<D>::CreateCharacteristicAsync(GUID const& characteristicUuid, Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters const& parameters) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService)->CreateCharacteristicAsync(get_abi(characteristicUuid), get_abi(parameters), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattLocalService<D>::Characteristics() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService)->get_Characteristics(put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::FormatType() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_FormatType(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::Exponent() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_Exponent(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::Unit() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_Unit(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::Namespace() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_Namespace(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormat<D>::Description() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat)->get_Description(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics<D>::BluetoothSigAssignedNumbers() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics)->get_BluetoothSigAssignedNumbers(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatStatics2<D>::FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description) const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2)->FromParts(formatType, exponent, unit, namespaceId, description, put_abi(result)));
    return result;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Boolean() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Boolean(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Bit2() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Bit2(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Nibble() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Nibble(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt8() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt8(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt12() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt12(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt16() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt16(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt24() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt24(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt32() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt32(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt48() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt48(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt64() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt64(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::UInt128() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_UInt128(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt8() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt8(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt12() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt12(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt16() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt16(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt24() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt24(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt32() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt32(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt48() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt48(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt64() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt64(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SInt128() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SInt128(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Float32() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Float32(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Float64() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Float64(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::SFloat() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_SFloat(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Float() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Float(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::DUInt16() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_DUInt16(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Utf8() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Utf8(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Utf16() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Utf16(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattPresentationFormatTypesStatics<D>::Struct() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics)->get_Struct(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InvalidHandle() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InvalidHandle(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::ReadNotPermitted() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_ReadNotPermitted(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::WriteNotPermitted() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_WriteNotPermitted(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InvalidPdu() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InvalidPdu(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientAuthentication() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientAuthentication(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::RequestNotSupported() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_RequestNotSupported(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InvalidOffset() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InvalidOffset(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientAuthorization() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientAuthorization(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::PrepareQueueFull() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_PrepareQueueFull(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::AttributeNotFound() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_AttributeNotFound(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::AttributeNotLong() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_AttributeNotLong(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientEncryptionKeySize() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientEncryptionKeySize(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InvalidAttributeValueLength() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InvalidAttributeValueLength(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::UnlikelyError() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_UnlikelyError(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientEncryption() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientEncryption(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::UnsupportedGroupType() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_UnsupportedGroupType(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattProtocolErrorStatics<D>::InsufficientResources() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics)->get_InsufficientResources(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult<D>::ClientCharacteristicConfigurationDescriptor() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult)->get_ClientCharacteristicConfigurationDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadClientCharacteristicConfigurationDescriptorResult2<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::Offset() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->get_Offset(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->get_Length(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::State() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->get_State(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->add_StateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest>::remove_StateChanged, StateChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::StateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->remove_StateChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::RespondWithValue(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->RespondWithValue(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequest<D>::RespondWithProtocolError(uint8_t protocolError) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest)->RespondWithProtocolError(protocolError));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequestedEventArgs<D>::Session() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadRequestedEventArgs<D>::GetRequestAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs)->GetRequestAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReadResult2<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction<D>::WriteValue(Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction)->WriteValue(get_abi(characteristic), get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction<D>::CommitAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction)->CommitAsync(put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattReliableWriteTransaction2<D>::CommitWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2)->CommitWithResultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattRequestStateChangedEventArgs<D>::State() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattRequestStateChangedEventArgs<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::Service() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->get_Service(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::AdvertisementStatus() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->get_AdvertisementStatus(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::AdvertisementStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->add_AdvertisementStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::AdvertisementStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider>::remove_AdvertisementStatusChanged, AdvertisementStatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::AdvertisementStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->remove_AdvertisementStatusChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::StartAdvertising() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->StartAdvertising());
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::StartAdvertising(Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const& parameters) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->StartAdvertisingWithParameters(get_abi(parameters)));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProvider<D>::StopAdvertising() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider)->StopAdvertising());
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisementStatusChangedEventArgs<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisementStatusChangedEventArgs<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters<D>::IsConnectable(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters)->put_IsConnectable(value));
}

template <typename D> bool consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters<D>::IsConnectable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters)->get_IsConnectable(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters<D>::IsDiscoverable(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters)->put_IsDiscoverable(value));
}

template <typename D> bool consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderAdvertisingParameters<D>::IsDiscoverable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters)->get_IsDiscoverable(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderResult<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderResult<D>::ServiceProvider() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult)->get_ServiceProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceProviderStatics<D>::CreateAsync(GUID const& serviceUuid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics)->CreateAsync(get_abi(serviceUuid), put_abi(operation)));
    return operation;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::Battery() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_Battery(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::BloodPressure() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_BloodPressure(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::CyclingSpeedAndCadence() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_CyclingSpeedAndCadence(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::GenericAccess() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_GenericAccess(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::GenericAttribute() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_GenericAttribute(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::Glucose() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_Glucose(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::HealthThermometer() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_HealthThermometer(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::HeartRate() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_HeartRate(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics<D>::RunningSpeedAndCadence() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics)->get_RunningSpeedAndCadence(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::AlertNotification() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_AlertNotification(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::CurrentTime() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_CurrentTime(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::CyclingPower() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_CyclingPower(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::DeviceInformation() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::HumanInterfaceDevice() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_HumanInterfaceDevice(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::ImmediateAlert() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_ImmediateAlert(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::LinkLoss() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_LinkLoss(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::LocationAndNavigation() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_LocationAndNavigation(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::NextDstChange() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_NextDstChange(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::PhoneAlertStatus() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_PhoneAlertStatus(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::ReferenceTimeUpdate() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_ReferenceTimeUpdate(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::ScanParameters() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_ScanParameters(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattServiceUuidsStatics2<D>::TxPower() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2)->get_TxPower(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothDeviceId consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::DeviceId() const
{
    Windows::Devices::Bluetooth::BluetoothDeviceId value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::CanMaintainConnection() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_CanMaintainConnection(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaintainConnection(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->put_MaintainConnection(value));
}

template <typename D> bool consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaintainConnection() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_MaintainConnection(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaxPduSize() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_MaxPduSize(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::SessionStatus() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->get_SessionStatus(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaxPduSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->add_MaxPduSizeChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaxPduSizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>::remove_MaxPduSizeChanged, MaxPduSizeChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::MaxPduSizeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->remove_MaxPduSizeChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::SessionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->add_SessionStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::SessionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession>::remove_SessionStatusChanged, SessionStatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSession<D>::SessionStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession)->remove_SessionStatusChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatics<D>::FromDeviceIdAsync(Windows::Devices::Bluetooth::BluetoothDeviceId const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics)->FromDeviceIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatusChangedEventArgs<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSessionStatusChangedEventArgs<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::Session() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient)->get_Session(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::MaxNotificationSize() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient)->get_MaxNotificationSize(&value));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::MaxNotificationSizeChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient)->add_MaxNotificationSizeChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::MaxNotificationSizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient>::remove_MaxNotificationSizeChanged, MaxNotificationSizeChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattSubscribedClient<D>::MaxNotificationSizeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient)->remove_MaxNotificationSizeChanged(get_abi(token)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattValueChangedEventArgs<D>::CharacteristicValue() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs)->get_CharacteristicValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattValueChangedEventArgs<D>::Timestamp() const
{
    Windows::Foundation::DateTime timestamp{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs)->get_Timestamp(put_abi(timestamp)));
    return timestamp;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->get_Value(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::Offset() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->get_Offset(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::Option() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->get_Option(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::State() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->get_State(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->add_StateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>(this, &abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest>::remove_StateChanged, StateChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::StateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->remove_StateChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::Respond() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->Respond());
}

template <typename D> void consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequest<D>::RespondWithProtocolError(uint8_t protocolError) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest)->RespondWithProtocolError(protocolError));
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequestedEventArgs<D>::Session() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteRequestedEventArgs<D>::GetRequestAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs)->GetRequestAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteResult<D>::Status() const
{
    Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Devices_Bluetooth_GenericAttributeProfile_IGattWriteResult<D>::ProtocolError() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult)->get_ProtocolError(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> : produce_base<D, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>
{
    HRESULT __stdcall GetDescriptors(abi_t<GUID> descriptorUuid, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDescriptors(*reinterpret_cast<GUID const*>(&descriptorUuid)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacteristicProperties(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties>* value) noexcept override
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

    HRESULT __stdcall get_ProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall put_ProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDescription(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_Uuid(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_AttributeHandle(uint16_t* value) noexcept override
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

    HRESULT __stdcall get_PresentationFormats(::IUnknown** value) noexcept override
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

    HRESULT __stdcall ReadValueAsync(::IUnknown** value) noexcept override
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

    HRESULT __stdcall ReadValueWithCacheModeAsync(abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadValueAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteValueAsync(::IUnknown* value, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().WriteValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteValueWithOptionAsync(::IUnknown* value, abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption> writeOption, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().WriteValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const*>(&writeOption)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadClientCharacteristicConfigurationDescriptorAsync(::IUnknown** asyncOp) noexcept override
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

    HRESULT __stdcall WriteClientCharacteristicConfigurationDescriptorAsync(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue> clientCharacteristicConfigurationDescriptorValue, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().WriteClientCharacteristicConfigurationDescriptorAsync(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const*>(&clientCharacteristicConfigurationDescriptorValue)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ValueChanged(::IUnknown* valueChangedHandler, abi_t<event_token>* valueChangedEventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *valueChangedEventCookie = detach_abi(this->shim().ValueChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> const*>(&valueChangedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueChanged(abi_t<event_token> valueChangedEventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValueChanged(*reinterpret_cast<event_token const*>(&valueChangedEventCookie));
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
    HRESULT __stdcall get_Service(::IUnknown** value) noexcept override
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

    HRESULT __stdcall GetAllDescriptors(::IUnknown** descriptors) noexcept override
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
    HRESULT __stdcall GetDescriptorsAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall GetDescriptorsWithCacheModeAsync(abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDescriptorsAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDescriptorsForUuidAsync(abi_t<GUID> descriptorUuid, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDescriptorsForUuidAsync(*reinterpret_cast<GUID const*>(&descriptorUuid)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDescriptorsForUuidWithCacheModeAsync(abi_t<GUID> descriptorUuid, abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDescriptorsForUuidAsync(*reinterpret_cast<GUID const*>(&descriptorUuid), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteValueWithResultAsync(::IUnknown* value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteValueWithResultAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteValueWithResultAndOptionAsync(::IUnknown* value, abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption> writeOption, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteValueWithResultAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption const*>(&writeOption)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteClientCharacteristicConfigurationDescriptorWithResultAsync(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue> clientCharacteristicConfigurationDescriptorValue, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteClientCharacteristicConfigurationDescriptorWithResultAsync(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue const*>(&clientCharacteristicConfigurationDescriptorValue)));
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
    HRESULT __stdcall ConvertShortIdToUuid(uint16_t shortId, abi_t<GUID>* characteristicUuid) noexcept override
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
    HRESULT __stdcall get_BatteryLevel(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_BloodPressureFeature(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_BloodPressureMeasurement(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_BodySensorLocation(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CscFeature(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CscMeasurement(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GlucoseFeature(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GlucoseMeasurement(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GlucoseMeasurementContext(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_HeartRateControlPoint(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_HeartRateMeasurement(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_IntermediateCuffPressure(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_IntermediateTemperature(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_MeasurementInterval(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_RecordAccessControlPoint(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_RscFeature(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_RscMeasurement(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_SCControlPoint(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_SensorLocation(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TemperatureMeasurement(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TemperatureType(abi_t<GUID>* value) noexcept override
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
    HRESULT __stdcall get_AlertCategoryId(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_AlertCategoryIdBitMask(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_AlertLevel(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_AlertNotificationControlPoint(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_AlertStatus(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GapAppearance(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_BootKeyboardInputReport(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_BootKeyboardOutputReport(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_BootMouseInputReport(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CurrentTime(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CyclingPowerControlPoint(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CyclingPowerFeature(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CyclingPowerMeasurement(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CyclingPowerVector(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_DateTime(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_DayDateTime(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_DayOfWeek(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GapDeviceName(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_DstOffset(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ExactTime256(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_FirmwareRevisionString(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_HardwareRevisionString(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_HidControlPoint(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_HidInformation(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_Ieee1107320601RegulatoryCertificationDataList(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_LnControlPoint(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_LnFeature(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_LocalTimeInformation(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_LocationAndSpeed(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ManufacturerNameString(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ModelNumberString(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_Navigation(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_NewAlert(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GapPeripheralPreferredConnectionParameters(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GapPeripheralPrivacyFlag(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_PnpId(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_PositionQuality(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ProtocolMode(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GapReconnectionAddress(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ReferenceTimeInformation(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_Report(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ReportMap(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_RingerControlPoint(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_RingerSetting(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ScanIntervalWindow(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ScanRefresh(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_SerialNumberString(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GattServiceChanged(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_SoftwareRevisionString(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_SupportedNewAlertCategory(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_SupportUnreadAlertCategory(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_SystemId(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TimeAccuracy(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TimeSource(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TimeUpdateControlPoint(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TimeUpdateState(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TimeWithDst(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TimeZone(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TxPowerLevel(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_UnreadAlertStatus(abi_t<GUID>* value) noexcept override
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
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>* value) noexcept override
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

    HRESULT __stdcall get_ProtocolError(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Characteristics(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_SubscribedClient(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>* value) noexcept override
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

    HRESULT __stdcall get_ProtocolError(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_ProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall put_ProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uuid(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_AttributeHandle(uint16_t* value) noexcept override
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

    HRESULT __stdcall ReadValueAsync(::IUnknown** value) noexcept override
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

    HRESULT __stdcall ReadValueWithCacheModeAsync(abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadValueAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WriteValueAsync(::IUnknown* value, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().WriteValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
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
    HRESULT __stdcall WriteValueWithResultAsync(::IUnknown* value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().WriteValueWithResultAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
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
    HRESULT __stdcall ConvertShortIdToUuid(uint16_t shortId, abi_t<GUID>* descriptorUuid) noexcept override
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
    HRESULT __stdcall get_CharacteristicAggregateFormat(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CharacteristicExtendedProperties(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CharacteristicPresentationFormat(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CharacteristicUserDescription(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ClientCharacteristicConfiguration(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ServerCharacteristicConfiguration(abi_t<GUID>* value) noexcept override
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
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>* value) noexcept override
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

    HRESULT __stdcall get_ProtocolError(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Descriptors(::IUnknown** value) noexcept override
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
    HRESULT __stdcall GetCharacteristics(abi_t<GUID> characteristicUuid, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCharacteristics(*reinterpret_cast<GUID const*>(&characteristicUuid)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIncludedServices(abi_t<GUID> serviceUuid, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetIncludedServices(*reinterpret_cast<GUID const*>(&serviceUuid)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_Uuid(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_AttributeHandle(uint16_t* value) noexcept override
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
    HRESULT __stdcall get_Device(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_ParentServices(::IUnknown** value) noexcept override
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

    HRESULT __stdcall GetAllCharacteristics(::IUnknown** characteristics) noexcept override
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

    HRESULT __stdcall GetAllIncludedServices(::IUnknown** includedServices) noexcept override
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
    HRESULT __stdcall get_DeviceAccessInformation(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode>* value) noexcept override
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

    HRESULT __stdcall RequestAccessAsync(::IUnknown** value) noexcept override
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

    HRESULT __stdcall OpenAsync(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode> sharingMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().OpenAsync(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const*>(&sharingMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCharacteristicsAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall GetCharacteristicsWithCacheModeAsync(abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCharacteristicsAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCharacteristicsForUuidAsync(abi_t<GUID> characteristicUuid, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCharacteristicsForUuidAsync(*reinterpret_cast<GUID const*>(&characteristicUuid)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCharacteristicsForUuidWithCacheModeAsync(abi_t<GUID> characteristicUuid, abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCharacteristicsForUuidAsync(*reinterpret_cast<GUID const*>(&characteristicUuid), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIncludedServicesAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall GetIncludedServicesWithCacheModeAsync(abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIncludedServicesAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIncludedServicesForUuidAsync(abi_t<GUID> serviceUuid, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIncludedServicesForUuidAsync(*reinterpret_cast<GUID const*>(&serviceUuid)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIncludedServicesForUuidWithCacheModeAsync(abi_t<GUID> serviceUuid, abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetIncludedServicesForUuidAsync(*reinterpret_cast<GUID const*>(&serviceUuid), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
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
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromUuid(abi_t<GUID> serviceUuid, HSTRING* selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelectorFromUuid(*reinterpret_cast<GUID const*>(&serviceUuid)));
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromShortId(uint16_t serviceShortId, HSTRING* selector) noexcept override
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

    HRESULT __stdcall ConvertShortIdToUuid(uint16_t shortId, abi_t<GUID>* serviceUuid) noexcept override
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
    HRESULT __stdcall FromIdWithSharingModeAsync(HSTRING deviceId, abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode> sharingMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const*>(&sharingMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceId(::IUnknown* bluetoothDeviceId, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceId(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&bluetoothDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceIdWithCacheMode(::IUnknown* bluetoothDeviceId, abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceId(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&bluetoothDeviceId), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceIdAndUuid(::IUnknown* bluetoothDeviceId, abi_t<GUID> serviceUuid, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceIdAndUuid(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&bluetoothDeviceId), *reinterpret_cast<GUID const*>(&serviceUuid)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceIdAndUuidWithCacheMode(::IUnknown* bluetoothDeviceId, abi_t<GUID> serviceUuid, abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelectorForBluetoothDeviceIdAndUuid(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&bluetoothDeviceId), *reinterpret_cast<GUID const*>(&serviceUuid), *reinterpret_cast<Windows::Devices::Bluetooth::BluetoothCacheMode const*>(&cacheMode)));
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
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>* value) noexcept override
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

    HRESULT __stdcall get_ProtocolError(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Services(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Uuid(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_StaticValue(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_CharacteristicProperties(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties>* value) noexcept override
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

    HRESULT __stdcall get_ReadProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall get_WriteProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall CreateDescriptorAsync(abi_t<GUID> descriptorUuid, ::IUnknown* parameters, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateDescriptorAsync(*reinterpret_cast<GUID const*>(&descriptorUuid), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters const*>(&parameters)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptors(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_UserDescription(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_PresentationFormats(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_SubscribedClients(::IUnknown** value) noexcept override
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

    HRESULT __stdcall add_SubscribedClientsChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SubscribedClientsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SubscribedClientsChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubscribedClientsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ReadRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WriteRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().WriteRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WriteRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyValueAsync(::IUnknown* value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().NotifyValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyValueForSubscribedClientAsync(::IUnknown* value, ::IUnknown* subscribedClient, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().NotifyValueAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient const*>(&subscribedClient)));
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
    HRESULT __stdcall put_StaticValue(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StaticValue(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StaticValue(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_CharacteristicProperties(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacteristicProperties(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacteristicProperties(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicProperties>* value) noexcept override
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

    HRESULT __stdcall put_ReadProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall put_WriteProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall put_UserDescription(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserDescription(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDescription(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_PresentationFormats(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Characteristic(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) noexcept override
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
    HRESULT __stdcall get_Uuid(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_StaticValue(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_ReadProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall get_WriteProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall add_ReadRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ReadRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ReadRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_WriteRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().WriteRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_WriteRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteRequested(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall put_StaticValue(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StaticValue(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StaticValue(::IUnknown** value) noexcept override
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

    HRESULT __stdcall put_ReadProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall put_WriteProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteProtectionLevel(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteProtectionLevel(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtectionLevel>* value) noexcept override
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
    HRESULT __stdcall get_Descriptor(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) noexcept override
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
    HRESULT __stdcall get_Uuid(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall CreateCharacteristicAsync(abi_t<GUID> characteristicUuid, ::IUnknown* parameters, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateCharacteristicAsync(*reinterpret_cast<GUID const*>(&characteristicUuid), *reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters const*>(&parameters)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Characteristics(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_FormatType(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Exponent(int32_t* value) noexcept override
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

    HRESULT __stdcall get_Unit(uint16_t* value) noexcept override
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

    HRESULT __stdcall get_Namespace(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Description(uint16_t* value) noexcept override
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
    HRESULT __stdcall get_BluetoothSigAssignedNumbers(uint8_t* value) noexcept override
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
    HRESULT __stdcall FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description, ::IUnknown** result) noexcept override
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
    HRESULT __stdcall get_Boolean(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Bit2(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Nibble(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UInt8(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UInt12(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UInt16(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UInt24(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UInt32(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UInt48(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UInt64(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UInt128(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SInt8(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SInt12(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SInt16(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SInt24(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SInt32(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SInt48(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SInt64(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SInt128(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Float32(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Float64(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SFloat(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Float(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_DUInt16(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Utf8(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Utf16(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_Struct(uint8_t* value) noexcept override
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
    HRESULT __stdcall get_InvalidHandle(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_ReadNotPermitted(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_WriteNotPermitted(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_InvalidPdu(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_InsufficientAuthentication(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_RequestNotSupported(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_InvalidOffset(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_InsufficientAuthorization(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_PrepareQueueFull(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_AttributeNotFound(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_AttributeNotLong(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_InsufficientEncryptionKeySize(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_InvalidAttributeValueLength(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UnlikelyError(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_InsufficientEncryption(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_UnsupportedGroupType(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_InsufficientResources(uint8_t* value) noexcept override
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
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>* value) noexcept override
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

    HRESULT __stdcall get_ClientCharacteristicConfigurationDescriptor(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientCharacteristicConfigurationDescriptorValue>* value) noexcept override
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
    HRESULT __stdcall get_ProtocolError(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_Offset(uint32_t* value) noexcept override
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

    HRESULT __stdcall get_Length(uint32_t* value) noexcept override
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

    HRESULT __stdcall get_State(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState>* value) noexcept override
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

    HRESULT __stdcall add_StateChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RespondWithValue(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RespondWithValue(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RespondWithProtocolError(uint8_t protocolError) noexcept override
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
    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
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

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
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

    HRESULT __stdcall GetRequestAsync(::IUnknown** operation) noexcept override
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
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>* value) noexcept override
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

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_ProtocolError(::IUnknown** value) noexcept override
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
    HRESULT __stdcall WriteValue(::IUnknown* characteristic, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteValue(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const*>(&characteristic), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CommitAsync(::IUnknown** asyncOp) noexcept override
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
    HRESULT __stdcall CommitWithResultAsync(::IUnknown** operation) noexcept override
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
    HRESULT __stdcall get_State(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState>* value) noexcept override
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

    HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) noexcept override
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
    HRESULT __stdcall get_Service(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_AdvertisementStatus(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus>* value) noexcept override
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

    HRESULT __stdcall add_AdvertisementStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AdvertisementStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AdvertisementStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvertisementStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAdvertising() noexcept override
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

    HRESULT __stdcall StartAdvertisingWithParameters(::IUnknown* parameters) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAdvertising(*reinterpret_cast<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const*>(&parameters));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAdvertising() noexcept override
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
    HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) noexcept override
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

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatus>* value) noexcept override
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

    HRESULT __stdcall get_IsConnectable(bool* value) noexcept override
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

    HRESULT __stdcall get_IsDiscoverable(bool* value) noexcept override
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
    HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) noexcept override
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

    HRESULT __stdcall get_ServiceProvider(::IUnknown** value) noexcept override
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
    HRESULT __stdcall CreateAsync(abi_t<GUID> serviceUuid, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateAsync(*reinterpret_cast<GUID const*>(&serviceUuid)));
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
    HRESULT __stdcall get_Battery(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_BloodPressure(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CyclingSpeedAndCadence(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GenericAccess(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_GenericAttribute(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_Glucose(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_HealthThermometer(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_HeartRate(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_RunningSpeedAndCadence(abi_t<GUID>* value) noexcept override
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
    HRESULT __stdcall get_AlertNotification(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CurrentTime(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_CyclingPower(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_DeviceInformation(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_HumanInterfaceDevice(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ImmediateAlert(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_LinkLoss(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_LocationAndNavigation(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_NextDstChange(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_PhoneAlertStatus(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ReferenceTimeUpdate(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_ScanParameters(abi_t<GUID>* value) noexcept override
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

    HRESULT __stdcall get_TxPower(abi_t<GUID>* value) noexcept override
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
    HRESULT __stdcall get_DeviceId(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_CanMaintainConnection(bool* value) noexcept override
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

    HRESULT __stdcall get_MaintainConnection(bool* value) noexcept override
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

    HRESULT __stdcall get_MaxPduSize(uint16_t* value) noexcept override
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

    HRESULT __stdcall get_SessionStatus(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus>* value) noexcept override
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

    HRESULT __stdcall add_MaxPduSizeChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MaxPduSizeChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MaxPduSizeChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPduSizeChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SessionStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SessionStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionStatusChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall FromDeviceIdAsync(::IUnknown* deviceId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromDeviceIdAsync(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothDeviceId const*>(&deviceId)));
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
    HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) noexcept override
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

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatus>* value) noexcept override
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
    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_MaxNotificationSize(uint16_t* value) noexcept override
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

    HRESULT __stdcall add_MaxNotificationSizeChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MaxNotificationSizeChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MaxNotificationSizeChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxNotificationSizeChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall get_CharacteristicValue(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* timestamp) noexcept override
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
    HRESULT __stdcall get_Value(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_Offset(uint32_t* value) noexcept override
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

    HRESULT __stdcall get_Option(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteOption>* value) noexcept override
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

    HRESULT __stdcall get_State(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestState>* value) noexcept override
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

    HRESULT __stdcall add_StateChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest, Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Respond() noexcept override
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

    HRESULT __stdcall RespondWithProtocolError(uint8_t protocolError) noexcept override
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
    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
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

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
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

    HRESULT __stdcall GetRequestAsync(::IUnknown** operation) noexcept override
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
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::GenericAttributeProfile::GattCommunicationStatus>* value) noexcept override
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

    HRESULT __stdcall get_ProtocolError(::IUnknown** value) noexcept override
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

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile {

inline GUID GattCharacteristic::ConvertShortIdToUuid(uint16_t shortId)
{
    return get_activation_factory<GattCharacteristic, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics>().ConvertShortIdToUuid(shortId);
}

inline GUID GattCharacteristicUuids::BatteryLevel()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().BatteryLevel();
}

inline GUID GattCharacteristicUuids::BloodPressureFeature()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().BloodPressureFeature();
}

inline GUID GattCharacteristicUuids::BloodPressureMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().BloodPressureMeasurement();
}

inline GUID GattCharacteristicUuids::BodySensorLocation()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().BodySensorLocation();
}

inline GUID GattCharacteristicUuids::CscFeature()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().CscFeature();
}

inline GUID GattCharacteristicUuids::CscMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().CscMeasurement();
}

inline GUID GattCharacteristicUuids::GlucoseFeature()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().GlucoseFeature();
}

inline GUID GattCharacteristicUuids::GlucoseMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().GlucoseMeasurement();
}

inline GUID GattCharacteristicUuids::GlucoseMeasurementContext()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().GlucoseMeasurementContext();
}

inline GUID GattCharacteristicUuids::HeartRateControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().HeartRateControlPoint();
}

inline GUID GattCharacteristicUuids::HeartRateMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().HeartRateMeasurement();
}

inline GUID GattCharacteristicUuids::IntermediateCuffPressure()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().IntermediateCuffPressure();
}

inline GUID GattCharacteristicUuids::IntermediateTemperature()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().IntermediateTemperature();
}

inline GUID GattCharacteristicUuids::MeasurementInterval()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().MeasurementInterval();
}

inline GUID GattCharacteristicUuids::RecordAccessControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().RecordAccessControlPoint();
}

inline GUID GattCharacteristicUuids::RscFeature()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().RscFeature();
}

inline GUID GattCharacteristicUuids::RscMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().RscMeasurement();
}

inline GUID GattCharacteristicUuids::SCControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().SCControlPoint();
}

inline GUID GattCharacteristicUuids::SensorLocation()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().SensorLocation();
}

inline GUID GattCharacteristicUuids::TemperatureMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().TemperatureMeasurement();
}

inline GUID GattCharacteristicUuids::TemperatureType()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics>().TemperatureType();
}

inline GUID GattCharacteristicUuids::AlertCategoryId()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().AlertCategoryId();
}

inline GUID GattCharacteristicUuids::AlertCategoryIdBitMask()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().AlertCategoryIdBitMask();
}

inline GUID GattCharacteristicUuids::AlertLevel()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().AlertLevel();
}

inline GUID GattCharacteristicUuids::AlertNotificationControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().AlertNotificationControlPoint();
}

inline GUID GattCharacteristicUuids::AlertStatus()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().AlertStatus();
}

inline GUID GattCharacteristicUuids::GapAppearance()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().GapAppearance();
}

inline GUID GattCharacteristicUuids::BootKeyboardInputReport()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().BootKeyboardInputReport();
}

inline GUID GattCharacteristicUuids::BootKeyboardOutputReport()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().BootKeyboardOutputReport();
}

inline GUID GattCharacteristicUuids::BootMouseInputReport()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().BootMouseInputReport();
}

inline GUID GattCharacteristicUuids::CurrentTime()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().CurrentTime();
}

inline GUID GattCharacteristicUuids::CyclingPowerControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().CyclingPowerControlPoint();
}

inline GUID GattCharacteristicUuids::CyclingPowerFeature()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().CyclingPowerFeature();
}

inline GUID GattCharacteristicUuids::CyclingPowerMeasurement()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().CyclingPowerMeasurement();
}

inline GUID GattCharacteristicUuids::CyclingPowerVector()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().CyclingPowerVector();
}

inline GUID GattCharacteristicUuids::DateTime()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().DateTime();
}

inline GUID GattCharacteristicUuids::DayDateTime()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().DayDateTime();
}

inline GUID GattCharacteristicUuids::DayOfWeek()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().DayOfWeek();
}

inline GUID GattCharacteristicUuids::GapDeviceName()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().GapDeviceName();
}

inline GUID GattCharacteristicUuids::DstOffset()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().DstOffset();
}

inline GUID GattCharacteristicUuids::ExactTime256()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().ExactTime256();
}

inline GUID GattCharacteristicUuids::FirmwareRevisionString()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().FirmwareRevisionString();
}

inline GUID GattCharacteristicUuids::HardwareRevisionString()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().HardwareRevisionString();
}

inline GUID GattCharacteristicUuids::HidControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().HidControlPoint();
}

inline GUID GattCharacteristicUuids::HidInformation()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().HidInformation();
}

inline GUID GattCharacteristicUuids::Ieee1107320601RegulatoryCertificationDataList()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().Ieee1107320601RegulatoryCertificationDataList();
}

inline GUID GattCharacteristicUuids::LnControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().LnControlPoint();
}

inline GUID GattCharacteristicUuids::LnFeature()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().LnFeature();
}

inline GUID GattCharacteristicUuids::LocalTimeInformation()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().LocalTimeInformation();
}

inline GUID GattCharacteristicUuids::LocationAndSpeed()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().LocationAndSpeed();
}

inline GUID GattCharacteristicUuids::ManufacturerNameString()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().ManufacturerNameString();
}

inline GUID GattCharacteristicUuids::ModelNumberString()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().ModelNumberString();
}

inline GUID GattCharacteristicUuids::Navigation()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().Navigation();
}

inline GUID GattCharacteristicUuids::NewAlert()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().NewAlert();
}

inline GUID GattCharacteristicUuids::GapPeripheralPreferredConnectionParameters()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().GapPeripheralPreferredConnectionParameters();
}

inline GUID GattCharacteristicUuids::GapPeripheralPrivacyFlag()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().GapPeripheralPrivacyFlag();
}

inline GUID GattCharacteristicUuids::PnpId()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().PnpId();
}

inline GUID GattCharacteristicUuids::PositionQuality()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().PositionQuality();
}

inline GUID GattCharacteristicUuids::ProtocolMode()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().ProtocolMode();
}

inline GUID GattCharacteristicUuids::GapReconnectionAddress()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().GapReconnectionAddress();
}

inline GUID GattCharacteristicUuids::ReferenceTimeInformation()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().ReferenceTimeInformation();
}

inline GUID GattCharacteristicUuids::Report()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().Report();
}

inline GUID GattCharacteristicUuids::ReportMap()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().ReportMap();
}

inline GUID GattCharacteristicUuids::RingerControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().RingerControlPoint();
}

inline GUID GattCharacteristicUuids::RingerSetting()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().RingerSetting();
}

inline GUID GattCharacteristicUuids::ScanIntervalWindow()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().ScanIntervalWindow();
}

inline GUID GattCharacteristicUuids::ScanRefresh()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().ScanRefresh();
}

inline GUID GattCharacteristicUuids::SerialNumberString()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().SerialNumberString();
}

inline GUID GattCharacteristicUuids::GattServiceChanged()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().GattServiceChanged();
}

inline GUID GattCharacteristicUuids::SoftwareRevisionString()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().SoftwareRevisionString();
}

inline GUID GattCharacteristicUuids::SupportedNewAlertCategory()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().SupportedNewAlertCategory();
}

inline GUID GattCharacteristicUuids::SupportUnreadAlertCategory()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().SupportUnreadAlertCategory();
}

inline GUID GattCharacteristicUuids::SystemId()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().SystemId();
}

inline GUID GattCharacteristicUuids::TimeAccuracy()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().TimeAccuracy();
}

inline GUID GattCharacteristicUuids::TimeSource()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().TimeSource();
}

inline GUID GattCharacteristicUuids::TimeUpdateControlPoint()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().TimeUpdateControlPoint();
}

inline GUID GattCharacteristicUuids::TimeUpdateState()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().TimeUpdateState();
}

inline GUID GattCharacteristicUuids::TimeWithDst()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().TimeWithDst();
}

inline GUID GattCharacteristicUuids::TimeZone()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().TimeZone();
}

inline GUID GattCharacteristicUuids::TxPowerLevel()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().TxPowerLevel();
}

inline GUID GattCharacteristicUuids::UnreadAlertStatus()
{
    return get_activation_factory<GattCharacteristicUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2>().UnreadAlertStatus();
}

inline GUID GattDescriptor::ConvertShortIdToUuid(uint16_t shortId)
{
    return get_activation_factory<GattDescriptor, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics>().ConvertShortIdToUuid(shortId);
}

inline GUID GattDescriptorUuids::CharacteristicAggregateFormat()
{
    return get_activation_factory<GattDescriptorUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>().CharacteristicAggregateFormat();
}

inline GUID GattDescriptorUuids::CharacteristicExtendedProperties()
{
    return get_activation_factory<GattDescriptorUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>().CharacteristicExtendedProperties();
}

inline GUID GattDescriptorUuids::CharacteristicPresentationFormat()
{
    return get_activation_factory<GattDescriptorUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>().CharacteristicPresentationFormat();
}

inline GUID GattDescriptorUuids::CharacteristicUserDescription()
{
    return get_activation_factory<GattDescriptorUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>().CharacteristicUserDescription();
}

inline GUID GattDescriptorUuids::ClientCharacteristicConfiguration()
{
    return get_activation_factory<GattDescriptorUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>().ClientCharacteristicConfiguration();
}

inline GUID GattDescriptorUuids::ServerCharacteristicConfiguration()
{
    return get_activation_factory<GattDescriptorUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics>().ServerCharacteristicConfiguration();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> GattDeviceService::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>().FromIdAsync(deviceId);
}

inline hstring GattDeviceService::GetDeviceSelectorFromUuid(GUID const& serviceUuid)
{
    return get_activation_factory<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>().GetDeviceSelectorFromUuid(serviceUuid);
}

inline hstring GattDeviceService::GetDeviceSelectorFromShortId(uint16_t serviceShortId)
{
    return get_activation_factory<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>().GetDeviceSelectorFromShortId(serviceShortId);
}

inline GUID GattDeviceService::ConvertShortIdToUuid(uint16_t shortId)
{
    return get_activation_factory<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics>().ConvertShortIdToUuid(shortId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> GattDeviceService::FromIdAsync(param::hstring const& deviceId, Windows::Devices::Bluetooth::GenericAttributeProfile::GattSharingMode const& sharingMode)
{
    return get_activation_factory<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>().FromIdAsync(deviceId, sharingMode);
}

inline hstring GattDeviceService::GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId)
{
    return get_activation_factory<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceId(bluetoothDeviceId);
}

inline hstring GattDeviceService::GetDeviceSelectorForBluetoothDeviceId(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode)
{
    return get_activation_factory<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceId(bluetoothDeviceId, cacheMode);
}

inline hstring GattDeviceService::GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, GUID const& serviceUuid)
{
    return get_activation_factory<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceIdAndUuid(bluetoothDeviceId, serviceUuid);
}

inline hstring GattDeviceService::GetDeviceSelectorForBluetoothDeviceIdAndUuid(Windows::Devices::Bluetooth::BluetoothDeviceId const& bluetoothDeviceId, GUID const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode)
{
    return get_activation_factory<GattDeviceService, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2>().GetDeviceSelectorForBluetoothDeviceIdAndUuid(bluetoothDeviceId, serviceUuid, cacheMode);
}

inline GattLocalCharacteristicParameters::GattLocalCharacteristicParameters() :
    GattLocalCharacteristicParameters(activate_instance<GattLocalCharacteristicParameters>())
{}

inline GattLocalDescriptorParameters::GattLocalDescriptorParameters() :
    GattLocalDescriptorParameters(activate_instance<GattLocalDescriptorParameters>())
{}

inline uint8_t GattPresentationFormat::BluetoothSigAssignedNumbers()
{
    return get_activation_factory<GattPresentationFormat, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics>().BluetoothSigAssignedNumbers();
}

inline Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat GattPresentationFormat::FromParts(uint8_t formatType, int32_t exponent, uint16_t unit, uint8_t namespaceId, uint16_t description)
{
    return get_activation_factory<GattPresentationFormat, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2>().FromParts(formatType, exponent, unit, namespaceId, description);
}

inline uint8_t GattPresentationFormatTypes::Boolean()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().Boolean();
}

inline uint8_t GattPresentationFormatTypes::Bit2()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().Bit2();
}

inline uint8_t GattPresentationFormatTypes::Nibble()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().Nibble();
}

inline uint8_t GattPresentationFormatTypes::UInt8()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().UInt8();
}

inline uint8_t GattPresentationFormatTypes::UInt12()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().UInt12();
}

inline uint8_t GattPresentationFormatTypes::UInt16()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().UInt16();
}

inline uint8_t GattPresentationFormatTypes::UInt24()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().UInt24();
}

inline uint8_t GattPresentationFormatTypes::UInt32()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().UInt32();
}

inline uint8_t GattPresentationFormatTypes::UInt48()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().UInt48();
}

inline uint8_t GattPresentationFormatTypes::UInt64()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().UInt64();
}

inline uint8_t GattPresentationFormatTypes::UInt128()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().UInt128();
}

inline uint8_t GattPresentationFormatTypes::SInt8()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().SInt8();
}

inline uint8_t GattPresentationFormatTypes::SInt12()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().SInt12();
}

inline uint8_t GattPresentationFormatTypes::SInt16()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().SInt16();
}

inline uint8_t GattPresentationFormatTypes::SInt24()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().SInt24();
}

inline uint8_t GattPresentationFormatTypes::SInt32()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().SInt32();
}

inline uint8_t GattPresentationFormatTypes::SInt48()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().SInt48();
}

inline uint8_t GattPresentationFormatTypes::SInt64()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().SInt64();
}

inline uint8_t GattPresentationFormatTypes::SInt128()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().SInt128();
}

inline uint8_t GattPresentationFormatTypes::Float32()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().Float32();
}

inline uint8_t GattPresentationFormatTypes::Float64()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().Float64();
}

inline uint8_t GattPresentationFormatTypes::SFloat()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().SFloat();
}

inline uint8_t GattPresentationFormatTypes::Float()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().Float();
}

inline uint8_t GattPresentationFormatTypes::DUInt16()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().DUInt16();
}

inline uint8_t GattPresentationFormatTypes::Utf8()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().Utf8();
}

inline uint8_t GattPresentationFormatTypes::Utf16()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().Utf16();
}

inline uint8_t GattPresentationFormatTypes::Struct()
{
    return get_activation_factory<GattPresentationFormatTypes, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics>().Struct();
}

inline uint8_t GattProtocolError::InvalidHandle()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().InvalidHandle();
}

inline uint8_t GattProtocolError::ReadNotPermitted()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().ReadNotPermitted();
}

inline uint8_t GattProtocolError::WriteNotPermitted()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().WriteNotPermitted();
}

inline uint8_t GattProtocolError::InvalidPdu()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().InvalidPdu();
}

inline uint8_t GattProtocolError::InsufficientAuthentication()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().InsufficientAuthentication();
}

inline uint8_t GattProtocolError::RequestNotSupported()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().RequestNotSupported();
}

inline uint8_t GattProtocolError::InvalidOffset()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().InvalidOffset();
}

inline uint8_t GattProtocolError::InsufficientAuthorization()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().InsufficientAuthorization();
}

inline uint8_t GattProtocolError::PrepareQueueFull()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().PrepareQueueFull();
}

inline uint8_t GattProtocolError::AttributeNotFound()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().AttributeNotFound();
}

inline uint8_t GattProtocolError::AttributeNotLong()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().AttributeNotLong();
}

inline uint8_t GattProtocolError::InsufficientEncryptionKeySize()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().InsufficientEncryptionKeySize();
}

inline uint8_t GattProtocolError::InvalidAttributeValueLength()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().InvalidAttributeValueLength();
}

inline uint8_t GattProtocolError::UnlikelyError()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().UnlikelyError();
}

inline uint8_t GattProtocolError::InsufficientEncryption()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().InsufficientEncryption();
}

inline uint8_t GattProtocolError::UnsupportedGroupType()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().UnsupportedGroupType();
}

inline uint8_t GattProtocolError::InsufficientResources()
{
    return get_activation_factory<GattProtocolError, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics>().InsufficientResources();
}

inline GattReliableWriteTransaction::GattReliableWriteTransaction() :
    GattReliableWriteTransaction(activate_instance<GattReliableWriteTransaction>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> GattServiceProvider::CreateAsync(GUID const& serviceUuid)
{
    return get_activation_factory<GattServiceProvider, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics>().CreateAsync(serviceUuid);
}

inline GattServiceProviderAdvertisingParameters::GattServiceProviderAdvertisingParameters() :
    GattServiceProviderAdvertisingParameters(activate_instance<GattServiceProviderAdvertisingParameters>())
{}

inline GUID GattServiceUuids::Battery()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>().Battery();
}

inline GUID GattServiceUuids::BloodPressure()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>().BloodPressure();
}

inline GUID GattServiceUuids::CyclingSpeedAndCadence()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>().CyclingSpeedAndCadence();
}

inline GUID GattServiceUuids::GenericAccess()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>().GenericAccess();
}

inline GUID GattServiceUuids::GenericAttribute()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>().GenericAttribute();
}

inline GUID GattServiceUuids::Glucose()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>().Glucose();
}

inline GUID GattServiceUuids::HealthThermometer()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>().HealthThermometer();
}

inline GUID GattServiceUuids::HeartRate()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>().HeartRate();
}

inline GUID GattServiceUuids::RunningSpeedAndCadence()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics>().RunningSpeedAndCadence();
}

inline GUID GattServiceUuids::AlertNotification()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().AlertNotification();
}

inline GUID GattServiceUuids::CurrentTime()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().CurrentTime();
}

inline GUID GattServiceUuids::CyclingPower()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().CyclingPower();
}

inline GUID GattServiceUuids::DeviceInformation()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().DeviceInformation();
}

inline GUID GattServiceUuids::HumanInterfaceDevice()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().HumanInterfaceDevice();
}

inline GUID GattServiceUuids::ImmediateAlert()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().ImmediateAlert();
}

inline GUID GattServiceUuids::LinkLoss()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().LinkLoss();
}

inline GUID GattServiceUuids::LocationAndNavigation()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().LocationAndNavigation();
}

inline GUID GattServiceUuids::NextDstChange()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().NextDstChange();
}

inline GUID GattServiceUuids::PhoneAlertStatus()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().PhoneAlertStatus();
}

inline GUID GattServiceUuids::ReferenceTimeUpdate()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().ReferenceTimeUpdate();
}

inline GUID GattServiceUuids::ScanParameters()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().ScanParameters();
}

inline GUID GattServiceUuids::TxPower()
{
    return get_activation_factory<GattServiceUuids, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2>().TxPower();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> GattSession::FromDeviceIdAsync(Windows::Devices::Bluetooth::BluetoothDeviceId const& deviceId)
{
    return get_activation_factory<GattSession, Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics>().FromDeviceIdAsync(deviceId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic3> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicUuidsStatics2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristicsResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattClientNotificationResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptor2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorUuidsStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDescriptorsResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceService3> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServiceStatics2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattDeviceServicesResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristic> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicParameters> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalCharacteristicResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorParameters> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalDescriptorResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattLocalService> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormat> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatStatics2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattPresentationFormatTypesStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattProtocolErrorStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadClientCharacteristicConfigurationDescriptorResult2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequest> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReadResult2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattReliableWriteTransaction2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattRequestStateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProvider> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisementStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderAdvertisingParameters> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceProviderStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattServiceUuidsStatics2> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSession> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSessionStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattSubscribedClient> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattValueChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequest> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattWriteResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicUuids> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristicsResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattClientNotificationResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorUuids> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDescriptorsResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristic> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicParameters> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalCharacteristicResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorParameters> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalDescriptorResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormat> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattPresentationFormatTypes> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattProtocolError> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadClientCharacteristicConfigurationDescriptorResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequest> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReadResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattReliableWriteTransaction> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattRequestStateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProvider> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisementStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderResult> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceUuids> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSession> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSessionStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattSubscribedClient> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattValueChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequest> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattWriteResult> {};

}

WINRT_WARNING_POP
