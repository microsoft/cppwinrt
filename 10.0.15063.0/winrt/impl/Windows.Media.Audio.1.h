// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Capture.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Media.Render.0.h"
#include "winrt/impl/Windows.Media.Transcoding.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Audio.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Audio {

struct WINRT_EBO IAudioDeviceInputNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceInputNode>,
    impl::require<IAudioDeviceInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
{
    IAudioDeviceInputNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioDeviceOutputNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioDeviceOutputNode>,
    impl::require<IAudioDeviceOutputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioDeviceOutputNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioFileInputNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioFileInputNode>,
    impl::require<IAudioFileInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
{
    IAudioFileInputNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioFileOutputNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioFileOutputNode>,
    impl::require<IAudioFileOutputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioFileOutputNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioFrameCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioFrameCompletedEventArgs>
{
    IAudioFrameCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioFrameInputNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioFrameInputNode>,
    impl::require<IAudioFrameInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
{
    IAudioFrameInputNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioFrameOutputNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioFrameOutputNode>,
    impl::require<IAudioFrameOutputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioFrameOutputNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioGraph :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioGraph>,
    impl::require<IAudioGraph, Windows::Foundation::IClosable>
{
    IAudioGraph(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioGraph2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioGraph2>,
    impl::require<IAudioGraph2, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioGraph>
{
    IAudioGraph2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph>::CreateDeviceInputNodeAsync;
    using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph2>::CreateDeviceInputNodeAsync;
    using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph>::CreateFileInputNodeAsync;
    using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph2>::CreateFileInputNodeAsync;
    using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph>::CreateFrameInputNode;
    using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph2>::CreateFrameInputNode;
    using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph>::CreateSubmixNode;
    using impl::consume_t<IAudioGraph2, Windows::Media::Audio::IAudioGraph2>::CreateSubmixNode;
};

struct WINRT_EBO IAudioGraphConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioGraphConnection>
{
    IAudioGraphConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioGraphSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioGraphSettings>
{
    IAudioGraphSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioGraphSettingsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioGraphSettingsFactory>
{
    IAudioGraphSettingsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioGraphStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioGraphStatics>
{
    IAudioGraphStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioGraphUnrecoverableErrorOccurredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioGraphUnrecoverableErrorOccurredEventArgs>
{
    IAudioGraphUnrecoverableErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioInputNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioInputNode>,
    impl::require<IAudioInputNode, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioInputNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioInputNode2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioInputNode2>,
    impl::require<IAudioInputNode2, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioInputNode, Windows::Media::Audio::IAudioNode>
{
    IAudioInputNode2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNode>,
    impl::require<IAudioNode, Windows::Foundation::IClosable>
{
    IAudioNode(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeEmitter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeEmitter>
{
    IAudioNodeEmitter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeEmitter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeEmitter2>
{
    IAudioNodeEmitter2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeEmitterConeProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeEmitterConeProperties>
{
    IAudioNodeEmitterConeProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeEmitterDecayModel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeEmitterDecayModel>
{
    IAudioNodeEmitterDecayModel(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeEmitterDecayModelStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeEmitterDecayModelStatics>
{
    IAudioNodeEmitterDecayModelStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeEmitterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeEmitterFactory>
{
    IAudioNodeEmitterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeEmitterNaturalDecayModelProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeEmitterNaturalDecayModelProperties>
{
    IAudioNodeEmitterNaturalDecayModelProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeEmitterShape :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeEmitterShape>
{
    IAudioNodeEmitterShape(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeEmitterShapeStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeEmitterShapeStatics>
{
    IAudioNodeEmitterShapeStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeListener>
{
    IAudioNodeListener(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioNodeWithListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioNodeWithListener>,
    impl::require<IAudioNodeWithListener, Windows::Foundation::IClosable, Windows::Media::Audio::IAudioNode>
{
    IAudioNodeWithListener(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICreateAudioDeviceInputNodeResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICreateAudioDeviceInputNodeResult>
{
    ICreateAudioDeviceInputNodeResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICreateAudioDeviceOutputNodeResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICreateAudioDeviceOutputNodeResult>
{
    ICreateAudioDeviceOutputNodeResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICreateAudioFileInputNodeResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICreateAudioFileInputNodeResult>
{
    ICreateAudioFileInputNodeResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICreateAudioFileOutputNodeResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICreateAudioFileOutputNodeResult>
{
    ICreateAudioFileOutputNodeResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICreateAudioGraphResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICreateAudioGraphResult>
{
    ICreateAudioGraphResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEchoEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEchoEffectDefinition>,
    impl::require<IEchoEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
{
    IEchoEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEchoEffectDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEchoEffectDefinitionFactory>
{
    IEchoEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEqualizerBand :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEqualizerBand>
{
    IEqualizerBand(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEqualizerEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEqualizerEffectDefinition>,
    impl::require<IEqualizerEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
{
    IEqualizerEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEqualizerEffectDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEqualizerEffectDefinitionFactory>
{
    IEqualizerEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFrameInputNodeQuantumStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFrameInputNodeQuantumStartedEventArgs>
{
    IFrameInputNodeQuantumStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILimiterEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILimiterEffectDefinition>,
    impl::require<ILimiterEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
{
    ILimiterEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILimiterEffectDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILimiterEffectDefinitionFactory>
{
    ILimiterEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IReverbEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReverbEffectDefinition>,
    impl::require<IReverbEffectDefinition, Windows::Media::Effects::IAudioEffectDefinition>
{
    IReverbEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IReverbEffectDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReverbEffectDefinitionFactory>
{
    IReverbEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

}
