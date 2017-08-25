// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Input.Preview.Injection.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection {

struct WINRT_EBO IInjectedInputKeyboardInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputKeyboardInfo>
{
    IInjectedInputKeyboardInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInjectedInputMouseInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputMouseInfo>
{
    IInjectedInputMouseInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInjectedInputPenInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputPenInfo>
{
    IInjectedInputPenInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInjectedInputTouchInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputTouchInfo>
{
    IInjectedInputTouchInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInputInjector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputInjector>
{
    IInputInjector(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInputInjectorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputInjectorStatics>
{
    IInputInjectorStatics(std::nullptr_t = nullptr) noexcept {}
};

}
