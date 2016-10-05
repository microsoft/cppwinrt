// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Effects.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Media::Effects {

struct WINRT_EBO AudioCaptureEffectsManager :
    Windows::Media::Effects::IAudioCaptureEffectsManager
{
    AudioCaptureEffectsManager(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioEffect :
    Windows::Media::Effects::IAudioEffect
{
    AudioEffect(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AudioEffectDefinition :
    Windows::Media::Effects::IAudioEffectDefinition
{
    AudioEffectDefinition(std::nullptr_t) noexcept {}
    AudioEffectDefinition(hstring_ref activatableClassId);
    AudioEffectDefinition(hstring_ref activatableClassId, const Windows::Foundation::Collections::IPropertySet & props);
};

struct AudioEffectsManager
{
    AudioEffectsManager() = delete;
    static Windows::Media::Effects::AudioRenderEffectsManager CreateAudioRenderEffectsManager(hstring_ref deviceId, Windows::Media::Render::AudioRenderCategory category);
    static Windows::Media::Effects::AudioRenderEffectsManager CreateAudioRenderEffectsManager(hstring_ref deviceId, Windows::Media::Render::AudioRenderCategory category, Windows::Media::AudioProcessing mode);
    static Windows::Media::Effects::AudioCaptureEffectsManager CreateAudioCaptureEffectsManager(hstring_ref deviceId, Windows::Media::Capture::MediaCategory category);
    static Windows::Media::Effects::AudioCaptureEffectsManager CreateAudioCaptureEffectsManager(hstring_ref deviceId, Windows::Media::Capture::MediaCategory category, Windows::Media::AudioProcessing mode);
};

struct WINRT_EBO AudioRenderEffectsManager :
    Windows::Media::Effects::IAudioRenderEffectsManager,
    impl::require<AudioRenderEffectsManager, Windows::Media::Effects::IAudioRenderEffectsManager2>
{
    AudioRenderEffectsManager(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CompositeVideoFrameContext :
    Windows::Media::Effects::ICompositeVideoFrameContext
{
    CompositeVideoFrameContext(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProcessAudioFrameContext :
    Windows::Media::Effects::IProcessAudioFrameContext
{
    ProcessAudioFrameContext(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProcessVideoFrameContext :
    Windows::Media::Effects::IProcessVideoFrameContext
{
    ProcessVideoFrameContext(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SlowMotionEffectDefinition :
    Windows::Media::Effects::ISlowMotionEffectDefinition
{
    SlowMotionEffectDefinition(std::nullptr_t) noexcept {}
    SlowMotionEffectDefinition();
};

struct WINRT_EBO VideoCompositorDefinition :
    Windows::Media::Effects::IVideoCompositorDefinition
{
    VideoCompositorDefinition(std::nullptr_t) noexcept {}
    VideoCompositorDefinition(hstring_ref activatableClassId);
    VideoCompositorDefinition(hstring_ref activatableClassId, const Windows::Foundation::Collections::IPropertySet & props);
};

struct WINRT_EBO VideoEffectDefinition :
    Windows::Media::Effects::IVideoEffectDefinition
{
    VideoEffectDefinition(std::nullptr_t) noexcept {}
    VideoEffectDefinition(hstring_ref activatableClassId);
    VideoEffectDefinition(hstring_ref activatableClassId, const Windows::Foundation::Collections::IPropertySet & props);
};

struct WINRT_EBO VideoTransformEffectDefinition :
    Windows::Media::Effects::IVideoEffectDefinition,
    impl::require<VideoTransformEffectDefinition, Windows::Media::Effects::IVideoTransformEffectDefinition>
{
    VideoTransformEffectDefinition(std::nullptr_t) noexcept {}
    VideoTransformEffectDefinition();
};

}

}
