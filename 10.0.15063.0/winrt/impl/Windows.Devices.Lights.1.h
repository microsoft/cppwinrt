// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Lights.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Lights {

struct WINRT_EBO ILamp :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILamp>,
    impl::require<ILamp, Windows::Foundation::IClosable>
{
    ILamp(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILampAvailabilityChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILampAvailabilityChangedEventArgs>
{
    ILampAvailabilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILampStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILampStatics>
{
    ILampStatics(std::nullptr_t = nullptr) noexcept {}
};

}
