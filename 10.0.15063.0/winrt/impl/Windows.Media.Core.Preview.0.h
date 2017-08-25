// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Media {

enum class SoundLevel;

}

WINRT_EXPORT namespace winrt::Windows::Media::Core::Preview {

struct ISoundLevelBrokerStatics;
struct SoundLevelBroker;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::Preview::SoundLevelBroker>{ using type = class_category; };
template <> struct name<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>{ static constexpr auto & value{ L"Windows.Media.Core.Preview.ISoundLevelBrokerStatics" }; };
template <> struct name<Windows::Media::Core::Preview::SoundLevelBroker>{ static constexpr auto & value{ L"Windows.Media.Core.Preview.SoundLevelBroker" }; };
template <> struct guid<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>{ static constexpr GUID value{ 0x6A633961,0xDBED,0x464C,{ 0xA0,0x9A,0x33,0x41,0x2F,0x5C,0xAA,0x3F } }; };

template <typename D>
struct consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics
{
    Windows::Media::SoundLevel SoundLevel() const;
    event_token SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using SoundLevelChanged_revoker = event_revoker<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>;
    SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void SoundLevelChanged(event_token const& token) const;
};
template <> struct consume<Windows::Media::Core::Preview::ISoundLevelBrokerStatics> { template <typename D> using type = consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics<D>; };

template <> struct abi<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SoundLevel(abi_t<Windows::Media::SoundLevel>* value) = 0;
    virtual HRESULT __stdcall add_SoundLevelChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SoundLevelChanged(abi_t<event_token> token) = 0;
};};

}
