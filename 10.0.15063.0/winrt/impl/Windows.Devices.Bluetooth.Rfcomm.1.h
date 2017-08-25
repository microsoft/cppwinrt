// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Bluetooth.0.h"
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Rfcomm.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Rfcomm {

struct WINRT_EBO IRfcommDeviceService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceService>
{
    IRfcommDeviceService(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommDeviceService2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceService2>,
    impl::require<IRfcommDeviceService2, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>
{
    IRfcommDeviceService2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommDeviceService3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceService3>,
    impl::require<IRfcommDeviceService3, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>
{
    IRfcommDeviceService3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommDeviceServiceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceServiceStatics>
{
    IRfcommDeviceServiceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommDeviceServiceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceServiceStatics2>,
    impl::require<IRfcommDeviceServiceStatics2, Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>
{
    IRfcommDeviceServiceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommDeviceServicesResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommDeviceServicesResult>
{
    IRfcommDeviceServicesResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommServiceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceId>
{
    IRfcommServiceId(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommServiceIdStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceIdStatics>
{
    IRfcommServiceIdStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommServiceProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceProvider>
{
    IRfcommServiceProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRfcommServiceProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceProvider2>,
    impl::require<IRfcommServiceProvider2, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>
{
    IRfcommServiceProvider2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IRfcommServiceProvider2, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>::StartAdvertising;
    using impl::consume_t<IRfcommServiceProvider2, Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>::StartAdvertising;
};

struct WINRT_EBO IRfcommServiceProviderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRfcommServiceProviderStatics>
{
    IRfcommServiceProviderStatics(std::nullptr_t = nullptr) noexcept {}
};

}
