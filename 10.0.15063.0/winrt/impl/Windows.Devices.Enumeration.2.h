// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Background.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.Devices.Enumeration.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct WINRT_EBO DeviceAccessChangedEventArgs :
    Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs,
    impl::require<DeviceAccessChangedEventArgs, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2>
{
    DeviceAccessChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceAccessInformation :
    Windows::Devices::Enumeration::IDeviceAccessInformation
{
    DeviceAccessInformation(std::nullptr_t) noexcept {}
    static Windows::Devices::Enumeration::DeviceAccessInformation CreateFromId(param::hstring const& deviceId);
    static Windows::Devices::Enumeration::DeviceAccessInformation CreateFromDeviceClassId(GUID const& deviceClassId);
    static Windows::Devices::Enumeration::DeviceAccessInformation CreateFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass);
};

struct WINRT_EBO DeviceConnectionChangeTriggerDetails :
    Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails
{
    DeviceConnectionChangeTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceDisconnectButtonClickedEventArgs :
    Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs
{
    DeviceDisconnectButtonClickedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceInformation :
    Windows::Devices::Enumeration::IDeviceInformation,
    impl::require<DeviceInformation, Windows::Devices::Enumeration::IDeviceInformation2>
{
    DeviceInformation(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> CreateFromIdAsync(param::hstring const& deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync(Windows::Devices::Enumeration::DeviceClass const& deviceClass);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync(param::hstring const& aqsFilter);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties);
    static Windows::Devices::Enumeration::DeviceWatcher CreateWatcher();
    static Windows::Devices::Enumeration::DeviceWatcher CreateWatcher(Windows::Devices::Enumeration::DeviceClass const& deviceClass);
    static Windows::Devices::Enumeration::DeviceWatcher CreateWatcher(param::hstring const& aqsFilter);
    static Windows::Devices::Enumeration::DeviceWatcher CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties);
    static hstring GetAqsFilterFromDeviceClass(Windows::Devices::Enumeration::DeviceClass const& deviceClass);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> CreateFromIdAsync(param::hstring const& deviceId, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> FindAllAsync(param::hstring const& aqsFilter, param::async_iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind);
    static Windows::Devices::Enumeration::DeviceWatcher CreateWatcher(param::hstring const& aqsFilter, param::iterable<hstring> const& additionalProperties, Windows::Devices::Enumeration::DeviceInformationKind const& kind);
};

struct WINRT_EBO DeviceInformationCollection :
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceInformation>
{
    DeviceInformationCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceInformationCustomPairing :
    Windows::Devices::Enumeration::IDeviceInformationCustomPairing
{
    DeviceInformationCustomPairing(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceInformationPairing :
    Windows::Devices::Enumeration::IDeviceInformationPairing,
    impl::require<DeviceInformationPairing, Windows::Devices::Enumeration::IDeviceInformationPairing2>
{
    DeviceInformationPairing(std::nullptr_t) noexcept {}
    using impl::consume_t<DeviceInformationPairing, Windows::Devices::Enumeration::IDeviceInformationPairing2>::PairAsync;
    using Windows::Devices::Enumeration::IDeviceInformationPairing::PairAsync;
    static bool TryRegisterForAllInboundPairingRequests(Windows::Devices::Enumeration::DevicePairingKinds const& pairingKindsSupported);
};

struct WINRT_EBO DeviceInformationUpdate :
    Windows::Devices::Enumeration::IDeviceInformationUpdate,
    impl::require<DeviceInformationUpdate, Windows::Devices::Enumeration::IDeviceInformationUpdate2>
{
    DeviceInformationUpdate(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DevicePairingRequestedEventArgs :
    Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs
{
    DevicePairingRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DevicePairingResult :
    Windows::Devices::Enumeration::IDevicePairingResult
{
    DevicePairingResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DevicePicker :
    Windows::Devices::Enumeration::IDevicePicker
{
    DevicePicker(std::nullptr_t) noexcept {}
    DevicePicker();
};

struct WINRT_EBO DevicePickerAppearance :
    Windows::Devices::Enumeration::IDevicePickerAppearance
{
    DevicePickerAppearance(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DevicePickerFilter :
    Windows::Devices::Enumeration::IDevicePickerFilter
{
    DevicePickerFilter(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceSelectedEventArgs :
    Windows::Devices::Enumeration::IDeviceSelectedEventArgs
{
    DeviceSelectedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceThumbnail :
    Windows::Storage::Streams::IRandomAccessStreamWithContentType
{
    DeviceThumbnail(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceUnpairingResult :
    Windows::Devices::Enumeration::IDeviceUnpairingResult
{
    DeviceUnpairingResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceWatcher :
    Windows::Devices::Enumeration::IDeviceWatcher,
    impl::require<DeviceWatcher, Windows::Devices::Enumeration::IDeviceWatcher2>
{
    DeviceWatcher(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceWatcherEvent :
    Windows::Devices::Enumeration::IDeviceWatcherEvent
{
    DeviceWatcherEvent(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeviceWatcherTriggerDetails :
    Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails
{
    DeviceWatcherTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EnclosureLocation :
    Windows::Devices::Enumeration::IEnclosureLocation,
    impl::require<EnclosureLocation, Windows::Devices::Enumeration::IEnclosureLocation2>
{
    EnclosureLocation(std::nullptr_t) noexcept {}
};

}
