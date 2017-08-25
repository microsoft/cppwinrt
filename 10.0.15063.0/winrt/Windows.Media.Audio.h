// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Media.Render.2.h"
#include "winrt/impl/Windows.Media.Transcoding.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.Audio.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Audio_IAudioDeviceInputNode<D>::Device() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioDeviceInputNode)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Audio_IAudioDeviceOutputNode<D>::Device() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioDeviceOutputNode)->get_Device(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::PlaybackSpeedFactor(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->put_PlaybackSpeedFactor(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioFileInputNode<D>::PlaybackSpeedFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_PlaybackSpeedFactor(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Audio_IAudioFileInputNode<D>::Position() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::Seek(Windows::Foundation::TimeSpan const& position) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->Seek(get_abi(position)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Audio_IAudioFileInputNode<D>::StartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::StartTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->put_StartTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Audio_IAudioFileInputNode<D>::EndTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_EndTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::EndTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->put_EndTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Media_Audio_IAudioFileInputNode<D>::LoopCount() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_LoopCount(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::LoopCount(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->put_LoopCount(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Audio_IAudioFileInputNode<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Media_Audio_IAudioFileInputNode<D>::SourceFile() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_SourceFile(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioFileInputNode<D>::FileCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->add_FileCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioFileInputNode> consume_Windows_Media_Audio_IAudioFileInputNode<D>::FileCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioFileInputNode>(this, &abi_t<Windows::Media::Audio::IAudioFileInputNode>::remove_FileCompleted, FileCompleted(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::FileCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->remove_FileCompleted(get_abi(token)));
}

template <typename D> Windows::Storage::IStorageFile consume_Windows_Media_Audio_IAudioFileOutputNode<D>::File() const
{
    Windows::Storage::IStorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileOutputNode)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_Audio_IAudioFileOutputNode<D>::FileEncodingProfile() const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileOutputNode)->get_FileEncodingProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::TranscodeFailureReason> consume_Windows_Media_Audio_IAudioFileOutputNode<D>::FinalizeAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::TranscodeFailureReason> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileOutputNode)->FinalizeAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::AudioFrame consume_Windows_Media_Audio_IAudioFrameCompletedEventArgs<D>::Frame() const
{
    Windows::Media::AudioFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameCompletedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::PlaybackSpeedFactor(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->put_PlaybackSpeedFactor(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioFrameInputNode<D>::PlaybackSpeedFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->get_PlaybackSpeedFactor(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::AddFrame(Windows::Media::AudioFrame const& frame) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->AddFrame(get_abi(frame)));
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::DiscardQueuedFrames() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->DiscardQueuedFrames());
}

template <typename D> uint64_t consume_Windows_Media_Audio_IAudioFrameInputNode<D>::QueuedSampleCount() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->get_QueuedSampleCount(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioFrameInputNode<D>::AudioFrameCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->add_AudioFrameCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioFrameInputNode> consume_Windows_Media_Audio_IAudioFrameInputNode<D>::AudioFrameCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioFrameInputNode>(this, &abi_t<Windows::Media::Audio::IAudioFrameInputNode>::remove_AudioFrameCompleted, AudioFrameCompleted(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::AudioFrameCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->remove_AudioFrameCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioFrameInputNode<D>::QuantumStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->add_QuantumStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioFrameInputNode> consume_Windows_Media_Audio_IAudioFrameInputNode<D>::QuantumStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioFrameInputNode>(this, &abi_t<Windows::Media::Audio::IAudioFrameInputNode>::remove_QuantumStarted, QuantumStarted(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::QuantumStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->remove_QuantumStarted(get_abi(token)));
}

template <typename D> Windows::Media::AudioFrame consume_Windows_Media_Audio_IAudioFrameOutputNode<D>::GetFrame() const
{
    Windows::Media::AudioFrame audioFrame{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameOutputNode)->GetFrame(put_abi(audioFrame)));
    return audioFrame;
}

template <typename D> Windows::Media::Audio::AudioFrameInputNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateFrameInputNode() const
{
    Windows::Media::Audio::AudioFrameInputNode frameInputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFrameInputNode(put_abi(frameInputNode)));
    return frameInputNode;
}

template <typename D> Windows::Media::Audio::AudioFrameInputNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateFrameInputNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    Windows::Media::Audio::AudioFrameInputNode frameInputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFrameInputNodeWithFormat(get_abi(encodingProperties), put_abi(frameInputNode)));
    return frameInputNode;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateDeviceInputNodeAsync(get_abi(category), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category, Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateDeviceInputNodeWithFormatAsync(get_abi(category), get_abi(encodingProperties), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category, Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Devices::Enumeration::DeviceInformation const& device) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateDeviceInputNodeWithFormatOnDeviceAsync(get_abi(category), get_abi(encodingProperties), get_abi(device), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioFrameOutputNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateFrameOutputNode() const
{
    Windows::Media::Audio::AudioFrameOutputNode frameOutputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFrameOutputNode(put_abi(frameOutputNode)));
    return frameOutputNode;
}

template <typename D> Windows::Media::Audio::AudioFrameOutputNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateFrameOutputNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    Windows::Media::Audio::AudioFrameOutputNode frameOutputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFrameOutputNodeWithFormat(get_abi(encodingProperties), put_abi(frameOutputNode)));
    return frameOutputNode;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateDeviceOutputNodeAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateDeviceOutputNodeAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateFileInputNodeAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFileInputNodeAsync(get_abi(file), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateFileOutputNodeAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFileOutputNodeAsync(get_abi(file), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateFileOutputNodeAsync(Windows::Storage::IStorageFile const& file, Windows::Media::MediaProperties::MediaEncodingProfile const& fileEncodingProfile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFileOutputNodeWithFileProfileAsync(get_abi(file), get_abi(fileEncodingProfile), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioSubmixNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateSubmixNode() const
{
    Windows::Media::Audio::AudioSubmixNode submixNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateSubmixNode(put_abi(submixNode)));
    return submixNode;
}

template <typename D> Windows::Media::Audio::AudioSubmixNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateSubmixNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    Windows::Media::Audio::AudioSubmixNode submixNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateSubmixNodeWithFormat(get_abi(encodingProperties), put_abi(submixNode)));
    return submixNode;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->Start());
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->Stop());
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::ResetAllNodes() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->ResetAllNodes());
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioGraph<D>::QuantumStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->add_QuantumStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioGraph> consume_Windows_Media_Audio_IAudioGraph<D>::QuantumStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioGraph>(this, &abi_t<Windows::Media::Audio::IAudioGraph>::remove_QuantumStarted, QuantumStarted(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::QuantumStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->remove_QuantumStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioGraph<D>::QuantumProcessed(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->add_QuantumProcessed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioGraph> consume_Windows_Media_Audio_IAudioGraph<D>::QuantumProcessed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioGraph>(this, &abi_t<Windows::Media::Audio::IAudioGraph>::remove_QuantumProcessed, QuantumProcessed(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::QuantumProcessed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->remove_QuantumProcessed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioGraph<D>::UnrecoverableErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->add_UnrecoverableErrorOccurred(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioGraph> consume_Windows_Media_Audio_IAudioGraph<D>::UnrecoverableErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioGraph>(this, &abi_t<Windows::Media::Audio::IAudioGraph>::remove_UnrecoverableErrorOccurred, UnrecoverableErrorOccurred(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::UnrecoverableErrorOccurred(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->remove_UnrecoverableErrorOccurred(get_abi(token)));
}

template <typename D> uint64_t consume_Windows_Media_Audio_IAudioGraph<D>::CompletedQuantumCount() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_CompletedQuantumCount(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Audio_IAudioGraph<D>::EncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_EncodingProperties(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Media_Audio_IAudioGraph<D>::LatencyInSamples() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_LatencyInSamples(&value));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Audio_IAudioGraph<D>::PrimaryRenderDevice() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_PrimaryRenderDevice(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::AudioProcessing consume_Windows_Media_Audio_IAudioGraph<D>::RenderDeviceAudioProcessing() const
{
    Windows::Media::AudioProcessing value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_RenderDeviceAudioProcessing(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Media_Audio_IAudioGraph<D>::SamplesPerQuantum() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_SamplesPerQuantum(&value));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFrameInputNode consume_Windows_Media_Audio_IAudioGraph2<D>::CreateFrameInputNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Media::Audio::AudioNodeEmitter const& emitter) const
{
    Windows::Media::Audio::AudioFrameInputNode frameInputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateFrameInputNodeWithFormatAndEmitter(get_abi(encodingProperties), get_abi(emitter), put_abi(frameInputNode)));
    return frameInputNode;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> consume_Windows_Media_Audio_IAudioGraph2<D>::CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category, Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Devices::Enumeration::DeviceInformation const& device, Windows::Media::Audio::AudioNodeEmitter const& emitter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(get_abi(category), get_abi(encodingProperties), get_abi(device), get_abi(emitter), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> consume_Windows_Media_Audio_IAudioGraph2<D>::CreateFileInputNodeAsync(Windows::Storage::IStorageFile const& file, Windows::Media::Audio::AudioNodeEmitter const& emitter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateFileInputNodeWithEmitterAsync(get_abi(file), get_abi(emitter), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioSubmixNode consume_Windows_Media_Audio_IAudioGraph2<D>::CreateSubmixNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Media::Audio::AudioNodeEmitter const& emitter) const
{
    Windows::Media::Audio::AudioSubmixNode submixNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateSubmixNodeWithFormatAndEmitter(get_abi(encodingProperties), get_abi(emitter), put_abi(submixNode)));
    return submixNode;
}

template <typename D> Windows::Media::Audio::AudioGraphBatchUpdater consume_Windows_Media_Audio_IAudioGraph2<D>::CreateBatchUpdater() const
{
    Windows::Media::Audio::AudioGraphBatchUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateBatchUpdater(put_abi(updater)));
    return updater;
}

template <typename D> Windows::Media::Audio::IAudioNode consume_Windows_Media_Audio_IAudioGraphConnection<D>::Destination() const
{
    Windows::Media::Audio::IAudioNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphConnection)->get_Destination(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphConnection<D>::Gain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphConnection)->put_Gain(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioGraphConnection<D>::Gain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphConnection)->get_Gain(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Audio_IAudioGraphSettings<D>::EncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_EncodingProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::EncodingProperties(Windows::Media::MediaProperties::AudioEncodingProperties const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_EncodingProperties(get_abi(value)));
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Audio_IAudioGraphSettings<D>::PrimaryRenderDevice() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_PrimaryRenderDevice(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::PrimaryRenderDevice(Windows::Devices::Enumeration::DeviceInformation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_PrimaryRenderDevice(get_abi(value)));
}

template <typename D> Windows::Media::Audio::QuantumSizeSelectionMode consume_Windows_Media_Audio_IAudioGraphSettings<D>::QuantumSizeSelectionMode() const
{
    Windows::Media::Audio::QuantumSizeSelectionMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_QuantumSizeSelectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::QuantumSizeSelectionMode(Windows::Media::Audio::QuantumSizeSelectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_QuantumSizeSelectionMode(get_abi(value)));
}

template <typename D> int32_t consume_Windows_Media_Audio_IAudioGraphSettings<D>::DesiredSamplesPerQuantum() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_DesiredSamplesPerQuantum(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::DesiredSamplesPerQuantum(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_DesiredSamplesPerQuantum(value));
}

template <typename D> Windows::Media::Render::AudioRenderCategory consume_Windows_Media_Audio_IAudioGraphSettings<D>::AudioRenderCategory() const
{
    Windows::Media::Render::AudioRenderCategory value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_AudioRenderCategory(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::AudioRenderCategory(Windows::Media::Render::AudioRenderCategory const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_AudioRenderCategory(get_abi(value)));
}

template <typename D> Windows::Media::AudioProcessing consume_Windows_Media_Audio_IAudioGraphSettings<D>::DesiredRenderDeviceAudioProcessing() const
{
    Windows::Media::AudioProcessing value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_DesiredRenderDeviceAudioProcessing(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::DesiredRenderDeviceAudioProcessing(Windows::Media::AudioProcessing const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_DesiredRenderDeviceAudioProcessing(get_abi(value)));
}

template <typename D> Windows::Media::Audio::AudioGraphSettings consume_Windows_Media_Audio_IAudioGraphSettingsFactory<D>::Create(Windows::Media::Render::AudioRenderCategory const& audioRenderCategory) const
{
    Windows::Media::Audio::AudioGraphSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettingsFactory)->Create(get_abi(audioRenderCategory), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> consume_Windows_Media_Audio_IAudioGraphStatics<D>::CreateAsync(Windows::Media::Audio::AudioGraphSettings const& settings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphStatics)->CreateAsync(get_abi(settings), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioGraphUnrecoverableError consume_Windows_Media_Audio_IAudioGraphUnrecoverableErrorOccurredEventArgs<D>::Error() const
{
    Windows::Media::Audio::AudioGraphUnrecoverableError value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::AudioGraphConnection> consume_Windows_Media_Audio_IAudioInputNode<D>::OutgoingConnections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::AudioGraphConnection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode)->get_OutgoingConnections(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioInputNode<D>::AddOutgoingConnection(Windows::Media::Audio::IAudioNode const& destination) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode)->AddOutgoingConnection(get_abi(destination)));
}

template <typename D> void consume_Windows_Media_Audio_IAudioInputNode<D>::AddOutgoingConnection(Windows::Media::Audio::IAudioNode const& destination, double gain) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode)->AddOutgoingConnectionWithGain(get_abi(destination), gain));
}

template <typename D> void consume_Windows_Media_Audio_IAudioInputNode<D>::RemoveOutgoingConnection(Windows::Media::Audio::IAudioNode const& destination) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode)->RemoveOutgoingConnection(get_abi(destination)));
}

template <typename D> Windows::Media::Audio::AudioNodeEmitter consume_Windows_Media_Audio_IAudioInputNode2<D>::Emitter() const
{
    Windows::Media::Audio::AudioNodeEmitter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode2)->get_Emitter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> consume_Windows_Media_Audio_IAudioNode<D>::EffectDefinitions() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->get_EffectDefinitions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::OutgoingGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->put_OutgoingGain(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNode<D>::OutgoingGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->get_OutgoingGain(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Audio_IAudioNode<D>::EncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->get_EncodingProperties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Audio_IAudioNode<D>::ConsumeInput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->get_ConsumeInput(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::ConsumeInput(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->put_ConsumeInput(value));
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->Start());
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->Stop());
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::Reset() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->Reset());
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::DisableEffectsByDefinition(Windows::Media::Effects::IAudioEffectDefinition const& definition) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->DisableEffectsByDefinition(get_abi(definition)));
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::EnableEffectsByDefinition(Windows::Media::Effects::IAudioEffectDefinition const& definition) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->EnableEffectsByDefinition(get_abi(definition)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Position(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_Position(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Direction() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Direction(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_Direction(get_abi(value)));
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterShape consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Shape() const
{
    Windows::Media::Audio::AudioNodeEmitterShape value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_Shape(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterDecayModel consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DecayModel() const
{
    Windows::Media::Audio::AudioNodeEmitterDecayModel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_DecayModel(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Gain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_Gain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Gain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_Gain(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DistanceScale() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_DistanceScale(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DistanceScale(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_DistanceScale(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DopplerScale() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_DopplerScale(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DopplerScale(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_DopplerScale(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DopplerVelocity() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_DopplerVelocity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DopplerVelocity(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_DopplerVelocity(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Audio_IAudioNodeEmitter<D>::IsDopplerDisabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_IsDopplerDisabled(&value));
    return value;
}

template <typename D> Windows::Media::Audio::SpatialAudioModel consume_Windows_Media_Audio_IAudioNodeEmitter2<D>::SpatialAudioModel() const
{
    Windows::Media::Audio::SpatialAudioModel value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter2)->get_SpatialAudioModel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter2<D>::SpatialAudioModel(Windows::Media::Audio::SpatialAudioModel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter2)->put_SpatialAudioModel(get_abi(value)));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties<D>::InnerAngle() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterConeProperties)->get_InnerAngle(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties<D>::OuterAngle() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterConeProperties)->get_OuterAngle(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties<D>::OuterAngleGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterConeProperties)->get_OuterAngleGain(&value));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterDecayKind consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>::Kind() const
{
    Windows::Media::Audio::AudioNodeEmitterDecayKind value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModel)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>::MinGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModel)->get_MinGain(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>::MaxGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModel)->get_MaxGain(&value));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>::NaturalProperties() const
{
    Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModel)->get_NaturalProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterDecayModel consume_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics<D>::CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance) const
{
    Windows::Media::Audio::AudioNodeEmitterDecayModel decayModel{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics)->CreateNatural(minGain, maxGain, unityGainDistance, cutoffDistance, put_abi(decayModel)));
    return decayModel;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterDecayModel consume_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics<D>::CreateCustom(double minGain, double maxGain) const
{
    Windows::Media::Audio::AudioNodeEmitterDecayModel decayModel{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics)->CreateCustom(minGain, maxGain, put_abi(decayModel)));
    return decayModel;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitter consume_Windows_Media_Audio_IAudioNodeEmitterFactory<D>::CreateAudioNodeEmitter(Windows::Media::Audio::AudioNodeEmitterShape const& shape, Windows::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, Windows::Media::Audio::AudioNodeEmitterSettings const& settings) const
{
    Windows::Media::Audio::AudioNodeEmitter emitter{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterFactory)->CreateAudioNodeEmitter(get_abi(shape), get_abi(decayModel), get_abi(settings), put_abi(emitter)));
    return emitter;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties<D>::UnityGainDistance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties)->get_UnityGainDistance(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties<D>::CutoffDistance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties)->get_CutoffDistance(&value));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterShapeKind consume_Windows_Media_Audio_IAudioNodeEmitterShape<D>::Kind() const
{
    Windows::Media::Audio::AudioNodeEmitterShapeKind value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterShape)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterConeProperties consume_Windows_Media_Audio_IAudioNodeEmitterShape<D>::ConeProperties() const
{
    Windows::Media::Audio::AudioNodeEmitterConeProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterShape)->get_ConeProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterShape consume_Windows_Media_Audio_IAudioNodeEmitterShapeStatics<D>::CreateCone(double innerAngle, double outerAngle, double outerAngleGain) const
{
    Windows::Media::Audio::AudioNodeEmitterShape shape{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterShapeStatics)->CreateCone(innerAngle, outerAngle, outerAngleGain, put_abi(shape)));
    return shape;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterShape consume_Windows_Media_Audio_IAudioNodeEmitterShapeStatics<D>::CreateOmnidirectional() const
{
    Windows::Media::Audio::AudioNodeEmitterShape shape{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterShapeStatics)->CreateOmnidirectional(put_abi(shape)));
    return shape;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeListener<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeListener<D>::Position(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->put_Position(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_Media_Audio_IAudioNodeListener<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeListener<D>::Orientation(Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->put_Orientation(get_abi(value)));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeListener<D>::SpeedOfSound() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->get_SpeedOfSound(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeListener<D>::SpeedOfSound(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->put_SpeedOfSound(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeListener<D>::DopplerVelocity() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->get_DopplerVelocity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeListener<D>::DopplerVelocity(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->put_DopplerVelocity(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeWithListener<D>::Listener(Windows::Media::Audio::AudioNodeListener const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeWithListener)->put_Listener(get_abi(value)));
}

template <typename D> Windows::Media::Audio::AudioNodeListener consume_Windows_Media_Audio_IAudioNodeWithListener<D>::Listener() const
{
    Windows::Media::Audio::AudioNodeListener value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeWithListener)->get_Listener(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioDeviceNodeCreationStatus consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult<D>::Status() const
{
    Windows::Media::Audio::AudioDeviceNodeCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioDeviceInputNodeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioDeviceInputNode consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult<D>::DeviceInputNode() const
{
    Windows::Media::Audio::AudioDeviceInputNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioDeviceInputNodeResult)->get_DeviceInputNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioDeviceNodeCreationStatus consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult<D>::Status() const
{
    Windows::Media::Audio::AudioDeviceNodeCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioDeviceOutputNode consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult<D>::DeviceOutputNode() const
{
    Windows::Media::Audio::AudioDeviceOutputNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult)->get_DeviceOutputNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFileNodeCreationStatus consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult<D>::Status() const
{
    Windows::Media::Audio::AudioFileNodeCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioFileInputNodeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFileInputNode consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult<D>::FileInputNode() const
{
    Windows::Media::Audio::AudioFileInputNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioFileInputNodeResult)->get_FileInputNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFileNodeCreationStatus consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult<D>::Status() const
{
    Windows::Media::Audio::AudioFileNodeCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioFileOutputNodeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFileOutputNode consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult<D>::FileOutputNode() const
{
    Windows::Media::Audio::AudioFileOutputNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioFileOutputNodeResult)->get_FileOutputNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioGraphCreationStatus consume_Windows_Media_Audio_ICreateAudioGraphResult<D>::Status() const
{
    Windows::Media::Audio::AudioGraphCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioGraphResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioGraph consume_Windows_Media_Audio_ICreateAudioGraphResult<D>::Graph() const
{
    Windows::Media::Audio::AudioGraph value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioGraphResult)->get_Graph(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEchoEffectDefinition<D>::WetDryMix(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->put_WetDryMix(value));
}

template <typename D> double consume_Windows_Media_Audio_IEchoEffectDefinition<D>::WetDryMix() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->get_WetDryMix(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEchoEffectDefinition<D>::Feedback(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->put_Feedback(value));
}

template <typename D> double consume_Windows_Media_Audio_IEchoEffectDefinition<D>::Feedback() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->get_Feedback(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEchoEffectDefinition<D>::Delay(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->put_Delay(value));
}

template <typename D> double consume_Windows_Media_Audio_IEchoEffectDefinition<D>::Delay() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->get_Delay(&value));
    return value;
}

template <typename D> Windows::Media::Audio::EchoEffectDefinition consume_Windows_Media_Audio_IEchoEffectDefinitionFactory<D>::Create(Windows::Media::Audio::AudioGraph const& audioGraph) const
{
    Windows::Media::Audio::EchoEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinitionFactory)->Create(get_abi(audioGraph), put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IEqualizerBand<D>::Bandwidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->get_Bandwidth(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEqualizerBand<D>::Bandwidth(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->put_Bandwidth(value));
}

template <typename D> double consume_Windows_Media_Audio_IEqualizerBand<D>::FrequencyCenter() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->get_FrequencyCenter(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEqualizerBand<D>::FrequencyCenter(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->put_FrequencyCenter(value));
}

template <typename D> double consume_Windows_Media_Audio_IEqualizerBand<D>::Gain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->get_Gain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEqualizerBand<D>::Gain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->put_Gain(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::EqualizerBand> consume_Windows_Media_Audio_IEqualizerEffectDefinition<D>::Bands() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::EqualizerBand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerEffectDefinition)->get_Bands(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::EqualizerEffectDefinition consume_Windows_Media_Audio_IEqualizerEffectDefinitionFactory<D>::Create(Windows::Media::Audio::AudioGraph const& audioGraph) const
{
    Windows::Media::Audio::EqualizerEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerEffectDefinitionFactory)->Create(get_abi(audioGraph), put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Media_Audio_IFrameInputNodeQuantumStartedEventArgs<D>::RequiredSamples() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs)->get_RequiredSamples(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_ILimiterEffectDefinition<D>::Release(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinition)->put_Release(value));
}

template <typename D> uint32_t consume_Windows_Media_Audio_ILimiterEffectDefinition<D>::Release() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinition)->get_Release(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_ILimiterEffectDefinition<D>::Loudness(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinition)->put_Loudness(value));
}

template <typename D> uint32_t consume_Windows_Media_Audio_ILimiterEffectDefinition<D>::Loudness() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinition)->get_Loudness(&value));
    return value;
}

template <typename D> Windows::Media::Audio::LimiterEffectDefinition consume_Windows_Media_Audio_ILimiterEffectDefinitionFactory<D>::Create(Windows::Media::Audio::AudioGraph const& audioGraph) const
{
    Windows::Media::Audio::LimiterEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinitionFactory)->Create(get_abi(audioGraph), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::WetDryMix(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_WetDryMix(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::WetDryMix() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_WetDryMix(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReflectionsDelay(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_ReflectionsDelay(value));
}

template <typename D> uint32_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReflectionsDelay() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_ReflectionsDelay(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReverbDelay(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_ReverbDelay(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReverbDelay() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_ReverbDelay(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RearDelay(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RearDelay(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RearDelay() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RearDelay(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionLeft(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_PositionLeft(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionLeft() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_PositionLeft(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionRight(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_PositionRight(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionRight() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_PositionRight(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionMatrixLeft(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_PositionMatrixLeft(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionMatrixLeft() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_PositionMatrixLeft(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionMatrixRight(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_PositionMatrixRight(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionMatrixRight() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_PositionMatrixRight(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::EarlyDiffusion(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_EarlyDiffusion(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::EarlyDiffusion() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_EarlyDiffusion(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LateDiffusion(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_LateDiffusion(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LateDiffusion() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_LateDiffusion(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LowEQGain(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_LowEQGain(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LowEQGain() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_LowEQGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LowEQCutoff(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_LowEQCutoff(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LowEQCutoff() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_LowEQCutoff(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::HighEQGain(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_HighEQGain(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::HighEQGain() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_HighEQGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::HighEQCutoff(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_HighEQCutoff(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::HighEQCutoff() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_HighEQCutoff(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterFreq(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RoomFilterFreq(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterFreq() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RoomFilterFreq(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterMain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RoomFilterMain(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterMain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RoomFilterMain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterHF(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RoomFilterHF(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterHF() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RoomFilterHF(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReflectionsGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_ReflectionsGain(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReflectionsGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_ReflectionsGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReverbGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_ReverbGain(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReverbGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_ReverbGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::DecayTime(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_DecayTime(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::DecayTime() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_DecayTime(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::Density(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_Density(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::Density() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_Density(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomSize(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RoomSize(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomSize() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RoomSize(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::DisableLateField(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_DisableLateField(value));
}

template <typename D> bool consume_Windows_Media_Audio_IReverbEffectDefinition<D>::DisableLateField() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_DisableLateField(&value));
    return value;
}

template <typename D> Windows::Media::Audio::ReverbEffectDefinition consume_Windows_Media_Audio_IReverbEffectDefinitionFactory<D>::Create(Windows::Media::Audio::AudioGraph const& audioGraph) const
{
    Windows::Media::Audio::ReverbEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinitionFactory)->Create(get_abi(audioGraph), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioDeviceInputNode> : produce_base<D, Windows::Media::Audio::IAudioDeviceInputNode>
{
    HRESULT __stdcall get_Device(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Device());
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
struct produce<D, Windows::Media::Audio::IAudioDeviceOutputNode> : produce_base<D, Windows::Media::Audio::IAudioDeviceOutputNode>
{
    HRESULT __stdcall get_Device(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Device());
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
struct produce<D, Windows::Media::Audio::IAudioFileInputNode> : produce_base<D, Windows::Media::Audio::IAudioFileInputNode>
{
    HRESULT __stdcall put_PlaybackSpeedFactor(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackSpeedFactor(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackSpeedFactor(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PlaybackSpeedFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
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

    HRESULT __stdcall Seek(abi_t<Windows::Foundation::TimeSpan> position) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Seek(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&position));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EndTime(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LoopCount(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoopCount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LoopCount(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoopCount(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_SourceFile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceFile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FileCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FileCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FileCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioFileOutputNode> : produce_base<D, Windows::Media::Audio::IAudioFileOutputNode>
{
    HRESULT __stdcall get_File(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileEncodingProfile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileEncodingProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FinalizeAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FinalizeAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioFrameCompletedEventArgs> : produce_base<D, Windows::Media::Audio::IAudioFrameCompletedEventArgs>
{
    HRESULT __stdcall get_Frame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Frame());
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
struct produce<D, Windows::Media::Audio::IAudioFrameInputNode> : produce_base<D, Windows::Media::Audio::IAudioFrameInputNode>
{
    HRESULT __stdcall put_PlaybackSpeedFactor(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackSpeedFactor(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackSpeedFactor(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PlaybackSpeedFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddFrame(::IUnknown* frame) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddFrame(*reinterpret_cast<Windows::Media::AudioFrame const*>(&frame));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DiscardQueuedFrames() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiscardQueuedFrames();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QueuedSampleCount(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QueuedSampleCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AudioFrameCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AudioFrameCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioFrameCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioFrameCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_QuantumStarted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().QuantumStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_QuantumStarted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuantumStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioFrameOutputNode> : produce_base<D, Windows::Media::Audio::IAudioFrameOutputNode>
{
    HRESULT __stdcall GetFrame(::IUnknown** audioFrame) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *audioFrame = detach_abi(this->shim().GetFrame());
            return S_OK;
        }
        catch (...)
        {
            *audioFrame = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraph> : produce_base<D, Windows::Media::Audio::IAudioGraph>
{
    HRESULT __stdcall CreateFrameInputNode(::IUnknown** frameInputNode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *frameInputNode = detach_abi(this->shim().CreateFrameInputNode());
            return S_OK;
        }
        catch (...)
        {
            *frameInputNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameInputNodeWithFormat(::IUnknown* encodingProperties, ::IUnknown** frameInputNode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *frameInputNode = detach_abi(this->shim().CreateFrameInputNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            *frameInputNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceInputNodeAsync(abi_t<Windows::Media::Capture::MediaCategory> category, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDeviceInputNodeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceInputNodeWithFormatAsync(abi_t<Windows::Media::Capture::MediaCategory> category, ::IUnknown* encodingProperties, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDeviceInputNodeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceInputNodeWithFormatOnDeviceAsync(abi_t<Windows::Media::Capture::MediaCategory> category, ::IUnknown* encodingProperties, ::IUnknown* device, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDeviceInputNodeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameOutputNode(::IUnknown** frameOutputNode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *frameOutputNode = detach_abi(this->shim().CreateFrameOutputNode());
            return S_OK;
        }
        catch (...)
        {
            *frameOutputNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameOutputNodeWithFormat(::IUnknown* encodingProperties, ::IUnknown** frameOutputNode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *frameOutputNode = detach_abi(this->shim().CreateFrameOutputNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            *frameOutputNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceOutputNodeAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDeviceOutputNodeAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileInputNodeAsync(::IUnknown* file, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFileInputNodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileOutputNodeAsync(::IUnknown* file, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFileOutputNodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileOutputNodeWithFileProfileAsync(::IUnknown* file, ::IUnknown* fileEncodingProfile, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFileOutputNodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&fileEncodingProfile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSubmixNode(::IUnknown** submixNode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *submixNode = detach_abi(this->shim().CreateSubmixNode());
            return S_OK;
        }
        catch (...)
        {
            *submixNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSubmixNodeWithFormat(::IUnknown* encodingProperties, ::IUnknown** submixNode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *submixNode = detach_abi(this->shim().CreateSubmixNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            *submixNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ResetAllNodes() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetAllNodes();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_QuantumStarted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().QuantumStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_QuantumStarted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuantumStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_QuantumProcessed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().QuantumProcessed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_QuantumProcessed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuantumProcessed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UnrecoverableErrorOccurred(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UnrecoverableErrorOccurred(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UnrecoverableErrorOccurred(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnrecoverableErrorOccurred(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompletedQuantumCount(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompletedQuantumCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EncodingProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LatencyInSamples(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LatencyInSamples());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryRenderDevice(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrimaryRenderDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RenderDeviceAudioProcessing(abi_t<Windows::Media::AudioProcessing>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RenderDeviceAudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SamplesPerQuantum(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SamplesPerQuantum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraph2> : produce_base<D, Windows::Media::Audio::IAudioGraph2>
{
    HRESULT __stdcall CreateFrameInputNodeWithFormatAndEmitter(::IUnknown* encodingProperties, ::IUnknown* emitter, ::IUnknown** frameInputNode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *frameInputNode = detach_abi(this->shim().CreateFrameInputNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitter const*>(&emitter)));
            return S_OK;
        }
        catch (...)
        {
            *frameInputNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(abi_t<Windows::Media::Capture::MediaCategory> category, ::IUnknown* encodingProperties, ::IUnknown* device, ::IUnknown* emitter, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDeviceInputNodeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&device), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitter const*>(&emitter)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFileInputNodeWithEmitterAsync(::IUnknown* file, ::IUnknown* emitter, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateFileInputNodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitter const*>(&emitter)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSubmixNodeWithFormatAndEmitter(::IUnknown* encodingProperties, ::IUnknown* emitter, ::IUnknown** submixNode) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *submixNode = detach_abi(this->shim().CreateSubmixNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitter const*>(&emitter)));
            return S_OK;
        }
        catch (...)
        {
            *submixNode = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBatchUpdater(::IUnknown** updater) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updater = detach_abi(this->shim().CreateBatchUpdater());
            return S_OK;
        }
        catch (...)
        {
            *updater = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphConnection> : produce_base<D, Windows::Media::Audio::IAudioGraphConnection>
{
    HRESULT __stdcall get_Destination(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Destination());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Gain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphSettings> : produce_base<D, Windows::Media::Audio::IAudioGraphSettings>
{
    HRESULT __stdcall get_EncodingProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EncodingProperties(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EncodingProperties(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryRenderDevice(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrimaryRenderDevice());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PrimaryRenderDevice(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrimaryRenderDevice(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QuantumSizeSelectionMode(abi_t<Windows::Media::Audio::QuantumSizeSelectionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QuantumSizeSelectionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_QuantumSizeSelectionMode(abi_t<Windows::Media::Audio::QuantumSizeSelectionMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuantumSizeSelectionMode(*reinterpret_cast<Windows::Media::Audio::QuantumSizeSelectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredSamplesPerQuantum(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredSamplesPerQuantum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredSamplesPerQuantum(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredSamplesPerQuantum(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioRenderCategory(abi_t<Windows::Media::Render::AudioRenderCategory>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioRenderCategory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AudioRenderCategory(abi_t<Windows::Media::Render::AudioRenderCategory> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioRenderCategory(*reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredRenderDeviceAudioProcessing(abi_t<Windows::Media::AudioProcessing>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredRenderDeviceAudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredRenderDeviceAudioProcessing(abi_t<Windows::Media::AudioProcessing> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredRenderDeviceAudioProcessing(*reinterpret_cast<Windows::Media::AudioProcessing const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphSettingsFactory> : produce_base<D, Windows::Media::Audio::IAudioGraphSettingsFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::Media::Render::AudioRenderCategory> audioRenderCategory, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&audioRenderCategory)));
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
struct produce<D, Windows::Media::Audio::IAudioGraphStatics> : produce_base<D, Windows::Media::Audio::IAudioGraphStatics>
{
    HRESULT __stdcall CreateAsync(::IUnknown* settings, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAsync(*reinterpret_cast<Windows::Media::Audio::AudioGraphSettings const*>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs> : produce_base<D, Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
{
    HRESULT __stdcall get_Error(abi_t<Windows::Media::Audio::AudioGraphUnrecoverableError>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioInputNode> : produce_base<D, Windows::Media::Audio::IAudioInputNode>
{
    HRESULT __stdcall get_OutgoingConnections(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutgoingConnections());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddOutgoingConnection(::IUnknown* destination) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddOutgoingConnection(*reinterpret_cast<Windows::Media::Audio::IAudioNode const*>(&destination));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddOutgoingConnectionWithGain(::IUnknown* destination, double gain) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddOutgoingConnection(*reinterpret_cast<Windows::Media::Audio::IAudioNode const*>(&destination), gain);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveOutgoingConnection(::IUnknown* destination) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveOutgoingConnection(*reinterpret_cast<Windows::Media::Audio::IAudioNode const*>(&destination));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioInputNode2> : produce_base<D, Windows::Media::Audio::IAudioInputNode2>
{
    HRESULT __stdcall get_Emitter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Emitter());
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
struct produce<D, Windows::Media::Audio::IAudioNode> : produce_base<D, Windows::Media::Audio::IAudioNode>
{
    HRESULT __stdcall get_EffectDefinitions(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EffectDefinitions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingGain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutgoingGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingGain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutgoingGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EncodingProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConsumeInput(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConsumeInput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConsumeInput(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConsumeInput(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Reset() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DisableEffectsByDefinition(::IUnknown* definition) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableEffectsByDefinition(*reinterpret_cast<Windows::Media::Effects::IAudioEffectDefinition const*>(&definition));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnableEffectsByDefinition(::IUnknown* definition) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableEffectsByDefinition(*reinterpret_cast<Windows::Media::Effects::IAudioEffectDefinition const*>(&definition));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitter> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitter>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
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

    HRESULT __stdcall put_Position(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Direction(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Shape(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Shape());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecayModel(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecayModel());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Gain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DistanceScale(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DistanceScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DistanceScale(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DistanceScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DopplerScale(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DopplerScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DopplerScale(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DopplerScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DopplerVelocity(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DopplerVelocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DopplerVelocity(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DopplerVelocity(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDopplerDisabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDopplerDisabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitter2> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitter2>
{
    HRESULT __stdcall get_SpatialAudioModel(abi_t<Windows::Media::Audio::SpatialAudioModel>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpatialAudioModel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpatialAudioModel(abi_t<Windows::Media::Audio::SpatialAudioModel> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpatialAudioModel(*reinterpret_cast<Windows::Media::Audio::SpatialAudioModel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterConeProperties> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterConeProperties>
{
    HRESULT __stdcall get_InnerAngle(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InnerAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OuterAngle(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OuterAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OuterAngleGain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OuterAngleGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterDecayModel> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterDecayModel>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::Media::Audio::AudioNodeEmitterDecayKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinGain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxGain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NaturalProperties());
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
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>
{
    HRESULT __stdcall CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance, ::IUnknown** decayModel) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *decayModel = detach_abi(this->shim().CreateNatural(minGain, maxGain, unityGainDistance, cutoffDistance));
            return S_OK;
        }
        catch (...)
        {
            *decayModel = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCustom(double minGain, double maxGain, ::IUnknown** decayModel) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *decayModel = detach_abi(this->shim().CreateCustom(minGain, maxGain));
            return S_OK;
        }
        catch (...)
        {
            *decayModel = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterFactory> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterFactory>
{
    HRESULT __stdcall CreateAudioNodeEmitter(::IUnknown* shape, ::IUnknown* decayModel, abi_t<Windows::Media::Audio::AudioNodeEmitterSettings> settings, ::IUnknown** emitter) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *emitter = detach_abi(this->shim().CreateAudioNodeEmitter(*reinterpret_cast<Windows::Media::Audio::AudioNodeEmitterShape const*>(&shape), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitterDecayModel const*>(&decayModel), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitterSettings const*>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            *emitter = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
{
    HRESULT __stdcall get_UnityGainDistance(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnityGainDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CutoffDistance(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CutoffDistance());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterShape> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterShape>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::Media::Audio::AudioNodeEmitterShapeKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConeProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConeProperties());
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
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterShapeStatics> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterShapeStatics>
{
    HRESULT __stdcall CreateCone(double innerAngle, double outerAngle, double outerAngleGain, ::IUnknown** shape) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *shape = detach_abi(this->shim().CreateCone(innerAngle, outerAngle, outerAngleGain));
            return S_OK;
        }
        catch (...)
        {
            *shape = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateOmnidirectional(::IUnknown** shape) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *shape = detach_abi(this->shim().CreateOmnidirectional());
            return S_OK;
        }
        catch (...)
        {
            *shape = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeListener> : produce_base<D, Windows::Media::Audio::IAudioNodeListener>
{
    HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
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

    HRESULT __stdcall put_Position(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_t<Windows::Foundation::Numerics::quaternion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(abi_t<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(*reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedOfSound(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpeedOfSound());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpeedOfSound(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpeedOfSound(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DopplerVelocity(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DopplerVelocity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DopplerVelocity(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DopplerVelocity(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeWithListener> : produce_base<D, Windows::Media::Audio::IAudioNodeWithListener>
{
    HRESULT __stdcall put_Listener(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Listener(*reinterpret_cast<Windows::Media::Audio::AudioNodeListener const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Listener(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Listener());
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
struct produce<D, Windows::Media::Audio::ICreateAudioDeviceInputNodeResult> : produce_base<D, Windows::Media::Audio::ICreateAudioDeviceInputNodeResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Media::Audio::AudioDeviceNodeCreationStatus>* value) noexcept override
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

    HRESULT __stdcall get_DeviceInputNode(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceInputNode());
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
struct produce<D, Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult> : produce_base<D, Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Media::Audio::AudioDeviceNodeCreationStatus>* value) noexcept override
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

    HRESULT __stdcall get_DeviceOutputNode(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceOutputNode());
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
struct produce<D, Windows::Media::Audio::ICreateAudioFileInputNodeResult> : produce_base<D, Windows::Media::Audio::ICreateAudioFileInputNodeResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Media::Audio::AudioFileNodeCreationStatus>* value) noexcept override
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

    HRESULT __stdcall get_FileInputNode(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileInputNode());
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
struct produce<D, Windows::Media::Audio::ICreateAudioFileOutputNodeResult> : produce_base<D, Windows::Media::Audio::ICreateAudioFileOutputNodeResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Media::Audio::AudioFileNodeCreationStatus>* value) noexcept override
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

    HRESULT __stdcall get_FileOutputNode(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileOutputNode());
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
struct produce<D, Windows::Media::Audio::ICreateAudioGraphResult> : produce_base<D, Windows::Media::Audio::ICreateAudioGraphResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Media::Audio::AudioGraphCreationStatus>* value) noexcept override
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

    HRESULT __stdcall get_Graph(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Graph());
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
struct produce<D, Windows::Media::Audio::IEchoEffectDefinition> : produce_base<D, Windows::Media::Audio::IEchoEffectDefinition>
{
    HRESULT __stdcall put_WetDryMix(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetDryMix(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WetDryMix(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WetDryMix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Feedback(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Feedback(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Feedback(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Feedback());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Delay(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Delay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delay(double* value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Media::Audio::IEchoEffectDefinitionFactory> : produce_base<D, Windows::Media::Audio::IEchoEffectDefinitionFactory>
{
    HRESULT __stdcall Create(::IUnknown* audioGraph, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Media::Audio::AudioGraph const*>(&audioGraph)));
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
struct produce<D, Windows::Media::Audio::IEqualizerBand> : produce_base<D, Windows::Media::Audio::IEqualizerBand>
{
    HRESULT __stdcall get_Bandwidth(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bandwidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bandwidth(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bandwidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrequencyCenter(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrequencyCenter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FrequencyCenter(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrequencyCenter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Gain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IEqualizerEffectDefinition> : produce_base<D, Windows::Media::Audio::IEqualizerEffectDefinition>
{
    HRESULT __stdcall get_Bands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bands());
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
struct produce<D, Windows::Media::Audio::IEqualizerEffectDefinitionFactory> : produce_base<D, Windows::Media::Audio::IEqualizerEffectDefinitionFactory>
{
    HRESULT __stdcall Create(::IUnknown* audioGraph, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Media::Audio::AudioGraph const*>(&audioGraph)));
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
struct produce<D, Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs> : produce_base<D, Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
{
    HRESULT __stdcall get_RequiredSamples(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequiredSamples());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ILimiterEffectDefinition> : produce_base<D, Windows::Media::Audio::ILimiterEffectDefinition>
{
    HRESULT __stdcall put_Release(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Release(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Release(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Release());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Loudness(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Loudness(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Loudness(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Loudness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ILimiterEffectDefinitionFactory> : produce_base<D, Windows::Media::Audio::ILimiterEffectDefinitionFactory>
{
    HRESULT __stdcall Create(::IUnknown* audioGraph, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Media::Audio::AudioGraph const*>(&audioGraph)));
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
struct produce<D, Windows::Media::Audio::IReverbEffectDefinition> : produce_base<D, Windows::Media::Audio::IReverbEffectDefinition>
{
    HRESULT __stdcall put_WetDryMix(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetDryMix(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WetDryMix(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WetDryMix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReflectionsDelay(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReflectionsDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReflectionsDelay(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReflectionsDelay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReverbDelay(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReverbDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReverbDelay(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReverbDelay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RearDelay(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RearDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RearDelay(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RearDelay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionLeft(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionLeft(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionLeft(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionLeft());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionRight(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionRight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionRight(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionRight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionMatrixLeft(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionMatrixLeft(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionMatrixLeft(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionMatrixLeft());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PositionMatrixRight(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionMatrixRight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PositionMatrixRight(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PositionMatrixRight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EarlyDiffusion(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EarlyDiffusion(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EarlyDiffusion(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EarlyDiffusion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LateDiffusion(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LateDiffusion(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LateDiffusion(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LateDiffusion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LowEQGain(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LowEQGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LowEQGain(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LowEQGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LowEQCutoff(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LowEQCutoff(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LowEQCutoff(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LowEQCutoff());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HighEQGain(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HighEQGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HighEQGain(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HighEQGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HighEQCutoff(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HighEQCutoff(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HighEQCutoff(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HighEQCutoff());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoomFilterFreq(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoomFilterFreq(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoomFilterFreq(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoomFilterFreq());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoomFilterMain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoomFilterMain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoomFilterMain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoomFilterMain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoomFilterHF(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoomFilterHF(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoomFilterHF(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoomFilterHF());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReflectionsGain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReflectionsGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReflectionsGain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReflectionsGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReverbGain(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReverbGain(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReverbGain(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReverbGain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DecayTime(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecayTime(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DecayTime(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DecayTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Density(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Density(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Density(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Density());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoomSize(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoomSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoomSize(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoomSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisableLateField(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableLateField(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisableLateField(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisableLateField());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IReverbEffectDefinitionFactory> : produce_base<D, Windows::Media::Audio::IReverbEffectDefinitionFactory>
{
    HRESULT __stdcall Create(::IUnknown* audioGraph, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Media::Audio::AudioGraph const*>(&audioGraph)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Audio {

inline Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> AudioGraph::CreateAsync(Windows::Media::Audio::AudioGraphSettings const& settings)
{
    return get_activation_factory<AudioGraph, Windows::Media::Audio::IAudioGraphStatics>().CreateAsync(settings);
}

inline AudioGraphSettings::AudioGraphSettings(Windows::Media::Render::AudioRenderCategory const& audioRenderCategory) :
    AudioGraphSettings(get_activation_factory<AudioGraphSettings, Windows::Media::Audio::IAudioGraphSettingsFactory>().Create(audioRenderCategory))
{}

inline AudioNodeEmitter::AudioNodeEmitter() :
    AudioNodeEmitter(activate_instance<AudioNodeEmitter>())
{}

inline AudioNodeEmitter::AudioNodeEmitter(Windows::Media::Audio::AudioNodeEmitterShape const& shape, Windows::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, Windows::Media::Audio::AudioNodeEmitterSettings const& settings) :
    AudioNodeEmitter(get_activation_factory<AudioNodeEmitter, Windows::Media::Audio::IAudioNodeEmitterFactory>().CreateAudioNodeEmitter(shape, decayModel, settings))
{}

inline Windows::Media::Audio::AudioNodeEmitterDecayModel AudioNodeEmitterDecayModel::CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance)
{
    return get_activation_factory<AudioNodeEmitterDecayModel, Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>().CreateNatural(minGain, maxGain, unityGainDistance, cutoffDistance);
}

inline Windows::Media::Audio::AudioNodeEmitterDecayModel AudioNodeEmitterDecayModel::CreateCustom(double minGain, double maxGain)
{
    return get_activation_factory<AudioNodeEmitterDecayModel, Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>().CreateCustom(minGain, maxGain);
}

inline Windows::Media::Audio::AudioNodeEmitterShape AudioNodeEmitterShape::CreateCone(double innerAngle, double outerAngle, double outerAngleGain)
{
    return get_activation_factory<AudioNodeEmitterShape, Windows::Media::Audio::IAudioNodeEmitterShapeStatics>().CreateCone(innerAngle, outerAngle, outerAngleGain);
}

inline Windows::Media::Audio::AudioNodeEmitterShape AudioNodeEmitterShape::CreateOmnidirectional()
{
    return get_activation_factory<AudioNodeEmitterShape, Windows::Media::Audio::IAudioNodeEmitterShapeStatics>().CreateOmnidirectional();
}

inline AudioNodeListener::AudioNodeListener() :
    AudioNodeListener(activate_instance<AudioNodeListener>())
{}

inline EchoEffectDefinition::EchoEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph) :
    EchoEffectDefinition(get_activation_factory<EchoEffectDefinition, Windows::Media::Audio::IEchoEffectDefinitionFactory>().Create(audioGraph))
{}

inline EqualizerEffectDefinition::EqualizerEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph) :
    EqualizerEffectDefinition(get_activation_factory<EqualizerEffectDefinition, Windows::Media::Audio::IEqualizerEffectDefinitionFactory>().Create(audioGraph))
{}

inline LimiterEffectDefinition::LimiterEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph) :
    LimiterEffectDefinition(get_activation_factory<LimiterEffectDefinition, Windows::Media::Audio::ILimiterEffectDefinitionFactory>().Create(audioGraph))
{}

inline ReverbEffectDefinition::ReverbEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph) :
    ReverbEffectDefinition(get_activation_factory<ReverbEffectDefinition, Windows::Media::Audio::IReverbEffectDefinitionFactory>().Create(audioGraph))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Audio::IAudioDeviceInputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioDeviceInputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioDeviceOutputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioDeviceOutputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioFileInputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioFileInputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioFileOutputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioFileOutputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioFrameCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioFrameCompletedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioFrameInputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioFrameInputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioFrameOutputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioFrameOutputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioGraph> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioGraph> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioGraph2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioGraph2> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioGraphConnection> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioGraphSettings> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphSettingsFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioGraphSettingsFactory> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioGraphStatics> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioInputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioInputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioInputNode2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioInputNode2> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNode> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeEmitter> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitter2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeEmitter2> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterConeProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeEmitterConeProperties> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModel> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeEmitterFactory> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterShape> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeEmitterShape> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterShapeStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeEmitterShapeStatics> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeListener> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeListener> {};

template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeWithListener> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IAudioNodeWithListener> {};

template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult> {};

template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult> {};

template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult> {};

template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult> {};

template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioGraphResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::ICreateAudioGraphResult> {};

template<> struct hash<winrt::Windows::Media::Audio::IEchoEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IEchoEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Audio::IEchoEffectDefinitionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IEchoEffectDefinitionFactory> {};

template<> struct hash<winrt::Windows::Media::Audio::IEqualizerBand> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IEqualizerBand> {};

template<> struct hash<winrt::Windows::Media::Audio::IEqualizerEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IEqualizerEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Audio::IEqualizerEffectDefinitionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IEqualizerEffectDefinitionFactory> {};

template<> struct hash<winrt::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Audio::ILimiterEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::ILimiterEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Audio::ILimiterEffectDefinitionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::ILimiterEffectDefinitionFactory> {};

template<> struct hash<winrt::Windows::Media::Audio::IReverbEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IReverbEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Audio::IReverbEffectDefinitionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::IReverbEffectDefinitionFactory> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioDeviceInputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioDeviceInputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioDeviceOutputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioDeviceOutputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioFileInputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioFileInputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioFileOutputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioFileOutputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioFrameCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioFrameCompletedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioFrameInputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioFrameInputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioFrameOutputNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioFrameOutputNode> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioGraph> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioGraph> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioGraphBatchUpdater> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioGraphBatchUpdater> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioGraphConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioGraphConnection> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioGraphSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioGraphSettings> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioNodeEmitter> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitterConeProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioNodeEmitterConeProperties> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitterDecayModel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioNodeEmitterDecayModel> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitterShape> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioNodeEmitterShape> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioNodeListener> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioNodeListener> {};

template<> struct hash<winrt::Windows::Media::Audio::AudioSubmixNode> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::AudioSubmixNode> {};

template<> struct hash<winrt::Windows::Media::Audio::CreateAudioDeviceInputNodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::CreateAudioDeviceInputNodeResult> {};

template<> struct hash<winrt::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> {};

template<> struct hash<winrt::Windows::Media::Audio::CreateAudioFileInputNodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::CreateAudioFileInputNodeResult> {};

template<> struct hash<winrt::Windows::Media::Audio::CreateAudioFileOutputNodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::CreateAudioFileOutputNodeResult> {};

template<> struct hash<winrt::Windows::Media::Audio::CreateAudioGraphResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::CreateAudioGraphResult> {};

template<> struct hash<winrt::Windows::Media::Audio::EchoEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::EchoEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Audio::EqualizerBand> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::EqualizerBand> {};

template<> struct hash<winrt::Windows::Media::Audio::EqualizerEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::EqualizerEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Audio::LimiterEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::LimiterEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Audio::ReverbEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Audio::ReverbEffectDefinition> {};

}

WINRT_WARNING_POP
