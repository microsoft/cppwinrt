// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Background.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Background {

template <typename D>
struct WINRT_EBO impl_IDeviceServicingDetails
{
    hstring DeviceId() const;
    hstring Arguments() const;
    Windows::Foundation::TimeSpan ExpectedDuration() const;
};

template <typename D>
struct WINRT_EBO impl_IDeviceUseDetails
{
    hstring DeviceId() const;
    hstring Arguments() const;
};

struct IDeviceServicingDetails :
    Windows::IInspectable,
    impl::consume<IDeviceServicingDetails>
{
    IDeviceServicingDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceServicingDetails>(m_ptr); }
};

struct IDeviceUseDetails :
    Windows::IInspectable,
    impl::consume<IDeviceUseDetails>
{
    IDeviceUseDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDeviceUseDetails>(m_ptr); }
};

}

}
