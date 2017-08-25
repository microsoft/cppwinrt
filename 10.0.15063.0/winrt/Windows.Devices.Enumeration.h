// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Enumeration::DeviceAccessStatus consume_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceAccessStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs2<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2)->get_Id(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDeviceAccessInformation<D>::AccessChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceAccessInformation)->add_AccessChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDeviceAccessInformation> consume_Windows_Devices_Enumeration_IDeviceAccessInformation<D>::AccessChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDeviceAccessInformation>(this, &abi_t<Windows::Devices::Enumeration::IDeviceAccessInformation>::remove_AccessChanged, AccessChanged(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceAccessInformation<D>::AccessChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceAccessInformation)->remove_AccessChanged(get_abi(cookie)));
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessStatus consume_Windows_Devices_Enumeration_IDeviceAccessInformation<D>::CurrentStatus() const
{
    Windows::Devices::Enumeration::DeviceAccessStatus status{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceAccessInformation)->get_CurrentStatus(put_abi(status)));
    return status;
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessInformation consume_Windows_Devices_Enumeration_IDeviceAccessInformationStatics<D>::CreateFromId(param::hstring const& deviceId) const
{
    Windows::Devices::Enumeration::DeviceAccessInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceAccessInformationStatics)->CreateFromId(get_abi(deviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessInformation consume_Windows_Devices_Enumeration_IDeviceAccessInformationStatics<D>::CreateFromDeviceClassId(GUID const& deviceClassId) const
{
    Windows::Devices::Enumeration::DeviceAccessInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceAccessInformationStatics)->CreateFromDeviceClassId(get_abi(deviceClassId), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceAccessInformation consume_Windows_Devices_Enumeration_IDeviceAccessInformationStatics<D>::CreateFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass) const
{
    Windows::Devices::Enumeration::DeviceAccessInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceAccessInformationStatics)->CreateFromDeviceClass(get_abi(deviceClass), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_IDeviceConnectionChangeTriggerDetails<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Devices_Enumeration_IDeviceDisconnectButtonClickedEventArgs<D>::Device() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs)->get_Device(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_IDeviceInformation<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_IDeviceInformation<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation)->get_Name(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Enumeration_IDeviceInformation<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation)->get_IsEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Enumeration_IDeviceInformation<D>::IsDefault() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation)->get_IsDefault(&value));
    return value;
}

template <typename D> Windows::Devices::Enumeration::EnclosureLocation consume_Windows_Devices_Enumeration_IDeviceInformation<D>::EnclosureLocation() const
{
    Windows::Devices::Enumeration::EnclosureLocation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation)->get_EnclosureLocation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Enumeration_IDeviceInformation<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceInformation<D>::Update(Windows::Devices::Enumeration::DeviceInformationUpdate const& updateInfo) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation)->Update(get_abi(updateInfo)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> consume_Windows_Devices_Enumeration_IDeviceInformation<D>::GetThumbnailAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation)->GetThumbnailAsync(put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> consume_Windows_Devices_Enumeration_IDeviceInformation<D>::GetGlyphThumbnailAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation)->GetGlyphThumbnailAsync(put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformationKind consume_Windows_Devices_Enumeration_IDeviceInformation2<D>::Kind() const
{
    Windows::Devices::Enumeration::DeviceInformationKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation2)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformationPairing consume_Windows_Devices_Enumeration_IDeviceInformation2<D>::Pairing() const
{
    Windows::Devices::Enumeration::DeviceInformationPairing value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformation2)->get_Pairing(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> consume_Windows_Devices_Enumeration_IDeviceInformationCustomPairing<D>::PairAsync(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationCustomPairing)->PairAsync(get_abi(pairingKindsSupported), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> consume_Windows_Devices_Enumeration_IDeviceInformationCustomPairing<D>::PairAsync(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported, Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationCustomPairing)->PairWithProtectionLevelAsync(get_abi(pairingKindsSupported), get_abi(minProtectionLevel), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> consume_Windows_Devices_Enumeration_IDeviceInformationCustomPairing<D>::PairAsync(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported, Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel, Windows::Devices::Enumeration::IDevicePairingSettings const& devicePairingSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationCustomPairing)->PairWithProtectionLevelAndSettingsAsync(get_abi(pairingKindsSupported), get_abi(minProtectionLevel), get_abi(devicePairingSettings), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDeviceInformationCustomPairing<D>::PairingRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationCustomPairing)->add_PairingRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDeviceInformationCustomPairing> consume_Windows_Devices_Enumeration_IDeviceInformationCustomPairing<D>::PairingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDeviceInformationCustomPairing>(this, &abi_t<Windows::Devices::Enumeration::IDeviceInformationCustomPairing>::remove_PairingRequested, PairingRequested(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceInformationCustomPairing<D>::PairingRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationCustomPairing)->remove_PairingRequested(get_abi(token)));
}

template <typename D> bool consume_Windows_Devices_Enumeration_IDeviceInformationPairing<D>::IsPaired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationPairing)->get_IsPaired(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Enumeration_IDeviceInformationPairing<D>::CanPair() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationPairing)->get_CanPair(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> consume_Windows_Devices_Enumeration_IDeviceInformationPairing<D>::PairAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationPairing)->PairAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> consume_Windows_Devices_Enumeration_IDeviceInformationPairing<D>::PairAsync(Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationPairing)->PairWithProtectionLevelAsync(get_abi(minProtectionLevel), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Enumeration::DevicePairingProtectionLevel consume_Windows_Devices_Enumeration_IDeviceInformationPairing2<D>::ProtectionLevel() const
{
    Windows::Devices::Enumeration::DevicePairingProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationPairing2)->get_ProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformationCustomPairing consume_Windows_Devices_Enumeration_IDeviceInformationPairing2<D>::Custom() const
{
    Windows::Devices::Enumeration::DeviceInformationCustomPairing value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationPairing2)->get_Custom(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> consume_Windows_Devices_Enumeration_IDeviceInformationPairing2<D>::PairAsync(Windows::Devices::Enumeration::DevicePairingProtectionLevel const& minProtectionLevel, Windows::Devices::Enumeration::IDevicePairingSettings const& devicePairingSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationPairing2)->PairWithProtectionLevelAndSettingsAsync(get_abi(minProtectionLevel), get_abi(devicePairingSettings), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceUnpairingResult> consume_Windows_Devices_Enumeration_IDeviceInformationPairing2<D>::UnpairAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceUnpairingResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationPairing2)->UnpairAsync(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_Enumeration_IDeviceInformationPairingStatics<D>::TryRegisterForAllInboundPairingRequests(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationPairingStatics)->TryRegisterForAllInboundPairingRequests(get_abi(pairingKindsSupported), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::CreateFromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->CreateFromIdAsync(get_abi(deviceId), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->CreateFromIdAsyncAdditionalProperties(get_abi(deviceId), get_abi(additionalProperties), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->FindAllAsync(put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::FindAllAsync(Windows::Devices::Enumeration::DeviceClass const& deviceClass) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->FindAllAsyncDeviceClass(get_abi(deviceClass), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::FindAllAsync(param::hstring const& aqsFilter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->FindAllAsyncAqsFilter(get_abi(aqsFilter), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->FindAllAsyncAqsFilterAndAdditionalProperties(get_abi(aqsFilter), get_abi(additionalProperties), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcher consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::CreateWatcher() const
{
    Windows::Devices::Enumeration::DeviceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->CreateWatcher(put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcher consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::CreateWatcher(Windows::Devices::Enumeration::DeviceClass const& deviceClass) const
{
    Windows::Devices::Enumeration::DeviceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->CreateWatcherDeviceClass(get_abi(deviceClass), put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcher consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::CreateWatcher(param::hstring const& aqsFilter) const
{
    Windows::Devices::Enumeration::DeviceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->CreateWatcherAqsFilter(get_abi(aqsFilter), put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcher consume_Windows_Devices_Enumeration_IDeviceInformationStatics<D>::CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties) const
{
    Windows::Devices::Enumeration::DeviceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics)->CreateWatcherAqsFilterAndAdditionalProperties(get_abi(aqsFilter), get_abi(additionalProperties), put_abi(watcher)));
    return watcher;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_IDeviceInformationStatics2<D>::GetAqsFilterFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass) const
{
    hstring aqsFilter{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics2)->GetAqsFilterFromDeviceClass(get_abi(deviceClass), put_abi(aqsFilter)));
    return aqsFilter;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> consume_Windows_Devices_Enumeration_IDeviceInformationStatics2<D>::CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics2)->CreateFromIdAsyncWithKindAndAdditionalProperties(get_abi(deviceId), get_abi(additionalProperties), get_abi(kind), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> consume_Windows_Devices_Enumeration_IDeviceInformationStatics2<D>::FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics2)->FindAllAsyncWithKindAqsFilterAndAdditionalProperties(get_abi(aqsFilter), get_abi(additionalProperties), get_abi(kind), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcher consume_Windows_Devices_Enumeration_IDeviceInformationStatics2<D>::CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind) const
{
    Windows::Devices::Enumeration::DeviceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationStatics2)->CreateWatcherWithKindAqsFilterAndAdditionalProperties(get_abi(aqsFilter), get_abi(additionalProperties), get_abi(kind), put_abi(watcher)));
    return watcher;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_IDeviceInformationUpdate<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationUpdate)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Enumeration_IDeviceInformationUpdate<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationUpdate)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformationKind consume_Windows_Devices_Enumeration_IDeviceInformationUpdate2<D>::Kind() const
{
    Windows::Devices::Enumeration::DeviceInformationKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceInformationUpdate2)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs<D>::DeviceInformation() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DevicePairingKinds consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs<D>::PairingKind() const
{
    Windows::Devices::Enumeration::DevicePairingKinds value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs)->get_PairingKind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs<D>::Pin() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs)->get_Pin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs<D>::Accept() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs)->Accept());
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs<D>::Accept(param::hstring const& pin) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs)->AcceptWithPin(get_abi(pin)));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Enumeration::DevicePairingResultStatus consume_Windows_Devices_Enumeration_IDevicePairingResult<D>::Status() const
{
    Windows::Devices::Enumeration::DevicePairingResultStatus status{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePairingResult)->get_Status(put_abi(status)));
    return status;
}

template <typename D> Windows::Devices::Enumeration::DevicePairingProtectionLevel consume_Windows_Devices_Enumeration_IDevicePairingResult<D>::ProtectionLevelUsed() const
{
    Windows::Devices::Enumeration::DevicePairingProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePairingResult)->get_ProtectionLevelUsed(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DevicePickerFilter consume_Windows_Devices_Enumeration_IDevicePicker<D>::Filter() const
{
    Windows::Devices::Enumeration::DevicePickerFilter filter{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->get_Filter(put_abi(filter)));
    return filter;
}

template <typename D> Windows::Devices::Enumeration::DevicePickerAppearance consume_Windows_Devices_Enumeration_IDevicePicker<D>::Appearance() const
{
    Windows::Devices::Enumeration::DevicePickerAppearance value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->get_Appearance(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Devices_Enumeration_IDevicePicker<D>::RequestedProperties() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->get_RequestedProperties(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDevicePicker<D>::DeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->add_DeviceSelected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDevicePicker> consume_Windows_Devices_Enumeration_IDevicePicker<D>::DeviceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDevicePicker>(this, &abi_t<Windows::Devices::Enumeration::IDevicePicker>::remove_DeviceSelected, DeviceSelected(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePicker<D>::DeviceSelected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->remove_DeviceSelected(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDevicePicker<D>::DisconnectButtonClicked(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->add_DisconnectButtonClicked(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDevicePicker> consume_Windows_Devices_Enumeration_IDevicePicker<D>::DisconnectButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDevicePicker>(this, &abi_t<Windows::Devices::Enumeration::IDevicePicker>::remove_DisconnectButtonClicked, DisconnectButtonClicked(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePicker<D>::DisconnectButtonClicked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->remove_DisconnectButtonClicked(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDevicePicker<D>::DevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->add_DevicePickerDismissed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDevicePicker> consume_Windows_Devices_Enumeration_IDevicePicker<D>::DevicePickerDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDevicePicker>(this, &abi_t<Windows::Devices::Enumeration::IDevicePicker>::remove_DevicePickerDismissed, DevicePickerDismissed(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePicker<D>::DevicePickerDismissed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->remove_DevicePickerDismissed(get_abi(token)));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePicker<D>::Show(Windows::Foundation::Rect const& selection) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->Show(get_abi(selection)));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePicker<D>::Show(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& placement) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->ShowWithPlacement(get_abi(selection), get_abi(placement)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> consume_Windows_Devices_Enumeration_IDevicePicker<D>::PickSingleDeviceAsync(Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->PickSingleDeviceAsync(get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> consume_Windows_Devices_Enumeration_IDevicePicker<D>::PickSingleDeviceAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& placement) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->PickSingleDeviceAsyncWithPlacement(get_abi(selection), get_abi(placement), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePicker<D>::Hide() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->Hide());
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePicker<D>::SetDisplayStatus(Windows::Devices::Enumeration::DeviceInformation const& device, param::hstring const& status, Windows::Devices::Enumeration::DevicePickerDisplayStatusOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePicker)->SetDisplayStatus(get_abi(device), get_abi(status), get_abi(options)));
}

template <typename D> hstring consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->put_Title(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::ForegroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->get_ForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::ForegroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->put_ForegroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::BackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::AccentColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->get_AccentColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::AccentColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->put_AccentColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::SelectedForegroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->get_SelectedForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::SelectedForegroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->put_SelectedForegroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::SelectedBackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->get_SelectedBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::SelectedBackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->put_SelectedBackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::SelectedAccentColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->get_SelectedAccentColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDevicePickerAppearance<D>::SelectedAccentColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerAppearance)->put_SelectedAccentColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Enumeration::DeviceClass> consume_Windows_Devices_Enumeration_IDevicePickerFilter<D>::SupportedDeviceClasses() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Enumeration::DeviceClass> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerFilter)->get_SupportedDeviceClasses(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Devices_Enumeration_IDevicePickerFilter<D>::SupportedDeviceSelectors() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDevicePickerFilter)->get_SupportedDeviceSelectors(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Devices_Enumeration_IDeviceSelectedEventArgs<D>::SelectedDevice() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceSelectedEventArgs)->get_SelectedDevice(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceUnpairingResultStatus consume_Windows_Devices_Enumeration_IDeviceUnpairingResult<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceUnpairingResultStatus status{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceUnpairingResult)->get_Status(put_abi(status)));
    return status;
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->add_Added(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDeviceWatcher> consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDeviceWatcher>(this, &abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_Added, Added(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Added(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->remove_Added(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDeviceWatcher> consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDeviceWatcher>(this, &abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDeviceWatcher> consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDeviceWatcher>(this, &abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->remove_Removed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDeviceWatcher> consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDeviceWatcher>(this, &abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::IDeviceWatcher> consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::IDeviceWatcher>(this, &abi_t<Windows::Devices::Enumeration::IDeviceWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus status{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->get_Status(put_abi(status)));
    return status;
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Enumeration_IDeviceWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher)->Stop());
}

template <typename D> Windows::ApplicationModel::Background::DeviceWatcherTrigger consume_Windows_Devices_Enumeration_IDeviceWatcher2<D>::GetBackgroundTrigger(param::iterable<Windows::Devices::Enumeration::DeviceWatcherEventKind> const& requestedEventKinds) const
{
    Windows::ApplicationModel::Background::DeviceWatcherTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcher2)->GetBackgroundTrigger(get_abi(requestedEventKinds), put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherEventKind consume_Windows_Devices_Enumeration_IDeviceWatcherEvent<D>::Kind() const
{
    Windows::Devices::Enumeration::DeviceWatcherEventKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcherEvent)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Devices_Enumeration_IDeviceWatcherEvent<D>::DeviceInformation() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcherEvent)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformationUpdate consume_Windows_Devices_Enumeration_IDeviceWatcherEvent<D>::DeviceInformationUpdate() const
{
    Windows::Devices::Enumeration::DeviceInformationUpdate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcherEvent)->get_DeviceInformationUpdate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceWatcherEvent> consume_Windows_Devices_Enumeration_IDeviceWatcherTriggerDetails<D>::DeviceWatcherEvents() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceWatcherEvent> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails)->get_DeviceWatcherEvents(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Enumeration_IEnclosureLocation<D>::InDock() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IEnclosureLocation)->get_InDock(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Enumeration_IEnclosureLocation<D>::InLid() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IEnclosureLocation)->get_InLid(&value));
    return value;
}

template <typename D> Windows::Devices::Enumeration::Panel consume_Windows_Devices_Enumeration_IEnclosureLocation<D>::Panel() const
{
    Windows::Devices::Enumeration::Panel value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IEnclosureLocation)->get_Panel(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Enumeration_IEnclosureLocation2<D>::RotationAngleInDegreesClockwise() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::IEnclosureLocation2)->get_RotationAngleInDegreesClockwise(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs> : produce_base<D, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceAccessStatus>* value) noexcept override
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
struct produce<D, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2> : produce_base<D, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
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
struct produce<D, Windows::Devices::Enumeration::IDeviceAccessInformation> : produce_base<D, Windows::Devices::Enumeration::IDeviceAccessInformation>
{
    HRESULT __stdcall add_AccessChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().AccessChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentStatus(abi_t<Windows::Devices::Enumeration::DeviceAccessStatus>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().CurrentStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceAccessInformationStatics> : produce_base<D, Windows::Devices::Enumeration::IDeviceAccessInformationStatics>
{
    HRESULT __stdcall CreateFromId(HSTRING deviceId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFromId(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromDeviceClassId(abi_t<GUID> deviceClassId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFromDeviceClassId(*reinterpret_cast<GUID const*>(&deviceClassId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromDeviceClass(abi_t<Windows::Devices::Enumeration::DeviceClass> deviceClass, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFromDeviceClass(*reinterpret_cast<Windows::Devices::Enumeration::DeviceClass const*>(&deviceClass)));
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
struct produce<D, Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails> : produce_base<D, Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails>
{
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
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs> : produce_base<D, Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs>
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
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceInformation> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformation>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDefault(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDefault());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnclosureLocation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnclosureLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Update(::IUnknown* updateInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformationUpdate const*>(&updateInfo));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetThumbnailAsync(::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().GetThumbnailAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGlyphThumbnailAsync(::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().GetGlyphThumbnailAsync());
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
struct produce<D, Windows::Devices::Enumeration::IDeviceInformation2> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformation2>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::Devices::Enumeration::DeviceInformationKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pairing(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pairing());
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
struct produce<D, Windows::Devices::Enumeration::IDeviceInformationCustomPairing> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformationCustomPairing>
{
    HRESULT __stdcall PairAsync(abi_t<Windows::Devices::Enumeration::DevicePairingKinds> pairingKindsSupported, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PairAsync(*reinterpret_cast<Windows::Devices::Enumeration::DevicePairingKinds const*>(&pairingKindsSupported)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PairWithProtectionLevelAsync(abi_t<Windows::Devices::Enumeration::DevicePairingKinds> pairingKindsSupported, abi_t<Windows::Devices::Enumeration::DevicePairingProtectionLevel> minProtectionLevel, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PairAsync(*reinterpret_cast<Windows::Devices::Enumeration::DevicePairingKinds const*>(&pairingKindsSupported), *reinterpret_cast<Windows::Devices::Enumeration::DevicePairingProtectionLevel const*>(&minProtectionLevel)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PairWithProtectionLevelAndSettingsAsync(abi_t<Windows::Devices::Enumeration::DevicePairingKinds> pairingKindsSupported, abi_t<Windows::Devices::Enumeration::DevicePairingProtectionLevel> minProtectionLevel, ::IUnknown* devicePairingSettings, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PairAsync(*reinterpret_cast<Windows::Devices::Enumeration::DevicePairingKinds const*>(&pairingKindsSupported), *reinterpret_cast<Windows::Devices::Enumeration::DevicePairingProtectionLevel const*>(&minProtectionLevel), *reinterpret_cast<Windows::Devices::Enumeration::IDevicePairingSettings const*>(&devicePairingSettings)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PairingRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PairingRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PairingRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PairingRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceInformationPairing> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformationPairing>
{
    HRESULT __stdcall get_IsPaired(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPaired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanPair(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanPair());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PairAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PairAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PairWithProtectionLevelAsync(abi_t<Windows::Devices::Enumeration::DevicePairingProtectionLevel> minProtectionLevel, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PairAsync(*reinterpret_cast<Windows::Devices::Enumeration::DevicePairingProtectionLevel const*>(&minProtectionLevel)));
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
struct produce<D, Windows::Devices::Enumeration::IDeviceInformationPairing2> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformationPairing2>
{
    HRESULT __stdcall get_ProtectionLevel(abi_t<Windows::Devices::Enumeration::DevicePairingProtectionLevel>* value) noexcept override
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

    HRESULT __stdcall get_Custom(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Custom());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PairWithProtectionLevelAndSettingsAsync(abi_t<Windows::Devices::Enumeration::DevicePairingProtectionLevel> minProtectionLevel, ::IUnknown* devicePairingSettings, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PairAsync(*reinterpret_cast<Windows::Devices::Enumeration::DevicePairingProtectionLevel const*>(&minProtectionLevel), *reinterpret_cast<Windows::Devices::Enumeration::IDevicePairingSettings const*>(&devicePairingSettings)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnpairAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnpairAsync());
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
struct produce<D, Windows::Devices::Enumeration::IDeviceInformationPairingStatics> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformationPairingStatics>
{
    HRESULT __stdcall TryRegisterForAllInboundPairingRequests(abi_t<Windows::Devices::Enumeration::DevicePairingKinds> pairingKindsSupported, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryRegisterForAllInboundPairingRequests(*reinterpret_cast<Windows::Devices::Enumeration::DevicePairingKinds const*>(&pairingKindsSupported)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceInformationStatics> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformationStatics>
{
    HRESULT __stdcall CreateFromIdAsync(HSTRING deviceId, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().CreateFromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromIdAsyncAdditionalProperties(HSTRING deviceId, ::IUnknown* additionalProperties, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().CreateFromIdAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&additionalProperties)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsyncDeviceClass(abi_t<Windows::Devices::Enumeration::DeviceClass> deviceClass, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<Windows::Devices::Enumeration::DeviceClass const*>(&deviceClass)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsyncAqsFilter(HSTRING aqsFilter, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<hstring const*>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsyncAqsFilterAndAdditionalProperties(HSTRING aqsFilter, ::IUnknown* additionalProperties, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<hstring const*>(&aqsFilter), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&additionalProperties)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcher(::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcherDeviceClass(abi_t<Windows::Devices::Enumeration::DeviceClass> deviceClass, ::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher(*reinterpret_cast<Windows::Devices::Enumeration::DeviceClass const*>(&deviceClass)));
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcherAqsFilter(HSTRING aqsFilter, ::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher(*reinterpret_cast<hstring const*>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcherAqsFilterAndAdditionalProperties(HSTRING aqsFilter, ::IUnknown* additionalProperties, ::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher(*reinterpret_cast<hstring const*>(&aqsFilter), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&additionalProperties)));
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceInformationStatics2> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformationStatics2>
{
    HRESULT __stdcall GetAqsFilterFromDeviceClass(abi_t<Windows::Devices::Enumeration::DeviceClass> deviceClass, HSTRING* aqsFilter) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *aqsFilter = detach_abi(this->shim().GetAqsFilterFromDeviceClass(*reinterpret_cast<Windows::Devices::Enumeration::DeviceClass const*>(&deviceClass)));
            return S_OK;
        }
        catch (...)
        {
            *aqsFilter = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromIdAsyncWithKindAndAdditionalProperties(HSTRING deviceId, ::IUnknown* additionalProperties, abi_t<Windows::Devices::Enumeration::DeviceInformationKind> kind, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().CreateFromIdAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&additionalProperties), *reinterpret_cast<Windows::Devices::Enumeration::DeviceInformationKind const*>(&kind)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsyncWithKindAqsFilterAndAdditionalProperties(HSTRING aqsFilter, ::IUnknown* additionalProperties, abi_t<Windows::Devices::Enumeration::DeviceInformationKind> kind, ::IUnknown** asyncOp) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<hstring const*>(&aqsFilter), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&additionalProperties), *reinterpret_cast<Windows::Devices::Enumeration::DeviceInformationKind const*>(&kind)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOp = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcherWithKindAqsFilterAndAdditionalProperties(HSTRING aqsFilter, ::IUnknown* additionalProperties, abi_t<Windows::Devices::Enumeration::DeviceInformationKind> kind, ::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher(*reinterpret_cast<hstring const*>(&aqsFilter), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&additionalProperties), *reinterpret_cast<Windows::Devices::Enumeration::DeviceInformationKind const*>(&kind)));
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceInformationUpdate> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformationUpdate>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
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
struct produce<D, Windows::Devices::Enumeration::IDeviceInformationUpdate2> : produce_base<D, Windows::Devices::Enumeration::IDeviceInformationUpdate2>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::Devices::Enumeration::DeviceInformationKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs> : produce_base<D, Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs>
{
    HRESULT __stdcall get_DeviceInformation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PairingKind(abi_t<Windows::Devices::Enumeration::DevicePairingKinds>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PairingKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pin(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pin());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Accept() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcceptWithPin(HSTRING pin) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept(*reinterpret_cast<hstring const*>(&pin));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::Devices::Enumeration::IDevicePairingResult> : produce_base<D, Windows::Devices::Enumeration::IDevicePairingResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DevicePairingResultStatus>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionLevelUsed(abi_t<Windows::Devices::Enumeration::DevicePairingProtectionLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtectionLevelUsed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDevicePairingSettings> : produce_base<D, Windows::Devices::Enumeration::IDevicePairingSettings>
{};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDevicePicker> : produce_base<D, Windows::Devices::Enumeration::IDevicePicker>
{
    HRESULT __stdcall get_Filter(::IUnknown** filter) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *filter = detach_abi(this->shim().Filter());
            return S_OK;
        }
        catch (...)
        {
            *filter = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Appearance(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Appearance());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestedProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeviceSelected(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DeviceSelected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeviceSelected(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeviceSelected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DisconnectButtonClicked(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DisconnectButtonClicked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DisconnectButtonClicked(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisconnectButtonClicked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DevicePickerDismissed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DevicePickerDismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DevicePickerDismissed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DevicePickerDismissed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Show(abi_t<Windows::Foundation::Rect> selection) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowWithPlacement(abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> placement) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&placement));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSingleDeviceAsync(abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PickSingleDeviceAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSingleDeviceAsyncWithPlacement(abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> placement, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PickSingleDeviceAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&placement)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Hide() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hide();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDisplayStatus(::IUnknown* device, HSTRING status, abi_t<Windows::Devices::Enumeration::DevicePickerDisplayStatusOptions> options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDisplayStatus(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&device), *reinterpret_cast<hstring const*>(&status), *reinterpret_cast<Windows::Devices::Enumeration::DevicePickerDisplayStatusOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDevicePickerAppearance> : produce_base<D, Windows::Devices::Enumeration::IDevicePickerAppearance>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccentColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccentColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccentColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccentColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedForegroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedForegroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedForegroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedBackgroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedBackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedAccentColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedAccentColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedAccentColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedAccentColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDevicePickerFilter> : produce_base<D, Windows::Devices::Enumeration::IDevicePickerFilter>
{
    HRESULT __stdcall get_SupportedDeviceClasses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedDeviceClasses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedDeviceSelectors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedDeviceSelectors());
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
struct produce<D, Windows::Devices::Enumeration::IDeviceSelectedEventArgs> : produce_base<D, Windows::Devices::Enumeration::IDeviceSelectedEventArgs>
{
    HRESULT __stdcall get_SelectedDevice(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedDevice());
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
struct produce<D, Windows::Devices::Enumeration::IDeviceUnpairingResult> : produce_base<D, Windows::Devices::Enumeration::IDeviceUnpairingResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceUnpairingResultStatus>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceWatcher> : produce_base<D, Windows::Devices::Enumeration::IDeviceWatcher>
{
    HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
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
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
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

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceWatcherStatus>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().Status());
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
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceWatcher2> : produce_base<D, Windows::Devices::Enumeration::IDeviceWatcher2>
{
    HRESULT __stdcall GetBackgroundTrigger(::IUnknown* requestedEventKinds, ::IUnknown** trigger) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *trigger = detach_abi(this->shim().GetBackgroundTrigger(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Devices::Enumeration::DeviceWatcherEventKind> const*>(&requestedEventKinds)));
            return S_OK;
        }
        catch (...)
        {
            *trigger = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IDeviceWatcherEvent> : produce_base<D, Windows::Devices::Enumeration::IDeviceWatcherEvent>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::Devices::Enumeration::DeviceWatcherEventKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceInformation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceInformationUpdate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceInformationUpdate());
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
struct produce<D, Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails> : produce_base<D, Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails>
{
    HRESULT __stdcall get_DeviceWatcherEvents(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceWatcherEvents());
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
struct produce<D, Windows::Devices::Enumeration::IEnclosureLocation> : produce_base<D, Windows::Devices::Enumeration::IEnclosureLocation>
{
    HRESULT __stdcall get_InDock(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InDock());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InLid(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InLid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Panel(abi_t<Windows::Devices::Enumeration::Panel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Panel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::IEnclosureLocation2> : produce_base<D, Windows::Devices::Enumeration::IEnclosureLocation2>
{
    HRESULT __stdcall get_RotationAngleInDegreesClockwise(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationAngleInDegreesClockwise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

inline Windows::Devices::Enumeration::DeviceAccessInformation DeviceAccessInformation::CreateFromId(param::hstring const& deviceId)
{
    return get_activation_factory<DeviceAccessInformation, Windows::Devices::Enumeration::IDeviceAccessInformationStatics>().CreateFromId(deviceId);
}

inline Windows::Devices::Enumeration::DeviceAccessInformation DeviceAccessInformation::CreateFromDeviceClassId(GUID const& deviceClassId)
{
    return get_activation_factory<DeviceAccessInformation, Windows::Devices::Enumeration::IDeviceAccessInformationStatics>().CreateFromDeviceClassId(deviceClassId);
}

inline Windows::Devices::Enumeration::DeviceAccessInformation DeviceAccessInformation::CreateFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass)
{
    return get_activation_factory<DeviceAccessInformation, Windows::Devices::Enumeration::IDeviceAccessInformationStatics>().CreateFromDeviceClass(deviceClass);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> DeviceInformation::CreateFromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().CreateFromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> DeviceInformation::CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().CreateFromIdAsync(deviceId, additionalProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> DeviceInformation::FindAllAsync()
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> DeviceInformation::FindAllAsync(Windows::Devices::Enumeration::DeviceClass const& deviceClass)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().FindAllAsync(deviceClass);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> DeviceInformation::FindAllAsync(param::hstring const& aqsFilter)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().FindAllAsync(aqsFilter);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> DeviceInformation::FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().FindAllAsync(aqsFilter, additionalProperties);
}

inline Windows::Devices::Enumeration::DeviceWatcher DeviceInformation::CreateWatcher()
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().CreateWatcher();
}

inline Windows::Devices::Enumeration::DeviceWatcher DeviceInformation::CreateWatcher(Windows::Devices::Enumeration::DeviceClass const& deviceClass)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().CreateWatcher(deviceClass);
}

inline Windows::Devices::Enumeration::DeviceWatcher DeviceInformation::CreateWatcher(param::hstring const& aqsFilter)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().CreateWatcher(aqsFilter);
}

inline Windows::Devices::Enumeration::DeviceWatcher DeviceInformation::CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics>().CreateWatcher(aqsFilter, additionalProperties);
}

inline hstring DeviceInformation::GetAqsFilterFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics2>().GetAqsFilterFromDeviceClass(deviceClass);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> DeviceInformation::CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics2>().CreateFromIdAsync(deviceId, additionalProperties, kind);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> DeviceInformation::FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics2>().FindAllAsync(aqsFilter, additionalProperties, kind);
}

inline Windows::Devices::Enumeration::DeviceWatcher DeviceInformation::CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind)
{
    return get_activation_factory<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformationStatics2>().CreateWatcher(aqsFilter, additionalProperties, kind);
}

inline bool DeviceInformationPairing::TryRegisterForAllInboundPairingRequests(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported)
{
    return get_activation_factory<DeviceInformationPairing, Windows::Devices::Enumeration::IDeviceInformationPairingStatics>().TryRegisterForAllInboundPairingRequests(pairingKindsSupported);
}

inline DevicePicker::DevicePicker() :
    DevicePicker(activate_instance<DevicePicker>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceAccessInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceAccessInformation> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceAccessInformationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceAccessInformationStatics> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformation> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformation2> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformationCustomPairing> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformationCustomPairing> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformationPairing> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformationPairing> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformationPairing2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformationPairing2> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformationPairingStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformationPairingStatics> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics2> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformationUpdate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformationUpdate> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceInformationUpdate2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceInformationUpdate2> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDevicePairingResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDevicePairingResult> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDevicePairingSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDevicePairingSettings> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDevicePicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDevicePicker> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDevicePickerAppearance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDevicePickerAppearance> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDevicePickerFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDevicePickerFilter> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceSelectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceSelectedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceUnpairingResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceUnpairingResult> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceWatcher> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceWatcher2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceWatcher2> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceWatcherEvent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceWatcherEvent> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IEnclosureLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IEnclosureLocation> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::IEnclosureLocation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::IEnclosureLocation2> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceAccessInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceAccessInformation> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceInformation> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceInformationCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceInformationCollection> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceInformationCustomPairing> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceInformationCustomPairing> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceInformationPairing> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceInformationPairing> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceInformationUpdate> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceInformationUpdate> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DevicePairingResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DevicePairingResult> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DevicePicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DevicePicker> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DevicePickerAppearance> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DevicePickerAppearance> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DevicePickerFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DevicePickerFilter> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceSelectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceSelectedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceThumbnail> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceThumbnail> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceUnpairingResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceUnpairingResult> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceWatcher> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceWatcherEvent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceWatcherEvent> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::DeviceWatcherTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::DeviceWatcherTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Enumeration::EnclosureLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Enumeration::EnclosureLocation> {};

}

WINRT_WARNING_POP
