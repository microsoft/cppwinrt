// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Phone.System.Power.2.h"
#include "winrt/Windows.Phone.System.h"

namespace winrt::impl {

template <typename D> Windows::Phone::System::Power::PowerSavingMode consume_Windows_Phone_System_Power_IPowerManagerStatics<D>::PowerSavingMode() const
{
    Windows::Phone::System::Power::PowerSavingMode value{};
    check_hresult(WINRT_SHIM(Windows::Phone::System::Power::IPowerManagerStatics)->get_PowerSavingMode(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Phone_System_Power_IPowerManagerStatics<D>::PowerSavingModeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Phone::System::Power::IPowerManagerStatics)->add_PowerSavingModeChanged(get_abi(changeHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Phone::System::Power::IPowerManagerStatics> consume_Windows_Phone_System_Power_IPowerManagerStatics<D>::PowerSavingModeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    return impl::make_event_revoker<D, Windows::Phone::System::Power::IPowerManagerStatics>(this, &abi_t<Windows::Phone::System::Power::IPowerManagerStatics>::remove_PowerSavingModeChanged, PowerSavingModeChanged(changeHandler));
}

template <typename D> void consume_Windows_Phone_System_Power_IPowerManagerStatics<D>::PowerSavingModeChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::System::Power::IPowerManagerStatics)->remove_PowerSavingModeChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Phone_System_Power_IPowerManagerStatics2<D>::PowerSavingModeEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::System::Power::IPowerManagerStatics2)->get_PowerSavingModeEnabled(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Phone::System::Power::IPowerManagerStatics> : produce_base<D, Windows::Phone::System::Power::IPowerManagerStatics>
{
    HRESULT __stdcall get_PowerSavingMode(abi_t<Windows::Phone::System::Power::PowerSavingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerSavingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PowerSavingModeChanged(::IUnknown* changeHandler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PowerSavingModeChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PowerSavingModeChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PowerSavingModeChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::System::Power::IPowerManagerStatics2> : produce_base<D, Windows::Phone::System::Power::IPowerManagerStatics2>
{
    HRESULT __stdcall get_PowerSavingModeEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerSavingModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Phone::System::Power {

inline Windows::Phone::System::Power::PowerSavingMode PowerManager::PowerSavingMode()
{
    return get_activation_factory<PowerManager, Windows::Phone::System::Power::IPowerManagerStatics>().PowerSavingMode();
}

inline event_token PowerManager::PowerSavingModeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
{
    return get_activation_factory<PowerManager, Windows::Phone::System::Power::IPowerManagerStatics>().PowerSavingModeChanged(changeHandler);
}

inline factory_event_revoker<Windows::Phone::System::Power::IPowerManagerStatics> PowerManager::PowerSavingModeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
{
    auto factory = get_activation_factory<PowerManager, Windows::Phone::System::Power::IPowerManagerStatics>();
    return { factory, &abi_t<Windows::Phone::System::Power::IPowerManagerStatics>::remove_PowerSavingModeChanged, factory.PowerSavingModeChanged(changeHandler) };
}

inline void PowerManager::PowerSavingModeChanged(event_token const& token)
{
    get_activation_factory<PowerManager, Windows::Phone::System::Power::IPowerManagerStatics>().PowerSavingModeChanged(token);
}

inline bool PowerManager::PowerSavingModeEnabled()
{
    return get_activation_factory<PowerManager, Windows::Phone::System::Power::IPowerManagerStatics2>().PowerSavingModeEnabled();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::System::Power::IPowerManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::Power::IPowerManagerStatics> {};

template<> struct hash<winrt::Windows::Phone::System::Power::IPowerManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::Power::IPowerManagerStatics2> {};

template<> struct hash<winrt::Windows::Phone::System::Power::PowerManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::Power::PowerManager> {};

}

WINRT_WARNING_POP
