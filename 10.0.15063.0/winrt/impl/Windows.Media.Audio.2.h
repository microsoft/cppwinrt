// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Media.Render.1.h"
#include "winrt/impl/Windows.Media.Transcoding.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Audio.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Audio {

struct WINRT_EBO AudioDeviceInputNode :
    Windows::Media::Audio::IAudioDeviceInputNode,
    impl::require<AudioDeviceInputNode, Windows::Media::Audio::IAudioInputNode2>
{
    AudioDeviceInputNode(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioDeviceOutputNode :
    Windows::Media::Audio::IAudioDeviceOutputNode,
    impl::require<AudioDeviceOutputNode, Windows::Media::Audio::IAudioNodeWithListener>
{
    AudioDeviceOutputNode(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioFileInputNode :
    Windows::Media::Audio::IAudioFileInputNode,
    impl::require<AudioFileInputNode, Windows::Media::Audio::IAudioInputNode2>
{
    AudioFileInputNode(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioFileOutputNode :
    Windows::Media::Audio::IAudioFileOutputNode
{
    AudioFileOutputNode(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioFrameCompletedEventArgs :
    Windows::Media::Audio::IAudioFrameCompletedEventArgs
{
    AudioFrameCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioFrameInputNode :
    Windows::Media::Audio::IAudioFrameInputNode,
    impl::require<AudioFrameInputNode, Windows::Media::Audio::IAudioInputNode2>
{
    AudioFrameInputNode(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioFrameOutputNode :
    Windows::Media::Audio::IAudioFrameOutputNode
{
    AudioFrameOutputNode(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioGraph :
    Windows::Media::Audio::IAudioGraph,
    impl::require<AudioGraph, Windows::Media::Audio::IAudioGraph2>
{
    AudioGraph(std::nullptr_t) noexcept {}
    using impl::consume_t<AudioGraph, Windows::Media::Audio::IAudioGraph2>::CreateDeviceInputNodeAsync;
    using Windows::Media::Audio::IAudioGraph::CreateDeviceInputNodeAsync;
    using impl::consume_t<AudioGraph, Windows::Media::Audio::IAudioGraph2>::CreateFileInputNodeAsync;
    using Windows::Media::Audio::IAudioGraph::CreateFileInputNodeAsync;
    using impl::consume_t<AudioGraph, Windows::Media::Audio::IAudioGraph2>::CreateFrameInputNode;
    using Windows::Media::Audio::IAudioGraph::CreateFrameInputNode;
    using impl::consume_t<AudioGraph, Windows::Media::Audio::IAudioGraph2>::CreateSubmixNode;
    using Windows::Media::Audio::IAudioGraph::CreateSubmixNode;
    static Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> CreateAsync(Windows::Media::Audio::AudioGraphSettings const& settings);
};

struct WINRT_EBO AudioGraphBatchUpdater :
    Windows::Foundation::IClosable
{
    AudioGraphBatchUpdater(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioGraphConnection :
    Windows::Media::Audio::IAudioGraphConnection
{
    AudioGraphConnection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioGraphSettings :
    Windows::Media::Audio::IAudioGraphSettings
{
    AudioGraphSettings(std::nullptr_t) noexcept {}
    AudioGraphSettings(Windows::Media::Render::AudioRenderCategory const& audioRenderCategory);
};

struct WINRT_EBO AudioGraphUnrecoverableErrorOccurredEventArgs :
    Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs
{
    AudioGraphUnrecoverableErrorOccurredEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioNodeEmitter :
    Windows::Media::Audio::IAudioNodeEmitter,
    impl::require<AudioNodeEmitter, Windows::Media::Audio::IAudioNodeEmitter2>
{
    AudioNodeEmitter(std::nullptr_t) noexcept {}
    AudioNodeEmitter();
    AudioNodeEmitter(Windows::Media::Audio::AudioNodeEmitterShape const& shape, Windows::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, Windows::Media::Audio::AudioNodeEmitterSettings const& settings);
};

struct WINRT_EBO AudioNodeEmitterConeProperties :
    Windows::Media::Audio::IAudioNodeEmitterConeProperties
{
    AudioNodeEmitterConeProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioNodeEmitterDecayModel :
    Windows::Media::Audio::IAudioNodeEmitterDecayModel
{
    AudioNodeEmitterDecayModel(std::nullptr_t) noexcept {}
    static Windows::Media::Audio::AudioNodeEmitterDecayModel CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance);
    static Windows::Media::Audio::AudioNodeEmitterDecayModel CreateCustom(double minGain, double maxGain);
};

struct WINRT_EBO AudioNodeEmitterNaturalDecayModelProperties :
    Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties
{
    AudioNodeEmitterNaturalDecayModelProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioNodeEmitterShape :
    Windows::Media::Audio::IAudioNodeEmitterShape
{
    AudioNodeEmitterShape(std::nullptr_t) noexcept {}
    static Windows::Media::Audio::AudioNodeEmitterShape CreateCone(double innerAngle, double outerAngle, double outerAngleGain);
    static Windows::Media::Audio::AudioNodeEmitterShape CreateOmnidirectional();
};

struct WINRT_EBO AudioNodeListener :
    Windows::Media::Audio::IAudioNodeListener
{
    AudioNodeListener(std::nullptr_t) noexcept {}
    AudioNodeListener();
};

struct WINRT_EBO AudioSubmixNode :
    Windows::Media::Audio::IAudioInputNode,
    impl::require<AudioSubmixNode, Windows::Media::Audio::IAudioInputNode2>
{
    AudioSubmixNode(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CreateAudioDeviceInputNodeResult :
    Windows::Media::Audio::ICreateAudioDeviceInputNodeResult
{
    CreateAudioDeviceInputNodeResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CreateAudioDeviceOutputNodeResult :
    Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult
{
    CreateAudioDeviceOutputNodeResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CreateAudioFileInputNodeResult :
    Windows::Media::Audio::ICreateAudioFileInputNodeResult
{
    CreateAudioFileInputNodeResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CreateAudioFileOutputNodeResult :
    Windows::Media::Audio::ICreateAudioFileOutputNodeResult
{
    CreateAudioFileOutputNodeResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CreateAudioGraphResult :
    Windows::Media::Audio::ICreateAudioGraphResult
{
    CreateAudioGraphResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EchoEffectDefinition :
    Windows::Media::Audio::IEchoEffectDefinition
{
    EchoEffectDefinition(std::nullptr_t) noexcept {}
    EchoEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph);
};

struct WINRT_EBO EqualizerBand :
    Windows::Media::Audio::IEqualizerBand
{
    EqualizerBand(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EqualizerEffectDefinition :
    Windows::Media::Audio::IEqualizerEffectDefinition
{
    EqualizerEffectDefinition(std::nullptr_t) noexcept {}
    EqualizerEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph);
};

struct WINRT_EBO FrameInputNodeQuantumStartedEventArgs :
    Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs
{
    FrameInputNodeQuantumStartedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LimiterEffectDefinition :
    Windows::Media::Audio::ILimiterEffectDefinition
{
    LimiterEffectDefinition(std::nullptr_t) noexcept {}
    LimiterEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph);
};

struct WINRT_EBO ReverbEffectDefinition :
    Windows::Media::Audio::IReverbEffectDefinition
{
    ReverbEffectDefinition(std::nullptr_t) noexcept {}
    ReverbEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph);
};

}
