// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Phone::Media::Devices {

enum class AudioRoutingEndpoint
{
    Default = 0,
    Earpiece = 1,
    Speakerphone = 2,
    Bluetooth = 3,
    WiredHeadset = 4,
    WiredHeadsetSpeakerOnly = 5,
    BluetoothWithNoiseAndEchoCancellation = 6,
    BluetoothPreferred = 7,
};

enum class AvailableAudioRoutingEndpoints : unsigned
{
    None = 0x0,
    Earpiece = 0x1,
    Speakerphone = 0x2,
    Bluetooth = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(AvailableAudioRoutingEndpoints)

struct IAudioRoutingManager;
struct IAudioRoutingManagerStatics;
struct AudioRoutingManager;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::Media::Devices::IAudioRoutingManager>{ using type = interface_category; };
template <> struct category<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Phone::Media::Devices::AudioRoutingManager>{ using type = class_category; };
template <> struct category<Windows::Phone::Media::Devices::AudioRoutingEndpoint>{ using type = enum_category; };
template <> struct category<Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints>{ using type = enum_category; };
template <> struct name<Windows::Phone::Media::Devices::IAudioRoutingManager>{ static constexpr auto & value{ L"Windows.Phone.Media.Devices.IAudioRoutingManager" }; };
template <> struct name<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>{ static constexpr auto & value{ L"Windows.Phone.Media.Devices.IAudioRoutingManagerStatics" }; };
template <> struct name<Windows::Phone::Media::Devices::AudioRoutingManager>{ static constexpr auto & value{ L"Windows.Phone.Media.Devices.AudioRoutingManager" }; };
template <> struct name<Windows::Phone::Media::Devices::AudioRoutingEndpoint>{ static constexpr auto & value{ L"Windows.Phone.Media.Devices.AudioRoutingEndpoint" }; };
template <> struct name<Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints>{ static constexpr auto & value{ L"Windows.Phone.Media.Devices.AvailableAudioRoutingEndpoints" }; };
template <> struct guid<Windows::Phone::Media::Devices::IAudioRoutingManager>{ static constexpr GUID value{ 0x79340D20,0x71CC,0x4526,{ 0x9F,0x29,0xFC,0x8D,0x24,0x86,0x41,0x8B } }; };
template <> struct guid<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>{ static constexpr GUID value{ 0x977FB2A4,0x5590,0x4A6F,{ 0xAD,0xDE,0x6A,0x3D,0x0A,0xD5,0x82,0x50 } }; };
template <> struct default_interface<Windows::Phone::Media::Devices::AudioRoutingManager>{ using type = Windows::Phone::Media::Devices::IAudioRoutingManager; };

template <typename D>
struct consume_Windows_Phone_Media_Devices_IAudioRoutingManager
{
    Windows::Phone::Media::Devices::AudioRoutingEndpoint GetAudioEndpoint() const;
    void SetAudioEndpoint(Windows::Phone::Media::Devices::AudioRoutingEndpoint const& endpoint) const;
    event_token AudioEndpointChanged(Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::Foundation::IInspectable> const& endpointChangeHandler) const;
    using AudioEndpointChanged_revoker = event_revoker<Windows::Phone::Media::Devices::IAudioRoutingManager>;
    AudioEndpointChanged_revoker AudioEndpointChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Phone::Media::Devices::AudioRoutingManager, Windows::Foundation::IInspectable> const& endpointChangeHandler) const;
    void AudioEndpointChanged(event_token const& token) const;
    Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints AvailableAudioEndpoints() const;
};
template <> struct consume<Windows::Phone::Media::Devices::IAudioRoutingManager> { template <typename D> using type = consume_Windows_Phone_Media_Devices_IAudioRoutingManager<D>; };

template <typename D>
struct consume_Windows_Phone_Media_Devices_IAudioRoutingManagerStatics
{
    Windows::Phone::Media::Devices::AudioRoutingManager GetDefault() const;
};
template <> struct consume<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics> { template <typename D> using type = consume_Windows_Phone_Media_Devices_IAudioRoutingManagerStatics<D>; };

template <> struct abi<Windows::Phone::Media::Devices::IAudioRoutingManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAudioEndpoint(abi_t<Windows::Phone::Media::Devices::AudioRoutingEndpoint>* endpoint) = 0;
    virtual HRESULT __stdcall SetAudioEndpoint(abi_t<Windows::Phone::Media::Devices::AudioRoutingEndpoint> endpoint) = 0;
    virtual HRESULT __stdcall add_AudioEndpointChanged(::IUnknown* endpointChangeHandler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AudioEndpointChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_AvailableAudioEndpoints(abi_t<Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints>* value) = 0;
};};

template <> struct abi<Windows::Phone::Media::Devices::IAudioRoutingManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** audioRoutingManager) = 0;
};};

}
