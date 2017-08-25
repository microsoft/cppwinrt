// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.PlayTo.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_PlayTo_ICurrentTimeChangeRequestedEventArgs<D>::Time() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs)->get_Time(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_PlayTo_IMuteChangeRequestedEventArgs<D>::Mute() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IMuteChangeRequestedEventArgs)->get_Mute(&value));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToConnectionState consume_Windows_Media_PlayTo_IPlayToConnection<D>::State() const
{
    Windows::Media::PlayTo::PlayToConnectionState value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnection)->get_State(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToConnection<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnection)->add_StateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToConnection> consume_Windows_Media_PlayTo_IPlayToConnection<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToConnection>(this, &abi_t<Windows::Media::PlayTo::IPlayToConnection>::remove_StateChanged, StateChanged(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToConnection<D>::StateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnection)->remove_StateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToConnection<D>::Transferred(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnection)->add_Transferred(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToConnection> consume_Windows_Media_PlayTo_IPlayToConnection<D>::Transferred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToConnection>(this, &abi_t<Windows::Media::PlayTo::IPlayToConnection>::remove_Transferred, Transferred(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToConnection<D>::Transferred(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnection)->remove_Transferred(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToConnection<D>::Error(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnection)->add_Error(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToConnection> consume_Windows_Media_PlayTo_IPlayToConnection<D>::Error(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToConnection>(this, &abi_t<Windows::Media::PlayTo::IPlayToConnection>::remove_Error, Error(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToConnection<D>::Error(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnection)->remove_Error(get_abi(token)));
}

template <typename D> Windows::Media::PlayTo::PlayToConnectionError consume_Windows_Media_PlayTo_IPlayToConnectionErrorEventArgs<D>::Code() const
{
    Windows::Media::PlayTo::PlayToConnectionError value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs)->get_Code(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_PlayTo_IPlayToConnectionErrorEventArgs<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToConnectionState consume_Windows_Media_PlayTo_IPlayToConnectionStateChangedEventArgs<D>::PreviousState() const
{
    Windows::Media::PlayTo::PlayToConnectionState value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs)->get_PreviousState(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToConnectionState consume_Windows_Media_PlayTo_IPlayToConnectionStateChangedEventArgs<D>::CurrentState() const
{
    Windows::Media::PlayTo::PlayToConnectionState value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs)->get_CurrentState(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToSource consume_Windows_Media_PlayTo_IPlayToConnectionTransferredEventArgs<D>::PreviousSource() const
{
    Windows::Media::PlayTo::PlayToSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs)->get_PreviousSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToSource consume_Windows_Media_PlayTo_IPlayToConnectionTransferredEventArgs<D>::CurrentSource() const
{
    Windows::Media::PlayTo::PlayToSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs)->get_CurrentSource(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToManager<D>::SourceRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToManager)->add_SourceRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToManager> consume_Windows_Media_PlayTo_IPlayToManager<D>::SourceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToManager>(this, &abi_t<Windows::Media::PlayTo::IPlayToManager>::remove_SourceRequested, SourceRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToManager<D>::SourceRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToManager)->remove_SourceRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToManager<D>::SourceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToManager)->add_SourceSelected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToManager> consume_Windows_Media_PlayTo_IPlayToManager<D>::SourceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToManager>(this, &abi_t<Windows::Media::PlayTo::IPlayToManager>::remove_SourceSelected, SourceSelected(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToManager<D>::SourceSelected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToManager)->remove_SourceSelected(get_abi(token)));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToManager<D>::DefaultSourceSelection(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToManager)->put_DefaultSourceSelection(value));
}

template <typename D> bool consume_Windows_Media_PlayTo_IPlayToManager<D>::DefaultSourceSelection() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToManager)->get_DefaultSourceSelection(&value));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToManager consume_Windows_Media_PlayTo_IPlayToManagerStatics<D>::GetForCurrentView() const
{
    Windows::Media::PlayTo::PlayToManager playToManager{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToManagerStatics)->GetForCurrentView(put_abi(playToManager)));
    return playToManager;
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToManagerStatics<D>::ShowPlayToUI() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToManagerStatics)->ShowPlayToUI());
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToReceiver<D>::PlayRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->add_PlayRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToReceiver> consume_Windows_Media_PlayTo_IPlayToReceiver<D>::PlayRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToReceiver>(this, &abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_PlayRequested, PlayRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::PlayRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->remove_PlayRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToReceiver<D>::PauseRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->add_PauseRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToReceiver> consume_Windows_Media_PlayTo_IPlayToReceiver<D>::PauseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToReceiver>(this, &abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_PauseRequested, PauseRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::PauseRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->remove_PauseRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToReceiver<D>::SourceChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->add_SourceChangeRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToReceiver> consume_Windows_Media_PlayTo_IPlayToReceiver<D>::SourceChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToReceiver>(this, &abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_SourceChangeRequested, SourceChangeRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::SourceChangeRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->remove_SourceChangeRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToReceiver<D>::PlaybackRateChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->add_PlaybackRateChangeRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToReceiver> consume_Windows_Media_PlayTo_IPlayToReceiver<D>::PlaybackRateChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToReceiver>(this, &abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_PlaybackRateChangeRequested, PlaybackRateChangeRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::PlaybackRateChangeRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->remove_PlaybackRateChangeRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToReceiver<D>::CurrentTimeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->add_CurrentTimeChangeRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToReceiver> consume_Windows_Media_PlayTo_IPlayToReceiver<D>::CurrentTimeChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToReceiver>(this, &abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_CurrentTimeChangeRequested, CurrentTimeChangeRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::CurrentTimeChangeRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->remove_CurrentTimeChangeRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToReceiver<D>::MuteChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->add_MuteChangeRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToReceiver> consume_Windows_Media_PlayTo_IPlayToReceiver<D>::MuteChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToReceiver>(this, &abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_MuteChangeRequested, MuteChangeRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::MuteChangeRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->remove_MuteChangeRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToReceiver<D>::VolumeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->add_VolumeChangeRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToReceiver> consume_Windows_Media_PlayTo_IPlayToReceiver<D>::VolumeChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToReceiver>(this, &abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_VolumeChangeRequested, VolumeChangeRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::VolumeChangeRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->remove_VolumeChangeRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToReceiver<D>::TimeUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->add_TimeUpdateRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToReceiver> consume_Windows_Media_PlayTo_IPlayToReceiver<D>::TimeUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToReceiver>(this, &abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_TimeUpdateRequested, TimeUpdateRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::TimeUpdateRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->remove_TimeUpdateRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_PlayTo_IPlayToReceiver<D>::StopRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->add_StopRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::PlayTo::IPlayToReceiver> consume_Windows_Media_PlayTo_IPlayToReceiver<D>::StopRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::PlayTo::IPlayToReceiver>(this, &abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_StopRequested, StopRequested(handler));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::StopRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->remove_StopRequested(get_abi(token)));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyVolumeChange(double volume, bool mute) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyVolumeChange(volume, mute));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyRateChange(double rate) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyRateChange(rate));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyLoadedMetadata() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyLoadedMetadata());
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyTimeUpdate(Windows::Foundation::TimeSpan const& currentTime) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyTimeUpdate(get_abi(currentTime)));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyDurationChange(Windows::Foundation::TimeSpan const& duration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyDurationChange(get_abi(duration)));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifySeeking() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifySeeking());
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifySeeked() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifySeeked());
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyPaused() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyPaused());
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyPlaying() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyPlaying());
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyEnded() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyEnded());
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyError() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyError());
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::NotifyStopped() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->NotifyStopped());
}

template <typename D> hstring consume_Windows_Media_PlayTo_IPlayToReceiver<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::FriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->put_FriendlyName(get_abi(value)));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::SupportsImage(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->put_SupportsImage(value));
}

template <typename D> bool consume_Windows_Media_PlayTo_IPlayToReceiver<D>::SupportsImage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->get_SupportsImage(&value));
    return value;
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::SupportsAudio(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->put_SupportsAudio(value));
}

template <typename D> bool consume_Windows_Media_PlayTo_IPlayToReceiver<D>::SupportsAudio() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->get_SupportsAudio(&value));
    return value;
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToReceiver<D>::SupportsVideo(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->put_SupportsVideo(value));
}

template <typename D> bool consume_Windows_Media_PlayTo_IPlayToReceiver<D>::SupportsVideo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->get_SupportsVideo(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_PlayTo_IPlayToReceiver<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_PlayTo_IPlayToReceiver<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->StartAsync(put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_PlayTo_IPlayToReceiver<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToReceiver)->StopAsync(put_abi(action)));
    return action;
}

template <typename D> Windows::Media::PlayTo::PlayToConnection consume_Windows_Media_PlayTo_IPlayToSource<D>::Connection() const
{
    Windows::Media::PlayTo::PlayToConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSource)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::PlayTo::PlayToSource consume_Windows_Media_PlayTo_IPlayToSource<D>::Next() const
{
    Windows::Media::PlayTo::PlayToSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSource)->get_Next(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToSource<D>::Next(Windows::Media::PlayTo::PlayToSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSource)->put_Next(get_abi(value)));
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToSource<D>::PlayNext() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSource)->PlayNext());
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToSourceDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceDeferral)->Complete());
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_PlayTo_IPlayToSourceRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceRequest)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToSourceRequest<D>::DisplayErrorString(param::hstring const& errorString) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceRequest)->DisplayErrorString(get_abi(errorString)));
}

template <typename D> Windows::Media::PlayTo::PlayToSourceDeferral consume_Windows_Media_PlayTo_IPlayToSourceRequest<D>::GetDeferral() const
{
    Windows::Media::PlayTo::PlayToSourceDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToSourceRequest<D>::SetSource(Windows::Media::PlayTo::PlayToSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceRequest)->SetSource(get_abi(value)));
}

template <typename D> Windows::Media::PlayTo::PlayToSourceRequest consume_Windows_Media_PlayTo_IPlayToSourceRequestedEventArgs<D>::SourceRequest() const
{
    Windows::Media::PlayTo::PlayToSourceRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs)->get_SourceRequest(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType consume_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs<D>::Icon() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs)->get_Icon(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs<D>::SupportsImage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs)->get_SupportsImage(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs<D>::SupportsAudio() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs)->get_SupportsAudio(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs<D>::SupportsVideo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs)->get_SupportsVideo(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_PlayTo_IPlayToSourceWithPreferredSourceUri<D>::PreferredSourceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri)->get_PreferredSourceUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_PlayTo_IPlayToSourceWithPreferredSourceUri<D>::PreferredSourceUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri)->put_PreferredSourceUri(get_abi(value)));
}

template <typename D> double consume_Windows_Media_PlayTo_IPlaybackRateChangeRequestedEventArgs<D>::Rate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs)->get_Rate(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Stream() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Stream(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Author() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Author(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Album() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Album(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Genre() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Genre(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Date() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Date(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Rating() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Rating(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::ISourceChangeRequestedEventArgs)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_PlayTo_IVolumeChangeRequestedEventArgs<D>::Volume() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs)->get_Volume(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Time(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Time());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IMuteChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Mute(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mute());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToConnection> : produce_base<D, Windows::Media::PlayTo::IPlayToConnection>
{
    HRESULT __stdcall get_State(abi_t<Windows::Media::PlayTo::PlayToConnectionState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Transferred(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Transferred(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Transferred(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transferred(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Error(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Error(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Error(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Error(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>
{
    HRESULT __stdcall get_Code(abi_t<Windows::Media::PlayTo::PlayToConnectionError>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>
{
    HRESULT __stdcall get_PreviousState(abi_t<Windows::Media::PlayTo::PlayToConnectionState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviousState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentState(abi_t<Windows::Media::PlayTo::PlayToConnectionState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>
{
    HRESULT __stdcall get_PreviousSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreviousSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToManager> : produce_base<D, Windows::Media::PlayTo::IPlayToManager>
{
    HRESULT __stdcall add_SourceRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceSelected(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceSelected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceSelected(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceSelected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultSourceSelection(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultSourceSelection(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultSourceSelection(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultSourceSelection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToManagerStatics> : produce_base<D, Windows::Media::PlayTo::IPlayToManagerStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** playToManager) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *playToManager = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *playToManager = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowPlayToUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowPlayToUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToReceiver> : produce_base<D, Windows::Media::PlayTo::IPlayToReceiver>
{
    HRESULT __stdcall add_PlayRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PlayRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlayRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlayRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PauseRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PauseRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PauseRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PauseRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceChangeRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceChangeRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceChangeRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceChangeRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackRateChangeRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PlaybackRateChangeRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackRateChangeRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackRateChangeRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentTimeChangeRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CurrentTimeChangeRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentTimeChangeRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentTimeChangeRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MuteChangeRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().MuteChangeRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MuteChangeRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MuteChangeRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VolumeChangeRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VolumeChangeRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VolumeChangeRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VolumeChangeRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TimeUpdateRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().TimeUpdateRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TimeUpdateRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimeUpdateRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StopRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StopRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StopRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyVolumeChange(double volume, bool mute) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyVolumeChange(volume, mute);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyRateChange(double rate) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyRateChange(rate);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyLoadedMetadata() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyLoadedMetadata();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyTimeUpdate(abi_t<Windows::Foundation::TimeSpan> currentTime) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyTimeUpdate(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&currentTime));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyDurationChange(abi_t<Windows::Foundation::TimeSpan> duration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyDurationChange(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifySeeking() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifySeeking();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifySeeked() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifySeeked();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyPaused() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyPaused();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyPlaying() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyPlaying();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyEnded() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyEnded();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyError() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyError();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyStopped() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyStopped();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FriendlyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsImage(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsImage(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsImage(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsImage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsAudio(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsAudio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsAudio(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsAudio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SupportsVideo(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportsVideo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsVideo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsVideo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSource> : produce_base<D, Windows::Media::PlayTo::IPlayToSource>
{
    HRESULT __stdcall get_Connection(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Connection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Next(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Next());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Next(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Next(*reinterpret_cast<Windows::Media::PlayTo::PlayToSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PlayNext() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlayNext();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSourceDeferral> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSourceRequest> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceRequest>
{
    HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisplayErrorString(HSTRING errorString) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayErrorString(*reinterpret_cast<hstring const*>(&errorString));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSource(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSource(*reinterpret_cast<Windows::Media::PlayTo::PlayToSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>
{
    HRESULT __stdcall get_SourceRequest(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceRequest());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>
{
    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Icon(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Icon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsImage(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsImage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsAudio(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsAudio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsVideo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportsVideo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri> : produce_base<D, Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>
{
    HRESULT __stdcall get_PreferredSourceUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredSourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredSourceUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredSourceUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Rate(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::ISourceChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Stream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Stream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Author(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Author());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Album(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Album());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Genre(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Genre());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rating(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rating());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs> : produce_base<D, Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>
{
    HRESULT __stdcall get_Volume(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Volume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::PlayTo {

inline Windows::Media::PlayTo::PlayToManager PlayToManager::GetForCurrentView()
{
    return get_activation_factory<PlayToManager, Windows::Media::PlayTo::IPlayToManagerStatics>().GetForCurrentView();
}

inline void PlayToManager::ShowPlayToUI()
{
    get_activation_factory<PlayToManager, Windows::Media::PlayTo::IPlayToManagerStatics>().ShowPlayToUI();
}

inline PlayToReceiver::PlayToReceiver() :
    PlayToReceiver(activate_instance<PlayToReceiver>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IMuteChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IMuteChangeRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToConnection> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToManager> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToManagerStatics> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToReceiver> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToReceiver> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToSource> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToSourceDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToSourceDeferral> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToSourceRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToSourceRequest> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::ISourceChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::ISourceChangeRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::MuteChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::MuteChangeRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToConnection> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToManager> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToReceiver> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToReceiver> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToSource> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToSourceDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToSourceDeferral> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToSourceRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToSourceRequest> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::SourceChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::SourceChangeRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> {};

}

WINRT_WARNING_POP
