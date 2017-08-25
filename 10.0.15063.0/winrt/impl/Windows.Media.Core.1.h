// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Media.Capture.0.h"
#include "winrt/impl/Windows.Media.Devices.0.h"
#include "winrt/impl/Windows.Media.Devices.Core.0.h"
#include "winrt/impl/Windows.Media.FaceAnalysis.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Media.Playback.0.h"
#include "winrt/impl/Windows.Media.Protection.0.h"
#include "winrt/impl/Windows.Media.Streaming.Adaptive.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.FileProperties.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
#include "winrt/impl/Windows.Media.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Core {

struct WINRT_EBO IAudioStreamDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioStreamDescriptor>,
    impl::require<IAudioStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor>
{
    IAudioStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioStreamDescriptor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioStreamDescriptor2>,
    impl::require<IAudioStreamDescriptor2, Windows::Media::Core::IMediaStreamDescriptor>
{
    IAudioStreamDescriptor2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioStreamDescriptorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioStreamDescriptorFactory>
{
    IAudioStreamDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioTrack>
{
    IAudioTrack(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioTrackOpenFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioTrackOpenFailedEventArgs>
{
    IAudioTrackOpenFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioTrackSupportInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioTrackSupportInfo>
{
    IAudioTrackSupportInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IChapterCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IChapterCue>,
    impl::require<IChapterCue, Windows::Media::Core::IMediaCue>
{
    IChapterCue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICodecInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICodecInfo>
{
    ICodecInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICodecQuery :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICodecQuery>
{
    ICodecQuery(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICodecSubtypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICodecSubtypesStatics>
{
    ICodecSubtypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataCue>,
    impl::require<IDataCue, Windows::Media::Core::IMediaCue>
{
    IDataCue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataCue2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataCue2>,
    impl::require<IDataCue2, Windows::Media::Core::IDataCue, Windows::Media::Core::IMediaCue>
{
    IDataCue2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFaceDetectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectedEventArgs>
{
    IFaceDetectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFaceDetectionEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectionEffect>,
    impl::require<IFaceDetectionEffect, Windows::Media::IMediaExtension>
{
    IFaceDetectionEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFaceDetectionEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectionEffectDefinition>,
    impl::require<IFaceDetectionEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
{
    IFaceDetectionEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFaceDetectionEffectFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFaceDetectionEffectFrame>,
    impl::require<IFaceDetectionEffectFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    IFaceDetectionEffectFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHighDynamicRangeControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHighDynamicRangeControl>
{
    IHighDynamicRangeControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHighDynamicRangeOutput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHighDynamicRangeOutput>
{
    IHighDynamicRangeOutput(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageCue>,
    impl::require<IImageCue, Windows::Media::Core::IMediaCue>
{
    IImageCue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBinder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBinder>
{
    IMediaBinder(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBindingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBindingEventArgs>
{
    IMediaBindingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaBindingEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaBindingEventArgs2>
{
    IMediaBindingEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCue>
{
    IMediaCue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaCueEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaCueEventArgs>
{
    IMediaCueEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSource>
{
    IMediaSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSource2>,
    impl::require<IMediaSource2, Windows::Foundation::IClosable, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaSource2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaSource3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSource3>,
    impl::require<IMediaSource3, Windows::Foundation::IClosable, Windows::Media::Core::IMediaSource2, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaSource3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaSource4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSource4>,
    impl::require<IMediaSource4, Windows::Foundation::IClosable, Windows::Media::Core::IMediaSource2, Windows::Media::Core::IMediaSource3, Windows::Media::Playback::IMediaPlaybackSource>
{
    IMediaSource4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaSourceError :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceError>
{
    IMediaSourceError(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaSourceOpenOperationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceOpenOperationCompletedEventArgs>
{
    IMediaSourceOpenOperationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaSourceStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceStateChangedEventArgs>
{
    IMediaSourceStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceStatics>
{
    IMediaSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaSourceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaSourceStatics2>
{
    IMediaSourceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamDescriptor>
{
    IMediaStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSample :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSample>
{
    IMediaStreamSample(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSampleProtectionProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSampleProtectionProperties>
{
    IMediaStreamSampleProtectionProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSampleStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSampleStatics>
{
    IMediaStreamSampleStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSource>,
    impl::require<IMediaStreamSource, Windows::Media::Core::IMediaSource>
{
    IMediaStreamSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSource2>,
    impl::require<IMediaStreamSource2, Windows::Media::Core::IMediaSource, Windows::Media::Core::IMediaStreamSource>
{
    IMediaStreamSource2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSource3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSource3>,
    impl::require<IMediaStreamSource3, Windows::Media::Core::IMediaSource, Windows::Media::Core::IMediaStreamSource>
{
    IMediaStreamSource3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceClosedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceClosedEventArgs>
{
    IMediaStreamSourceClosedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceClosedRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceClosedRequest>
{
    IMediaStreamSourceClosedRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceFactory>
{
    IMediaStreamSourceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceSampleRenderedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSampleRenderedEventArgs>
{
    IMediaStreamSourceSampleRenderedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceSampleRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSampleRequest>
{
    IMediaStreamSourceSampleRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceSampleRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSampleRequestDeferral>
{
    IMediaStreamSourceSampleRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceSampleRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSampleRequestedEventArgs>
{
    IMediaStreamSourceSampleRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceStartingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceStartingEventArgs>
{
    IMediaStreamSourceStartingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceStartingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceStartingRequest>
{
    IMediaStreamSourceStartingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceStartingRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceStartingRequestDeferral>
{
    IMediaStreamSourceStartingRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceSwitchStreamsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSwitchStreamsRequest>
{
    IMediaStreamSourceSwitchStreamsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceSwitchStreamsRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSwitchStreamsRequestDeferral>
{
    IMediaStreamSourceSwitchStreamsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaStreamSourceSwitchStreamsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaStreamSourceSwitchStreamsRequestedEventArgs>
{
    IMediaStreamSourceSwitchStreamsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaTrack>
{
    IMediaTrack(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMseSourceBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMseSourceBuffer>
{
    IMseSourceBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMseSourceBufferList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMseSourceBufferList>
{
    IMseSourceBufferList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMseStreamSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMseStreamSource>,
    impl::require<IMseStreamSource, Windows::Media::Core::IMediaSource>
{
    IMseStreamSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMseStreamSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMseStreamSourceStatics>
{
    IMseStreamSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISceneAnalysisEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneAnalysisEffect>,
    impl::require<ISceneAnalysisEffect, Windows::Media::IMediaExtension>
{
    ISceneAnalysisEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISceneAnalysisEffectFrame :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneAnalysisEffectFrame>,
    impl::require<ISceneAnalysisEffectFrame, Windows::Foundation::IClosable, Windows::Media::IMediaFrame>
{
    ISceneAnalysisEffectFrame(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISceneAnalyzedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISceneAnalyzedEventArgs>
{
    ISceneAnalyzedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISingleSelectMediaTrackList :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISingleSelectMediaTrackList>
{
    ISingleSelectMediaTrackList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeechCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeechCue>,
    impl::require<ISpeechCue, Windows::Media::Core::IMediaCue>
{
    ISpeechCue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedMetadataTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrack>,
    impl::require<ITimedMetadataTrack, Windows::Media::Core::IMediaTrack>
{
    ITimedMetadataTrack(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedMetadataTrack2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrack2>,
    impl::require<ITimedMetadataTrack2, Windows::Media::Core::IMediaTrack, Windows::Media::Core::ITimedMetadataTrack>
{
    ITimedMetadataTrack2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedMetadataTrackError :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrackError>
{
    ITimedMetadataTrackError(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedMetadataTrackFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrackFactory>
{
    ITimedMetadataTrackFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedMetadataTrackFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrackFailedEventArgs>
{
    ITimedMetadataTrackFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedMetadataTrackProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedMetadataTrackProvider>
{
    ITimedMetadataTrackProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextCue :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextCue>,
    impl::require<ITimedTextCue, Windows::Media::Core::IMediaCue>
{
    ITimedTextCue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextLine :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextLine>
{
    ITimedTextLine(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextRegion :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextRegion>
{
    ITimedTextRegion(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSource>
{
    ITimedTextSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextSourceResolveResultEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSourceResolveResultEventArgs>
{
    ITimedTextSourceResolveResultEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSourceStatics>
{
    ITimedTextSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextSourceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSourceStatics2>
{
    ITimedTextSourceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextStyle :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextStyle>
{
    ITimedTextStyle(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextStyle2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextStyle2>
{
    ITimedTextStyle2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimedTextSubformat :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimedTextSubformat>
{
    ITimedTextSubformat(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoStabilizationEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStabilizationEffect>,
    impl::require<IVideoStabilizationEffect, Windows::Media::IMediaExtension>
{
    IVideoStabilizationEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoStabilizationEffectEnabledChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStabilizationEffectEnabledChangedEventArgs>
{
    IVideoStabilizationEffectEnabledChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoStreamDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStreamDescriptor>,
    impl::require<IVideoStreamDescriptor, Windows::Media::Core::IMediaStreamDescriptor>
{
    IVideoStreamDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoStreamDescriptorFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoStreamDescriptorFactory>
{
    IVideoStreamDescriptorFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoTrack :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoTrack>
{
    IVideoTrack(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoTrackOpenFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoTrackOpenFailedEventArgs>
{
    IVideoTrackOpenFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoTrackSupportInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoTrackSupportInfo>
{
    IVideoTrackSupportInfo(std::nullptr_t = nullptr) noexcept {}
};

}
