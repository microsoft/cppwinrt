// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.Devices.Notification.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Notification {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Notification {

struct WINRT_EBO VibrationDevice :
    Windows::Phone::Devices::Notification::IVibrationDevice
{
    VibrationDevice(std::nullptr_t) noexcept {}
    static Windows::Phone::Devices::Notification::VibrationDevice GetDefault();
};

}
