// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core {

struct CoreApplicationView;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct CoreDispatcher;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input {

struct RadialController;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Core {

struct IRadialControllerIndependentInputSource;
struct IRadialControllerIndependentInputSourceStatics;
struct RadialControllerIndependentInputSource;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Core::RadialControllerIndependentInputSource>{ using type = class_category; };
template <> struct name<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>{ static constexpr auto & value{ L"Windows.UI.Input.Core.IRadialControllerIndependentInputSource" }; };
template <> struct name<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>{ static constexpr auto & value{ L"Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics" }; };
template <> struct name<Windows::UI::Input::Core::RadialControllerIndependentInputSource>{ static constexpr auto & value{ L"Windows.UI.Input.Core.RadialControllerIndependentInputSource" }; };
template <> struct guid<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>{ static constexpr GUID value{ 0x3D577EF6,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>{ static constexpr GUID value{ 0x3D577EF5,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct default_interface<Windows::UI::Input::Core::RadialControllerIndependentInputSource>{ using type = Windows::UI::Input::Core::IRadialControllerIndependentInputSource; };

template <typename D>
struct consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSource
{
    Windows::UI::Input::RadialController Controller() const;
    Windows::UI::Core::CoreDispatcher Dispatcher() const;
};
template <> struct consume<Windows::UI::Input::Core::IRadialControllerIndependentInputSource> { template <typename D> using type = consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSource<D>; };

template <typename D>
struct consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSourceStatics
{
    Windows::UI::Input::Core::RadialControllerIndependentInputSource CreateForView(Windows::ApplicationModel::Core::CoreApplicationView const& view) const;
};
template <> struct consume<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics> { template <typename D> using type = consume_Windows_UI_Input_Core_IRadialControllerIndependentInputSourceStatics<D>; };

template <> struct abi<Windows::UI::Input::Core::IRadialControllerIndependentInputSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Controller(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Dispatcher(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateForView(::IUnknown* view, ::IUnknown** result) = 0;
};};

}
