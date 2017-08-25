// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.Devices.Power.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Power {

struct WINRT_EBO Battery :
    Windows::Phone::Devices::Power::IBattery
{
    Battery(std::nullptr_t) noexcept {}
    static Windows::Phone::Devices::Power::Battery GetDefault();
};

}
