// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Devices.1.h"
#include "winrt/impl/Windows.Media.Devices.Core.1.h"
#include "winrt/impl/Windows.Media.FaceAnalysis.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Media.Playback.1.h"
#include "winrt/impl/Windows.Media.Protection.1.h"
#include "winrt/impl/Windows.Media.Streaming.Adaptive.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.FileProperties.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Core {

struct MseTimeRange
{
    Windows::Foundation::TimeSpan Start;
    Windows::Foundation::TimeSpan End;
};

struct TimedTextDouble
{
    double Value;
    Windows::Media::Core::TimedTextUnit Unit;
};

struct TimedTextPadding
{
    double Before;
    double After;
    double Start;
    double End;
    Windows::Media::Core::TimedTextUnit Unit;
};

struct TimedTextPoint
{
    double X;
    double Y;
    Windows::Media::Core::TimedTextUnit Unit;
};

struct TimedTextSize
{
    double Height;
    double Width;
    Windows::Media::Core::TimedTextUnit Unit;
};

struct WINRT_EBO AudioStreamDescriptor :
    Windows::Media::Core::IAudioStreamDescriptor,
    impl::require<AudioStreamDescriptor, Windows::Media::Core::IAudioStreamDescriptor2>
{
    AudioStreamDescriptor(std::nullptr_t) noexcept {}
    AudioStreamDescriptor(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties);
};

struct WINRT_EBO AudioTrack :
    Windows::Media::Core::IMediaTrack,
    impl::require<AudioTrack, Windows::Media::Core::IAudioTrack>
{
    AudioTrack(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioTrackOpenFailedEventArgs :
    Windows::Media::Core::IAudioTrackOpenFailedEventArgs
{
    AudioTrackOpenFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioTrackSupportInfo :
    Windows::Media::Core::IAudioTrackSupportInfo
{
    AudioTrackSupportInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ChapterCue :
    Windows::Media::Core::IChapterCue
{
    ChapterCue(std::nullptr_t) noexcept {}
    ChapterCue();
};

struct WINRT_EBO CodecInfo :
    Windows::Media::Core::ICodecInfo
{
    CodecInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CodecQuery :
    Windows::Media::Core::ICodecQuery
{
    CodecQuery(std::nullptr_t) noexcept {}
    CodecQuery();
};

struct CodecSubtypes
{
    CodecSubtypes() = delete;
    static hstring VideoFormatDV25();
    static hstring VideoFormatDV50();
    static hstring VideoFormatDvc();
    static hstring VideoFormatDvh1();
    static hstring VideoFormatDvhD();
    static hstring VideoFormatDvsd();
    static hstring VideoFormatDvsl();
    static hstring VideoFormatH263();
    static hstring VideoFormatH264();
    static hstring VideoFormatH265();
    static hstring VideoFormatH264ES();
    static hstring VideoFormatHevc();
    static hstring VideoFormatHevcES();
    static hstring VideoFormatM4S2();
    static hstring VideoFormatMjpg();
    static hstring VideoFormatMP43();
    static hstring VideoFormatMP4S();
    static hstring VideoFormatMP4V();
    static hstring VideoFormatMpeg2();
    static hstring VideoFormatVP80();
    static hstring VideoFormatVP90();
    static hstring VideoFormatMpg1();
    static hstring VideoFormatMss1();
    static hstring VideoFormatMss2();
    static hstring VideoFormatWmv1();
    static hstring VideoFormatWmv2();
    static hstring VideoFormatWmv3();
    static hstring VideoFormatWvc1();
    static hstring VideoFormat420O();
    static hstring AudioFormatAac();
    static hstring AudioFormatAdts();
    static hstring AudioFormatAlac();
    static hstring AudioFormatAmrNB();
    static hstring AudioFormatAmrWB();
    static hstring AudioFormatAmrWP();
    static hstring AudioFormatDolbyAC3();
    static hstring AudioFormatDolbyAC3Spdif();
    static hstring AudioFormatDolbyDDPlus();
    static hstring AudioFormatDrm();
    static hstring AudioFormatDts();
    static hstring AudioFormatFlac();
    static hstring AudioFormatFloat();
    static hstring AudioFormatMP3();
    static hstring AudioFormatMPeg();
    static hstring AudioFormatMsp1();
    static hstring AudioFormatOpus();
    static hstring AudioFormatPcm();
    static hstring AudioFormatWmaSpdif();
    static hstring AudioFormatWMAudioLossless();
    static hstring AudioFormatWMAudioV8();
    static hstring AudioFormatWMAudioV9();
};

struct WINRT_EBO DataCue :
    Windows::Media::Core::IDataCue,
    impl::require<DataCue, Windows::Media::Core::IDataCue2>
{
    DataCue(std::nullptr_t) noexcept {}
    DataCue();
};

struct WINRT_EBO FaceDetectedEventArgs :
    Windows::Media::Core::IFaceDetectedEventArgs
{
    FaceDetectedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FaceDetectionEffect :
    Windows::Media::Core::IFaceDetectionEffect
{
    FaceDetectionEffect(std::nullptr_t) noexcept {}
};

struct WINRT_EBO FaceDetectionEffectDefinition :
    Windows::Media::Effects::IVideoEffectDefinition,
    impl::require<FaceDetectionEffectDefinition, Windows::Media::Core::IFaceDetectionEffectDefinition>
{
    FaceDetectionEffectDefinition(std::nullptr_t) noexcept {}
    FaceDetectionEffectDefinition();
};

struct WINRT_EBO FaceDetectionEffectFrame :
    Windows::Media::Core::IFaceDetectionEffectFrame
{
    FaceDetectionEffectFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HighDynamicRangeControl :
    Windows::Media::Core::IHighDynamicRangeControl
{
    HighDynamicRangeControl(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HighDynamicRangeOutput :
    Windows::Media::Core::IHighDynamicRangeOutput
{
    HighDynamicRangeOutput(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ImageCue :
    Windows::Media::Core::IImageCue
{
    ImageCue(std::nullptr_t) noexcept {}
    ImageCue();
};

struct WINRT_EBO MediaBinder :
    Windows::Media::Core::IMediaBinder
{
    MediaBinder(std::nullptr_t) noexcept {}
    MediaBinder();
};

struct WINRT_EBO MediaBindingEventArgs :
    Windows::Media::Core::IMediaBindingEventArgs,
    impl::require<MediaBindingEventArgs, Windows::Media::Core::IMediaBindingEventArgs2>
{
    MediaBindingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaCueEventArgs :
    Windows::Media::Core::IMediaCueEventArgs
{
    MediaCueEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaSource :
    Windows::Media::Core::IMediaSource2,
    impl::require<MediaSource, Windows::Media::Core::IMediaSource3, Windows::Media::Core::IMediaSource4>
{
    MediaSource(std::nullptr_t) noexcept {}
    static Windows::Media::Core::MediaSource CreateFromAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource);
    static Windows::Media::Core::MediaSource CreateFromMediaStreamSource(Windows::Media::Core::MediaStreamSource const& mediaSource);
    static Windows::Media::Core::MediaSource CreateFromMseStreamSource(Windows::Media::Core::MseStreamSource const& mediaSource);
    static Windows::Media::Core::MediaSource CreateFromIMediaSource(Windows::Media::Core::IMediaSource const& mediaSource);
    static Windows::Media::Core::MediaSource CreateFromStorageFile(Windows::Storage::IStorageFile const& file);
    static Windows::Media::Core::MediaSource CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType);
    static Windows::Media::Core::MediaSource CreateFromStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType);
    static Windows::Media::Core::MediaSource CreateFromUri(Windows::Foundation::Uri const& uri);
    static Windows::Media::Core::MediaSource CreateFromMediaBinder(Windows::Media::Core::MediaBinder const& binder);
};

struct WINRT_EBO MediaSourceError :
    Windows::Media::Core::IMediaSourceError
{
    MediaSourceError(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaSourceOpenOperationCompletedEventArgs :
    Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs
{
    MediaSourceOpenOperationCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaSourceStateChangedEventArgs :
    Windows::Media::Core::IMediaSourceStateChangedEventArgs
{
    MediaSourceStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSample :
    Windows::Media::Core::IMediaStreamSample
{
    MediaStreamSample(std::nullptr_t) noexcept {}
    static Windows::Media::Core::MediaStreamSample CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer, Windows::Foundation::TimeSpan const& timestamp);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample> CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, uint32_t count, Windows::Foundation::TimeSpan const& timestamp);
};

struct WINRT_EBO MediaStreamSamplePropertySet :
    Windows::Foundation::Collections::IMap<GUID, Windows::Foundation::IInspectable>
{
    MediaStreamSamplePropertySet(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSampleProtectionProperties :
    Windows::Media::Core::IMediaStreamSampleProtectionProperties
{
    MediaStreamSampleProtectionProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSource :
    Windows::Media::Core::IMediaStreamSource,
    impl::require<MediaStreamSource, Windows::Media::Core::IMediaStreamSource2, Windows::Media::Core::IMediaStreamSource3>
{
    MediaStreamSource(std::nullptr_t) noexcept {}
    MediaStreamSource(Windows::Media::Core::IMediaStreamDescriptor const& descriptor);
    MediaStreamSource(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, Windows::Media::Core::IMediaStreamDescriptor const& descriptor2);
};

struct WINRT_EBO MediaStreamSourceClosedEventArgs :
    Windows::Media::Core::IMediaStreamSourceClosedEventArgs
{
    MediaStreamSourceClosedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceClosedRequest :
    Windows::Media::Core::IMediaStreamSourceClosedRequest
{
    MediaStreamSourceClosedRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceSampleRenderedEventArgs :
    Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs
{
    MediaStreamSourceSampleRenderedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceSampleRequest :
    Windows::Media::Core::IMediaStreamSourceSampleRequest
{
    MediaStreamSourceSampleRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceSampleRequestDeferral :
    Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral
{
    MediaStreamSourceSampleRequestDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceSampleRequestedEventArgs :
    Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs
{
    MediaStreamSourceSampleRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceStartingEventArgs :
    Windows::Media::Core::IMediaStreamSourceStartingEventArgs
{
    MediaStreamSourceStartingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceStartingRequest :
    Windows::Media::Core::IMediaStreamSourceStartingRequest
{
    MediaStreamSourceStartingRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceStartingRequestDeferral :
    Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral
{
    MediaStreamSourceStartingRequestDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceSwitchStreamsRequest :
    Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest
{
    MediaStreamSourceSwitchStreamsRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceSwitchStreamsRequestDeferral :
    Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral
{
    MediaStreamSourceSwitchStreamsRequestDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MediaStreamSourceSwitchStreamsRequestedEventArgs :
    Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs
{
    MediaStreamSourceSwitchStreamsRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MseSourceBuffer :
    Windows::Media::Core::IMseSourceBuffer
{
    MseSourceBuffer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MseSourceBufferList :
    Windows::Media::Core::IMseSourceBufferList
{
    MseSourceBufferList(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MseStreamSource :
    Windows::Media::Core::IMseStreamSource
{
    MseStreamSource(std::nullptr_t) noexcept {}
    MseStreamSource();
    static bool IsContentTypeSupported(param::hstring const& contentType);
};

struct WINRT_EBO SceneAnalysisEffect :
    Windows::Media::Core::ISceneAnalysisEffect
{
    SceneAnalysisEffect(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SceneAnalysisEffectDefinition :
    Windows::Media::Effects::IVideoEffectDefinition
{
    SceneAnalysisEffectDefinition(std::nullptr_t) noexcept {}
    SceneAnalysisEffectDefinition();
};

struct WINRT_EBO SceneAnalysisEffectFrame :
    Windows::Media::Core::ISceneAnalysisEffectFrame
{
    SceneAnalysisEffectFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SceneAnalyzedEventArgs :
    Windows::Media::Core::ISceneAnalyzedEventArgs
{
    SceneAnalyzedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SpeechCue :
    Windows::Media::Core::ISpeechCue
{
    SpeechCue(std::nullptr_t) noexcept {}
    SpeechCue();
};

struct WINRT_EBO TimedMetadataTrack :
    Windows::Media::Core::ITimedMetadataTrack,
    impl::require<TimedMetadataTrack, Windows::Media::Core::ITimedMetadataTrack2>
{
    TimedMetadataTrack(std::nullptr_t) noexcept {}
    TimedMetadataTrack(param::hstring const& id, param::hstring const& language, Windows::Media::Core::TimedMetadataKind const& kind);
};

struct WINRT_EBO TimedMetadataTrackError :
    Windows::Media::Core::ITimedMetadataTrackError
{
    TimedMetadataTrackError(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TimedMetadataTrackFailedEventArgs :
    Windows::Media::Core::ITimedMetadataTrackFailedEventArgs
{
    TimedMetadataTrackFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TimedTextCue :
    Windows::Media::Core::ITimedTextCue
{
    TimedTextCue(std::nullptr_t) noexcept {}
    TimedTextCue();
};

struct WINRT_EBO TimedTextLine :
    Windows::Media::Core::ITimedTextLine
{
    TimedTextLine(std::nullptr_t) noexcept {}
    TimedTextLine();
};

struct WINRT_EBO TimedTextRegion :
    Windows::Media::Core::ITimedTextRegion
{
    TimedTextRegion(std::nullptr_t) noexcept {}
    TimedTextRegion();
};

struct WINRT_EBO TimedTextSource :
    Windows::Media::Core::ITimedTextSource
{
    TimedTextSource(std::nullptr_t) noexcept {}
    static Windows::Media::Core::TimedTextSource CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream);
    static Windows::Media::Core::TimedTextSource CreateFromUri(Windows::Foundation::Uri const& uri);
    static Windows::Media::Core::TimedTextSource CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& defaultLanguage);
    static Windows::Media::Core::TimedTextSource CreateFromUri(Windows::Foundation::Uri const& uri, param::hstring const& defaultLanguage);
    static Windows::Media::Core::TimedTextSource CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream);
    static Windows::Media::Core::TimedTextSource CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri);
    static Windows::Media::Core::TimedTextSource CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream, param::hstring const& defaultLanguage);
    static Windows::Media::Core::TimedTextSource CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri, param::hstring const& defaultLanguage);
};

struct WINRT_EBO TimedTextSourceResolveResultEventArgs :
    Windows::Media::Core::ITimedTextSourceResolveResultEventArgs
{
    TimedTextSourceResolveResultEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TimedTextStyle :
    Windows::Media::Core::ITimedTextStyle,
    impl::require<TimedTextStyle, Windows::Media::Core::ITimedTextStyle2>
{
    TimedTextStyle(std::nullptr_t) noexcept {}
    TimedTextStyle();
};

struct WINRT_EBO TimedTextSubformat :
    Windows::Media::Core::ITimedTextSubformat
{
    TimedTextSubformat(std::nullptr_t) noexcept {}
    TimedTextSubformat();
};

struct WINRT_EBO VideoStabilizationEffect :
    Windows::Media::Core::IVideoStabilizationEffect
{
    VideoStabilizationEffect(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoStabilizationEffectDefinition :
    Windows::Media::Effects::IVideoEffectDefinition
{
    VideoStabilizationEffectDefinition(std::nullptr_t) noexcept {}
    VideoStabilizationEffectDefinition();
};

struct WINRT_EBO VideoStabilizationEffectEnabledChangedEventArgs :
    Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs
{
    VideoStabilizationEffectEnabledChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoStreamDescriptor :
    Windows::Media::Core::IVideoStreamDescriptor
{
    VideoStreamDescriptor(std::nullptr_t) noexcept {}
    VideoStreamDescriptor(Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties);
};

struct WINRT_EBO VideoTrack :
    Windows::Media::Core::IMediaTrack,
    impl::require<VideoTrack, Windows::Media::Core::IVideoTrack>
{
    VideoTrack(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoTrackOpenFailedEventArgs :
    Windows::Media::Core::IVideoTrackOpenFailedEventArgs
{
    VideoTrackOpenFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoTrackSupportInfo :
    Windows::Media::Core::IVideoTrackSupportInfo
{
    VideoTrackSupportInfo(std::nullptr_t) noexcept {}
};

}
