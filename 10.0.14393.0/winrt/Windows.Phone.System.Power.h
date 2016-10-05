// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Phone.System.Power.3.h"
#include "Windows.Phone.System.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::System::Power::IPowerManagerStatics> : produce_base<D, Windows::Phone::System::Power::IPowerManagerStatics>
{
    HRESULT __stdcall get_PowerSavingMode(Windows::Phone::System::Power::PowerSavingMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PowerSavingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PowerSavingModeChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> changeHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PowerSavingModeChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PowerSavingModeChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PowerSavingModeChanged(token);
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
    HRESULT __stdcall get_PowerSavingModeEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PowerSavingModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Phone::System::Power {

template <typename D> Windows::Phone::System::Power::PowerSavingMode impl_IPowerManagerStatics<D>::PowerSavingMode() const
{
    Windows::Phone::System::Power::PowerSavingMode value {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->get_PowerSavingMode(&value));
    return value;
}

template <typename D> event_token impl_IPowerManagerStatics<D>::PowerSavingModeChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const
{
    event_token token {};
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->add_PowerSavingModeChanged(get(changeHandler), &token));
    return token;
}

template <typename D> event_revoker<IPowerManagerStatics> impl_IPowerManagerStatics<D>::PowerSavingModeChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const
{
    return impl::make_event_revoker<D, IPowerManagerStatics>(this, &ABI::Windows::Phone::System::Power::IPowerManagerStatics::remove_PowerSavingModeChanged, PowerSavingModeChanged(changeHandler));
}

template <typename D> void impl_IPowerManagerStatics<D>::PowerSavingModeChanged(event_token token) const
{
    check_hresult(static_cast<const IPowerManagerStatics &>(static_cast<const D &>(*this))->remove_PowerSavingModeChanged(token));
}

template <typename D> bool impl_IPowerManagerStatics2<D>::PowerSavingModeEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IPowerManagerStatics2 &>(static_cast<const D &>(*this))->get_PowerSavingModeEnabled(&value));
    return value;
}

inline Windows::Phone::System::Power::PowerSavingMode PowerManager::PowerSavingMode()
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().PowerSavingMode();
}

inline event_token PowerManager::PowerSavingModeChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler)
{
    return get_activation_factory<PowerManager, IPowerManagerStatics>().PowerSavingModeChanged(changeHandler);
}

inline factory_event_revoker<IPowerManagerStatics> PowerManager::PowerSavingModeChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler)
{
    auto factory = get_activation_factory<PowerManager, IPowerManagerStatics>();
    return { factory, &ABI::Windows::Phone::System::Power::IPowerManagerStatics::remove_PowerSavingModeChanged, factory.PowerSavingModeChanged(changeHandler) };
}

inline void PowerManager::PowerSavingModeChanged(event_token token)
{
    get_activation_factory<PowerManager, IPowerManagerStatics>().PowerSavingModeChanged(token);
}

inline bool PowerManager::PowerSavingModeEnabled()
{
    return get_activation_factory<PowerManager, IPowerManagerStatics2>().PowerSavingModeEnabled();
}

}

}
