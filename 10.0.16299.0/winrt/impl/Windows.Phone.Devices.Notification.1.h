// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.Devices.Notification.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Notification {

struct WINRT_EBO IVibrationDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVibrationDevice>
{
    IVibrationDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVibrationDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVibrationDeviceStatics>
{
    IVibrationDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}
