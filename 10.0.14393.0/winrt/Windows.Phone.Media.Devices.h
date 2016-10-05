// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Phone.Media.Devices.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Phone::Media::Devices::IAudioRoutingManager> : produce_base<D, Windows::Phone::Media::Devices::IAudioRoutingManager>
{
    HRESULT __stdcall abi_GetAudioEndpoint(Windows::Phone::Media::Devices::AudioRoutingEndpoint * endpoint) noexcept override
    {
        try
        {
            *endpoint = detach(this->shim().GetAudioEndpoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAudioEndpoint(Windows::Phone::Media::Devices::AudioRoutingEndpoint endpoint) noexcept override
    {
        try
        {
            this->shim().SetAudioEndpoint(endpoint);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AudioEndpointChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::IInspectable>> endpointChangeHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AudioEndpointChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::IInspectable> *>(&endpointChangeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioEndpointChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AudioEndpointChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableAudioEndpoints(Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AvailableAudioEndpoints());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Phone::Media::Devices::IAudioRoutingManagerStatics> : produce_base<D, Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>
{
    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::Phone::Media::Devices::IAudioRoutingManager> audioRoutingManager) noexcept override
    {
        try
        {
            *audioRoutingManager = detach(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *audioRoutingManager = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Phone::Media::Devices {

template <typename D> Windows::Phone::Media::Devices::AudioRoutingEndpoint impl_IAudioRoutingManager<D>::GetAudioEndpoint() const
{
    Windows::Phone::Media::Devices::AudioRoutingEndpoint endpoint {};
    check_hresult(static_cast<const IAudioRoutingManager &>(static_cast<const D &>(*this))->abi_GetAudioEndpoint(&endpoint));
    return endpoint;
}

template <typename D> void impl_IAudioRoutingManager<D>::SetAudioEndpoint(Windows::Phone::Media::Devices::AudioRoutingEndpoint endpoint) const
{
    check_hresult(static_cast<const IAudioRoutingManager &>(static_cast<const D &>(*this))->abi_SetAudioEndpoint(endpoint));
}

template <typename D> event_token impl_IAudioRoutingManager<D>::AudioEndpointChanged(const Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::IInspectable> & endpointChangeHandler) const
{
    event_token token {};
    check_hresult(static_cast<const IAudioRoutingManager &>(static_cast<const D &>(*this))->add_AudioEndpointChanged(get(endpointChangeHandler), &token));
    return token;
}

template <typename D> event_revoker<IAudioRoutingManager> impl_IAudioRoutingManager<D>::AudioEndpointChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::IInspectable> & endpointChangeHandler) const
{
    return impl::make_event_revoker<D, IAudioRoutingManager>(this, &ABI::Windows::Phone::Media::Devices::IAudioRoutingManager::remove_AudioEndpointChanged, AudioEndpointChanged(endpointChangeHandler));
}

template <typename D> void impl_IAudioRoutingManager<D>::AudioEndpointChanged(event_token token) const
{
    check_hresult(static_cast<const IAudioRoutingManager &>(static_cast<const D &>(*this))->remove_AudioEndpointChanged(token));
}

template <typename D> Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints impl_IAudioRoutingManager<D>::AvailableAudioEndpoints() const
{
    Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints value {};
    check_hresult(static_cast<const IAudioRoutingManager &>(static_cast<const D &>(*this))->get_AvailableAudioEndpoints(&value));
    return value;
}

template <typename D> Windows::Phone::Media::Devices::AudioRoutingManager impl_IAudioRoutingManagerStatics<D>::GetDefault() const
{
    Windows::Phone::Media::Devices::AudioRoutingManager audioRoutingManager { nullptr };
    check_hresult(static_cast<const IAudioRoutingManagerStatics &>(static_cast<const D &>(*this))->abi_GetDefault(put(audioRoutingManager)));
    return audioRoutingManager;
}

inline Windows::Phone::Media::Devices::AudioRoutingManager AudioRoutingManager::GetDefault()
{
    return get_activation_factory<AudioRoutingManager, IAudioRoutingManagerStatics>().GetDefault();
}

}

}
