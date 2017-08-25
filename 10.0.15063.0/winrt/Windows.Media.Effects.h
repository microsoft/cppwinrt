// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Editing.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Media.Render.2.h"
#include "winrt/impl/Windows.Media.Transcoding.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Media_Effects_IAudioCaptureEffectsManager<D>::AudioCaptureEffectsChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioCaptureEffectsManager, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioCaptureEffectsManager)->add_AudioCaptureEffectsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Effects::IAudioCaptureEffectsManager> consume_Windows_Media_Effects_IAudioCaptureEffectsManager<D>::AudioCaptureEffectsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioCaptureEffectsManager, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Effects::IAudioCaptureEffectsManager>(this, &abi_t<Windows::Media::Effects::IAudioCaptureEffectsManager>::remove_AudioCaptureEffectsChanged, AudioCaptureEffectsChanged(handler));
}

template <typename D> void consume_Windows_Media_Effects_IAudioCaptureEffectsManager<D>::AudioCaptureEffectsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioCaptureEffectsManager)->remove_AudioCaptureEffectsChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect> consume_Windows_Media_Effects_IAudioCaptureEffectsManager<D>::GetAudioCaptureEffects() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect> effects{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioCaptureEffectsManager)->GetAudioCaptureEffects(put_abi(effects)));
    return effects;
}

template <typename D> Windows::Media::Effects::AudioEffectType consume_Windows_Media_Effects_IAudioEffect<D>::AudioEffectType() const
{
    Windows::Media::Effects::AudioEffectType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffect)->get_AudioEffectType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Effects_IAudioEffectDefinition<D>::ActivatableClassId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectDefinition)->get_ActivatableClassId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_Effects_IAudioEffectDefinition<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectDefinition)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioEffectDefinition consume_Windows_Media_Effects_IAudioEffectDefinitionFactory<D>::Create(param::hstring const& activatableClassId) const
{
    Windows::Media::Effects::AudioEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectDefinitionFactory)->Create(get_abi(activatableClassId), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioEffectDefinition consume_Windows_Media_Effects_IAudioEffectDefinitionFactory<D>::CreateWithProperties(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) const
{
    Windows::Media::Effects::AudioEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectDefinitionFactory)->CreateWithProperties(get_abi(activatableClassId), get_abi(props), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioRenderEffectsManager consume_Windows_Media_Effects_IAudioEffectsManagerStatics<D>::CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category) const
{
    Windows::Media::Effects::AudioRenderEffectsManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectsManagerStatics)->CreateAudioRenderEffectsManager(get_abi(deviceId), get_abi(category), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioRenderEffectsManager consume_Windows_Media_Effects_IAudioEffectsManagerStatics<D>::CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::AudioProcessing const& mode) const
{
    Windows::Media::Effects::AudioRenderEffectsManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectsManagerStatics)->CreateAudioRenderEffectsManagerWithMode(get_abi(deviceId), get_abi(category), get_abi(mode), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioCaptureEffectsManager consume_Windows_Media_Effects_IAudioEffectsManagerStatics<D>::CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category) const
{
    Windows::Media::Effects::AudioCaptureEffectsManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectsManagerStatics)->CreateAudioCaptureEffectsManager(get_abi(deviceId), get_abi(category), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioCaptureEffectsManager consume_Windows_Media_Effects_IAudioEffectsManagerStatics<D>::CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category, Windows::Media::AudioProcessing const& mode) const
{
    Windows::Media::Effects::AudioCaptureEffectsManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectsManagerStatics)->CreateAudioCaptureEffectsManagerWithMode(get_abi(deviceId), get_abi(category), get_abi(mode), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Effects_IAudioRenderEffectsManager<D>::AudioRenderEffectsChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioRenderEffectsManager, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager)->add_AudioRenderEffectsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Effects::IAudioRenderEffectsManager> consume_Windows_Media_Effects_IAudioRenderEffectsManager<D>::AudioRenderEffectsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioRenderEffectsManager, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Effects::IAudioRenderEffectsManager>(this, &abi_t<Windows::Media::Effects::IAudioRenderEffectsManager>::remove_AudioRenderEffectsChanged, AudioRenderEffectsChanged(handler));
}

template <typename D> void consume_Windows_Media_Effects_IAudioRenderEffectsManager<D>::AudioRenderEffectsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager)->remove_AudioRenderEffectsChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect> consume_Windows_Media_Effects_IAudioRenderEffectsManager<D>::GetAudioRenderEffects() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect> effects{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager)->GetAudioRenderEffects(put_abi(effects)));
    return effects;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType consume_Windows_Media_Effects_IAudioRenderEffectsManager2<D>::EffectsProviderThumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager2)->get_EffectsProviderThumbnail(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Effects_IAudioRenderEffectsManager2<D>::EffectsProviderSettingsLabel() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager2)->get_EffectsProviderSettingsLabel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IAudioRenderEffectsManager2<D>::ShowSettingsUI() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager2)->ShowSettingsUI());
}

template <typename D> bool consume_Windows_Media_Effects_IBasicAudioEffect<D>::UseInputFrameForOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->get_UseInputFrameForOutput(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::AudioEncodingProperties> consume_Windows_Media_Effects_IBasicAudioEffect<D>::SupportedEncodingProperties() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::AudioEncodingProperties> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->get_SupportedEncodingProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IBasicAudioEffect<D>::SetEncodingProperties(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->SetEncodingProperties(get_abi(encodingProperties)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicAudioEffect<D>::ProcessFrame(Windows::Media::Effects::ProcessAudioFrameContext const& context) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->ProcessFrame(get_abi(context)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicAudioEffect<D>::Close(Windows::Media::Effects::MediaEffectClosedReason const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->Close(get_abi(reason)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicAudioEffect<D>::DiscardQueuedFrames() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->DiscardQueuedFrames());
}

template <typename D> bool consume_Windows_Media_Effects_IBasicVideoEffect<D>::IsReadOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->get_IsReadOnly(&value));
    return value;
}

template <typename D> Windows::Media::Effects::MediaMemoryTypes consume_Windows_Media_Effects_IBasicVideoEffect<D>::SupportedMemoryTypes() const
{
    Windows::Media::Effects::MediaMemoryTypes value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->get_SupportedMemoryTypes(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Effects_IBasicVideoEffect<D>::TimeIndependent() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->get_TimeIndependent(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::VideoEncodingProperties> consume_Windows_Media_Effects_IBasicVideoEffect<D>::SupportedEncodingProperties() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::VideoEncodingProperties> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->get_SupportedEncodingProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IBasicVideoEffect<D>::SetEncodingProperties(Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->SetEncodingProperties(get_abi(encodingProperties), get_abi(device)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicVideoEffect<D>::ProcessFrame(Windows::Media::Effects::ProcessVideoFrameContext const& context) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->ProcessFrame(get_abi(context)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicVideoEffect<D>::Close(Windows::Media::Effects::MediaEffectClosedReason const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->Close(get_abi(reason)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicVideoEffect<D>::DiscardQueuedFrames() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->DiscardQueuedFrames());
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> consume_Windows_Media_Effects_ICompositeVideoFrameContext<D>::SurfacesToOverlay() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ICompositeVideoFrameContext)->get_SurfacesToOverlay(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Effects_ICompositeVideoFrameContext<D>::BackgroundFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ICompositeVideoFrameContext)->get_BackgroundFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Effects_ICompositeVideoFrameContext<D>::OutputFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ICompositeVideoFrameContext)->get_OutputFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Editing::MediaOverlay consume_Windows_Media_Effects_ICompositeVideoFrameContext<D>::GetOverlayForSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surfaceToOverlay) const
{
    Windows::Media::Editing::MediaOverlay value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ICompositeVideoFrameContext)->GetOverlayForSurface(get_abi(surfaceToOverlay), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::AudioFrame consume_Windows_Media_Effects_IProcessAudioFrameContext<D>::InputFrame() const
{
    Windows::Media::AudioFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IProcessAudioFrameContext)->get_InputFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::AudioFrame consume_Windows_Media_Effects_IProcessAudioFrameContext<D>::OutputFrame() const
{
    Windows::Media::AudioFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IProcessAudioFrameContext)->get_OutputFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Effects_IProcessVideoFrameContext<D>::InputFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IProcessVideoFrameContext)->get_InputFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Effects_IProcessVideoFrameContext<D>::OutputFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IProcessVideoFrameContext)->get_OutputFrame(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Effects_ISlowMotionEffectDefinition<D>::TimeStretchRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ISlowMotionEffectDefinition)->get_TimeStretchRate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_ISlowMotionEffectDefinition<D>::TimeStretchRate(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ISlowMotionEffectDefinition)->put_TimeStretchRate(value));
}

template <typename D> bool consume_Windows_Media_Effects_IVideoCompositor<D>::TimeIndependent() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->get_TimeIndependent(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoCompositor<D>::SetEncodingProperties(Windows::Media::MediaProperties::VideoEncodingProperties const& backgroundProperties, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->SetEncodingProperties(get_abi(backgroundProperties), get_abi(device)));
}

template <typename D> void consume_Windows_Media_Effects_IVideoCompositor<D>::CompositeFrame(Windows::Media::Effects::CompositeVideoFrameContext const& context) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->CompositeFrame(get_abi(context)));
}

template <typename D> void consume_Windows_Media_Effects_IVideoCompositor<D>::Close(Windows::Media::Effects::MediaEffectClosedReason const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->Close(get_abi(reason)));
}

template <typename D> void consume_Windows_Media_Effects_IVideoCompositor<D>::DiscardQueuedFrames() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->DiscardQueuedFrames());
}

template <typename D> hstring consume_Windows_Media_Effects_IVideoCompositorDefinition<D>::ActivatableClassId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositorDefinition)->get_ActivatableClassId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_Effects_IVideoCompositorDefinition<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositorDefinition)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::VideoCompositorDefinition consume_Windows_Media_Effects_IVideoCompositorDefinitionFactory<D>::Create(param::hstring const& activatableClassId) const
{
    Windows::Media::Effects::VideoCompositorDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositorDefinitionFactory)->Create(get_abi(activatableClassId), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::VideoCompositorDefinition consume_Windows_Media_Effects_IVideoCompositorDefinitionFactory<D>::CreateWithProperties(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) const
{
    Windows::Media::Effects::VideoCompositorDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositorDefinitionFactory)->CreateWithProperties(get_abi(activatableClassId), get_abi(props), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Effects_IVideoEffectDefinition<D>::ActivatableClassId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoEffectDefinition)->get_ActivatableClassId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_Effects_IVideoEffectDefinition<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoEffectDefinition)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::VideoEffectDefinition consume_Windows_Media_Effects_IVideoEffectDefinitionFactory<D>::Create(param::hstring const& activatableClassId) const
{
    Windows::Media::Effects::VideoEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoEffectDefinitionFactory)->Create(get_abi(activatableClassId), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::VideoEffectDefinition consume_Windows_Media_Effects_IVideoEffectDefinitionFactory<D>::CreateWithProperties(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) const
{
    Windows::Media::Effects::VideoEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoEffectDefinitionFactory)->CreateWithProperties(get_abi(activatableClassId), get_abi(props), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::PaddingColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_PaddingColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::PaddingColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_PaddingColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::OutputSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_OutputSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::OutputSize(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_OutputSize(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::CropRectangle() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_CropRectangle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::CropRectangle(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_CropRectangle(get_abi(value)));
}

template <typename D> Windows::Media::MediaProperties::MediaRotation consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::Rotation() const
{
    Windows::Media::MediaProperties::MediaRotation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_Rotation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::Rotation(Windows::Media::MediaProperties::MediaRotation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_Rotation(get_abi(value)));
}

template <typename D> Windows::Media::MediaProperties::MediaMirroringOptions consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::Mirror() const
{
    Windows::Media::MediaProperties::MediaMirroringOptions value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_Mirror(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::Mirror(Windows::Media::MediaProperties::MediaMirroringOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_Mirror(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::ProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_ProcessingAlgorithm(get_abi(value)));
}

template <typename D> Windows::Media::Transcoding::MediaVideoProcessingAlgorithm consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::ProcessingAlgorithm() const
{
    Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_ProcessingAlgorithm(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioCaptureEffectsManager> : produce_base<D, Windows::Media::Effects::IAudioCaptureEffectsManager>
{
    HRESULT __stdcall add_AudioCaptureEffectsChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AudioCaptureEffectsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioCaptureEffectsManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioCaptureEffectsChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioCaptureEffectsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAudioCaptureEffects(::IUnknown** effects) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *effects = detach_abi(this->shim().GetAudioCaptureEffects());
            return S_OK;
        }
        catch (...)
        {
            *effects = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioEffect> : produce_base<D, Windows::Media::Effects::IAudioEffect>
{
    HRESULT __stdcall get_AudioEffectType(abi_t<Windows::Media::Effects::AudioEffectType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AudioEffectType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioEffectDefinition> : produce_base<D, Windows::Media::Effects::IAudioEffectDefinition>
{
    HRESULT __stdcall get_ActivatableClassId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivatableClassId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
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
struct produce<D, Windows::Media::Effects::IAudioEffectDefinitionFactory> : produce_base<D, Windows::Media::Effects::IAudioEffectDefinitionFactory>
{
    HRESULT __stdcall Create(HSTRING activatableClassId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&activatableClassId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithProperties(HSTRING activatableClassId, ::IUnknown* props, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithProperties(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&props)));
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
struct produce<D, Windows::Media::Effects::IAudioEffectsManagerStatics> : produce_base<D, Windows::Media::Effects::IAudioEffectsManagerStatics>
{
    HRESULT __stdcall CreateAudioRenderEffectsManager(HSTRING deviceId, abi_t<Windows::Media::Render::AudioRenderCategory> category, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAudioRenderEffectsManager(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAudioRenderEffectsManagerWithMode(HSTRING deviceId, abi_t<Windows::Media::Render::AudioRenderCategory> category, abi_t<Windows::Media::AudioProcessing> mode, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAudioRenderEffectsManager(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&category), *reinterpret_cast<Windows::Media::AudioProcessing const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAudioCaptureEffectsManager(HSTRING deviceId, abi_t<Windows::Media::Capture::MediaCategory> category, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAudioCaptureEffectsManager(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAudioCaptureEffectsManagerWithMode(HSTRING deviceId, abi_t<Windows::Media::Capture::MediaCategory> category, abi_t<Windows::Media::AudioProcessing> mode, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAudioCaptureEffectsManager(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<Windows::Media::AudioProcessing const*>(&mode)));
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
struct produce<D, Windows::Media::Effects::IAudioRenderEffectsManager> : produce_base<D, Windows::Media::Effects::IAudioRenderEffectsManager>
{
    HRESULT __stdcall add_AudioRenderEffectsChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AudioRenderEffectsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioRenderEffectsManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioRenderEffectsChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioRenderEffectsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAudioRenderEffects(::IUnknown** effects) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *effects = detach_abi(this->shim().GetAudioRenderEffects());
            return S_OK;
        }
        catch (...)
        {
            *effects = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioRenderEffectsManager2> : produce_base<D, Windows::Media::Effects::IAudioRenderEffectsManager2>
{
    HRESULT __stdcall get_EffectsProviderThumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EffectsProviderThumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EffectsProviderSettingsLabel(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EffectsProviderSettingsLabel());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowSettingsUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowSettingsUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IBasicAudioEffect> : produce_base<D, Windows::Media::Effects::IBasicAudioEffect>
{
    HRESULT __stdcall get_UseInputFrameForOutput(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UseInputFrameForOutput());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedEncodingProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedEncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEncodingProperties(::IUnknown* encodingProperties) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEncodingProperties(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessFrame(::IUnknown* context) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessFrame(*reinterpret_cast<Windows::Media::Effects::ProcessAudioFrameContext const*>(&context));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Close(abi_t<Windows::Media::Effects::MediaEffectClosedReason> reason) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close(*reinterpret_cast<Windows::Media::Effects::MediaEffectClosedReason const*>(&reason));
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
};

template <typename D>
struct produce<D, Windows::Media::Effects::IBasicVideoEffect> : produce_base<D, Windows::Media::Effects::IBasicVideoEffect>
{
    HRESULT __stdcall get_IsReadOnly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsReadOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedMemoryTypes(abi_t<Windows::Media::Effects::MediaMemoryTypes>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedMemoryTypes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TimeIndependent(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeIndependent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedEncodingProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedEncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEncodingProperties(::IUnknown* encodingProperties, ::IUnknown* device) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEncodingProperties(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProcessFrame(::IUnknown* context) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessFrame(*reinterpret_cast<Windows::Media::Effects::ProcessVideoFrameContext const*>(&context));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Close(abi_t<Windows::Media::Effects::MediaEffectClosedReason> reason) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close(*reinterpret_cast<Windows::Media::Effects::MediaEffectClosedReason const*>(&reason));
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
};

template <typename D>
struct produce<D, Windows::Media::Effects::ICompositeVideoFrameContext> : produce_base<D, Windows::Media::Effects::ICompositeVideoFrameContext>
{
    HRESULT __stdcall get_SurfacesToOverlay(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SurfacesToOverlay());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetOverlayForSurface(::IUnknown* surfaceToOverlay, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetOverlayForSurface(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surfaceToOverlay)));
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
struct produce<D, Windows::Media::Effects::IProcessAudioFrameContext> : produce_base<D, Windows::Media::Effects::IProcessAudioFrameContext>
{
    HRESULT __stdcall get_InputFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InputFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputFrame());
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
struct produce<D, Windows::Media::Effects::IProcessVideoFrameContext> : produce_base<D, Windows::Media::Effects::IProcessVideoFrameContext>
{
    HRESULT __stdcall get_InputFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InputFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputFrame());
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
struct produce<D, Windows::Media::Effects::ISlowMotionEffectDefinition> : produce_base<D, Windows::Media::Effects::ISlowMotionEffectDefinition>
{
    HRESULT __stdcall get_TimeStretchRate(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeStretchRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TimeStretchRate(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimeStretchRate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoCompositor> : produce_base<D, Windows::Media::Effects::IVideoCompositor>
{
    HRESULT __stdcall get_TimeIndependent(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TimeIndependent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEncodingProperties(::IUnknown* backgroundProperties, ::IUnknown* device) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEncodingProperties(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingProperties const*>(&backgroundProperties), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CompositeFrame(::IUnknown* context) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositeFrame(*reinterpret_cast<Windows::Media::Effects::CompositeVideoFrameContext const*>(&context));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Close(abi_t<Windows::Media::Effects::MediaEffectClosedReason> reason) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close(*reinterpret_cast<Windows::Media::Effects::MediaEffectClosedReason const*>(&reason));
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
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoCompositorDefinition> : produce_base<D, Windows::Media::Effects::IVideoCompositorDefinition>
{
    HRESULT __stdcall get_ActivatableClassId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivatableClassId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
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
struct produce<D, Windows::Media::Effects::IVideoCompositorDefinitionFactory> : produce_base<D, Windows::Media::Effects::IVideoCompositorDefinitionFactory>
{
    HRESULT __stdcall Create(HSTRING activatableClassId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&activatableClassId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithProperties(HSTRING activatableClassId, ::IUnknown* props, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithProperties(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&props)));
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
struct produce<D, Windows::Media::Effects::IVideoEffectDefinition> : produce_base<D, Windows::Media::Effects::IVideoEffectDefinition>
{
    HRESULT __stdcall get_ActivatableClassId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivatableClassId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
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
struct produce<D, Windows::Media::Effects::IVideoEffectDefinitionFactory> : produce_base<D, Windows::Media::Effects::IVideoEffectDefinitionFactory>
{
    HRESULT __stdcall Create(HSTRING activatableClassId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&activatableClassId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithProperties(HSTRING activatableClassId, ::IUnknown* props, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithProperties(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&props)));
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
struct produce<D, Windows::Media::Effects::IVideoTransformEffectDefinition> : produce_base<D, Windows::Media::Effects::IVideoTransformEffectDefinition>
{
    HRESULT __stdcall get_PaddingColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaddingColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PaddingColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PaddingColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutputSize(abi_t<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutputSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CropRectangle(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CropRectangle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CropRectangle(abi_t<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CropRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rotation(abi_t<Windows::Media::MediaProperties::MediaRotation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Rotation(abi_t<Windows::Media::MediaProperties::MediaRotation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rotation(*reinterpret_cast<Windows::Media::MediaProperties::MediaRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mirror(abi_t<Windows::Media::MediaProperties::MediaMirroringOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mirror());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mirror(abi_t<Windows::Media::MediaProperties::MediaMirroringOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mirror(*reinterpret_cast<Windows::Media::MediaProperties::MediaMirroringOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProcessingAlgorithm(abi_t<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessingAlgorithm(*reinterpret_cast<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessingAlgorithm(abi_t<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProcessingAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Effects {

inline AudioEffectDefinition::AudioEffectDefinition(param::hstring const& activatableClassId) :
    AudioEffectDefinition(get_activation_factory<AudioEffectDefinition, Windows::Media::Effects::IAudioEffectDefinitionFactory>().Create(activatableClassId))
{}

inline AudioEffectDefinition::AudioEffectDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) :
    AudioEffectDefinition(get_activation_factory<AudioEffectDefinition, Windows::Media::Effects::IAudioEffectDefinitionFactory>().CreateWithProperties(activatableClassId, props))
{}

inline Windows::Media::Effects::AudioRenderEffectsManager AudioEffectsManager::CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category)
{
    return get_activation_factory<AudioEffectsManager, Windows::Media::Effects::IAudioEffectsManagerStatics>().CreateAudioRenderEffectsManager(deviceId, category);
}

inline Windows::Media::Effects::AudioRenderEffectsManager AudioEffectsManager::CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::AudioProcessing const& mode)
{
    return get_activation_factory<AudioEffectsManager, Windows::Media::Effects::IAudioEffectsManagerStatics>().CreateAudioRenderEffectsManager(deviceId, category, mode);
}

inline Windows::Media::Effects::AudioCaptureEffectsManager AudioEffectsManager::CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category)
{
    return get_activation_factory<AudioEffectsManager, Windows::Media::Effects::IAudioEffectsManagerStatics>().CreateAudioCaptureEffectsManager(deviceId, category);
}

inline Windows::Media::Effects::AudioCaptureEffectsManager AudioEffectsManager::CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category, Windows::Media::AudioProcessing const& mode)
{
    return get_activation_factory<AudioEffectsManager, Windows::Media::Effects::IAudioEffectsManagerStatics>().CreateAudioCaptureEffectsManager(deviceId, category, mode);
}

inline SlowMotionEffectDefinition::SlowMotionEffectDefinition() :
    SlowMotionEffectDefinition(activate_instance<SlowMotionEffectDefinition>())
{}

inline VideoCompositorDefinition::VideoCompositorDefinition(param::hstring const& activatableClassId) :
    VideoCompositorDefinition(get_activation_factory<VideoCompositorDefinition, Windows::Media::Effects::IVideoCompositorDefinitionFactory>().Create(activatableClassId))
{}

inline VideoCompositorDefinition::VideoCompositorDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) :
    VideoCompositorDefinition(get_activation_factory<VideoCompositorDefinition, Windows::Media::Effects::IVideoCompositorDefinitionFactory>().CreateWithProperties(activatableClassId, props))
{}

inline VideoEffectDefinition::VideoEffectDefinition(param::hstring const& activatableClassId) :
    VideoEffectDefinition(get_activation_factory<VideoEffectDefinition, Windows::Media::Effects::IVideoEffectDefinitionFactory>().Create(activatableClassId))
{}

inline VideoEffectDefinition::VideoEffectDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) :
    VideoEffectDefinition(get_activation_factory<VideoEffectDefinition, Windows::Media::Effects::IVideoEffectDefinitionFactory>().CreateWithProperties(activatableClassId, props))
{}

inline VideoTransformEffectDefinition::VideoTransformEffectDefinition() :
    VideoTransformEffectDefinition(activate_instance<VideoTransformEffectDefinition>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Effects::IAudioCaptureEffectsManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IAudioCaptureEffectsManager> {};

template<> struct hash<winrt::Windows::Media::Effects::IAudioEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IAudioEffect> {};

template<> struct hash<winrt::Windows::Media::Effects::IAudioEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IAudioEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Effects::IAudioEffectDefinitionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IAudioEffectDefinitionFactory> {};

template<> struct hash<winrt::Windows::Media::Effects::IAudioEffectsManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IAudioEffectsManagerStatics> {};

template<> struct hash<winrt::Windows::Media::Effects::IAudioRenderEffectsManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IAudioRenderEffectsManager> {};

template<> struct hash<winrt::Windows::Media::Effects::IAudioRenderEffectsManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IAudioRenderEffectsManager2> {};

template<> struct hash<winrt::Windows::Media::Effects::IBasicAudioEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IBasicAudioEffect> {};

template<> struct hash<winrt::Windows::Media::Effects::IBasicVideoEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IBasicVideoEffect> {};

template<> struct hash<winrt::Windows::Media::Effects::ICompositeVideoFrameContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::ICompositeVideoFrameContext> {};

template<> struct hash<winrt::Windows::Media::Effects::IProcessAudioFrameContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IProcessAudioFrameContext> {};

template<> struct hash<winrt::Windows::Media::Effects::IProcessVideoFrameContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IProcessVideoFrameContext> {};

template<> struct hash<winrt::Windows::Media::Effects::ISlowMotionEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::ISlowMotionEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Effects::IVideoCompositor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IVideoCompositor> {};

template<> struct hash<winrt::Windows::Media::Effects::IVideoCompositorDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IVideoCompositorDefinition> {};

template<> struct hash<winrt::Windows::Media::Effects::IVideoCompositorDefinitionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IVideoCompositorDefinitionFactory> {};

template<> struct hash<winrt::Windows::Media::Effects::IVideoEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IVideoEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Effects::IVideoEffectDefinitionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IVideoEffectDefinitionFactory> {};

template<> struct hash<winrt::Windows::Media::Effects::IVideoTransformEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::IVideoTransformEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Effects::AudioCaptureEffectsManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::AudioCaptureEffectsManager> {};

template<> struct hash<winrt::Windows::Media::Effects::AudioEffect> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::AudioEffect> {};

template<> struct hash<winrt::Windows::Media::Effects::AudioEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::AudioEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Effects::AudioEffectsManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::AudioEffectsManager> {};

template<> struct hash<winrt::Windows::Media::Effects::AudioRenderEffectsManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::AudioRenderEffectsManager> {};

template<> struct hash<winrt::Windows::Media::Effects::CompositeVideoFrameContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::CompositeVideoFrameContext> {};

template<> struct hash<winrt::Windows::Media::Effects::ProcessAudioFrameContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::ProcessAudioFrameContext> {};

template<> struct hash<winrt::Windows::Media::Effects::ProcessVideoFrameContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::ProcessVideoFrameContext> {};

template<> struct hash<winrt::Windows::Media::Effects::SlowMotionEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::SlowMotionEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Effects::VideoCompositorDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::VideoCompositorDefinition> {};

template<> struct hash<winrt::Windows::Media::Effects::VideoEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::VideoEffectDefinition> {};

template<> struct hash<winrt::Windows::Media::Effects::VideoTransformEffectDefinition> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Effects::VideoTransformEffectDefinition> {};

}

WINRT_WARNING_POP
