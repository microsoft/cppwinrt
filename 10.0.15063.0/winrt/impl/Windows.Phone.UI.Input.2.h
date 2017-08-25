// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.UI.Input.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::UI::Input {

struct WINRT_EBO BackPressedEventArgs :
    Windows::Phone::UI::Input::IBackPressedEventArgs
{
    BackPressedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CameraEventArgs :
    Windows::Phone::UI::Input::ICameraEventArgs
{
    CameraEventArgs(std::nullptr_t) noexcept {}
};

struct HardwareButtons
{
    HardwareButtons() = delete;
    static event_token BackPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler);
    using BackPressed_revoker = factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics>;
    static BackPressed_revoker BackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler);
    static void BackPressed(event_token const& token);
    static event_token CameraHalfPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
    using CameraHalfPressed_revoker = factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2>;
    static CameraHalfPressed_revoker CameraHalfPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
    static void CameraHalfPressed(event_token const& token);
    static event_token CameraPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
    using CameraPressed_revoker = factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2>;
    static CameraPressed_revoker CameraPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
    static void CameraPressed(event_token const& token);
    static event_token CameraReleased(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
    using CameraReleased_revoker = factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2>;
    static CameraReleased_revoker CameraReleased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler);
    static void CameraReleased(event_token const& token);
};

}
