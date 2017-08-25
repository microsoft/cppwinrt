// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.Streaming.Adaptive.2.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::IsLive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_IsLive(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DesiredLiveOffset() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_DesiredLiveOffset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DesiredLiveOffset(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->put_DesiredLiveOffset(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::InitialBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_InitialBitrate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::InitialBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->put_InitialBitrate(value));
}

template <typename D> uint32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::CurrentDownloadBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_CurrentDownloadBitrate(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::CurrentPlaybackBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_CurrentPlaybackBitrate(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::AvailableBitrates() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_AvailableBitrates(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DesiredMinBitrate() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_DesiredMinBitrate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DesiredMinBitrate(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->put_DesiredMinBitrate(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DesiredMaxBitrate() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_DesiredMaxBitrate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DesiredMaxBitrate(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->put_DesiredMaxBitrate(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::AudioOnlyPlayback() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_AudioOnlyPlayback(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::InboundBitsPerSecond() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_InboundBitsPerSecond(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::InboundBitsPerSecondWindow() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->get_InboundBitsPerSecondWindow(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::InboundBitsPerSecondWindow(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->put_InboundBitsPerSecondWindow(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadBitrateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->add_DownloadBitrateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadBitrateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>(this, &abi_t<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>::remove_DownloadBitrateChanged, DownloadBitrateChanged(handler));
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadBitrateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->remove_DownloadBitrateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::PlaybackBitrateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->add_PlaybackBitrateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::PlaybackBitrateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>(this, &abi_t<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>::remove_PlaybackBitrateChanged, PlaybackBitrateChanged(handler));
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::PlaybackBitrateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->remove_PlaybackBitrateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->add_DownloadRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>(this, &abi_t<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>::remove_DownloadRequested, DownloadRequested(handler));
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->remove_DownloadRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->add_DownloadCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>(this, &abi_t<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>::remove_DownloadCompleted, DownloadCompleted(handler));
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->remove_DownloadCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->add_DownloadFailed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>(this, &abi_t<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>::remove_DownloadFailed, DownloadFailed(handler));
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource<D>::DownloadFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource)->remove_DownloadFailed(get_abi(token)));
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource2<D>::AdvancedSettings() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2)->get_AdvancedSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource3<D>::MinLiveOffset() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3)->get_MinLiveOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource3<D>::MaxSeekableWindowSize() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3)->get_MaxSeekableWindowSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource3<D>::DesiredSeekableWindowSize() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3)->get_DesiredSeekableWindowSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource3<D>::DesiredSeekableWindowSize(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3)->put_DesiredSeekableWindowSize(get_abi(value)));
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource3<D>::Diagnostics() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3)->get_Diagnostics(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCorrelatedTimes consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource3<D>::GetCorrelatedTimes() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCorrelatedTimes value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3)->GetCorrelatedTimes(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceAdvancedSettings<D>::AllSegmentsIndependent() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings)->get_AllSegmentsIndependent(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceAdvancedSettings<D>::AllSegmentsIndependent(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings)->put_AllSegmentsIndependent(value));
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceAdvancedSettings<D>::DesiredBitrateHeadroomRatio() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings)->get_DesiredBitrateHeadroomRatio(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceAdvancedSettings<D>::DesiredBitrateHeadroomRatio(optional<double> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings)->put_DesiredBitrateHeadroomRatio(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceAdvancedSettings<D>::BitrateDowngradeTriggerRatio() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings)->get_BitrateDowngradeTriggerRatio(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceAdvancedSettings<D>::BitrateDowngradeTriggerRatio(optional<double> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings)->put_BitrateDowngradeTriggerRatio(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCorrelatedTimes<D>::Position() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCorrelatedTimes<D>::PresentationTimeStamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes)->get_PresentationTimeStamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCorrelatedTimes<D>::ProgramDateTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes)->get_ProgramDateTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationStatus consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult<D>::Status() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSource consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult<D>::MediaSource() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult)->get_MediaSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult<D>::HttpResponseMessage() const
{
    Windows::Web::Http::HttpResponseMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult)->get_HttpResponseMessage(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult2<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticType consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs<D>::DiagnosticType() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs)->get_DiagnosticType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs<D>::RequestId() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs)->get_RequestId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs<D>::Position() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs<D>::SegmentId() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs)->get_SegmentId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs<D>::ResourceType() const
{
    Windows::Foundation::IReference<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs)->get_ResourceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs<D>::ResourceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs)->get_ResourceUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs<D>::ResourceByteRangeOffset() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs)->get_ResourceByteRangeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs<D>::ResourceByteRangeLength() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs)->get_ResourceByteRangeLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs<D>::Bitrate() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs)->get_Bitrate(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnostics<D>::DiagnosticAvailable(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics)->add_DiagnosticAvailable(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnostics<D>::DiagnosticAvailable(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics>(this, &abi_t<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics>::remove_DiagnosticAvailable, DiagnosticAvailable(handler));
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnostics<D>::DiagnosticAvailable(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics)->remove_DiagnosticAvailable(get_abi(token)));
}

template <typename D> uint32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs<D>::OldValue() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs)->get_OldValue(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs<D>::NewValue() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs)->get_NewValue(&value));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedReason consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2<D>::Reason() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedReason value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::ResourceType() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs)->get_ResourceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::ResourceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs)->get_ResourceUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::ResourceByteRangeOffset() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs)->get_ResourceByteRangeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::ResourceByteRangeLength() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs)->get_ResourceByteRangeLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::HttpResponseMessage() const
{
    Windows::Web::Http::HttpResponseMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs)->get_HttpResponseMessage(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs2<D>::RequestId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2)->get_RequestId(&value));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadStatistics consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs2<D>::Statistics() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadStatistics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2)->get_Statistics(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs2<D>::Position() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::ResourceType() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs)->get_ResourceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::ResourceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs)->get_ResourceUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::ResourceByteRangeOffset() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs)->get_ResourceByteRangeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::ResourceByteRangeLength() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs)->get_ResourceByteRangeLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::HttpResponseMessage() const
{
    Windows::Web::Http::HttpResponseMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs)->get_HttpResponseMessage(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs2<D>::RequestId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2)->get_RequestId(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs2<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadStatistics consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs2<D>::Statistics() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadStatistics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2)->get_Statistics(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs2<D>::Position() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral)->Complete());
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::ResourceType() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs)->get_ResourceType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::ResourceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs)->get_ResourceUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::ResourceByteRangeOffset() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs)->get_ResourceByteRangeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::ResourceByteRangeLength() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs)->get_ResourceByteRangeLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::Result() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs)->get_Result(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> int32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs2<D>::RequestId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2)->get_RequestId(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs2<D>::Position() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::ResourceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->get_ResourceUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::ResourceUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->put_ResourceUri(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->get_InputStream(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::InputStream(Windows::Storage::Streams::IInputStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->put_InputStream(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::Buffer() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->get_Buffer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::Buffer(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->put_Buffer(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::ContentType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->get_ContentType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::ContentType(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->put_ContentType(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::ExtendedStatus() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->get_ExtendedStatus(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult<D>::ExtendedStatus(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult)->put_ExtendedStatus(value));
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult2<D>::ResourceByteRangeOffset() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2)->get_ResourceByteRangeOffset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult2<D>::ResourceByteRangeOffset(optional<uint64_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2)->put_ResourceByteRangeOffset(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult2<D>::ResourceByteRangeLength() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2)->get_ResourceByteRangeLength(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult2<D>::ResourceByteRangeLength(optional<uint64_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2)->put_ResourceByteRangeLength(get_abi(value)));
}

template <typename D> uint64_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadStatistics<D>::ContentBytesReceivedCount() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics)->get_ContentBytesReceivedCount(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadStatistics<D>::TimeToHeadersReceived() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics)->get_TimeToHeadersReceived(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadStatistics<D>::TimeToFirstByteReceived() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics)->get_TimeToFirstByteReceived(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadStatistics<D>::TimeToLastByteReceived() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics)->get_TimeToLastByteReceived(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs<D>::OldValue() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs)->get_OldValue(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs<D>::NewValue() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs)->get_NewValue(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs<D>::AudioOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs)->get_AudioOnly(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceStatics<D>::IsContentTypeSupported(param::hstring const& contentType) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics)->IsContentTypeSupported(get_abi(contentType), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceStatics<D>::CreateFromUriAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics)->CreateFromUriAsync(get_abi(uri), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceStatics<D>::CreateFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::HttpClient const& httpClient) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics)->CreateFromUriWithDownloaderAsync(get_abi(uri), get_abi(httpClient), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceStatics<D>::CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics)->CreateFromStreamAsync(get_abi(stream), get_abi(uri), get_abi(contentType), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> consume_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceStatics<D>::CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType, Windows::Web::Http::HttpClient const& httpClient) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics)->CreateFromStreamWithDownloaderAsync(get_abi(stream), get_abi(uri), get_abi(contentType), get_abi(httpClient), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>
{
    HRESULT __stdcall get_IsLive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsLive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredLiveOffset(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredLiveOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredLiveOffset(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredLiveOffset(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialBitrate(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InitialBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InitialBitrate(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentDownloadBitrate(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentDownloadBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentPlaybackBitrate(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentPlaybackBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableBitrates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AvailableBitrates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredMinBitrate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredMinBitrate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredMinBitrate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredMinBitrate(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredMaxBitrate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredMaxBitrate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredMaxBitrate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredMaxBitrate(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioOnlyPlayback(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioOnlyPlayback());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InboundBitsPerSecond(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InboundBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InboundBitsPerSecondWindow(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InboundBitsPerSecondWindow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InboundBitsPerSecondWindow(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InboundBitsPerSecondWindow(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadBitrateChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DownloadBitrateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadBitrateChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadBitrateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackBitrateChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PlaybackBitrateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackBitrateChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackBitrateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DownloadRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DownloadCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadFailed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DownloadFailed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadFailed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DownloadFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2>
{
    HRESULT __stdcall get_AdvancedSettings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvancedSettings());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3>
{
    HRESULT __stdcall get_MinLiveOffset(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinLiveOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSeekableWindowSize(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxSeekableWindowSize());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredSeekableWindowSize(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredSeekableWindowSize());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredSeekableWindowSize(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredSeekableWindowSize(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Diagnostics(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Diagnostics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCorrelatedTimes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCorrelatedTimes());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings>
{
    HRESULT __stdcall get_AllSegmentsIndependent(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllSegmentsIndependent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllSegmentsIndependent(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllSegmentsIndependent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredBitrateHeadroomRatio(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredBitrateHeadroomRatio());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredBitrateHeadroomRatio(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredBitrateHeadroomRatio(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitrateDowngradeTriggerRatio(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitrateDowngradeTriggerRatio());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BitrateDowngradeTriggerRatio(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BitrateDowngradeTriggerRatio(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes>
{
    HRESULT __stdcall get_Position(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationTimeStamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PresentationTimeStamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProgramDateTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProgramDateTime());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediaSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HttpResponseMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HttpResponseMessage());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2>
{
    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs>
{
    HRESULT __stdcall get_DiagnosticType(abi_t<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiagnosticType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestId(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SegmentId(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SegmentId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceType(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeOffset(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeLength(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitrate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bitrate());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics>
{
    HRESULT __stdcall add_DiagnosticAvailable(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DiagnosticAvailable(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DiagnosticAvailable(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiagnosticAvailable(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs>
{
    HRESULT __stdcall get_OldValue(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OldValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2>
{
    HRESULT __stdcall get_Reason(abi_t<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs>
{
    HRESULT __stdcall get_ResourceType(abi_t<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeOffset(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeLength(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HttpResponseMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HttpResponseMessage());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2>
{
    HRESULT __stdcall get_RequestId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Statistics(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Statistics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs>
{
    HRESULT __stdcall get_ResourceType(abi_t<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeOffset(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeLength(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HttpResponseMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HttpResponseMessage());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2>
{
    HRESULT __stdcall get_RequestId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Statistics(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Statistics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral>
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs>
{
    HRESULT __stdcall get_ResourceType(abi_t<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeOffset(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeLength(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Result(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2>
{
    HRESULT __stdcall get_RequestId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult>
{
    HRESULT __stdcall get_ResourceUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResourceUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResourceUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputStream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InputStream(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputStream(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Buffer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Buffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Buffer(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Buffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentType(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentType(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedStatus(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExtendedStatus(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExtendedStatus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2>
{
    HRESULT __stdcall get_ResourceByteRangeOffset(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResourceByteRangeOffset(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResourceByteRangeOffset(*reinterpret_cast<Windows::Foundation::IReference<uint64_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeLength(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceByteRangeLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResourceByteRangeLength(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResourceByteRangeLength(*reinterpret_cast<Windows::Foundation::IReference<uint64_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics>
{
    HRESULT __stdcall get_ContentBytesReceivedCount(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentBytesReceivedCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeToHeadersReceived(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeToHeadersReceived());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeToFirstByteReceived(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeToFirstByteReceived());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeToLastByteReceived(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeToLastByteReceived());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs>
{
    HRESULT __stdcall get_OldValue(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OldValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioOnly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics>
{
    HRESULT __stdcall IsContentTypeSupported(HSTRING contentType, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsContentTypeSupported(*reinterpret_cast<hstring const*>(&contentType)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromUriAsync(::IUnknown* uri, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromUriWithDownloaderAsync(::IUnknown* uri, ::IUnknown* httpClient, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromUriAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Web::Http::HttpClient const*>(&httpClient)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStreamAsync(::IUnknown* stream, ::IUnknown* uri, HSTRING contentType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&stream), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&contentType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStreamWithDownloaderAsync(::IUnknown* stream, ::IUnknown* uri, HSTRING contentType, ::IUnknown* httpClient, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFromStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&stream), *reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&contentType), *reinterpret_cast<Windows::Web::Http::HttpClient const*>(&httpClient)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Streaming::Adaptive {

inline bool AdaptiveMediaSource::IsContentTypeSupported(param::hstring const& contentType)
{
    return get_activation_factory<AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics>().IsContentTypeSupported(contentType);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> AdaptiveMediaSource::CreateFromUriAsync(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics>().CreateFromUriAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> AdaptiveMediaSource::CreateFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::HttpClient const& httpClient)
{
    return get_activation_factory<AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics>().CreateFromUriAsync(uri, httpClient);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> AdaptiveMediaSource::CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType)
{
    return get_activation_factory<AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics>().CreateFromStreamAsync(stream, uri, contentType);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> AdaptiveMediaSource::CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType, Windows::Web::Http::HttpClient const& httpClient)
{
    return get_activation_factory<AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics>().CreateFromStreamAsync(stream, uri, contentType, httpClient);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCorrelatedTimes> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCorrelatedTimes> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadStatistics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadStatistics> {};

template<> struct hash<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> {};

}

WINRT_WARNING_POP
