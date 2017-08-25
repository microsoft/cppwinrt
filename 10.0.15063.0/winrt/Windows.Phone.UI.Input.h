// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Phone.UI.Input.2.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Phone_UI_Input_IBackPressedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IBackPressedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Phone_UI_Input_IBackPressedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IBackPressedEventArgs)->put_Handled(value));
}

template <typename D> event_token consume_Windows_Phone_UI_Input_IHardwareButtonsStatics<D>::BackPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IHardwareButtonsStatics)->add_BackPressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics> consume_Windows_Phone_UI_Input_IHardwareButtonsStatics<D>::BackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Phone::UI::Input::IHardwareButtonsStatics>(this, &abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics>::remove_BackPressed, BackPressed(handler));
}

template <typename D> void consume_Windows_Phone_UI_Input_IHardwareButtonsStatics<D>::BackPressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IHardwareButtonsStatics)->remove_BackPressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraHalfPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IHardwareButtonsStatics2)->add_CameraHalfPressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2> consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraHalfPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Phone::UI::Input::IHardwareButtonsStatics2>(this, &abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraHalfPressed, CameraHalfPressed(handler));
}

template <typename D> void consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraHalfPressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IHardwareButtonsStatics2)->remove_CameraHalfPressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IHardwareButtonsStatics2)->add_CameraPressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2> consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Phone::UI::Input::IHardwareButtonsStatics2>(this, &abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraPressed, CameraPressed(handler));
}

template <typename D> void consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraPressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IHardwareButtonsStatics2)->remove_CameraPressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraReleased(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IHardwareButtonsStatics2)->add_CameraReleased(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2> consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraReleased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Phone::UI::Input::IHardwareButtonsStatics2>(this, &abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraReleased, CameraReleased(handler));
}

template <typename D> void consume_Windows_Phone_UI_Input_IHardwareButtonsStatics2<D>::CameraReleased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::UI::Input::IHardwareButtonsStatics2)->remove_CameraReleased(get_abi(token)));
}

template <typename D>
struct produce<D, Windows::Phone::UI::Input::IBackPressedEventArgs> : produce_base<D, Windows::Phone::UI::Input::IBackPressedEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::UI::Input::ICameraEventArgs> : produce_base<D, Windows::Phone::UI::Input::ICameraEventArgs>
{};

template <typename D>
struct produce<D, Windows::Phone::UI::Input::IHardwareButtonsStatics> : produce_base<D, Windows::Phone::UI::Input::IHardwareButtonsStatics>
{
    HRESULT __stdcall add_BackPressed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BackPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BackPressed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackPressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::UI::Input::IHardwareButtonsStatics2> : produce_base<D, Windows::Phone::UI::Input::IHardwareButtonsStatics2>
{
    HRESULT __stdcall add_CameraHalfPressed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CameraHalfPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraHalfPressed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraHalfPressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraPressed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CameraPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraPressed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraPressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraReleased(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CameraReleased(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraReleased(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraReleased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Phone::UI::Input {

inline event_token HardwareButtons::BackPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler)
{
    return get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics>().BackPressed(handler);
}

inline factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics> HardwareButtons::BackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::BackPressedEventArgs> const& handler)
{
    auto factory = get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics>();
    return { factory, &abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics>::remove_BackPressed, factory.BackPressed(handler) };
}

inline void HardwareButtons::BackPressed(event_token const& token)
{
    get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics>().BackPressed(token);
}

inline event_token HardwareButtons::CameraHalfPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler)
{
    return get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics2>().CameraHalfPressed(handler);
}

inline factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2> HardwareButtons::CameraHalfPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler)
{
    auto factory = get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics2>();
    return { factory, &abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraHalfPressed, factory.CameraHalfPressed(handler) };
}

inline void HardwareButtons::CameraHalfPressed(event_token const& token)
{
    get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics2>().CameraHalfPressed(token);
}

inline event_token HardwareButtons::CameraPressed(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler)
{
    return get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics2>().CameraPressed(handler);
}

inline factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2> HardwareButtons::CameraPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler)
{
    auto factory = get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics2>();
    return { factory, &abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraPressed, factory.CameraPressed(handler) };
}

inline void HardwareButtons::CameraPressed(event_token const& token)
{
    get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics2>().CameraPressed(token);
}

inline event_token HardwareButtons::CameraReleased(Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler)
{
    return get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics2>().CameraReleased(handler);
}

inline factory_event_revoker<Windows::Phone::UI::Input::IHardwareButtonsStatics2> HardwareButtons::CameraReleased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Phone::UI::Input::CameraEventArgs> const& handler)
{
    auto factory = get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics2>();
    return { factory, &abi_t<Windows::Phone::UI::Input::IHardwareButtonsStatics2>::remove_CameraReleased, factory.CameraReleased(handler) };
}

inline void HardwareButtons::CameraReleased(event_token const& token)
{
    get_activation_factory<HardwareButtons, Windows::Phone::UI::Input::IHardwareButtonsStatics2>().CameraReleased(token);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::UI::Input::IBackPressedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::UI::Input::IBackPressedEventArgs> {};

template<> struct hash<winrt::Windows::Phone::UI::Input::ICameraEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::UI::Input::ICameraEventArgs> {};

template<> struct hash<winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics> {};

template<> struct hash<winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::UI::Input::IHardwareButtonsStatics2> {};

template<> struct hash<winrt::Windows::Phone::UI::Input::BackPressedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::UI::Input::BackPressedEventArgs> {};

template<> struct hash<winrt::Windows::Phone::UI::Input::CameraEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::UI::Input::CameraEventArgs> {};

template<> struct hash<winrt::Windows::Phone::UI::Input::HardwareButtons> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::UI::Input::HardwareButtons> {};

}

WINRT_WARNING_POP
