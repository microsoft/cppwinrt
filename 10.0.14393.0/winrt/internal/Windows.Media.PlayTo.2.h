// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.PlayTo.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_09335560_6c6b_5a26_9348_97b781132b20
#define WINRT_GENERIC_09335560_6c6b_5a26_9348_97b781132b20
template <> struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20")) __declspec(novtable) IKeyValuePair<hstring, Windows::IInspectable> : impl_IKeyValuePair<hstring, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
#define WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
template <> struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3")) __declspec(novtable) IReference<uint32_t> : impl_IReference<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
#define WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
template <> struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c")) __declspec(novtable) IReference<Windows::Foundation::DateTime> : impl_IReference<Windows::Foundation::DateTime> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_bb78502a_f79d_54fa_92c9_90c5039fdf7e
#define WINRT_GENERIC_bb78502a_f79d_54fa_92c9_90c5039fdf7e
template <> struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e")) __declspec(novtable) IMapView<hstring, Windows::IInspectable> : impl_IMapView<hstring, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_7a89b9c2_78d4_5866_88f1_4cdc0a0e75b8
#define WINRT_GENERIC_7a89b9c2_78d4_5866_88f1_4cdc0a0e75b8
template <> struct __declspec(uuid("7a89b9c2-78d4-5866-88f1-4cdc0a0e75b8")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_1466d074_b7b4_5814_b2d7_847c5ae7d87d
#define WINRT_GENERIC_1466d074_b7b4_5814_b2d7_847c5ae7d87d
template <> struct __declspec(uuid("1466d074-b7b4-5814-b2d7-847c5ae7d87d")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_e7594396_58c3_5316_bc4f_1d13eadbeffd
#define WINRT_GENERIC_e7594396_58c3_5316_bc4f_1d13eadbeffd
template <> struct __declspec(uuid("e7594396-58c3-5316-bc4f-1d13eadbeffd")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_42abdf9f_14a6_5c1f_839b_86029505b1d0
#define WINRT_GENERIC_42abdf9f_14a6_5c1f_839b_86029505b1d0
template <> struct __declspec(uuid("42abdf9f-14a6-5c1f-839b-86029505b1d0")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_0674cf85_b6fd_5926_9b72_35fe517a3f44
#define WINRT_GENERIC_0674cf85_b6fd_5926_9b72_35fe517a3f44
template <> struct __declspec(uuid("0674cf85-b6fd-5926-9b72-35fe517a3f44")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_9c3f7c84_9b4d_5cdc_8144_1c2f617b6ede
#define WINRT_GENERIC_9c3f7c84_9b4d_5cdc_8144_1c2f617b6ede
template <> struct __declspec(uuid("9c3f7c84-9b4d-5cdc-8144-1c2f617b6ede")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_def77c1c_9363_5b47_b9f8_a236c50d372e
#define WINRT_GENERIC_def77c1c_9363_5b47_b9f8_a236c50d372e
template <> struct __declspec(uuid("def77c1c-9363-5b47-b9f8-a236c50d372e")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_7278e7f2_0360_5571_8c3e_ea032767c473
#define WINRT_GENERIC_7278e7f2_0360_5571_8c3e_ea032767c473
template <> struct __declspec(uuid("7278e7f2-0360-5571-8c3e-ea032767c473")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> {};
#endif

#ifndef WINRT_GENERIC_8f599f3d_3655_5993_a119_741ec4ee6e42
#define WINRT_GENERIC_8f599f3d_3655_5993_a119_741ec4ee6e42
template <> struct __declspec(uuid("8f599f3d-3655-5993-a119-741ec4ee6e42")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> {};
#endif

#ifndef WINRT_GENERIC_6ac9f3a4_39b6_51d8_8e08_f137908e922f
#define WINRT_GENERIC_6ac9f3a4_39b6_51d8_8e08_f137908e922f
template <> struct __declspec(uuid("6ac9f3a4-39b6-51d8-8e08-f137908e922f")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_bf87431a_7451_52a5_a5e2_bfaf408e0c88
#define WINRT_GENERIC_bf87431a_7451_52a5_a5e2_bfaf408e0c88
template <> struct __declspec(uuid("bf87431a-7451-52a5-a5e2-bfaf408e0c88")) __declspec(novtable) TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> : impl_TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_fe2f3d47_5d47_5499_8374_430c7cda0204
#define WINRT_GENERIC_fe2f3d47_5d47_5499_8374_430c7cda0204
template <> struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> {};
#endif

#ifndef WINRT_GENERIC_5db5fa32_707c_5849_a06b_91c8eb9d10e8
#define WINRT_GENERIC_5db5fa32_707c_5849_a06b_91c8eb9d10e8
template <> struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> {};
#endif


}

namespace Windows::Media::PlayTo {

template <typename D>
struct WINRT_EBO impl_ICurrentTimeChangeRequestedEventArgs
{
    Windows::Foundation::TimeSpan Time() const;
};

template <typename D>
struct WINRT_EBO impl_IMuteChangeRequestedEventArgs
{
    bool Mute() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToConnection
{
    Windows::Media::PlayTo::PlayToConnectionState State() const;
    event_token StateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> & handler) const;
    using StateChanged_revoker = event_revoker<IPlayToConnection>;
    StateChanged_revoker StateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> & handler) const;
    void StateChanged(event_token token) const;
    event_token Transferred(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> & handler) const;
    using Transferred_revoker = event_revoker<IPlayToConnection>;
    Transferred_revoker Transferred(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> & handler) const;
    void Transferred(event_token token) const;
    event_token Error(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> & handler) const;
    using Error_revoker = event_revoker<IPlayToConnection>;
    Error_revoker Error(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> & handler) const;
    void Error(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToConnectionErrorEventArgs
{
    Windows::Media::PlayTo::PlayToConnectionError Code() const;
    hstring Message() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToConnectionStateChangedEventArgs
{
    Windows::Media::PlayTo::PlayToConnectionState PreviousState() const;
    Windows::Media::PlayTo::PlayToConnectionState CurrentState() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToConnectionTransferredEventArgs
{
    Windows::Media::PlayTo::PlayToSource PreviousSource() const;
    Windows::Media::PlayTo::PlayToSource CurrentSource() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToManager
{
    event_token SourceRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> & handler) const;
    using SourceRequested_revoker = event_revoker<IPlayToManager>;
    SourceRequested_revoker SourceRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> & handler) const;
    void SourceRequested(event_token token) const;
    event_token SourceSelected(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> & handler) const;
    using SourceSelected_revoker = event_revoker<IPlayToManager>;
    SourceSelected_revoker SourceSelected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> & handler) const;
    void SourceSelected(event_token token) const;
    void DefaultSourceSelection(bool value) const;
    bool DefaultSourceSelection() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToManagerStatics
{
    Windows::Media::PlayTo::PlayToManager GetForCurrentView() const;
    void ShowPlayToUI() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToReceiver
{
    event_token PlayRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const;
    using PlayRequested_revoker = event_revoker<IPlayToReceiver>;
    PlayRequested_revoker PlayRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const;
    void PlayRequested(event_token token) const;
    event_token PauseRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const;
    using PauseRequested_revoker = event_revoker<IPlayToReceiver>;
    PauseRequested_revoker PauseRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const;
    void PauseRequested(event_token token) const;
    event_token SourceChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> & handler) const;
    using SourceChangeRequested_revoker = event_revoker<IPlayToReceiver>;
    SourceChangeRequested_revoker SourceChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> & handler) const;
    void SourceChangeRequested(event_token token) const;
    event_token PlaybackRateChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> & handler) const;
    using PlaybackRateChangeRequested_revoker = event_revoker<IPlayToReceiver>;
    PlaybackRateChangeRequested_revoker PlaybackRateChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> & handler) const;
    void PlaybackRateChangeRequested(event_token token) const;
    event_token CurrentTimeChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> & handler) const;
    using CurrentTimeChangeRequested_revoker = event_revoker<IPlayToReceiver>;
    CurrentTimeChangeRequested_revoker CurrentTimeChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> & handler) const;
    void CurrentTimeChangeRequested(event_token token) const;
    event_token MuteChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> & handler) const;
    using MuteChangeRequested_revoker = event_revoker<IPlayToReceiver>;
    MuteChangeRequested_revoker MuteChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> & handler) const;
    void MuteChangeRequested(event_token token) const;
    event_token VolumeChangeRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> & handler) const;
    using VolumeChangeRequested_revoker = event_revoker<IPlayToReceiver>;
    VolumeChangeRequested_revoker VolumeChangeRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> & handler) const;
    void VolumeChangeRequested(event_token token) const;
    event_token TimeUpdateRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const;
    using TimeUpdateRequested_revoker = event_revoker<IPlayToReceiver>;
    TimeUpdateRequested_revoker TimeUpdateRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const;
    void TimeUpdateRequested(event_token token) const;
    event_token StopRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const;
    using StopRequested_revoker = event_revoker<IPlayToReceiver>;
    StopRequested_revoker StopRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::IInspectable> & handler) const;
    void StopRequested(event_token token) const;
    void NotifyVolumeChange(double volume, bool mute) const;
    void NotifyRateChange(double rate) const;
    void NotifyLoadedMetadata() const;
    void NotifyTimeUpdate(const Windows::Foundation::TimeSpan & currentTime) const;
    void NotifyDurationChange(const Windows::Foundation::TimeSpan & duration) const;
    void NotifySeeking() const;
    void NotifySeeked() const;
    void NotifyPaused() const;
    void NotifyPlaying() const;
    void NotifyEnded() const;
    void NotifyError() const;
    void NotifyStopped() const;
    hstring FriendlyName() const;
    void FriendlyName(hstring_ref value) const;
    void SupportsImage(bool value) const;
    bool SupportsImage() const;
    void SupportsAudio(bool value) const;
    bool SupportsAudio() const;
    void SupportsVideo(bool value) const;
    bool SupportsVideo() const;
    Windows::Foundation::Collections::IPropertySet Properties() const;
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToSource
{
    Windows::Media::PlayTo::PlayToConnection Connection() const;
    Windows::Media::PlayTo::PlayToSource Next() const;
    void Next(const Windows::Media::PlayTo::PlayToSource & value) const;
    void PlayNext() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToSourceDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToSourceRequest
{
    Windows::Foundation::DateTime Deadline() const;
    void DisplayErrorString(hstring_ref errorString) const;
    Windows::Media::PlayTo::PlayToSourceDeferral GetDeferral() const;
    void SetSource(const Windows::Media::PlayTo::PlayToSource & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToSourceRequestedEventArgs
{
    Windows::Media::PlayTo::PlayToSourceRequest SourceRequest() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToSourceSelectedEventArgs
{
    hstring FriendlyName() const;
    Windows::Storage::Streams::IRandomAccessStreamWithContentType Icon() const;
    bool SupportsImage() const;
    bool SupportsAudio() const;
    bool SupportsVideo() const;
};

template <typename D>
struct WINRT_EBO impl_IPlayToSourceWithPreferredSourceUri
{
    Windows::Foundation::Uri PreferredSourceUri() const;
    void PreferredSourceUri(const Windows::Foundation::Uri & value) const;
};

template <typename D>
struct WINRT_EBO impl_IPlaybackRateChangeRequestedEventArgs
{
    double Rate() const;
};

template <typename D>
struct WINRT_EBO impl_ISourceChangeRequestedEventArgs
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType Stream() const;
    hstring Title() const;
    hstring Author() const;
    hstring Album() const;
    hstring Genre() const;
    hstring Description() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Date() const;
    Windows::Storage::Streams::IRandomAccessStreamReference Thumbnail() const;
    Windows::Foundation::IReference<uint32_t> Rating() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> Properties() const;
};

template <typename D>
struct WINRT_EBO impl_IVolumeChangeRequestedEventArgs
{
    double Volume() const;
};

struct ICurrentTimeChangeRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<ICurrentTimeChangeRequestedEventArgs>
{
    ICurrentTimeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICurrentTimeChangeRequestedEventArgs>(m_ptr); }
};

struct IMuteChangeRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IMuteChangeRequestedEventArgs>
{
    IMuteChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMuteChangeRequestedEventArgs>(m_ptr); }
};

struct IPlayToConnection :
    Windows::IInspectable,
    impl::consume<IPlayToConnection>
{
    IPlayToConnection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToConnection>(m_ptr); }
};

struct IPlayToConnectionErrorEventArgs :
    Windows::IInspectable,
    impl::consume<IPlayToConnectionErrorEventArgs>
{
    IPlayToConnectionErrorEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToConnectionErrorEventArgs>(m_ptr); }
};

struct IPlayToConnectionStateChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IPlayToConnectionStateChangedEventArgs>
{
    IPlayToConnectionStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToConnectionStateChangedEventArgs>(m_ptr); }
};

struct IPlayToConnectionTransferredEventArgs :
    Windows::IInspectable,
    impl::consume<IPlayToConnectionTransferredEventArgs>
{
    IPlayToConnectionTransferredEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToConnectionTransferredEventArgs>(m_ptr); }
};

struct IPlayToManager :
    Windows::IInspectable,
    impl::consume<IPlayToManager>
{
    IPlayToManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToManager>(m_ptr); }
};

struct IPlayToManagerStatics :
    Windows::IInspectable,
    impl::consume<IPlayToManagerStatics>
{
    IPlayToManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToManagerStatics>(m_ptr); }
};

struct IPlayToReceiver :
    Windows::IInspectable,
    impl::consume<IPlayToReceiver>
{
    IPlayToReceiver(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToReceiver>(m_ptr); }
};

struct IPlayToSource :
    Windows::IInspectable,
    impl::consume<IPlayToSource>
{
    IPlayToSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToSource>(m_ptr); }
};

struct IPlayToSourceDeferral :
    Windows::IInspectable,
    impl::consume<IPlayToSourceDeferral>
{
    IPlayToSourceDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToSourceDeferral>(m_ptr); }
};

struct IPlayToSourceRequest :
    Windows::IInspectable,
    impl::consume<IPlayToSourceRequest>
{
    IPlayToSourceRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToSourceRequest>(m_ptr); }
};

struct IPlayToSourceRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IPlayToSourceRequestedEventArgs>
{
    IPlayToSourceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToSourceRequestedEventArgs>(m_ptr); }
};

struct IPlayToSourceSelectedEventArgs :
    Windows::IInspectable,
    impl::consume<IPlayToSourceSelectedEventArgs>
{
    IPlayToSourceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToSourceSelectedEventArgs>(m_ptr); }
};

struct IPlayToSourceWithPreferredSourceUri :
    Windows::IInspectable,
    impl::consume<IPlayToSourceWithPreferredSourceUri>
{
    IPlayToSourceWithPreferredSourceUri(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlayToSourceWithPreferredSourceUri>(m_ptr); }
};

struct IPlaybackRateChangeRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IPlaybackRateChangeRequestedEventArgs>
{
    IPlaybackRateChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPlaybackRateChangeRequestedEventArgs>(m_ptr); }
};

struct ISourceChangeRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<ISourceChangeRequestedEventArgs>
{
    ISourceChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISourceChangeRequestedEventArgs>(m_ptr); }
};

struct IVolumeChangeRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IVolumeChangeRequestedEventArgs>
{
    IVolumeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVolumeChangeRequestedEventArgs>(m_ptr); }
};

}

}
