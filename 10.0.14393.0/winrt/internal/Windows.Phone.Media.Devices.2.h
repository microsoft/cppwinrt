// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.Media.Devices.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_61c26d35_9fae_59f1_83e0_9d57b45bc2ee
#define WINRT_GENERIC_61c26d35_9fae_59f1_83e0_9d57b45bc2ee
template <> struct __declspec(uuid("61c26d35-9fae-59f1-83e0-9d57b45bc2ee")) __declspec(novtable) TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::IInspectable> : impl_TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::IInspectable> {};
#endif


}

namespace Windows::Phone::Media::Devices {

template <typename D>
struct WINRT_EBO impl_IAudioRoutingManager
{
    Windows::Phone::Media::Devices::AudioRoutingEndpoint GetAudioEndpoint() const;
    void SetAudioEndpoint(Windows::Phone::Media::Devices::AudioRoutingEndpoint endpoint) const;
    event_token AudioEndpointChanged(const Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::IInspectable> & endpointChangeHandler) const;
    using AudioEndpointChanged_revoker = event_revoker<IAudioRoutingManager>;
    AudioEndpointChanged_revoker AudioEndpointChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::IInspectable> & endpointChangeHandler) const;
    void AudioEndpointChanged(event_token token) const;
    Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints AvailableAudioEndpoints() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioRoutingManagerStatics
{
    Windows::Phone::Media::Devices::AudioRoutingManager GetDefault() const;
};

struct IAudioRoutingManager :
    Windows::IInspectable,
    impl::consume<IAudioRoutingManager>
{
    IAudioRoutingManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioRoutingManager>(m_ptr); }
};

struct IAudioRoutingManagerStatics :
    Windows::IInspectable,
    impl::consume<IAudioRoutingManagerStatics>
{
    IAudioRoutingManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioRoutingManagerStatics>(m_ptr); }
};

}

}
