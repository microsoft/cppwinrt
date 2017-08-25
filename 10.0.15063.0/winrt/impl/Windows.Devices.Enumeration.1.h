// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Background.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Popups.0.h"
#include "winrt/impl/Windows.Devices.Enumeration.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct WINRT_EBO IDeviceAccessChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccessChangedEventArgs>
{
    IDeviceAccessChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceAccessChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccessChangedEventArgs2>,
    impl::require<IDeviceAccessChangedEventArgs2, Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>
{
    IDeviceAccessChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceAccessInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccessInformation>
{
    IDeviceAccessInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceAccessInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccessInformationStatics>
{
    IDeviceAccessInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceConnectionChangeTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceConnectionChangeTriggerDetails>
{
    IDeviceConnectionChangeTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceDisconnectButtonClickedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceDisconnectButtonClickedEventArgs>
{
    IDeviceDisconnectButtonClickedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformation>
{
    IDeviceInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformation2>
{
    IDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformationCustomPairing :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationCustomPairing>
{
    IDeviceInformationCustomPairing(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformationPairing :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationPairing>
{
    IDeviceInformationPairing(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformationPairing2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationPairing2>
{
    IDeviceInformationPairing2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformationPairingStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationPairingStatics>
{
    IDeviceInformationPairingStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationStatics>
{
    IDeviceInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationStatics2>
{
    IDeviceInformationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformationUpdate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationUpdate>
{
    IDeviceInformationUpdate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceInformationUpdate2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceInformationUpdate2>
{
    IDeviceInformationUpdate2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDevicePairingRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePairingRequestedEventArgs>
{
    IDevicePairingRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDevicePairingResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePairingResult>
{
    IDevicePairingResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDevicePairingSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePairingSettings>
{
    IDevicePairingSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDevicePicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePicker>
{
    IDevicePicker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDevicePickerAppearance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePickerAppearance>
{
    IDevicePickerAppearance(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDevicePickerFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDevicePickerFilter>
{
    IDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceSelectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceSelectedEventArgs>
{
    IDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceUnpairingResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceUnpairingResult>
{
    IDeviceUnpairingResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcher>
{
    IDeviceWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceWatcher2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcher2>
{
    IDeviceWatcher2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceWatcherEvent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcherEvent>
{
    IDeviceWatcherEvent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceWatcherTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceWatcherTriggerDetails>
{
    IDeviceWatcherTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEnclosureLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnclosureLocation>
{
    IEnclosureLocation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEnclosureLocation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEnclosureLocation2>,
    impl::require<IEnclosureLocation2, Windows::Devices::Enumeration::IEnclosureLocation>
{
    IEnclosureLocation2(std::nullptr_t = nullptr) noexcept {}
};

}
