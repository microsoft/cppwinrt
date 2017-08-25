// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.0.h"
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Capture.0.h"
#include "winrt/impl/Windows.Media.Editing.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"
#include "winrt/impl/Windows.Media.Render.0.h"
#include "winrt/impl/Windows.Media.Transcoding.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Media.Effects.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Effects {

struct WINRT_EBO IAudioCaptureEffectsManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioCaptureEffectsManager>
{
    IAudioCaptureEffectsManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEffect>
{
    IAudioEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEffectDefinition>
{
    IAudioEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioEffectDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEffectDefinitionFactory>
{
    IAudioEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioEffectsManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEffectsManagerStatics>
{
    IAudioEffectsManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioRenderEffectsManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioRenderEffectsManager>
{
    IAudioRenderEffectsManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("Not supported starting in windows 10")]] IAudioRenderEffectsManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioRenderEffectsManager2>
{
    IAudioRenderEffectsManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBasicAudioEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBasicAudioEffect>,
    impl::require<IBasicAudioEffect, Windows::Media::IMediaExtension>
{
    IBasicAudioEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBasicVideoEffect :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBasicVideoEffect>,
    impl::require<IBasicVideoEffect, Windows::Media::IMediaExtension>
{
    IBasicVideoEffect(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositeVideoFrameContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositeVideoFrameContext>
{
    ICompositeVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessAudioFrameContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessAudioFrameContext>
{
    IProcessAudioFrameContext(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessVideoFrameContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessVideoFrameContext>
{
    IProcessVideoFrameContext(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISlowMotionEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISlowMotionEffectDefinition>,
    impl::require<ISlowMotionEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
{
    ISlowMotionEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoCompositor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoCompositor>,
    impl::require<IVideoCompositor, Windows::Media::IMediaExtension>
{
    IVideoCompositor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoCompositorDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoCompositorDefinition>
{
    IVideoCompositorDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoCompositorDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoCompositorDefinitionFactory>
{
    IVideoCompositorDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEffectDefinition>
{
    IVideoEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoEffectDefinitionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEffectDefinitionFactory>
{
    IVideoEffectDefinitionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoTransformEffectDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoTransformEffectDefinition>,
    impl::require<IVideoTransformEffectDefinition, Windows::Media::Effects::IVideoEffectDefinition>
{
    IVideoTransformEffectDefinition(std::nullptr_t = nullptr) noexcept {}
};

}
