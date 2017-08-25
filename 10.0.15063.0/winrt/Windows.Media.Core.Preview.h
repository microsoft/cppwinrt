// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Core.Preview.2.h"
#include "winrt/Windows.Media.Core.h"

namespace winrt::impl {

template <typename D> Windows::Media::SoundLevel consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics<D>::SoundLevel() const
{
    Windows::Media::SoundLevel value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::Preview::ISoundLevelBrokerStatics)->get_SoundLevel(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics<D>::SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::Preview::ISoundLevelBrokerStatics)->add_SoundLevelChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::Preview::ISoundLevelBrokerStatics> consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics<D>::SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::Preview::ISoundLevelBrokerStatics>(this, &abi_t<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>::remove_SoundLevelChanged, SoundLevelChanged(handler));
}

template <typename D> void consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics<D>::SoundLevelChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::Preview::ISoundLevelBrokerStatics)->remove_SoundLevelChanged(get_abi(token)));
}

template <typename D>
struct produce<D, Windows::Media::Core::Preview::ISoundLevelBrokerStatics> : produce_base<D, Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
{
    HRESULT __stdcall get_SoundLevel(abi_t<Windows::Media::SoundLevel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SoundLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SoundLevelChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SoundLevelChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SoundLevelChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SoundLevelChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Core::Preview {

inline Windows::Media::SoundLevel SoundLevelBroker::SoundLevel()
{
    return get_activation_factory<SoundLevelBroker, Windows::Media::Core::Preview::ISoundLevelBrokerStatics>().SoundLevel();
}

inline event_token SoundLevelBroker::SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<SoundLevelBroker, Windows::Media::Core::Preview::ISoundLevelBrokerStatics>().SoundLevelChanged(handler);
}

inline factory_event_revoker<Windows::Media::Core::Preview::ISoundLevelBrokerStatics> SoundLevelBroker::SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<SoundLevelBroker, Windows::Media::Core::Preview::ISoundLevelBrokerStatics>();
    return { factory, &abi_t<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>::remove_SoundLevelChanged, factory.SoundLevelChanged(handler) };
}

inline void SoundLevelBroker::SoundLevelChanged(event_token const& token)
{
    get_activation_factory<SoundLevelBroker, Windows::Media::Core::Preview::ISoundLevelBrokerStatics>().SoundLevelChanged(token);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Core::Preview::ISoundLevelBrokerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Core::Preview::ISoundLevelBrokerStatics> {};

template<> struct hash<winrt::Windows::Media::Core::Preview::SoundLevelBroker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Core::Preview::SoundLevelBroker> {};

}

WINRT_WARNING_POP
