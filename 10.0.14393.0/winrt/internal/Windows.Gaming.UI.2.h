// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Gaming.UI.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::IInspectable> : impl_EventHandler<Windows::IInspectable> {};
#endif


}

namespace Windows::Gaming::UI {

template <typename D>
struct WINRT_EBO impl_IGameBarStatics
{
    event_token VisibilityChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using VisibilityChanged_revoker = event_revoker<IGameBarStatics>;
    VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void VisibilityChanged(event_token token) const;
    event_token IsInputRedirectedChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using IsInputRedirectedChanged_revoker = event_revoker<IGameBarStatics>;
    IsInputRedirectedChanged_revoker IsInputRedirectedChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void IsInputRedirectedChanged(event_token token) const;
    bool Visible() const;
    bool IsInputRedirected() const;
};

struct IGameBarStatics :
    Windows::IInspectable,
    impl::consume<IGameBarStatics>
{
    IGameBarStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGameBarStatics>(m_ptr); }
};

}

}
