// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Media.Transcoding.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Media.Editing.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimTimeFromStart() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_TrimTimeFromStart(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimTimeFromStart(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->put_TrimTimeFromStart(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimTimeFromEnd() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_TrimTimeFromEnd(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimTimeFromEnd(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->put_TrimTimeFromEnd(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::OriginalDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_OriginalDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::TrimmedDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_TrimmedDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::UserData() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_UserData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Delay(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->put_Delay(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Delay() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_Delay(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Volume(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->put_Volume(value));
}

template <typename D> double consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Volume() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_Volume(&value));
    return value;
}

template <typename D> Windows::Media::Editing::BackgroundAudioTrack consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::Clone() const
{
    Windows::Media::Editing::BackgroundAudioTrack value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->Clone(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::GetAudioEncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->GetAudioEncodingProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> consume_Windows_Media_Editing_IBackgroundAudioTrack<D>::AudioEffectDefinitions() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrack)->get_AudioEffectDefinitions(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Editing::BackgroundAudioTrack consume_Windows_Media_Editing_IBackgroundAudioTrackStatics<D>::CreateFromEmbeddedAudioTrack(Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack) const
{
    Windows::Media::Editing::BackgroundAudioTrack value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrackStatics)->CreateFromEmbeddedAudioTrack(get_abi(embeddedAudioTrack), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Editing::BackgroundAudioTrack> consume_Windows_Media_Editing_IBackgroundAudioTrackStatics<D>::CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Editing::BackgroundAudioTrack> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IBackgroundAudioTrackStatics)->CreateFromFileAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Editing_IEmbeddedAudioTrack<D>::GetAudioEncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IEmbeddedAudioTrack)->GetAudioEncodingProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IMediaClip<D>::TrimTimeFromStart() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_TrimTimeFromStart(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IMediaClip<D>::TrimTimeFromStart(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->put_TrimTimeFromStart(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IMediaClip<D>::TrimTimeFromEnd() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_TrimTimeFromEnd(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IMediaClip<D>::TrimTimeFromEnd(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->put_TrimTimeFromEnd(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IMediaClip<D>::OriginalDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_OriginalDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IMediaClip<D>::TrimmedDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_TrimmedDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Media_Editing_IMediaClip<D>::UserData() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_UserData(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Editing::MediaClip consume_Windows_Media_Editing_IMediaClip<D>::Clone() const
{
    Windows::Media::Editing::MediaClip result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->Clone(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IMediaClip<D>::StartTimeInComposition() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_StartTimeInComposition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IMediaClip<D>::EndTimeInComposition() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_EndTimeInComposition(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Editing::EmbeddedAudioTrack> consume_Windows_Media_Editing_IMediaClip<D>::EmbeddedAudioTracks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Editing::EmbeddedAudioTrack> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_EmbeddedAudioTracks(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Editing_IMediaClip<D>::SelectedEmbeddedAudioTrackIndex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_SelectedEmbeddedAudioTrackIndex(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IMediaClip<D>::SelectedEmbeddedAudioTrackIndex(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->put_SelectedEmbeddedAudioTrackIndex(value));
}

template <typename D> void consume_Windows_Media_Editing_IMediaClip<D>::Volume(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->put_Volume(value));
}

template <typename D> double consume_Windows_Media_Editing_IMediaClip<D>::Volume() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_Volume(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_Editing_IMediaClip<D>::GetVideoEncodingProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->GetVideoEncodingProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> consume_Windows_Media_Editing_IMediaClip<D>::AudioEffectDefinitions() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_AudioEffectDefinitions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Effects::IVideoEffectDefinition> consume_Windows_Media_Editing_IMediaClip<D>::VideoEffectDefinitions() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Effects::IVideoEffectDefinition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClip)->get_VideoEffectDefinitions(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Editing::MediaClip consume_Windows_Media_Editing_IMediaClipStatics<D>::CreateFromColor(Windows::UI::Color const& color, Windows::Foundation::TimeSpan const& originalDuration) const
{
    Windows::Media::Editing::MediaClip value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClipStatics)->CreateFromColor(get_abi(color), get_abi(originalDuration), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> consume_Windows_Media_Editing_IMediaClipStatics<D>::CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClipStatics)->CreateFromFileAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> consume_Windows_Media_Editing_IMediaClipStatics<D>::CreateFromImageFileAsync(Windows::Storage::IStorageFile const& file, Windows::Foundation::TimeSpan const& originalDuration) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClipStatics)->CreateFromImageFileAsync(get_abi(file), get_abi(originalDuration), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Editing::MediaClip consume_Windows_Media_Editing_IMediaClipStatics2<D>::CreateFromSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& originalDuration) const
{
    Windows::Media::Editing::MediaClip value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaClipStatics2)->CreateFromSurface(get_abi(surface), get_abi(originalDuration), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IMediaComposition<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaClip> consume_Windows_Media_Editing_IMediaComposition<D>::Clips() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaClip> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->get_Clips(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Editing::BackgroundAudioTrack> consume_Windows_Media_Editing_IMediaComposition<D>::BackgroundAudioTracks() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Editing::BackgroundAudioTrack> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->get_BackgroundAudioTracks(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Media_Editing_IMediaComposition<D>::UserData() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->get_UserData(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Editing::MediaComposition consume_Windows_Media_Editing_IMediaComposition<D>::Clone() const
{
    Windows::Media::Editing::MediaComposition result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->Clone(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Editing_IMediaComposition<D>::SaveAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->SaveAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> consume_Windows_Media_Editing_IMediaComposition<D>::GetThumbnailAsync(Windows::Foundation::TimeSpan const& timeFromStart, int32_t scaledWidth, int32_t scaledHeight, Windows::Media::Editing::VideoFramePrecision const& framePrecision) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->GetThumbnailAsync(get_abi(timeFromStart), scaledWidth, scaledHeight, get_abi(framePrecision), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::ImageStream>> consume_Windows_Media_Editing_IMediaComposition<D>::GetThumbnailsAsync(param::async_iterable<Windows::Foundation::TimeSpan> const& timesFromStart, int32_t scaledWidth, int32_t scaledHeight, Windows::Media::Editing::VideoFramePrecision const& framePrecision) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::ImageStream>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->GetThumbnailsAsync(get_abi(timesFromStart), scaledWidth, scaledHeight, get_abi(framePrecision), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double> consume_Windows_Media_Editing_IMediaComposition<D>::RenderToFileAsync(Windows::Storage::IStorageFile const& destination) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->RenderToFileAsync(get_abi(destination), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double> consume_Windows_Media_Editing_IMediaComposition<D>::RenderToFileAsync(Windows::Storage::IStorageFile const& destination, Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->RenderToFileWithTrimmingPreferenceAsync(get_abi(destination), get_abi(trimmingPreference), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double> consume_Windows_Media_Editing_IMediaComposition<D>::RenderToFileAsync(Windows::Storage::IStorageFile const& destination, Windows::Media::Editing::MediaTrimmingPreference const& trimmingPreference, Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Transcoding::TranscodeFailureReason, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->RenderToFileWithProfileAsync(get_abi(destination), get_abi(trimmingPreference), get_abi(encodingProfile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_Editing_IMediaComposition<D>::CreateDefaultEncodingProfile() const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->CreateDefaultEncodingProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSource consume_Windows_Media_Editing_IMediaComposition<D>::GenerateMediaStreamSource() const
{
    Windows::Media::Core::MediaStreamSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->GenerateMediaStreamSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSource consume_Windows_Media_Editing_IMediaComposition<D>::GenerateMediaStreamSource(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile) const
{
    Windows::Media::Core::MediaStreamSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->GenerateMediaStreamSourceWithProfile(get_abi(encodingProfile), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSource consume_Windows_Media_Editing_IMediaComposition<D>::GeneratePreviewMediaStreamSource(int32_t scaledWidth, int32_t scaledHeight) const
{
    Windows::Media::Core::MediaStreamSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition)->GeneratePreviewMediaStreamSource(scaledWidth, scaledHeight, put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlayLayer> consume_Windows_Media_Editing_IMediaComposition2<D>::OverlayLayers() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlayLayer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaComposition2)->get_OverlayLayers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaComposition> consume_Windows_Media_Editing_IMediaCompositionStatics<D>::LoadAsync(Windows::Storage::StorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaComposition> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaCompositionStatics)->LoadAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Media_Editing_IMediaOverlay<D>::Position() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IMediaOverlay<D>::Position(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->put_Position(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Editing_IMediaOverlay<D>::Delay(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->put_Delay(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Editing_IMediaOverlay<D>::Delay() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->get_Delay(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Editing_IMediaOverlay<D>::Opacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IMediaOverlay<D>::Opacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->put_Opacity(value));
}

template <typename D> Windows::Media::Editing::MediaOverlay consume_Windows_Media_Editing_IMediaOverlay<D>::Clone() const
{
    Windows::Media::Editing::MediaOverlay result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->Clone(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Editing::MediaClip consume_Windows_Media_Editing_IMediaOverlay<D>::Clip() const
{
    Windows::Media::Editing::MediaClip value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->get_Clip(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Editing_IMediaOverlay<D>::AudioEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->get_AudioEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Editing_IMediaOverlay<D>::AudioEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlay)->put_AudioEnabled(value));
}

template <typename D> Windows::Media::Editing::MediaOverlay consume_Windows_Media_Editing_IMediaOverlayFactory<D>::Create(Windows::Media::Editing::MediaClip const& clip) const
{
    Windows::Media::Editing::MediaOverlay mediaOverlay{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlayFactory)->Create(get_abi(clip), put_abi(mediaOverlay)));
    return mediaOverlay;
}

template <typename D> Windows::Media::Editing::MediaOverlay consume_Windows_Media_Editing_IMediaOverlayFactory<D>::CreateWithPositionAndOpacity(Windows::Media::Editing::MediaClip const& clip, Windows::Foundation::Rect const& position, double opacity) const
{
    Windows::Media::Editing::MediaOverlay mediaOverlay{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlayFactory)->CreateWithPositionAndOpacity(get_abi(clip), get_abi(position), opacity, put_abi(mediaOverlay)));
    return mediaOverlay;
}

template <typename D> Windows::Media::Editing::MediaOverlayLayer consume_Windows_Media_Editing_IMediaOverlayLayer<D>::Clone() const
{
    Windows::Media::Editing::MediaOverlayLayer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlayLayer)->Clone(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlay> consume_Windows_Media_Editing_IMediaOverlayLayer<D>::Overlays() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Editing::MediaOverlay> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlayLayer)->get_Overlays(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::IVideoCompositorDefinition consume_Windows_Media_Editing_IMediaOverlayLayer<D>::CustomCompositorDefinition() const
{
    Windows::Media::Effects::IVideoCompositorDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlayLayer)->get_CustomCompositorDefinition(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Editing::MediaOverlayLayer consume_Windows_Media_Editing_IMediaOverlayLayerFactory<D>::CreateWithCompositorDefinition(Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition) const
{
    Windows::Media::Editing::MediaOverlayLayer mediaOverlayLayer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Editing::IMediaOverlayLayerFactory)->CreateWithCompositorDefinition(get_abi(compositorDefinition), put_abi(mediaOverlayLayer)));
    return mediaOverlayLayer;
}

template <typename D>
struct produce<D, Windows::Media::Editing::IBackgroundAudioTrack> : produce_base<D, Windows::Media::Editing::IBackgroundAudioTrack>
{
    HRESULT __stdcall get_TrimTimeFromStart(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimTimeFromStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimTimeFromStart(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimTimeFromStart(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimTimeFromEnd(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimTimeFromEnd());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimTimeFromEnd(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimTimeFromEnd(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginalDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmedDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmedDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Delay(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Delay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delay(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Delay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Volume(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Volume(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall Clone(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAudioEncodingProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAudioEncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioEffectDefinitions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioEffectDefinitions());
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
struct produce<D, Windows::Media::Editing::IBackgroundAudioTrackStatics> : produce_base<D, Windows::Media::Editing::IBackgroundAudioTrackStatics>
{
    HRESULT __stdcall CreateFromEmbeddedAudioTrack(::IUnknown* embeddedAudioTrack, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFromEmbeddedAudioTrack(*reinterpret_cast<Windows::Media::Editing::EmbeddedAudioTrack const*>(&embeddedAudioTrack)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromFileAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFromFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Editing::IEmbeddedAudioTrack> : produce_base<D, Windows::Media::Editing::IEmbeddedAudioTrack>
{
    HRESULT __stdcall GetAudioEncodingProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAudioEncodingProperties());
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
struct produce<D, Windows::Media::Editing::IMediaClip> : produce_base<D, Windows::Media::Editing::IMediaClip>
{
    HRESULT __stdcall get_TrimTimeFromStart(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimTimeFromStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimTimeFromStart(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimTimeFromStart(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimTimeFromEnd(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimTimeFromEnd());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimTimeFromEnd(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimTimeFromEnd(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginalDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimmedDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimmedDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clone(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTimeInComposition(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartTimeInComposition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndTimeInComposition(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndTimeInComposition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmbeddedAudioTracks(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmbeddedAudioTracks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedEmbeddedAudioTrackIndex(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedEmbeddedAudioTrackIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedEmbeddedAudioTrackIndex(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedEmbeddedAudioTrackIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Volume(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Volume(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall GetVideoEncodingProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetVideoEncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioEffectDefinitions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioEffectDefinitions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEffectDefinitions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoEffectDefinitions());
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
struct produce<D, Windows::Media::Editing::IMediaClipStatics> : produce_base<D, Windows::Media::Editing::IMediaClipStatics>
{
    HRESULT __stdcall CreateFromColor(abi_t<Windows::UI::Color> color, abi_t<Windows::Foundation::TimeSpan> originalDuration, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFromColor(*reinterpret_cast<Windows::UI::Color const*>(&color), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&originalDuration)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromFileAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFromFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromImageFileAsync(::IUnknown* file, abi_t<Windows::Foundation::TimeSpan> originalDuration, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFromImageFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&originalDuration)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Editing::IMediaClipStatics2> : produce_base<D, Windows::Media::Editing::IMediaClipStatics2>
{
    HRESULT __stdcall CreateFromSurface(::IUnknown* surface, abi_t<Windows::Foundation::TimeSpan> originalDuration, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFromSurface(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&originalDuration)));
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
struct produce<D, Windows::Media::Editing::IMediaComposition> : produce_base<D, Windows::Media::Editing::IMediaComposition>
{
    HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Clips(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Clips());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundAudioTracks(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundAudioTracks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clone(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetThumbnailAsync(abi_t<Windows::Foundation::TimeSpan> timeFromStart, int32_t scaledWidth, int32_t scaledHeight, abi_t<Windows::Media::Editing::VideoFramePrecision> framePrecision, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetThumbnailAsync(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timeFromStart), scaledWidth, scaledHeight, *reinterpret_cast<Windows::Media::Editing::VideoFramePrecision const*>(&framePrecision)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetThumbnailsAsync(::IUnknown* timesFromStart, int32_t scaledWidth, int32_t scaledHeight, abi_t<Windows::Media::Editing::VideoFramePrecision> framePrecision, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetThumbnailsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::TimeSpan> const*>(&timesFromStart), scaledWidth, scaledHeight, *reinterpret_cast<Windows::Media::Editing::VideoFramePrecision const*>(&framePrecision)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RenderToFileAsync(::IUnknown* destination, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RenderToFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RenderToFileWithTrimmingPreferenceAsync(::IUnknown* destination, abi_t<Windows::Media::Editing::MediaTrimmingPreference> trimmingPreference, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RenderToFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&destination), *reinterpret_cast<Windows::Media::Editing::MediaTrimmingPreference const*>(&trimmingPreference)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RenderToFileWithProfileAsync(::IUnknown* destination, abi_t<Windows::Media::Editing::MediaTrimmingPreference> trimmingPreference, ::IUnknown* encodingProfile, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RenderToFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&destination), *reinterpret_cast<Windows::Media::Editing::MediaTrimmingPreference const*>(&trimmingPreference), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDefaultEncodingProfile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateDefaultEncodingProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GenerateMediaStreamSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GenerateMediaStreamSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GenerateMediaStreamSourceWithProfile(::IUnknown* encodingProfile, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GenerateMediaStreamSource(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GeneratePreviewMediaStreamSource(int32_t scaledWidth, int32_t scaledHeight, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GeneratePreviewMediaStreamSource(scaledWidth, scaledHeight));
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
struct produce<D, Windows::Media::Editing::IMediaComposition2> : produce_base<D, Windows::Media::Editing::IMediaComposition2>
{
    HRESULT __stdcall get_OverlayLayers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OverlayLayers());
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
struct produce<D, Windows::Media::Editing::IMediaCompositionStatics> : produce_base<D, Windows::Media::Editing::IMediaCompositionStatics>
{
    HRESULT __stdcall LoadAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LoadAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Editing::IMediaOverlay> : produce_base<D, Windows::Media::Editing::IMediaOverlay>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Position(abi_t<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Delay(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Delay(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delay(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Delay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Opacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Opacity(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clone(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Clip(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Clip());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Editing::IMediaOverlayFactory> : produce_base<D, Windows::Media::Editing::IMediaOverlayFactory>
{
    HRESULT __stdcall Create(::IUnknown* clip, ::IUnknown** mediaOverlay) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *mediaOverlay = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Media::Editing::MediaClip const*>(&clip)));
            return S_OK;
        }
        catch (...)
        {
            *mediaOverlay = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithPositionAndOpacity(::IUnknown* clip, abi_t<Windows::Foundation::Rect> position, double opacity, ::IUnknown** mediaOverlay) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *mediaOverlay = detach_abi(this->shim().CreateWithPositionAndOpacity(*reinterpret_cast<Windows::Media::Editing::MediaClip const*>(&clip), *reinterpret_cast<Windows::Foundation::Rect const*>(&position), opacity));
            return S_OK;
        }
        catch (...)
        {
            *mediaOverlay = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Editing::IMediaOverlayLayer> : produce_base<D, Windows::Media::Editing::IMediaOverlayLayer>
{
    HRESULT __stdcall Clone(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Overlays(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Overlays());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomCompositorDefinition(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomCompositorDefinition());
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
struct produce<D, Windows::Media::Editing::IMediaOverlayLayerFactory> : produce_base<D, Windows::Media::Editing::IMediaOverlayLayerFactory>
{
    HRESULT __stdcall CreateWithCompositorDefinition(::IUnknown* compositorDefinition, ::IUnknown** mediaOverlayLayer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *mediaOverlayLayer = detach_abi(this->shim().CreateWithCompositorDefinition(*reinterpret_cast<Windows::Media::Effects::IVideoCompositorDefinition const*>(&compositorDefinition)));
            return S_OK;
        }
        catch (...)
        {
            *mediaOverlayLayer = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Editing {

inline Windows::Media::Editing::BackgroundAudioTrack BackgroundAudioTrack::CreateFromEmbeddedAudioTrack(Windows::Media::Editing::EmbeddedAudioTrack const& embeddedAudioTrack)
{
    return get_activation_factory<BackgroundAudioTrack, Windows::Media::Editing::IBackgroundAudioTrackStatics>().CreateFromEmbeddedAudioTrack(embeddedAudioTrack);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Editing::BackgroundAudioTrack> BackgroundAudioTrack::CreateFromFileAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<BackgroundAudioTrack, Windows::Media::Editing::IBackgroundAudioTrackStatics>().CreateFromFileAsync(file);
}

inline Windows::Media::Editing::MediaClip MediaClip::CreateFromColor(Windows::UI::Color const& color, Windows::Foundation::TimeSpan const& originalDuration)
{
    return get_activation_factory<MediaClip, Windows::Media::Editing::IMediaClipStatics>().CreateFromColor(color, originalDuration);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> MediaClip::CreateFromFileAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<MediaClip, Windows::Media::Editing::IMediaClipStatics>().CreateFromFileAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaClip> MediaClip::CreateFromImageFileAsync(Windows::Storage::IStorageFile const& file, Windows::Foundation::TimeSpan const& originalDuration)
{
    return get_activation_factory<MediaClip, Windows::Media::Editing::IMediaClipStatics>().CreateFromImageFileAsync(file, originalDuration);
}

inline Windows::Media::Editing::MediaClip MediaClip::CreateFromSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& originalDuration)
{
    return get_activation_factory<MediaClip, Windows::Media::Editing::IMediaClipStatics2>().CreateFromSurface(surface, originalDuration);
}

inline MediaComposition::MediaComposition() :
    MediaComposition(activate_instance<MediaComposition>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Editing::MediaComposition> MediaComposition::LoadAsync(Windows::Storage::StorageFile const& file)
{
    return get_activation_factory<MediaComposition, Windows::Media::Editing::IMediaCompositionStatics>().LoadAsync(file);
}

inline MediaOverlay::MediaOverlay(Windows::Media::Editing::MediaClip const& clip) :
    MediaOverlay(get_activation_factory<MediaOverlay, Windows::Media::Editing::IMediaOverlayFactory>().Create(clip))
{}

inline MediaOverlay::MediaOverlay(Windows::Media::Editing::MediaClip const& clip, Windows::Foundation::Rect const& position, double opacity) :
    MediaOverlay(get_activation_factory<MediaOverlay, Windows::Media::Editing::IMediaOverlayFactory>().CreateWithPositionAndOpacity(clip, position, opacity))
{}

inline MediaOverlayLayer::MediaOverlayLayer() :
    MediaOverlayLayer(activate_instance<MediaOverlayLayer>())
{}

inline MediaOverlayLayer::MediaOverlayLayer(Windows::Media::Effects::IVideoCompositorDefinition const& compositorDefinition) :
    MediaOverlayLayer(get_activation_factory<MediaOverlayLayer, Windows::Media::Editing::IMediaOverlayLayerFactory>().CreateWithCompositorDefinition(compositorDefinition))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Editing::IBackgroundAudioTrack> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IBackgroundAudioTrack> {};

template<> struct hash<winrt::Windows::Media::Editing::IBackgroundAudioTrackStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IBackgroundAudioTrackStatics> {};

template<> struct hash<winrt::Windows::Media::Editing::IEmbeddedAudioTrack> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IEmbeddedAudioTrack> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaClip> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaClip> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaClipStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaClipStatics> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaClipStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaClipStatics2> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaComposition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaComposition> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaComposition2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaComposition2> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaCompositionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaCompositionStatics> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaOverlay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaOverlay> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaOverlayFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaOverlayFactory> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaOverlayLayer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaOverlayLayer> {};

template<> struct hash<winrt::Windows::Media::Editing::IMediaOverlayLayerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::IMediaOverlayLayerFactory> {};

template<> struct hash<winrt::Windows::Media::Editing::BackgroundAudioTrack> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::BackgroundAudioTrack> {};

template<> struct hash<winrt::Windows::Media::Editing::EmbeddedAudioTrack> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::EmbeddedAudioTrack> {};

template<> struct hash<winrt::Windows::Media::Editing::MediaClip> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::MediaClip> {};

template<> struct hash<winrt::Windows::Media::Editing::MediaComposition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::MediaComposition> {};

template<> struct hash<winrt::Windows::Media::Editing::MediaOverlay> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::MediaOverlay> {};

template<> struct hash<winrt::Windows::Media::Editing::MediaOverlayLayer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Editing::MediaOverlayLayer> {};

}

WINRT_WARNING_POP
