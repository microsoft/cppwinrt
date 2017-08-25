// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.RemoteDesktop.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_System_RemoteDesktop_IInteractiveSessionStatics<D>::IsRemote() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteDesktop::IInteractiveSessionStatics)->get_IsRemote(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::System::RemoteDesktop::IInteractiveSessionStatics> : produce_base<D, Windows::System::RemoteDesktop::IInteractiveSessionStatics>
{
    HRESULT __stdcall get_IsRemote(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsRemote());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop {

inline bool InteractiveSession::IsRemote()
{
    return get_activation_factory<InteractiveSession, Windows::System::RemoteDesktop::IInteractiveSessionStatics>().IsRemote();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteDesktop::IInteractiveSessionStatics> {};

template<> struct hash<winrt::Windows::System::RemoteDesktop::InteractiveSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteDesktop::InteractiveSession> {};

}

WINRT_WARNING_POP
