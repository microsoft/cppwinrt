// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::UI::Input {

struct IBackPressedEventArgs;
struct ICameraEventArgs;
struct IHardwareButtonsStatics;
struct IHardwareButtonsStatics2;
struct BackPressedEventArgs;
struct CameraEventArgs;
struct HardwareButtons;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::UI::Input::IBackPressedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Phone::UI::Input::ICameraEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Phone::UI::Input::IHardwareButtonsStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::UI::Input::IHardwareButtonsStatics2>{ using type = interface_category; };
template <> struct category<Windows::Phone::UI::Input::BackPressedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Phone::UI::Input::CameraEventArgs>{ using type = class_category; };
template <> struct category<Windows::Phone::UI::Input::HardwareButtons>{ using type = class_category; };
template <> struct name<Windows::Phone::UI::Input::IBackPressedEventArgs>{ static constexpr auto & value{ L"Windows.Phone.UI.Input.IBackPressedEventArgs" }; };
template <> struct name<Windows::Phone::UI::Input::ICameraEventArgs>{ static constexpr auto & value{ L"Windows.Phone.UI.Input.ICameraEventArgs" }; };
template <> struct name<Windows::Phone::UI::Input::IHardwareButtonsStatics>{ static constexpr auto & value{ L"Windows.Phone.UI.Input.IHardwareButtonsStatics" }; };
template <> struct name<Windows::Phone::UI::Input::IHardwareButtonsStatics2>{ static constexpr auto & value{ L"Windows.Phone.UI.Input.IHardwareButtonsStatics2" }; };
template <> struct name<Windows::Phone::UI::Input::BackPressedEventArgs>{ static constexpr auto & value{ L"Windows.Phone.UI.Input.BackPressedEventArgs" }; };
template <> struct name<Windows::Phone::UI::Input::CameraEventArgs>{ static constexpr auto & value{ L"Windows.Phone.UI.Input.CameraEventArgs" }; };
template <> struct name<Windows::Phone::UI::Input::HardwareButtons>{ static constexpr auto & value{ L"Windows.Phone.UI.Input.HardwareButtons" }; };
template <> struct guid<Windows::Phone::UI::Input::IBackPressedEventArgs>{ static constexpr GUID value{ 0xF6F555FF,0x64EC,0x42A2,{ 0xB9,0x3B,0x2F,0xBC,0x0C,0x36,0xA1,0x21 } }; };
template <> struct guid<Windows::Phone::UI::Input::ICameraEventArgs>{ static constexpr GUID value{ 0xB4063BDA,0x201F,0x473D,{ 0xBC,0x69,0xE9,0xE4,0xAC,0x57,0xC9,0xD0 } }; };
template <> struct guid<Windows::Phone::UI::Input::IHardwareButtonsStatics>{ static constexpr GUID value{ 0x594B8780,0xDA66,0x4FD8,{ 0xA7,0x76,0x75,0x06,0xBD,0x0C,0xBF,0xA7 } }; };
template <> struct guid<Windows::Phone::UI::Input::IHardwareButtonsStatics2>{ static constexpr GUID value{ 0x39C6C274,0x993F,0x40DD,{ 0x85,0x4C,0x83,0x1A,0x89,0x34,0xB9,0x2E } }; };
template <> struct default_interface<Windows::Phone::UI::Input::BackPressedEventArgs>{ using type = Windows::Phone::UI::Input::IBackPressedEventArgs; };
template <> struct default_interface<Windows::Phone::UI::Input::CameraEventArgs>{ using type = Windows::Phone::UI::Input::ICameraEventArgs; };

template <typename D>
struct consume_Windows_Phone_UI_Input_IBackPressedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::Phone::UI::Input::IBackPressedEventArgs> { template <typename D> using type = consume_Windows_Phone_UI_Input_IBackPressedEventArgs<D>; };

template <typename D>
struct consume_Windows_Phone_UI_Input_ICameraEventArgs
{
};
template <> struct consume<Windows::Phone::UI::Input::ICameraEventArgs> { template <typename D> using type = consume_Windows_Phone_UI_Input_ICameraEventArgs<D>; };

template <typename D>
struct consume_Windows_Phone_UI_Input_IHardwareButtonsStatics
{
    event_token BackPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler) const;
    using BackPressed_revoker = event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics>;
    BackPressed_revoker BackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler) const;
    void BackPressed(event_token const& token) const;
};
template <> struct consume<Windows::Phone::UI::Input::IHardwareButtonsStatics> { template <typename D> using type = consume_Windows_Phone_UI_Input_IHardwareButtonsStatics<D>; };

template <typename D>
struct consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2
{
    event_token CameraHalfPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
    using CameraHalfPressed_revoker = event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2>;
    CameraHalfPressed_revoker CameraHalfPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
    void CameraHalfPressed(event_token const& token) const;
    event_token CameraPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
    using CameraPressed_revoker = event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2>;
    CameraPressed_revoker CameraPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
    void CameraPressed(event_token const& token) const;
    event_token CameraReleased(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
    using CameraReleased_revoker = event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2>;
    CameraReleased_revoker CameraReleased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const;
    void CameraReleased(event_token const& token) const;
};
template <> struct consume<Windows::Phone::UI::Input::IHardwareButtonsStatics2> { template <typename D> using type = consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>; };

template <> struct abi<Windows::Phone::UI::Input::IBackPressedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};};

template <> struct abi<Windows::Phone::UI::Input::ICameraEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Phone::UI::Input::IHardwareButtonsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_BackPressed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BackPressed(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Phone::UI::Input::IHardwareButtonsStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CameraHalfPressed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CameraHalfPressed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CameraPressed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CameraPressed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CameraReleased(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CameraReleased(abi_t<event_token> token) = 0;
};};

}
