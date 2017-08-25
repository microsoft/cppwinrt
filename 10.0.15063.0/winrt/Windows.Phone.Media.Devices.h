// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Phone.Media.Devices.2.h"

namespace winrt::impl {

template <typename D> Windows::Phone::Media::Devices::AudioRoutingEndpoint consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::GetAudioEndpoint() const
{
    Windows::Phone::Media::Devices::AudioRoutingEndpoint endpoint{};
    check_hresult(WINRT_SHIM(Windows::Phone::Media::Devices::IAudioRoutingManager)->GetAudioEndpoint(put_abi(endpoint)));
    return endpoint;
}

template <typename D> void consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::SetAudioEndpoint(Windows::Phone::Media::Devices::AudioRoutingEndpoint const& endpoint) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Media::Devices::IAudioRoutingManager)->SetAudioEndpoint(get_abi(endpoint)));
}

template <typename D> event_token consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::AudioEndpointChanged(Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::Foundation::IInspectable> const& endpointChangeHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Phone::Media::Devices::IAudioRoutingManager)->add_AudioEndpointChanged(get_abi(endpointChangeHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Phone::Media::Devices::IAudioRoutingManager> consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::AudioEndpointChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::Foundation::IInspectable> const& endpointChangeHandler) const
{
    return impl::make_event_revoker<D, Windows::Phone::Media::Devices::IAudioRoutingManager>(this, &abi_t<Windows::Phone::Media::Devices::IAudioRoutingManager>::remove_AudioEndpointChanged, AudioEndpointChanged(endpointChangeHandler));
}

template <typename D> void consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::AudioEndpointChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Phone::Media::Devices::IAudioRoutingManager)->remove_AudioEndpointChanged(get_abi(token)));
}

template <typename D> Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>::AvailableAudioEndpoints() const
{
    Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints value{};
    check_hresult(WINRT_SHIM(Windows::Phone::Media::Devices::IAudioRoutingManager)->get_AvailableAudioEndpoints(put_abi(value)));
    return value;
}

template <typename D> Windows::Phone::Media::Devices::AudioRoutingManager consume_Windows_Phone_Media_Devices_IAudioRoutingManagerStatics<D>::GetDefault() const
{
    Windows::Phone::Media::Devices::AudioRoutingManager audioRoutingManager{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Phone::Media::Devices::IAudioRoutingManagerStatics)->GetDefault(put_abi(audioRoutingManager)));
    return audioRoutingManager;
}

template <typename D>
struct produce<D, Windows::Phone::Media::Devices::IAudioRoutingManager> : produce_base<D, Windows::Phone::Media::Devices::IAudioRoutingManager>
{
    HRESULT __stdcall GetAudioEndpoint(abi_t<Windows::Phone::Media::Devices::AudioRoutingEndpoint>* endpoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *endpoint = detach_abi(this->shim().GetAudioEndpoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAudioEndpoint(abi_t<Windows::Phone::Media::Devices::AudioRoutingEndpoint> endpoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAudioEndpoint(*reinterpret_cast<Windows::Phone::Media::Devices::AudioRoutingEndpoint const*>(&endpoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AudioEndpointChanged(::IUnknown* endpointChangeHandler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AudioEndpointChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::Foundation::IInspectable> const*>(&endpointChangeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioEndpointChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioEndpointChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableAudioEndpoints(abi_t<Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AvailableAudioEndpoints());
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
    HRESULT __stdcall GetDefault(::IUnknown** audioRoutingManager) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *audioRoutingManager = detach_abi(this->shim().GetDefault());
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

WINRT_EXPORT namespace winrt::Windows::Phone::Media::Devices {

inline Windows::Phone::Media::Devices::AudioRoutingManager AudioRoutingManager::GetDefault()
{
    return get_activation_factory<AudioRoutingManager, Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Phone::Media::Devices::IAudioRoutingManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Media::Devices::IAudioRoutingManager> {};

template<> struct hash<winrt::Windows::Phone::Media::Devices::IAudioRoutingManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Media::Devices::IAudioRoutingManagerStatics> {};

template<> struct hash<winrt::Windows::Phone::Media::Devices::AudioRoutingManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Phone::Media::Devices::AudioRoutingManager> {};

}

WINRT_WARNING_POP
