// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Background.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Background {

struct IDeviceServicingDetails :
    Windows::Foundation::IInspectable,
    impl::consume<IDeviceServicingDetails>
{
    IDeviceServicingDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IDeviceUseDetails :
    Windows::Foundation::IInspectable,
    impl::consume<IDeviceUseDetails>
{
    IDeviceUseDetails(std::nullptr_t = nullptr) noexcept {}
};

}

}
