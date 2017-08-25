// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.UI.Input.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::UI::Input {

struct WINRT_EBO IBackPressedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackPressedEventArgs>
{
    IBackPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICameraEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICameraEventArgs>
{
    ICameraEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHardwareButtonsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHardwareButtonsStatics>
{
    IHardwareButtonsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHardwareButtonsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHardwareButtonsStatics2>
{
    IHardwareButtonsStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
