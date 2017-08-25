// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Input.Preview.Injection.1.h"
#include "winrt/impl/Windows.UI.Input.Preview.Injection.2.h"

WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection {

struct InjectedInputPoint
{
    int32_t PositionX;
    int32_t PositionY;
};

struct InjectedInputPointerInfo
{
    uint32_t PointerId;
    Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions PointerOptions;
    Windows::UI::Input::Preview::Injection::InjectedInputPoint PixelLocation;
    uint32_t TimeOffsetInMilliseconds;
    uint64_t PerformanceCount;
};

struct InjectedInputRectangle
{
    int32_t Left;
    int32_t Top;
    int32_t Bottom;
    int32_t Right;
};

struct WINRT_EBO InjectedInputKeyboardInfo :
    Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo
{
    InjectedInputKeyboardInfo(std::nullptr_t) noexcept {}
    InjectedInputKeyboardInfo();
};

struct WINRT_EBO InjectedInputMouseInfo :
    Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo
{
    InjectedInputMouseInfo(std::nullptr_t) noexcept {}
    InjectedInputMouseInfo();
};

struct WINRT_EBO InjectedInputPenInfo :
    Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo
{
    InjectedInputPenInfo(std::nullptr_t) noexcept {}
    InjectedInputPenInfo();
};

struct WINRT_EBO InjectedInputTouchInfo :
    Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo
{
    InjectedInputTouchInfo(std::nullptr_t) noexcept {}
    InjectedInputTouchInfo();
};

struct WINRT_EBO InputInjector :
    Windows::UI::Input::Preview::Injection::IInputInjector
{
    InputInjector(std::nullptr_t) noexcept {}
    static Windows::UI::Input::Preview::Injection::InputInjector TryCreate();
};

}
