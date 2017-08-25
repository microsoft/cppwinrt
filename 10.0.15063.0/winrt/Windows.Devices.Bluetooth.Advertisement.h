// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Bluetooth.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.2.h"
#include "winrt/Windows.Devices.Bluetooth.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IReference<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>::Flags() const
{
    Windows::Foundation::IReference<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement)->get_Flags(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>::Flags(optional<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement)->put_Flags(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>::LocalName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement)->get_LocalName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>::LocalName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement)->put_LocalName(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<GUID> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>::ServiceUuids() const
{
    Windows::Foundation::Collections::IVector<GUID> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement)->get_ServiceUuids(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>::ManufacturerData() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement)->get_ManufacturerData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>::DataSections() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement)->get_DataSections(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>::GetManufacturerDataByCompanyId(uint16_t companyId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData> dataList{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement)->GetManufacturerDataByCompanyId(companyId, put_abi(dataList)));
    return dataList;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>::GetSectionsByType(uint8_t type) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection> sectionList{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement)->GetSectionsByType(type, put_abi(sectionList)));
    return sectionList;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern<D>::DataType() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern)->get_DataType(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern<D>::DataType(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern)->put_DataType(value));
}

template <typename D> int16_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern<D>::Offset() const
{
    int16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern)->get_Offset(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern<D>::Offset(int16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern)->put_Offset(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern<D>::Data(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern)->put_Data(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePatternFactory<D>::Create(uint8_t dataType, int16_t offset, Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory)->Create(dataType, offset, get_abi(data), put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSection<D>::DataType() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection)->get_DataType(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSection<D>::DataType(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection)->put_DataType(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSection<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSection<D>::Data(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection)->put_Data(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSectionFactory<D>::Create(uint8_t dataType, Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory)->Create(dataType, get_abi(data), put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::Flags() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_Flags(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::IncompleteService16BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_IncompleteService16BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::CompleteService16BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_CompleteService16BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::IncompleteService32BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_IncompleteService32BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::CompleteService32BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_CompleteService32BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::IncompleteService128BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_IncompleteService128BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::CompleteService128BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_CompleteService128BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::ShortenedLocalName() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_ShortenedLocalName(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::CompleteLocalName() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_CompleteLocalName(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::TxPowerLevel() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_TxPowerLevel(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::SlaveConnectionIntervalRange() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_SlaveConnectionIntervalRange(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::ServiceSolicitation16BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_ServiceSolicitation16BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::ServiceSolicitation32BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_ServiceSolicitation32BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::ServiceSolicitation128BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_ServiceSolicitation128BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::ServiceData16BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_ServiceData16BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::ServiceData32BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_ServiceData32BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::ServiceData128BitUuids() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_ServiceData128BitUuids(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::PublicTargetAddress() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_PublicTargetAddress(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::RandomTargetAddress() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_RandomTargetAddress(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::Appearance() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_Appearance(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::AdvertisingInterval() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_AdvertisingInterval(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>::ManufacturerSpecificData() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics)->get_ManufacturerSpecificData(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementFilter<D>::Advertisement() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter)->get_Advertisement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementFilter<D>::Advertisement(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter)->put_Advertisement(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementFilter<D>::BytePatterns() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter)->get_BytePatterns(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher<D>::Status() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher<D>::Advertisement() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher)->get_Advertisement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher)->Start());
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher)->Stop());
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher<D>::StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher)->add_StatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher<D>::StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher>(this, &abi_t<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher>::remove_StatusChanged, StatusChanged(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher<D>::StatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher)->remove_StatusChanged(get_abi(token)));
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherFactory<D>::Create(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement const& advertisement) const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory)->Create(get_abi(advertisement), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherStatusChangedEventArgs<D>::Status() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherStatusChangedEventArgs<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> int16_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementReceivedEventArgs<D>::RawSignalStrengthInDBm() const
{
    int16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs)->get_RawSignalStrengthInDBm(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementReceivedEventArgs<D>::BluetoothAddress() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs)->get_BluetoothAddress(&value));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementType consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementReceivedEventArgs<D>::AdvertisementType() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs)->get_AdvertisementType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementReceivedEventArgs<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementReceivedEventArgs<D>::Advertisement() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs)->get_Advertisement(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::MinSamplingInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->get_MinSamplingInterval(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::MaxSamplingInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->get_MaxSamplingInterval(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::MinOutOfRangeTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->get_MinOutOfRangeTimeout(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::MaxOutOfRangeTimeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->get_MaxOutOfRangeTimeout(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStatus consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::Status() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::ScanningMode() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->get_ScanningMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::ScanningMode(Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->put_ScanningMode(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::SignalStrengthFilter() const
{
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->get_SignalStrengthFilter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::SignalStrengthFilter(Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->put_SignalStrengthFilter(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::AdvertisementFilter() const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->get_AdvertisementFilter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::AdvertisementFilter(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->put_AdvertisementFilter(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->Stop());
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::Received(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->add_Received(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::Received(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>(this, &abi_t<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>::remove_Received, Received(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::Received(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->remove_Received(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher> consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>(this, &abi_t<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherFactory<D>::Create(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& advertisementFilter) const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory)->Create(get_abi(advertisementFilter), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Bluetooth::BluetoothError consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherStoppedEventArgs<D>::Error() const
{
    Windows::Devices::Bluetooth::BluetoothError value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerData<D>::CompanyId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData)->get_CompanyId(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerData<D>::CompanyId(uint16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData)->put_CompanyId(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerData<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerData<D>::Data(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData)->put_Data(get_abi(value)));
}

template <typename D> Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerDataFactory<D>::Create(uint16_t companyId, Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory)->Create(companyId, get_abi(data), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement>
{
    HRESULT __stdcall get_Flags(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Flags());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Flags(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Flags(*reinterpret_cast<Windows::Foundation::IReference<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LocalName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceUuids(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceUuids());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManufacturerData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ManufacturerData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataSections(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataSections());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetManufacturerDataByCompanyId(uint16_t companyId, ::IUnknown** dataList) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *dataList = detach_abi(this->shim().GetManufacturerDataByCompanyId(companyId));
            return S_OK;
        }
        catch (...)
        {
            *dataList = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSectionsByType(uint8_t type, ::IUnknown** sectionList) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *sectionList = detach_abi(this->shim().GetSectionsByType(type));
            return S_OK;
        }
        catch (...)
        {
            *sectionList = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern>
{
    HRESULT __stdcall get_DataType(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataType(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(int16_t* value) noexcept override
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

    HRESULT __stdcall put_Offset(int16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory>
{
    HRESULT __stdcall Create(uint8_t dataType, int16_t offset, ::IUnknown* data, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(dataType, offset, *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
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
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection>
{
    HRESULT __stdcall get_DataType(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataType(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory>
{
    HRESULT __stdcall Create(uint8_t dataType, ::IUnknown* data, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(dataType, *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
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
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>
{
    HRESULT __stdcall get_Flags(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Flags());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncompleteService16BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncompleteService16BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompleteService16BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompleteService16BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncompleteService32BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncompleteService32BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompleteService32BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompleteService32BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncompleteService128BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncompleteService128BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompleteService128BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompleteService128BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShortenedLocalName(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShortenedLocalName());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompleteLocalName(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompleteLocalName());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TxPowerLevel(uint8_t* value) noexcept override
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

    HRESULT __stdcall get_SlaveConnectionIntervalRange(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SlaveConnectionIntervalRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceSolicitation16BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceSolicitation16BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceSolicitation32BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceSolicitation32BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceSolicitation128BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceSolicitation128BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceData16BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceData16BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceData32BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceData32BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceData128BitUuids(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceData128BitUuids());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PublicTargetAddress(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PublicTargetAddress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RandomTargetAddress(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RandomTargetAddress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Appearance(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Appearance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisingInterval(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisingInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManufacturerSpecificData(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ManufacturerSpecificData());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter>
{
    HRESULT __stdcall get_Advertisement(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Advertisement());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Advertisement(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Advertisement(*reinterpret_cast<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytePatterns(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytePatterns());
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
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus>* value) noexcept override
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

    HRESULT __stdcall get_Advertisement(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Advertisement());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory>
{
    HRESULT __stdcall Create(::IUnknown* advertisement, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement const*>(&advertisement)));
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
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus>* value) noexcept override
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
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs>
{
    HRESULT __stdcall get_RawSignalStrengthInDBm(int16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawSignalStrengthInDBm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BluetoothAddress(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BluetoothAddress());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisementType(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisementType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Advertisement(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Advertisement());
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
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>
{
    HRESULT __stdcall get_MinSamplingInterval(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinSamplingInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSamplingInterval(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxSamplingInterval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinOutOfRangeTimeout(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinOutOfRangeTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxOutOfRangeTimeout(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxOutOfRangeTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStatus>* value) noexcept override
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

    HRESULT __stdcall get_ScanningMode(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScanningMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScanningMode(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScanningMode(*reinterpret_cast<Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignalStrengthFilter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignalStrengthFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SignalStrengthFilter(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignalStrengthFilter(*reinterpret_cast<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdvertisementFilter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisementFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AdvertisementFilter(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvertisementFilter(*reinterpret_cast<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Received(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Received(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Received(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Received(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory>
{
    HRESULT __stdcall Create(::IUnknown* advertisementFilter, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const*>(&advertisementFilter)));
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
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs>
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
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData>
{
    HRESULT __stdcall get_CompanyId(uint16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompanyId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompanyId(uint16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompanyId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory> : produce_base<D, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory>
{
    HRESULT __stdcall Create(uint16_t companyId, ::IUnknown* data, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(companyId, *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
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

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Advertisement {

inline BluetoothLEAdvertisement::BluetoothLEAdvertisement() :
    BluetoothLEAdvertisement(activate_instance<BluetoothLEAdvertisement>())
{}

inline BluetoothLEAdvertisementBytePattern::BluetoothLEAdvertisementBytePattern() :
    BluetoothLEAdvertisementBytePattern(activate_instance<BluetoothLEAdvertisementBytePattern>())
{}

inline BluetoothLEAdvertisementBytePattern::BluetoothLEAdvertisementBytePattern(uint8_t dataType, int16_t offset, Windows::Storage::Streams::IBuffer const& data) :
    BluetoothLEAdvertisementBytePattern(get_activation_factory<BluetoothLEAdvertisementBytePattern, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory>().Create(dataType, offset, data))
{}

inline BluetoothLEAdvertisementDataSection::BluetoothLEAdvertisementDataSection() :
    BluetoothLEAdvertisementDataSection(activate_instance<BluetoothLEAdvertisementDataSection>())
{}

inline BluetoothLEAdvertisementDataSection::BluetoothLEAdvertisementDataSection(uint8_t dataType, Windows::Storage::Streams::IBuffer const& data) :
    BluetoothLEAdvertisementDataSection(get_activation_factory<BluetoothLEAdvertisementDataSection, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory>().Create(dataType, data))
{}

inline uint8_t BluetoothLEAdvertisementDataTypes::Flags()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().Flags();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::IncompleteService16BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().IncompleteService16BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::CompleteService16BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().CompleteService16BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::IncompleteService32BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().IncompleteService32BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::CompleteService32BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().CompleteService32BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::IncompleteService128BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().IncompleteService128BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::CompleteService128BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().CompleteService128BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::ShortenedLocalName()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().ShortenedLocalName();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::CompleteLocalName()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().CompleteLocalName();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::TxPowerLevel()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().TxPowerLevel();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::SlaveConnectionIntervalRange()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().SlaveConnectionIntervalRange();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::ServiceSolicitation16BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().ServiceSolicitation16BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::ServiceSolicitation32BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().ServiceSolicitation32BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::ServiceSolicitation128BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().ServiceSolicitation128BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::ServiceData16BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().ServiceData16BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::ServiceData32BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().ServiceData32BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::ServiceData128BitUuids()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().ServiceData128BitUuids();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::PublicTargetAddress()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().PublicTargetAddress();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::RandomTargetAddress()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().RandomTargetAddress();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::Appearance()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().Appearance();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::AdvertisingInterval()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().AdvertisingInterval();
}

inline uint8_t BluetoothLEAdvertisementDataTypes::ManufacturerSpecificData()
{
    return get_activation_factory<BluetoothLEAdvertisementDataTypes, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>().ManufacturerSpecificData();
}

inline BluetoothLEAdvertisementFilter::BluetoothLEAdvertisementFilter() :
    BluetoothLEAdvertisementFilter(activate_instance<BluetoothLEAdvertisementFilter>())
{}

inline BluetoothLEAdvertisementPublisher::BluetoothLEAdvertisementPublisher() :
    BluetoothLEAdvertisementPublisher(activate_instance<BluetoothLEAdvertisementPublisher>())
{}

inline BluetoothLEAdvertisementPublisher::BluetoothLEAdvertisementPublisher(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement const& advertisement) :
    BluetoothLEAdvertisementPublisher(get_activation_factory<BluetoothLEAdvertisementPublisher, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory>().Create(advertisement))
{}

inline BluetoothLEAdvertisementWatcher::BluetoothLEAdvertisementWatcher() :
    BluetoothLEAdvertisementWatcher(activate_instance<BluetoothLEAdvertisementWatcher>())
{}

inline BluetoothLEAdvertisementWatcher::BluetoothLEAdvertisementWatcher(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& advertisementFilter) :
    BluetoothLEAdvertisementWatcher(get_activation_factory<BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory>().Create(advertisementFilter))
{}

inline BluetoothLEManufacturerData::BluetoothLEManufacturerData() :
    BluetoothLEManufacturerData(activate_instance<BluetoothLEManufacturerData>())
{}

inline BluetoothLEManufacturerData::BluetoothLEManufacturerData(uint16_t companyId, Windows::Storage::Streams::IBuffer const& data) :
    BluetoothLEManufacturerData(get_activation_factory<BluetoothLEManufacturerData, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory>().Create(companyId, data))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataTypes> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataTypes> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData> {};

}

WINRT_WARNING_POP
