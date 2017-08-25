// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Networking.Proximity.0.h"

WINRT_EXPORT namespace winrt::Windows::Networking::Proximity {

struct WINRT_EBO IConnectionRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IConnectionRequestedEventArgs>
{
    IConnectionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPeerFinderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerFinderStatics>
{
    IPeerFinderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPeerFinderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerFinderStatics2>
{
    IPeerFinderStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPeerInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerInformation>
{
    IPeerInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPeerInformation3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerInformation3>
{
    IPeerInformation3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPeerInformationWithHostAndService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerInformationWithHostAndService>
{
    IPeerInformationWithHostAndService(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPeerWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPeerWatcher>
{
    IPeerWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProximityDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximityDevice>
{
    IProximityDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProximityDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximityDeviceStatics>
{
    IProximityDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProximityMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProximityMessage>
{
    IProximityMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITriggeredConnectionStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITriggeredConnectionStateChangedEventArgs>
{
    ITriggeredConnectionStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
