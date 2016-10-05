// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.System.Power.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::IInspectable> : impl_EventHandler<Windows::IInspectable> {};
#endif


}

namespace Windows::Phone::System::Power {

template <typename D>
struct WINRT_EBO impl_IPowerManagerStatics
{
    Windows::Phone::System::Power::PowerSavingMode PowerSavingMode() const;
    event_token PowerSavingModeChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const;
    using PowerSavingModeChanged_revoker = event_revoker<IPowerManagerStatics>;
    PowerSavingModeChanged_revoker PowerSavingModeChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const;
    void PowerSavingModeChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IPowerManagerStatics2
{
    bool PowerSavingModeEnabled() const;
};

struct IPowerManagerStatics :
    Windows::IInspectable,
    impl::consume<IPowerManagerStatics>
{
    IPowerManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPowerManagerStatics>(m_ptr); }
};

struct IPowerManagerStatics2 :
    Windows::IInspectable,
    impl::consume<IPowerManagerStatics2>
{
    IPowerManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPowerManagerStatics2>(m_ptr); }
};

}

}
