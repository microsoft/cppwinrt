// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Media.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Media.Core.Preview.3.h"
#include "Windows.Media.Core.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Core::Preview::ISoundLevelBrokerStatics> : produce_base<D, Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
{
    HRESULT __stdcall get_SoundLevel(Windows::Media::SoundLevel * value) noexcept override
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

    HRESULT __stdcall add_SoundLevelChanged(impl::abi_arg_in<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SoundLevelChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SoundLevelChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SoundLevelChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Core::Preview {

template <typename D> Windows::Media::SoundLevel impl_ISoundLevelBrokerStatics<D>::SoundLevel() const
{
    Windows::Media::SoundLevel value {};
    check_hresult(WINRT_SHIM(ISoundLevelBrokerStatics)->get_SoundLevel(&value));
    return value;
}

template <typename D> event_token impl_ISoundLevelBrokerStatics<D>::SoundLevelChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(ISoundLevelBrokerStatics)->add_SoundLevelChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<ISoundLevelBrokerStatics> impl_ISoundLevelBrokerStatics<D>::SoundLevelChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ISoundLevelBrokerStatics>(this, &ABI::Windows::Media::Core::Preview::ISoundLevelBrokerStatics::remove_SoundLevelChanged, SoundLevelChanged(handler));
}

template <typename D> void impl_ISoundLevelBrokerStatics<D>::SoundLevelChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(ISoundLevelBrokerStatics)->remove_SoundLevelChanged(token));
}

inline Windows::Media::SoundLevel SoundLevelBroker::SoundLevel()
{
    return get_activation_factory<SoundLevelBroker, ISoundLevelBrokerStatics>().SoundLevel();
}

inline event_token SoundLevelBroker::SoundLevelChanged(const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler)
{
    return get_activation_factory<SoundLevelBroker, ISoundLevelBrokerStatics>().SoundLevelChanged(handler);
}

inline factory_event_revoker<ISoundLevelBrokerStatics> SoundLevelBroker::SoundLevelChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> & handler)
{
    auto factory = get_activation_factory<SoundLevelBroker, ISoundLevelBrokerStatics>();
    return { factory, &ABI::Windows::Media::Core::Preview::ISoundLevelBrokerStatics::remove_SoundLevelChanged, factory.SoundLevelChanged(handler) };
}

inline void SoundLevelBroker::SoundLevelChanged(event_token token)
{
    get_activation_factory<SoundLevelBroker, ISoundLevelBrokerStatics>().SoundLevelChanged(token);
}

}

}

template<>
struct std::hash<winrt::Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
{
    size_t operator()(const winrt::Windows::Media::Core::Preview::ISoundLevelBrokerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
