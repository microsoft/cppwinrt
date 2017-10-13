// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Gaming.Input.0.h"
#include "winrt/impl/Windows.UI.Input.Preview.Injection.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection {

struct WINRT_EBO IInjectedInputGamepadInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputGamepadInfo>
{
    IInjectedInputGamepadInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInjectedInputGamepadInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInjectedInputGamepadInfoFactory>
{
    IInjectedInputGamepadInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

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

struct WINRT_EBO IInputInjector2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputInjector2>,
    impl::require<IInputInjector2, Windows::UI::Input::Preview::Injection::IInputInjector>
{
    IInputInjector2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInputInjectorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputInjectorStatics>
{
    IInputInjectorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInputInjectorStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInputInjectorStatics2>,
    impl::require<IInputInjectorStatics2, Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
{
    IInputInjectorStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
