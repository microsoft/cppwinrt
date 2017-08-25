// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Phone.System.2.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Phone_System_ISystemProtectionStatics<D>::ScreenLocked() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Phone::System::ISystemProtectionStatics)->get_ScreenLocked(&value));
    return value;
}

template <typename D> void consume_Windows_Phone_System_ISystemProtectionUnlockStatics<D>::RequestScreenUnlock() const
{
    check_hresult(WINRT_SHIM(Windows::Phone::System::ISystemProtectionUnlockStatics)->RequestScreenUnlock());
}

template <typename D>
struct produce<D, Windows::Phone::System::ISystemProtectionStatics> : produce_base<D, Windows::Phone::System::ISystemProtectionStatics>
{
    HRESULT __stdcall get_ScreenLocked(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScreenLocked());
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
    HRESULT __stdcall RequestScreenUnlock() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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

WINRT_EXPORT namespace winrt::Windows::Phone::System {

inline bool SystemProtection::ScreenLocked()
{
    return get_activation_factory<SystemProtection, Windows::Phone::System::ISystemProtectionStatics>().ScreenLocked();
}

inline void SystemProtection::RequestScreenUnlock()
{
    get_activation_factory<SystemProtection, Windows::Phone::System::ISystemProtectionUnlockStatics>().RequestScreenUnlock();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::System::ISystemProtectionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::ISystemProtectionStatics> {};

template<> struct hash<winrt::Windows::Phone::System::ISystemProtectionUnlockStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::ISystemProtectionUnlockStatics> {};

template<> struct hash<winrt::Windows::Phone::System::SystemProtection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::System::SystemProtection> {};

}

WINRT_WARNING_POP
