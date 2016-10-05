// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Phone.UI.Input.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Phone::UI::Input {

struct __declspec(uuid("f6f555ff-64ec-42a2-b93b-2fbc0c36a121")) __declspec(novtable) IBackPressedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool * value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};

struct __declspec(uuid("b4063bda-201f-473d-bc69-e9e4ac57c9d0")) __declspec(novtable) ICameraEventArgs : Windows::IInspectable
{
};

struct __declspec(uuid("594b8780-da66-4fd8-a776-7506bd0cbfa7")) __declspec(novtable) IHardwareButtonsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall add_BackPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_BackPressed(event_token token) = 0;
};

struct __declspec(uuid("39c6c274-993f-40dd-854c-831a8934b92e")) __declspec(novtable) IHardwareButtonsStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall add_CameraHalfPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CameraHalfPressed(event_token token) = 0;
    virtual HRESULT __stdcall add_CameraPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CameraPressed(event_token token) = 0;
    virtual HRESULT __stdcall add_CameraReleased(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CameraReleased(event_token token) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Phone::UI::Input::BackPressedEventArgs> { using default_interface = Windows::Phone::UI::Input::IBackPressedEventArgs; };
template <> struct traits<Windows::Phone::UI::Input::CameraEventArgs> { using default_interface = Windows::Phone::UI::Input::ICameraEventArgs; };

}

namespace Windows::Phone::UI::Input {

template <typename T> struct impl_IBackPressedEventArgs;
template <typename T> struct impl_ICameraEventArgs;
template <typename T> struct impl_IHardwareButtonsStatics;
template <typename T> struct impl_IHardwareButtonsStatics2;

}

namespace impl {

template <> struct traits<Windows::Phone::UI::Input::IBackPressedEventArgs>
{
    using abi = ABI::Windows::Phone::UI::Input::IBackPressedEventArgs;
    template <typename D> using consume = Windows::Phone::UI::Input::impl_IBackPressedEventArgs<D>;
};

template <> struct traits<Windows::Phone::UI::Input::ICameraEventArgs>
{
    using abi = ABI::Windows::Phone::UI::Input::ICameraEventArgs;
    template <typename D> using consume = Windows::Phone::UI::Input::impl_ICameraEventArgs<D>;
};

template <> struct traits<Windows::Phone::UI::Input::IHardwareButtonsStatics>
{
    using abi = ABI::Windows::Phone::UI::Input::IHardwareButtonsStatics;
    template <typename D> using consume = Windows::Phone::UI::Input::impl_IHardwareButtonsStatics<D>;
};

template <> struct traits<Windows::Phone::UI::Input::IHardwareButtonsStatics2>
{
    using abi = ABI::Windows::Phone::UI::Input::IHardwareButtonsStatics2;
    template <typename D> using consume = Windows::Phone::UI::Input::impl_IHardwareButtonsStatics2<D>;
};

template <> struct traits<Windows::Phone::UI::Input::BackPressedEventArgs>
{
    using abi = ABI::Windows::Phone::UI::Input::BackPressedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.UI.Input.BackPressedEventArgs"; }
};

template <> struct traits<Windows::Phone::UI::Input::CameraEventArgs>
{
    using abi = ABI::Windows::Phone::UI::Input::CameraEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.UI.Input.CameraEventArgs"; }
};

template <> struct traits<Windows::Phone::UI::Input::HardwareButtons>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Phone.UI.Input.HardwareButtons"; }
};

}

}
