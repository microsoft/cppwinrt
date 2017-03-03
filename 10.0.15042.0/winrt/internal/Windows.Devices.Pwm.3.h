// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Pwm.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Pwm {

struct WINRT_EBO PwmController :
    Windows::Devices::Pwm::IPwmController
{
    PwmController(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> GetControllersAsync(const Windows::Devices::Pwm::Provider::IPwmProvider & provider);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> GetDefaultAsync();
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(hstring_view friendlyName);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> FromIdAsync(hstring_view deviceId);
};

struct WINRT_EBO PwmPin :
    Windows::Devices::Pwm::IPwmPin
{
    PwmPin(std::nullptr_t) noexcept {}
};

}

}
