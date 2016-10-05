// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Audio.1.h"
#include "Windows.Foundation.2.h"
#include "Windows.Media.Effects.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
#define WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
template <> struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800")) __declspec(novtable) IReference<Windows::Foundation::TimeSpan> : impl_IReference<Windows::Foundation::TimeSpan> {};
#endif

#ifndef WINRT_GENERIC_548cefbd_bc8a_5fa0_8df2_957440fc8bf4
#define WINRT_GENERIC_548cefbd_bc8a_5fa0_8df2_957440fc8bf4
template <> struct __declspec(uuid("548cefbd-bc8a-5fa0-8df2-957440fc8bf4")) __declspec(novtable) IReference<int32_t> : impl_IReference<int32_t> {};
#endif

#ifndef WINRT_GENERIC_3e13b431_65ce_5bfb_b0aa_fac8df958b95
#define WINRT_GENERIC_3e13b431_65ce_5bfb_b0aa_fac8df958b95
template <> struct __declspec(uuid("3e13b431-65ce-5bfb-b0aa-fac8df958b95")) __declspec(novtable) IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> : impl_IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> {};
#endif

#ifndef WINRT_GENERIC_71ab4481_ec4a_5ee9_a342_3a31747829b8
#define WINRT_GENERIC_71ab4481_ec4a_5ee9_a342_3a31747829b8
template <> struct __declspec(uuid("71ab4481-ec4a-5ee9-a342-3a31747829b8")) __declspec(novtable) IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> : impl_IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> {};
#endif

#ifndef WINRT_GENERIC_f810d730_de15_58e0_a5f4_c159f73669ed
#define WINRT_GENERIC_f810d730_de15_58e0_a5f4_c159f73669ed
template <> struct __declspec(uuid("f810d730-de15-58e0-a5f4-c159f73669ed")) __declspec(novtable) IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> : impl_IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> {};
#endif

#ifndef WINRT_GENERIC_473b06bf_387b_56ca_bee1_527480272b0f
#define WINRT_GENERIC_473b06bf_387b_56ca_bee1_527480272b0f
template <> struct __declspec(uuid("473b06bf-387b-56ca-bee1-527480272b0f")) __declspec(novtable) IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> : impl_IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> {};
#endif

#ifndef WINRT_GENERIC_1164517d_e953_5415_a5b3_4249a969be7b
#define WINRT_GENERIC_1164517d_e953_5415_a5b3_4249a969be7b
template <> struct __declspec(uuid("1164517d-e953-5415-a5b3-4249a969be7b")) __declspec(novtable) IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> : impl_IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> {};
#endif

#ifndef WINRT_GENERIC_e1407134_09e7_53de_b54c_8a0659397b88
#define WINRT_GENERIC_e1407134_09e7_53de_b54c_8a0659397b88
template <> struct __declspec(uuid("e1407134-09e7-53de-b54c-8a0659397b88")) __declspec(novtable) TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_899670c9_dd7f_5f12_98cb_8b17fe80a47f
#define WINRT_GENERIC_899670c9_dd7f_5f12_98cb_8b17fe80a47f
template <> struct __declspec(uuid("899670c9-dd7f-5f12-98cb-8b17fe80a47f")) __declspec(novtable) TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> : impl_TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2828a982_d849_5fc9_84ce_f9a4b3b4d341
#define WINRT_GENERIC_2828a982_d849_5fc9_84ce_f9a4b3b4d341
template <> struct __declspec(uuid("2828a982-d849-5fc9-84ce-f9a4b3b4d341")) __declspec(novtable) IVector<Windows::Media::Effects::IAudioEffectDefinition> : impl_IVector<Windows::Media::Effects::IAudioEffectDefinition> {};
#endif

#ifndef WINRT_GENERIC_8485aed1_9b0c_59d2_a206_699bf746c3ff
#define WINRT_GENERIC_8485aed1_9b0c_59d2_a206_699bf746c3ff
template <> struct __declspec(uuid("8485aed1-9b0c-59d2-a206-699bf746c3ff")) __declspec(novtable) IVectorView<Windows::Media::Audio::AudioGraphConnection> : impl_IVectorView<Windows::Media::Audio::AudioGraphConnection> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ad59dcfe_71b0_5e16_99c2_cd90644d8ee8
#define WINRT_GENERIC_ad59dcfe_71b0_5e16_99c2_cd90644d8ee8
template <> struct __declspec(uuid("ad59dcfe-71b0-5e16-99c2-cd90644d8ee8")) __declspec(novtable) TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> : impl_TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_4530d121_bb9a_57fe_922f_a98eeedf59af
#define WINRT_GENERIC_4530d121_bb9a_57fe_922f_a98eeedf59af
template <> struct __declspec(uuid("4530d121-bb9a-57fe-922f-a98eeedf59af")) __declspec(novtable) TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> : impl_TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_4481085b_8b8b_5520_9825_e9671da2a89f
#define WINRT_GENERIC_4481085b_8b8b_5520_9825_e9671da2a89f
template <> struct __declspec(uuid("4481085b-8b8b-5520-9825-e9671da2a89f")) __declspec(novtable) TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::IInspectable> : impl_TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_02132510_3899_5257_bed9_a43e5149d28c
#define WINRT_GENERIC_02132510_3899_5257_bed9_a43e5149d28c
template <> struct __declspec(uuid("02132510-3899-5257-bed9-a43e5149d28c")) __declspec(novtable) IAsyncOperation<winrt::Windows::Media::Transcoding::TranscodeFailureReason> : impl_IAsyncOperation<winrt::Windows::Media::Transcoding::TranscodeFailureReason> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_48f26053_ea7d_59e1_952b_fb78af42d2e2
#define WINRT_GENERIC_48f26053_ea7d_59e1_952b_fb78af42d2e2
template <> struct __declspec(uuid("48f26053-ea7d-59e1-952b-fb78af42d2e2")) __declspec(novtable) IVectorView<Windows::Media::Audio::EqualizerBand> : impl_IVectorView<Windows::Media::Audio::EqualizerBand> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_4e660bda_d438_5741_8b66_85fe72574aab
#define WINRT_GENERIC_4e660bda_d438_5741_8b66_85fe72574aab
template <> struct __declspec(uuid("4e660bda-d438-5741-8b66-85fe72574aab")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioGraphResult> : impl_AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioGraphResult> {};
#endif

#ifndef WINRT_GENERIC_6cc56450_e4e8_59c9_83d8_63e46eacb20b
#define WINRT_GENERIC_6cc56450_e4e8_59c9_83d8_63e46eacb20b
template <> struct __declspec(uuid("6cc56450-e4e8-59c9-83d8-63e46eacb20b")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> : impl_AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> {};
#endif

#ifndef WINRT_GENERIC_edbc9b59_7cae_513f_b0dc_17666d37ba77
#define WINRT_GENERIC_edbc9b59_7cae_513f_b0dc_17666d37ba77
template <> struct __declspec(uuid("edbc9b59-7cae-513f-b0dc-17666d37ba77")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> : impl_AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> {};
#endif

#ifndef WINRT_GENERIC_504d1efd_c11c_506e_b8c9_af17c771efb5
#define WINRT_GENERIC_504d1efd_c11c_506e_b8c9_af17c771efb5
template <> struct __declspec(uuid("504d1efd-c11c-506e-b8c9-af17c771efb5")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioFileInputNodeResult> : impl_AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioFileInputNodeResult> {};
#endif

#ifndef WINRT_GENERIC_a7a95713_a08f_5fdf_89c6_9627bcf5d80a
#define WINRT_GENERIC_a7a95713_a08f_5fdf_89c6_9627bcf5d80a
template <> struct __declspec(uuid("a7a95713-a08f-5fdf-89c6-9627bcf5d80a")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioFileOutputNodeResult> : impl_AsyncOperationCompletedHandler<Windows::Media::Audio::CreateAudioFileOutputNodeResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_ec0f39fc_6959_5423_9e1a_f7cb8e845ca1
#define WINRT_GENERIC_ec0f39fc_6959_5423_9e1a_f7cb8e845ca1
template <> struct __declspec(uuid("ec0f39fc-6959-5423-9e1a-f7cb8e845ca1")) __declspec(novtable) IIterator<Windows::Media::Effects::IAudioEffectDefinition> : impl_IIterator<Windows::Media::Effects::IAudioEffectDefinition> {};
#endif

#ifndef WINRT_GENERIC_607a20bf_32b4_5b8e_a793_3024f8d3582a
#define WINRT_GENERIC_607a20bf_32b4_5b8e_a793_3024f8d3582a
template <> struct __declspec(uuid("607a20bf-32b4-5b8e-a793-3024f8d3582a")) __declspec(novtable) IIterable<Windows::Media::Effects::IAudioEffectDefinition> : impl_IIterable<Windows::Media::Effects::IAudioEffectDefinition> {};
#endif

#ifndef WINRT_GENERIC_de9e6a7f_d28e_5ef1_916a_efa880b489d1
#define WINRT_GENERIC_de9e6a7f_d28e_5ef1_916a_efa880b489d1
template <> struct __declspec(uuid("de9e6a7f-d28e-5ef1-916a-efa880b489d1")) __declspec(novtable) IVectorView<Windows::Media::Effects::IAudioEffectDefinition> : impl_IVectorView<Windows::Media::Effects::IAudioEffectDefinition> {};
#endif

#ifndef WINRT_GENERIC_4af6a8fc_e7fb_5957_91c1_2df9600b22eb
#define WINRT_GENERIC_4af6a8fc_e7fb_5957_91c1_2df9600b22eb
template <> struct __declspec(uuid("4af6a8fc-e7fb-5957-91c1-2df9600b22eb")) __declspec(novtable) IIterator<Windows::Media::Audio::AudioGraphConnection> : impl_IIterator<Windows::Media::Audio::AudioGraphConnection> {};
#endif

#ifndef WINRT_GENERIC_96168d06_a51a_5480_9403_fbd7631e3b3c
#define WINRT_GENERIC_96168d06_a51a_5480_9403_fbd7631e3b3c
template <> struct __declspec(uuid("96168d06-a51a-5480-9403-fbd7631e3b3c")) __declspec(novtable) IIterable<Windows::Media::Audio::AudioGraphConnection> : impl_IIterable<Windows::Media::Audio::AudioGraphConnection> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c42ae2bf_e194_5179_b8ad_03b51c04e1da
#define WINRT_GENERIC_c42ae2bf_e194_5179_b8ad_03b51c04e1da
template <> struct __declspec(uuid("c42ae2bf-e194-5179-b8ad-03b51c04e1da")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Media::Transcoding::TranscodeFailureReason> : impl_AsyncOperationCompletedHandler<winrt::Windows::Media::Transcoding::TranscodeFailureReason> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_eb4f8b6a_7928_5f2f_b7f2_7b90c084356f
#define WINRT_GENERIC_eb4f8b6a_7928_5f2f_b7f2_7b90c084356f
template <> struct __declspec(uuid("eb4f8b6a-7928-5f2f-b7f2-7b90c084356f")) __declspec(novtable) IIterator<Windows::Media::Audio::EqualizerBand> : impl_IIterator<Windows::Media::Audio::EqualizerBand> {};
#endif

#ifndef WINRT_GENERIC_6f76d148_023e_565a_9f09_4ad4a32ad74f
#define WINRT_GENERIC_6f76d148_023e_565a_9f09_4ad4a32ad74f
template <> struct __declspec(uuid("6f76d148-023e-565a-9f09-4ad4a32ad74f")) __declspec(novtable) IIterable<Windows::Media::Audio::EqualizerBand> : impl_IIterable<Windows::Media::Audio::EqualizerBand> {};
#endif


}

namespace Windows::Media::Audio {

template <typename D>
struct WINRT_EBO impl_IAudioDeviceInputNode
{
    Windows::Devices::Enumeration::DeviceInformation Device() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioDeviceOutputNode
{
    Windows::Devices::Enumeration::DeviceInformation Device() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioFileInputNode
{
    void PlaybackSpeedFactor(double value) const;
    double PlaybackSpeedFactor() const;
    Windows::Foundation::TimeSpan Position() const;
    void Seek(const Windows::Foundation::TimeSpan & position) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> StartTime() const;
    void StartTime(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> EndTime() const;
    void EndTime(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
    Windows::Foundation::IReference<int32_t> LoopCount() const;
    void LoopCount(const Windows::Foundation::IReference<int32_t> & value) const;
    Windows::Foundation::TimeSpan Duration() const;
    Windows::Storage::StorageFile SourceFile() const;
    event_token FileCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::IInspectable> & handler) const;
    using FileCompleted_revoker = event_revoker<IAudioFileInputNode>;
    FileCompleted_revoker FileCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::IInspectable> & handler) const;
    void FileCompleted(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioFileOutputNode
{
    Windows::Storage::IStorageFile File() const;
    Windows::Media::MediaProperties::MediaEncodingProfile FileEncodingProfile() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Transcoding::TranscodeFailureReason> FinalizeAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioFrameCompletedEventArgs
{
    Windows::Media::AudioFrame Frame() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioFrameInputNode
{
    void PlaybackSpeedFactor(double value) const;
    double PlaybackSpeedFactor() const;
    void AddFrame(const Windows::Media::AudioFrame & frame) const;
    void DiscardQueuedFrames() const;
    uint64_t QueuedSampleCount() const;
    event_token AudioFrameCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> & handler) const;
    using AudioFrameCompleted_revoker = event_revoker<IAudioFrameInputNode>;
    AudioFrameCompleted_revoker AudioFrameCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> & handler) const;
    void AudioFrameCompleted(event_token token) const;
    event_token QuantumStarted(const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> & handler) const;
    using QuantumStarted_revoker = event_revoker<IAudioFrameInputNode>;
    QuantumStarted_revoker QuantumStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> & handler) const;
    void QuantumStarted(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioFrameOutputNode
{
    Windows::Media::AudioFrame GetFrame() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioGraph
{
    Windows::Media::Audio::AudioFrameInputNode CreateFrameInputNode() const;
    Windows::Media::Audio::AudioFrameInputNode CreateFrameInputNode(const Windows::Media::MediaProperties::AudioEncodingProperties & encodingProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory category) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory category, const Windows::Media::MediaProperties::AudioEncodingProperties & encodingProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory category, const Windows::Media::MediaProperties::AudioEncodingProperties & encodingProperties, const Windows::Devices::Enumeration::DeviceInformation & device) const;
    Windows::Media::Audio::AudioFrameOutputNode CreateFrameOutputNode() const;
    Windows::Media::Audio::AudioFrameOutputNode CreateFrameOutputNode(const Windows::Media::MediaProperties::AudioEncodingProperties & encodingProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> CreateDeviceOutputNodeAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> CreateFileInputNodeAsync(const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> CreateFileOutputNodeAsync(const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> CreateFileOutputNodeAsync(const Windows::Storage::IStorageFile & file, const Windows::Media::MediaProperties::MediaEncodingProfile & fileEncodingProfile) const;
    Windows::Media::Audio::AudioSubmixNode CreateSubmixNode() const;
    Windows::Media::Audio::AudioSubmixNode CreateSubmixNode(const Windows::Media::MediaProperties::AudioEncodingProperties & encodingProperties) const;
    void Start() const;
    void Stop() const;
    void ResetAllNodes() const;
    event_token QuantumStarted(const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::IInspectable> & handler) const;
    using QuantumStarted_revoker = event_revoker<IAudioGraph>;
    QuantumStarted_revoker QuantumStarted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::IInspectable> & handler) const;
    void QuantumStarted(event_token token) const;
    event_token QuantumProcessed(const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::IInspectable> & handler) const;
    using QuantumProcessed_revoker = event_revoker<IAudioGraph>;
    QuantumProcessed_revoker QuantumProcessed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::IInspectable> & handler) const;
    void QuantumProcessed(event_token token) const;
    event_token UnrecoverableErrorOccurred(const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> & handler) const;
    using UnrecoverableErrorOccurred_revoker = event_revoker<IAudioGraph>;
    UnrecoverableErrorOccurred_revoker UnrecoverableErrorOccurred(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> & handler) const;
    void UnrecoverableErrorOccurred(event_token token) const;
    uint64_t CompletedQuantumCount() const;
    Windows::Media::MediaProperties::AudioEncodingProperties EncodingProperties() const;
    int32_t LatencyInSamples() const;
    Windows::Devices::Enumeration::DeviceInformation PrimaryRenderDevice() const;
    Windows::Media::AudioProcessing RenderDeviceAudioProcessing() const;
    int32_t SamplesPerQuantum() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioGraph2
{
    Windows::Media::Audio::AudioFrameInputNode CreateFrameInputNode(const Windows::Media::MediaProperties::AudioEncodingProperties & encodingProperties, const Windows::Media::Audio::AudioNodeEmitter & emitter) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory category, const Windows::Media::MediaProperties::AudioEncodingProperties & encodingProperties, const Windows::Devices::Enumeration::DeviceInformation & device, const Windows::Media::Audio::AudioNodeEmitter & emitter) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> CreateFileInputNodeAsync(const Windows::Storage::IStorageFile & file, const Windows::Media::Audio::AudioNodeEmitter & emitter) const;
    Windows::Media::Audio::AudioSubmixNode CreateSubmixNode(const Windows::Media::MediaProperties::AudioEncodingProperties & encodingProperties, const Windows::Media::Audio::AudioNodeEmitter & emitter) const;
    Windows::Media::Audio::AudioGraphBatchUpdater CreateBatchUpdater() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioGraphConnection
{
    Windows::Media::Audio::IAudioNode Destination() const;
    void Gain(double value) const;
    double Gain() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioGraphSettings
{
    Windows::Media::MediaProperties::AudioEncodingProperties EncodingProperties() const;
    void EncodingProperties(const Windows::Media::MediaProperties::AudioEncodingProperties & value) const;
    Windows::Devices::Enumeration::DeviceInformation PrimaryRenderDevice() const;
    void PrimaryRenderDevice(const Windows::Devices::Enumeration::DeviceInformation & value) const;
    Windows::Media::Audio::QuantumSizeSelectionMode QuantumSizeSelectionMode() const;
    void QuantumSizeSelectionMode(Windows::Media::Audio::QuantumSizeSelectionMode value) const;
    int32_t DesiredSamplesPerQuantum() const;
    void DesiredSamplesPerQuantum(int32_t value) const;
    Windows::Media::Render::AudioRenderCategory AudioRenderCategory() const;
    void AudioRenderCategory(Windows::Media::Render::AudioRenderCategory value) const;
    Windows::Media::AudioProcessing DesiredRenderDeviceAudioProcessing() const;
    void DesiredRenderDeviceAudioProcessing(Windows::Media::AudioProcessing value) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioGraphSettingsFactory
{
    Windows::Media::Audio::AudioGraphSettings Create(Windows::Media::Render::AudioRenderCategory audioRenderCategory) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioGraphStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> CreateAsync(const Windows::Media::Audio::AudioGraphSettings & settings) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioGraphUnrecoverableErrorOccurredEventArgs
{
    Windows::Media::Audio::AudioGraphUnrecoverableError Error() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioInputNode
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::AudioGraphConnection> OutgoingConnections() const;
    void AddOutgoingConnection(const Windows::Media::Audio::IAudioNode & destination) const;
    void AddOutgoingConnection(const Windows::Media::Audio::IAudioNode & destination, double gain) const;
    void RemoveOutgoingConnection(const Windows::Media::Audio::IAudioNode & destination) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioInputNode2
{
    Windows::Media::Audio::AudioNodeEmitter Emitter() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNode
{
    Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> EffectDefinitions() const;
    void OutgoingGain(double value) const;
    double OutgoingGain() const;
    Windows::Media::MediaProperties::AudioEncodingProperties EncodingProperties() const;
    bool ConsumeInput() const;
    void ConsumeInput(bool value) const;
    void Start() const;
    void Stop() const;
    void Reset() const;
    void DisableEffectsByDefinition(const Windows::Media::Effects::IAudioEffectDefinition & definition) const;
    void EnableEffectsByDefinition(const Windows::Media::Effects::IAudioEffectDefinition & definition) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeEmitter
{
    Windows::Foundation::Numerics::float3 Position() const;
    void Position(const Windows::Foundation::Numerics::float3 & value) const;
    Windows::Foundation::Numerics::float3 Direction() const;
    void Direction(const Windows::Foundation::Numerics::float3 & value) const;
    Windows::Media::Audio::AudioNodeEmitterShape Shape() const;
    Windows::Media::Audio::AudioNodeEmitterDecayModel DecayModel() const;
    double Gain() const;
    void Gain(double value) const;
    double DistanceScale() const;
    void DistanceScale(double value) const;
    double DopplerScale() const;
    void DopplerScale(double value) const;
    Windows::Foundation::Numerics::float3 DopplerVelocity() const;
    void DopplerVelocity(const Windows::Foundation::Numerics::float3 & value) const;
    bool IsDopplerDisabled() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeEmitter2
{
    Windows::Media::Audio::SpatialAudioModel SpatialAudioModel() const;
    void SpatialAudioModel(Windows::Media::Audio::SpatialAudioModel value) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeEmitterConeProperties
{
    double InnerAngle() const;
    double OuterAngle() const;
    double OuterAngleGain() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeEmitterDecayModel
{
    Windows::Media::Audio::AudioNodeEmitterDecayKind Kind() const;
    double MinGain() const;
    double MaxGain() const;
    Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties NaturalProperties() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeEmitterDecayModelStatics
{
    Windows::Media::Audio::AudioNodeEmitterDecayModel CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance) const;
    Windows::Media::Audio::AudioNodeEmitterDecayModel CreateCustom(double minGain, double maxGain) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeEmitterFactory
{
    Windows::Media::Audio::AudioNodeEmitter CreateAudioNodeEmitter(const Windows::Media::Audio::AudioNodeEmitterShape & shape, const Windows::Media::Audio::AudioNodeEmitterDecayModel & decayModel, Windows::Media::Audio::AudioNodeEmitterSettings settings) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeEmitterNaturalDecayModelProperties
{
    double UnityGainDistance() const;
    double CutoffDistance() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeEmitterShape
{
    Windows::Media::Audio::AudioNodeEmitterShapeKind Kind() const;
    Windows::Media::Audio::AudioNodeEmitterConeProperties ConeProperties() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeEmitterShapeStatics
{
    Windows::Media::Audio::AudioNodeEmitterShape CreateCone(double innerAngle, double outerAngle, double outerAngleGain) const;
    Windows::Media::Audio::AudioNodeEmitterShape CreateOmnidirectional() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeListener
{
    Windows::Foundation::Numerics::float3 Position() const;
    void Position(const Windows::Foundation::Numerics::float3 & value) const;
    Windows::Foundation::Numerics::quaternion Orientation() const;
    void Orientation(const Windows::Foundation::Numerics::quaternion & value) const;
    double SpeedOfSound() const;
    void SpeedOfSound(double value) const;
    Windows::Foundation::Numerics::float3 DopplerVelocity() const;
    void DopplerVelocity(const Windows::Foundation::Numerics::float3 & value) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioNodeWithListener
{
    void Listener(const Windows::Media::Audio::AudioNodeListener & value) const;
    Windows::Media::Audio::AudioNodeListener Listener() const;
};

template <typename D>
struct WINRT_EBO impl_ICreateAudioDeviceInputNodeResult
{
    Windows::Media::Audio::AudioDeviceNodeCreationStatus Status() const;
    Windows::Media::Audio::AudioDeviceInputNode DeviceInputNode() const;
};

template <typename D>
struct WINRT_EBO impl_ICreateAudioDeviceOutputNodeResult
{
    Windows::Media::Audio::AudioDeviceNodeCreationStatus Status() const;
    Windows::Media::Audio::AudioDeviceOutputNode DeviceOutputNode() const;
};

template <typename D>
struct WINRT_EBO impl_ICreateAudioFileInputNodeResult
{
    Windows::Media::Audio::AudioFileNodeCreationStatus Status() const;
    Windows::Media::Audio::AudioFileInputNode FileInputNode() const;
};

template <typename D>
struct WINRT_EBO impl_ICreateAudioFileOutputNodeResult
{
    Windows::Media::Audio::AudioFileNodeCreationStatus Status() const;
    Windows::Media::Audio::AudioFileOutputNode FileOutputNode() const;
};

template <typename D>
struct WINRT_EBO impl_ICreateAudioGraphResult
{
    Windows::Media::Audio::AudioGraphCreationStatus Status() const;
    Windows::Media::Audio::AudioGraph Graph() const;
};

template <typename D>
struct WINRT_EBO impl_IEchoEffectDefinition
{
    void WetDryMix(double value) const;
    double WetDryMix() const;
    void Feedback(double value) const;
    double Feedback() const;
    void Delay(double value) const;
    double Delay() const;
};

template <typename D>
struct WINRT_EBO impl_IEchoEffectDefinitionFactory
{
    Windows::Media::Audio::EchoEffectDefinition Create(const Windows::Media::Audio::AudioGraph & audioGraph) const;
};

template <typename D>
struct WINRT_EBO impl_IEqualizerBand
{
    double Bandwidth() const;
    void Bandwidth(double value) const;
    double FrequencyCenter() const;
    void FrequencyCenter(double value) const;
    double Gain() const;
    void Gain(double value) const;
};

template <typename D>
struct WINRT_EBO impl_IEqualizerEffectDefinition
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::EqualizerBand> Bands() const;
};

template <typename D>
struct WINRT_EBO impl_IEqualizerEffectDefinitionFactory
{
    Windows::Media::Audio::EqualizerEffectDefinition Create(const Windows::Media::Audio::AudioGraph & audioGraph) const;
};

template <typename D>
struct WINRT_EBO impl_IFrameInputNodeQuantumStartedEventArgs
{
    int32_t RequiredSamples() const;
};

template <typename D>
struct WINRT_EBO impl_ILimiterEffectDefinition
{
    void Release(uint32_t value) const;
    uint32_t Release() const;
    void Loudness(uint32_t value) const;
    uint32_t Loudness() const;
};

template <typename D>
struct WINRT_EBO impl_ILimiterEffectDefinitionFactory
{
    Windows::Media::Audio::LimiterEffectDefinition Create(const Windows::Media::Audio::AudioGraph & audioGraph) const;
};

template <typename D>
struct WINRT_EBO impl_IReverbEffectDefinition
{
    void WetDryMix(double value) const;
    double WetDryMix() const;
    void ReflectionsDelay(uint32_t value) const;
    uint32_t ReflectionsDelay() const;
    void ReverbDelay(uint8_t value) const;
    uint8_t ReverbDelay() const;
    void RearDelay(uint8_t value) const;
    uint8_t RearDelay() const;
    void PositionLeft(uint8_t value) const;
    uint8_t PositionLeft() const;
    void PositionRight(uint8_t value) const;
    uint8_t PositionRight() const;
    void PositionMatrixLeft(uint8_t value) const;
    uint8_t PositionMatrixLeft() const;
    void PositionMatrixRight(uint8_t value) const;
    uint8_t PositionMatrixRight() const;
    void EarlyDiffusion(uint8_t value) const;
    uint8_t EarlyDiffusion() const;
    void LateDiffusion(uint8_t value) const;
    uint8_t LateDiffusion() const;
    void LowEQGain(uint8_t value) const;
    uint8_t LowEQGain() const;
    void LowEQCutoff(uint8_t value) const;
    uint8_t LowEQCutoff() const;
    void HighEQGain(uint8_t value) const;
    uint8_t HighEQGain() const;
    void HighEQCutoff(uint8_t value) const;
    uint8_t HighEQCutoff() const;
    void RoomFilterFreq(double value) const;
    double RoomFilterFreq() const;
    void RoomFilterMain(double value) const;
    double RoomFilterMain() const;
    void RoomFilterHF(double value) const;
    double RoomFilterHF() const;
    void ReflectionsGain(double value) const;
    double ReflectionsGain() const;
    void ReverbGain(double value) const;
    double ReverbGain() const;
    void DecayTime(double value) const;
    double DecayTime() const;
    void Density(double value) const;
    double Density() const;
    void RoomSize(double value) const;
    double RoomSize() const;
    void DisableLateField(bool value) const;
    bool DisableLateField() const;
};

template <typename D>
struct WINRT_EBO impl_IReverbEffectDefinitionFactory
{
    Windows::Media::Audio::ReverbEffectDefinition Create(const Windows::Media::Audio::AudioGraph & audioGraph) const;
};

struct IAudioDeviceInputNode :
    Windows::IInspectable,
    impl::consume<IAudioDeviceInputNode>,
    impl::require<IAudioDeviceInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
{
    IAudioDeviceInputNode(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioDeviceInputNode>(m_ptr); }
};

struct IAudioDeviceOutputNode :
    Windows::IInspectable,
    impl::consume<IAudioDeviceOutputNode>,
    impl::require<IAudioDeviceOutputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioDeviceOutputNode(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioDeviceOutputNode>(m_ptr); }
};

struct IAudioFileInputNode :
    Windows::IInspectable,
    impl::consume<IAudioFileInputNode>,
    impl::require<IAudioFileInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
{
    IAudioFileInputNode(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioFileInputNode>(m_ptr); }
};

struct IAudioFileOutputNode :
    Windows::IInspectable,
    impl::consume<IAudioFileOutputNode>,
    impl::require<IAudioFileOutputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioFileOutputNode(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioFileOutputNode>(m_ptr); }
};

struct IAudioFrameCompletedEventArgs :
    Windows::IInspectable,
    impl::consume<IAudioFrameCompletedEventArgs>
{
    IAudioFrameCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioFrameCompletedEventArgs>(m_ptr); }
};

struct IAudioFrameInputNode :
    Windows::IInspectable,
    impl::consume<IAudioFrameInputNode>,
    impl::require<IAudioFrameInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
{
    IAudioFrameInputNode(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioFrameInputNode>(m_ptr); }
};

struct IAudioFrameOutputNode :
    Windows::IInspectable,
    impl::consume<IAudioFrameOutputNode>,
    impl::require<IAudioFrameOutputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioFrameOutputNode(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioFrameOutputNode>(m_ptr); }
};

struct IAudioGraph :
    Windows::IInspectable,
    impl::consume<IAudioGraph>,
    impl::require<IAudioGraph, Windows::Foundation::IClosable>
{
    IAudioGraph(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioGraph>(m_ptr); }
};

struct IAudioGraph2 :
    Windows::IInspectable,
    impl::consume<IAudioGraph2>,
    impl::require<IAudioGraph2, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioGraph>
{
    IAudioGraph2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioGraph2>(m_ptr); }
    using impl_IAudioGraph::CreateDeviceInputNodeAsync;
    using impl_IAudioGraph::CreateFileInputNodeAsync;
    using impl_IAudioGraph::CreateFrameInputNode;
    using impl_IAudioGraph::CreateSubmixNode;
    using impl_IAudioGraph2::CreateDeviceInputNodeAsync;
    using impl_IAudioGraph2::CreateFileInputNodeAsync;
    using impl_IAudioGraph2::CreateFrameInputNode;
    using impl_IAudioGraph2::CreateSubmixNode;
};

struct IAudioGraphConnection :
    Windows::IInspectable,
    impl::consume<IAudioGraphConnection>
{
    IAudioGraphConnection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioGraphConnection>(m_ptr); }
};

struct IAudioGraphSettings :
    Windows::IInspectable,
    impl::consume<IAudioGraphSettings>
{
    IAudioGraphSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioGraphSettings>(m_ptr); }
};

struct IAudioGraphSettingsFactory :
    Windows::IInspectable,
    impl::consume<IAudioGraphSettingsFactory>
{
    IAudioGraphSettingsFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioGraphSettingsFactory>(m_ptr); }
};

struct IAudioGraphStatics :
    Windows::IInspectable,
    impl::consume<IAudioGraphStatics>
{
    IAudioGraphStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioGraphStatics>(m_ptr); }
};

struct IAudioGraphUnrecoverableErrorOccurredEventArgs :
    Windows::IInspectable,
    impl::consume<IAudioGraphUnrecoverableErrorOccurredEventArgs>
{
    IAudioGraphUnrecoverableErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioGraphUnrecoverableErrorOccurredEventArgs>(m_ptr); }
};

struct IAudioInputNode :
    Windows::IInspectable,
    impl::consume<IAudioInputNode>,
    impl::require<IAudioInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioInputNode(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioInputNode>(m_ptr); }
};

struct IAudioInputNode2 :
    Windows::IInspectable,
    impl::consume<IAudioInputNode2>,
    impl::require<IAudioInputNode2, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
{
    IAudioInputNode2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioInputNode2>(m_ptr); }
};

struct IAudioNode :
    Windows::IInspectable,
    impl::consume<IAudioNode>,
    impl::require<IAudioNode, Windows::Foundation::IClosable>
{
    IAudioNode(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNode>(m_ptr); }
};

struct IAudioNodeEmitter :
    Windows::IInspectable,
    impl::consume<IAudioNodeEmitter>
{
    IAudioNodeEmitter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeEmitter>(m_ptr); }
};

struct IAudioNodeEmitter2 :
    Windows::IInspectable,
    impl::consume<IAudioNodeEmitter2>
{
    IAudioNodeEmitter2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeEmitter2>(m_ptr); }
};

struct IAudioNodeEmitterConeProperties :
    Windows::IInspectable,
    impl::consume<IAudioNodeEmitterConeProperties>
{
    IAudioNodeEmitterConeProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeEmitterConeProperties>(m_ptr); }
};

struct IAudioNodeEmitterDecayModel :
    Windows::IInspectable,
    impl::consume<IAudioNodeEmitterDecayModel>
{
    IAudioNodeEmitterDecayModel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeEmitterDecayModel>(m_ptr); }
};

struct IAudioNodeEmitterDecayModelStatics :
    Windows::IInspectable,
    impl::consume<IAudioNodeEmitterDecayModelStatics>
{
    IAudioNodeEmitterDecayModelStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeEmitterDecayModelStatics>(m_ptr); }
};

struct IAudioNodeEmitterFactory :
    Windows::IInspectable,
    impl::consume<IAudioNodeEmitterFactory>
{
    IAudioNodeEmitterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeEmitterFactory>(m_ptr); }
};

struct IAudioNodeEmitterNaturalDecayModelProperties :
    Windows::IInspectable,
    impl::consume<IAudioNodeEmitterNaturalDecayModelProperties>
{
    IAudioNodeEmitterNaturalDecayModelProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeEmitterNaturalDecayModelProperties>(m_ptr); }
};

struct IAudioNodeEmitterShape :
    Windows::IInspectable,
    impl::consume<IAudioNodeEmitterShape>
{
    IAudioNodeEmitterShape(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeEmitterShape>(m_ptr); }
};

struct IAudioNodeEmitterShapeStatics :
    Windows::IInspectable,
    impl::consume<IAudioNodeEmitterShapeStatics>
{
    IAudioNodeEmitterShapeStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeEmitterShapeStatics>(m_ptr); }
};

struct IAudioNodeListener :
    Windows::IInspectable,
    impl::consume<IAudioNodeListener>
{
    IAudioNodeListener(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeListener>(m_ptr); }
};

struct IAudioNodeWithListener :
    Windows::IInspectable,
    impl::consume<IAudioNodeWithListener>,
    impl::require<IAudioNodeWithListener, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioNodeWithListener(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioNodeWithListener>(m_ptr); }
};

struct ICreateAudioDeviceInputNodeResult :
    Windows::IInspectable,
    impl::consume<ICreateAudioDeviceInputNodeResult>
{
    ICreateAudioDeviceInputNodeResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICreateAudioDeviceInputNodeResult>(m_ptr); }
};

struct ICreateAudioDeviceOutputNodeResult :
    Windows::IInspectable,
    impl::consume<ICreateAudioDeviceOutputNodeResult>
{
    ICreateAudioDeviceOutputNodeResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICreateAudioDeviceOutputNodeResult>(m_ptr); }
};

struct ICreateAudioFileInputNodeResult :
    Windows::IInspectable,
    impl::consume<ICreateAudioFileInputNodeResult>
{
    ICreateAudioFileInputNodeResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICreateAudioFileInputNodeResult>(m_ptr); }
};

struct ICreateAudioFileOutputNodeResult :
    Windows::IInspectable,
    impl::consume<ICreateAudioFileOutputNodeResult>
{
    ICreateAudioFileOutputNodeResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICreateAudioFileOutputNodeResult>(m_ptr); }
};

struct ICreateAudioGraphResult :
    Windows::IInspectable,
    impl::consume<ICreateAudioGraphResult>
{
    ICreateAudioGraphResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICreateAudioGraphResult>(m_ptr); }
};

struct IEchoEffectDefinition :
    Windows::IInspectable,
    impl::consume<IEchoEffectDefinition>,
    impl::require<IEchoEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
{
    IEchoEffectDefinition(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEchoEffectDefinition>(m_ptr); }
};

struct IEchoEffectDefinitionFactory :
    Windows::IInspectable,
    impl::consume<IEchoEffectDefinitionFactory>
{
    IEchoEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEchoEffectDefinitionFactory>(m_ptr); }
};

struct IEqualizerBand :
    Windows::IInspectable,
    impl::consume<IEqualizerBand>
{
    IEqualizerBand(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEqualizerBand>(m_ptr); }
};

struct IEqualizerEffectDefinition :
    Windows::IInspectable,
    impl::consume<IEqualizerEffectDefinition>,
    impl::require<IEqualizerEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
{
    IEqualizerEffectDefinition(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEqualizerEffectDefinition>(m_ptr); }
};

struct IEqualizerEffectDefinitionFactory :
    Windows::IInspectable,
    impl::consume<IEqualizerEffectDefinitionFactory>
{
    IEqualizerEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IEqualizerEffectDefinitionFactory>(m_ptr); }
};

struct IFrameInputNodeQuantumStartedEventArgs :
    Windows::IInspectable,
    impl::consume<IFrameInputNodeQuantumStartedEventArgs>
{
    IFrameInputNodeQuantumStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFrameInputNodeQuantumStartedEventArgs>(m_ptr); }
};

struct ILimiterEffectDefinition :
    Windows::IInspectable,
    impl::consume<ILimiterEffectDefinition>,
    impl::require<ILimiterEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
{
    ILimiterEffectDefinition(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILimiterEffectDefinition>(m_ptr); }
};

struct ILimiterEffectDefinitionFactory :
    Windows::IInspectable,
    impl::consume<ILimiterEffectDefinitionFactory>
{
    ILimiterEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILimiterEffectDefinitionFactory>(m_ptr); }
};

struct IReverbEffectDefinition :
    Windows::IInspectable,
    impl::consume<IReverbEffectDefinition>,
    impl::require<IReverbEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
{
    IReverbEffectDefinition(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IReverbEffectDefinition>(m_ptr); }
};

struct IReverbEffectDefinitionFactory :
    Windows::IInspectable,
    impl::consume<IReverbEffectDefinitionFactory>
{
    IReverbEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IReverbEffectDefinitionFactory>(m_ptr); }
};

}

}
