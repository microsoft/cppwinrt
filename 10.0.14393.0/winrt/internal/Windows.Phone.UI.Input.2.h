// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.UI.Input.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cb5bc6b5_eee7_57a8_9563_eb0b2b8eb11f
#define WINRT_GENERIC_cb5bc6b5_eee7_57a8_9563_eb0b2b8eb11f
template <> struct __declspec(uuid("cb5bc6b5-eee7-57a8-9563-eb0b2b8eb11f")) __declspec(novtable) EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> : impl_EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_f5a60452_1495_5198_9c7c_758ddfe6613b
#define WINRT_GENERIC_f5a60452_1495_5198_9c7c_758ddfe6613b
template <> struct __declspec(uuid("f5a60452-1495-5198-9c7c-758ddfe6613b")) __declspec(novtable) EventHandler<Windows::Phone::UI::Input::CameraEventArgs> : impl_EventHandler<Windows::Phone::UI::Input::CameraEventArgs> {};
#endif


}

namespace Windows::Phone::UI::Input {

template <typename D>
struct WINRT_EBO impl_IBackPressedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ICameraEventArgs
{
};

template <typename D>
struct WINRT_EBO impl_IHardwareButtonsStatics
{
    event_token BackPressed(const Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> & handler) const;
    using BackPressed_revoker = event_revoker<IHardwareButtonsStatics>;
    BackPressed_revoker BackPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> & handler) const;
    void BackPressed(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IHardwareButtonsStatics2
{
    event_token CameraHalfPressed(const Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> & handler) const;
    using CameraHalfPressed_revoker = event_revoker<IHardwareButtonsStatics2>;
    CameraHalfPressed_revoker CameraHalfPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> & handler) const;
    void CameraHalfPressed(event_token token) const;
    event_token CameraPressed(const Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> & handler) const;
    using CameraPressed_revoker = event_revoker<IHardwareButtonsStatics2>;
    CameraPressed_revoker CameraPressed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> & handler) const;
    void CameraPressed(event_token token) const;
    event_token CameraReleased(const Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> & handler) const;
    using CameraReleased_revoker = event_revoker<IHardwareButtonsStatics2>;
    CameraReleased_revoker CameraReleased(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> & handler) const;
    void CameraReleased(event_token token) const;
};

struct IBackPressedEventArgs :
    Windows::IInspectable,
    impl::consume<IBackPressedEventArgs>
{
    IBackPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBackPressedEventArgs>(m_ptr); }
};

struct ICameraEventArgs :
    Windows::IInspectable,
    impl::consume<ICameraEventArgs>
{
    ICameraEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICameraEventArgs>(m_ptr); }
};

struct IHardwareButtonsStatics :
    Windows::IInspectable,
    impl::consume<IHardwareButtonsStatics>
{
    IHardwareButtonsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHardwareButtonsStatics>(m_ptr); }
};

struct IHardwareButtonsStatics2 :
    Windows::IInspectable,
    impl::consume<IHardwareButtonsStatics2>
{
    IHardwareButtonsStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHardwareButtonsStatics2>(m_ptr); }
};

}

}
