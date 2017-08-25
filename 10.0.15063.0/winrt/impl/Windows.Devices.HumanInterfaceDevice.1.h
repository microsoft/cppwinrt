// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.HumanInterfaceDevice.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::HumanInterfaceDevice {

struct WINRT_EBO IHidBooleanControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidBooleanControl>
{
    IHidBooleanControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidBooleanControlDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidBooleanControlDescription>
{
    IHidBooleanControlDescription(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidBooleanControlDescription2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidBooleanControlDescription2>
{
    IHidBooleanControlDescription2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidCollection>
{
    IHidCollection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidDevice>,
    impl::require<IHidDevice, Windows::Foundation::IClosable>
{
    IHidDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidDeviceStatics>
{
    IHidDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidFeatureReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidFeatureReport>
{
    IHidFeatureReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidInputReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidInputReport>
{
    IHidInputReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidInputReportReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidInputReportReceivedEventArgs>
{
    IHidInputReportReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidNumericControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidNumericControl>
{
    IHidNumericControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidNumericControlDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidNumericControlDescription>
{
    IHidNumericControlDescription(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHidOutputReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHidOutputReport>
{
    IHidOutputReport(std::nullptr_t = nullptr) noexcept {}
};

}
