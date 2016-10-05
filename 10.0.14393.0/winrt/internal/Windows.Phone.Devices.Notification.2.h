// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.Devices.Notification.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::Devices::Notification {

template <typename D>
struct WINRT_EBO impl_IVibrationDevice
{
    void Vibrate(const Windows::Foundation::TimeSpan & duration) const;
    void Cancel() const;
};

template <typename D>
struct WINRT_EBO impl_IVibrationDeviceStatics
{
    Windows::Phone::Devices::Notification::VibrationDevice GetDefault() const;
};

struct IVibrationDevice :
    Windows::IInspectable,
    impl::consume<IVibrationDevice>
{
    IVibrationDevice(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVibrationDevice>(m_ptr); }
};

struct IVibrationDeviceStatics :
    Windows::IInspectable,
    impl::consume<IVibrationDeviceStatics>
{
    IVibrationDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVibrationDeviceStatics>(m_ptr); }
};

}

}
