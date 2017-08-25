// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Pwm.Provider.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Pwm.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Pwm {

struct WINRT_EBO PwmController :
    Windows::Devices::Pwm::IPwmController
{
    PwmController(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> GetControllersAsync(Windows::Devices::Pwm::Provider::IPwmProvider const& provider);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> GetDefaultAsync();
    static hstring GetDeviceSelector();
    static hstring GetDeviceSelector(param::hstring const& friendlyName);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> FromIdAsync(param::hstring const& deviceId);
};

struct WINRT_EBO PwmPin :
    Windows::Devices::Pwm::IPwmPin
{
    PwmPin(std::nullptr_t) noexcept {}
};

}
