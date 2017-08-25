// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Power.0.h"
#include "winrt/impl/Windows.Devices.Power.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Power {

struct WINRT_EBO IBattery :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBattery>
{
    IBattery(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBatteryReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBatteryReport>
{
    IBatteryReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBatteryStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBatteryStatics>
{
    IBatteryStatics(std::nullptr_t = nullptr) noexcept {}
};

}
