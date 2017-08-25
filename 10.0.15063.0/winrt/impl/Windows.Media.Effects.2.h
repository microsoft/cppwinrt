// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Editing.1.h"
#include "winrt/impl/Windows.Media.MediaProperties.1.h"
#include "winrt/impl/Windows.Media.Render.1.h"
#include "winrt/impl/Windows.Media.Transcoding.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Effects {

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
    AudioEffectDefinition(param::hstring const& activatableClassId);
    AudioEffectDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props);
};

struct AudioEffectsManager
{
    AudioEffectsManager() = delete;
    static Windows::Media::Effects::AudioRenderEffectsManager CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category);
    static Windows::Media::Effects::AudioRenderEffectsManager CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::AudioProcessing const& mode);
    static Windows::Media::Effects::AudioCaptureEffectsManager CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category);
    static Windows::Media::Effects::AudioCaptureEffectsManager CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category, Windows::Media::AudioProcessing const& mode);
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
    VideoCompositorDefinition(param::hstring const& activatableClassId);
    VideoCompositorDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props);
};

struct WINRT_EBO VideoEffectDefinition :
    Windows::Media::Effects::IVideoEffectDefinition
{
    VideoEffectDefinition(std::nullptr_t) noexcept {}
    VideoEffectDefinition(param::hstring const& activatableClassId);
    VideoEffectDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props);
};

struct WINRT_EBO VideoTransformEffectDefinition :
    Windows::Media::Effects::IVideoEffectDefinition,
    impl::require<VideoTransformEffectDefinition, Windows::Media::Effects::IVideoTransformEffectDefinition>
{
    VideoTransformEffectDefinition(std::nullptr_t) noexcept {}
    VideoTransformEffectDefinition();
};

}
