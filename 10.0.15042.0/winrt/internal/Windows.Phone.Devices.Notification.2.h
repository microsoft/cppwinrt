// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.Devices.Notification.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::Devices::Notification {

struct IVibrationDevice :
    Windows::Foundation::IInspectable,
    impl::consume<IVibrationDevice>
{
    IVibrationDevice(std::nullptr_t = nullptr) noexcept {}
};

struct IVibrationDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IVibrationDeviceStatics>
{
    IVibrationDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
