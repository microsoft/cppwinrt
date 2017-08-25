// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Pwm.Provider.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Pwm.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Pwm {

struct WINRT_EBO IPwmController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmController>
{
    IPwmController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPwmControllerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmControllerStatics>
{
    IPwmControllerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPwmControllerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmControllerStatics2>
{
    IPwmControllerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPwmControllerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmControllerStatics3>
{
    IPwmControllerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPwmPin :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPwmPin>,
    impl::require<IPwmPin, Windows::Foundation::IClosable>
{
    IPwmPin(std::nullptr_t = nullptr) noexcept {}
};

}
