// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Phone.System.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::System::ISystemProtectionStatics> : produce_base<D, Windows::Phone::System::ISystemProtectionStatics>
{
    HRESULT __stdcall get_ScreenLocked(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScreenLocked());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::System::ISystemProtectionUnlockStatics> : produce_base<D, Windows::Phone::System::ISystemProtectionUnlockStatics>
{
    HRESULT __stdcall abi_RequestScreenUnlock() noexcept override
    {
        try
        {
            this->shim().RequestScreenUnlock();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Phone::System {

template <typename D> bool impl_ISystemProtectionStatics<D>::ScreenLocked() const
{
    bool value {};
    check_hresult(static_cast<const ISystemProtectionStatics &>(static_cast<const D &>(*this))->get_ScreenLocked(&value));
    return value;
}

template <typename D> void impl_ISystemProtectionUnlockStatics<D>::RequestScreenUnlock() const
{
    check_hresult(static_cast<const ISystemProtectionUnlockStatics &>(static_cast<const D &>(*this))->abi_RequestScreenUnlock());
}

inline bool SystemProtection::ScreenLocked()
{
    return get_activation_factory<SystemProtection, ISystemProtectionStatics>().ScreenLocked();
}

inline void SystemProtection::RequestScreenUnlock()
{
    get_activation_factory<SystemProtection, ISystemProtectionUnlockStatics>().RequestScreenUnlock();
}

}

}
