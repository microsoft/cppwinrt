// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Display {

struct IDisplayRequest;
struct DisplayRequest;

}

namespace winrt::impl {

template <> struct category<Windows::System::Display::IDisplayRequest>{ using type = interface_category; };
template <> struct category<Windows::System::Display::DisplayRequest>{ using type = class_category; };
template <> struct name<Windows::System::Display::IDisplayRequest>{ static constexpr auto & value{ L"Windows.System.Display.IDisplayRequest" }; };
template <> struct name<Windows::System::Display::DisplayRequest>{ static constexpr auto & value{ L"Windows.System.Display.DisplayRequest" }; };
template <> struct guid<Windows::System::Display::IDisplayRequest>{ static constexpr GUID value{ 0xE5732044,0xF49F,0x4B60,{ 0x8D,0xD4,0x5E,0x7E,0x3A,0x63,0x2A,0xC0 } }; };
template <> struct default_interface<Windows::System::Display::DisplayRequest>{ using type = Windows::System::Display::IDisplayRequest; };

template <typename D>
struct consume_Windows_System_Display_IDisplayRequest
{
    void RequestActive() const;
    void RequestRelease() const;
};
template <> struct consume<Windows::System::Display::IDisplayRequest> { template <typename D> using type = consume_Windows_System_Display_IDisplayRequest<D>; };

template <> struct abi<Windows::System::Display::IDisplayRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestActive() = 0;
    virtual HRESULT __stdcall RequestRelease() = 0;
};};

}
