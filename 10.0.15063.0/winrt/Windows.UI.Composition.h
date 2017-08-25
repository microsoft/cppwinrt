// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_IAmbientLight<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAmbientLight)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IAmbientLight<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAmbientLight)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionColorSpace consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>::InterpolationColorSpace() const
{
    Windows::UI::Composition::CompositionColorSpace value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IColorKeyFrameAnimation)->get_InterpolationColorSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>::InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IColorKeyFrameAnimation)->put_InterpolationColorSpace(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IColorKeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IColorKeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::ClearAllParameters() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->ClearAllParameters());
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::ClearParameter(param::hstring const& key) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->ClearParameter(get_abi(key)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetColorParameter(param::hstring const& key, Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetColorParameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetMatrix3x2Parameter(param::hstring const& key, Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetMatrix3x2Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetMatrix4x4Parameter(param::hstring const& key, Windows::Foundation::Numerics::float4x4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetMatrix4x4Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetQuaternionParameter(param::hstring const& key, Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetQuaternionParameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetReferenceParameter(param::hstring const& key, Windows::UI::Composition::CompositionObject const& compositionObject) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetReferenceParameter(get_abi(key), get_abi(compositionObject)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetScalarParameter(param::hstring const& key, float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetScalarParameter(get_abi(key), value));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetVector2Parameter(param::hstring const& key, Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetVector2Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetVector3Parameter(param::hstring const& key, Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetVector3Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetVector4Parameter(param::hstring const& key, Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetVector4Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation2<D>::SetBooleanParameter(param::hstring const& key, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation2)->SetBooleanParameter(get_abi(key), value));
}

template <typename D> hstring consume_Windows_UI_Composition_ICompositionAnimation2<D>::Target() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation2)->get_Target(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation2<D>::Target(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation2)->put_Target(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Composition_ICompositionAnimationGroup<D>::Count() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimationGroup)->get_Count(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimationGroup<D>::Add(Windows::UI::Composition::CompositionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimationGroup)->Add(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimationGroup<D>::Remove(Windows::UI::Composition::CompositionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimationGroup)->Remove(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimationGroup<D>::RemoveAll() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimationGroup)->RemoveAll());
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionCapabilities<D>::AreEffectsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilities)->AreEffectsSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionCapabilities<D>::AreEffectsFast() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilities)->AreEffectsFast(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Composition_ICompositionCapabilities<D>::Changed(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilities)->add_Changed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Composition::ICompositionCapabilities> consume_Windows_UI_Composition_ICompositionCapabilities<D>::Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Composition::ICompositionCapabilities>(this, &abi_t<Windows::UI::Composition::ICompositionCapabilities>::remove_Changed, Changed(handler));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionCapabilities<D>::Changed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilities)->remove_Changed(get_abi(token)));
}

template <typename D> Windows::UI::Composition::CompositionCapabilities consume_Windows_UI_Composition_ICompositionCapabilitiesStatics<D>::GetForCurrentView() const
{
    Windows::UI::Composition::CompositionCapabilities current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilitiesStatics)->GetForCurrentView(put_abi(current)));
    return current;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionClip2<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_AnchorPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_AnchorPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionClip2<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_CenterPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::CenterPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_CenterPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionClip2<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionClip2<D>::RotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_RotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::RotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_RotationAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionClip2<D>::RotationAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionClip2<D>::Scale() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_Scale(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::Scale(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_Scale(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Composition_ICompositionClip2<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_ICompositionColorBrush<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionColorBrush)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionColorBrush<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionColorBrush)->put_Color(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionCommitBatch<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCommitBatch)->get_IsActive(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionCommitBatch<D>::IsEnded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCommitBatch)->get_IsEnded(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Composition_ICompositionCommitBatch<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCommitBatch)->add_Completed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Composition::ICompositionCommitBatch> consume_Windows_UI_Composition_ICompositionCommitBatch<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Composition::ICompositionCommitBatch>(this, &abi_t<Windows::UI::Composition::ICompositionCommitBatch>::remove_Completed, Completed(handler));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionCommitBatch<D>::Completed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCommitBatch)->remove_Completed(get_abi(token)));
}

template <typename D> Windows::Graphics::DirectX::DirectXAlphaMode consume_Windows_UI_Composition_ICompositionDrawingSurface<D>::AlphaMode() const
{
    Windows::Graphics::DirectX::DirectXAlphaMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat consume_Windows_UI_Composition_ICompositionDrawingSurface<D>::PixelFormat() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface)->get_PixelFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Composition_ICompositionDrawingSurface<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface)->get_Size(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::SizeInt32 consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::SizeInt32() const
{
    Windows::Graphics::SizeInt32 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->get_SizeInt32(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::Resize(Windows::Graphics::SizeInt32 const& sizePixels) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->Resize(get_abi(sizePixels)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::Scroll(Windows::Graphics::PointInt32 const& offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->Scroll(get_abi(offset)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::Scroll(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& scrollRect) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->ScrollRect(get_abi(offset), get_abi(scrollRect)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->ScrollWithClip(get_abi(offset), get_abi(clipRect)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect, Windows::Graphics::RectInt32 const& scrollRect) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->ScrollRectWithClip(get_abi(offset), get_abi(clipRect), get_abi(scrollRect)));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionEffectBrush<D>::GetSourceParameter(param::hstring const& name) const
{
    Windows::UI::Composition::CompositionBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectBrush)->GetSourceParameter(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionEffectBrush<D>::SetSourceParameter(param::hstring const& name, Windows::UI::Composition::CompositionBrush const& source) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectBrush)->SetSourceParameter(get_abi(name), get_abi(source)));
}

template <typename D> Windows::UI::Composition::CompositionEffectBrush consume_Windows_UI_Composition_ICompositionEffectFactory<D>::CreateBrush() const
{
    Windows::UI::Composition::CompositionEffectBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectFactory)->CreateBrush(put_abi(result)));
    return result;
}

template <typename D> HRESULT consume_Windows_UI_Composition_ICompositionEffectFactory<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectFactory)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionEffectFactoryLoadStatus consume_Windows_UI_Composition_ICompositionEffectFactory<D>::LoadStatus() const
{
    Windows::UI::Composition::CompositionEffectFactoryLoadStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectFactory)->get_LoadStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Composition_ICompositionEffectSourceParameter<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectSourceParameter)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionEffectSourceParameter consume_Windows_UI_Composition_ICompositionEffectSourceParameterFactory<D>::Create(param::hstring const& name) const
{
    Windows::UI::Composition::CompositionEffectSourceParameter instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectSourceParameterFactory)->Create(get_abi(name), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Composition::CompositionDrawingSurface consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>::CreateDrawingSurface(Windows::Foundation::Size const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const
{
    Windows::UI::Composition::CompositionDrawingSurface result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice)->CreateDrawingSurface(get_abi(sizePixels), get_abi(pixelFormat), get_abi(alphaMode), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>::RenderingDeviceReplaced(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice)->add_RenderingDeviceReplaced(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Composition::ICompositionGraphicsDevice> consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>::RenderingDeviceReplaced(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Composition::ICompositionGraphicsDevice>(this, &abi_t<Windows::UI::Composition::ICompositionGraphicsDevice>::remove_RenderingDeviceReplaced, RenderingDeviceReplaced(handler));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>::RenderingDeviceReplaced(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice)->remove_RenderingDeviceReplaced(get_abi(token)));
}

template <typename D> Windows::UI::Composition::CompositionDrawingSurface consume_Windows_UI_Composition_ICompositionGraphicsDevice2<D>::CreateDrawingSurface2(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const
{
    Windows::UI::Composition::CompositionDrawingSurface result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice2)->CreateDrawingSurface2(get_abi(sizePixels), get_abi(pixelFormat), get_abi(alphaMode), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionVirtualDrawingSurface consume_Windows_UI_Composition_ICompositionGraphicsDevice2<D>::CreateVirtualDrawingSurface(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const
{
    Windows::UI::Composition::CompositionVirtualDrawingSurface result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice2)->CreateVirtualDrawingSurface(get_abi(sizePixels), get_abi(pixelFormat), get_abi(alphaMode), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::VisualUnorderedCollection consume_Windows_UI_Composition_ICompositionLight<D>::Targets() const
{
    Windows::UI::Composition::VisualUnorderedCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLight)->get_Targets(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionMaskBrush<D>::Mask() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionMaskBrush)->get_Mask(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionMaskBrush<D>::Mask(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionMaskBrush)->put_Mask(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionMaskBrush<D>::Source() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionMaskBrush)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionMaskBrush<D>::Source(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionMaskBrush)->put_Source(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::BottomInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_BottomInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::BottomInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_BottomInset(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::BottomInsetScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_BottomInsetScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::BottomInsetScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_BottomInsetScale(value));
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::IsCenterHollow() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_IsCenterHollow(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::IsCenterHollow(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_IsCenterHollow(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::LeftInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_LeftInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::LeftInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_LeftInset(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::LeftInsetScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_LeftInsetScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::LeftInsetScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_LeftInsetScale(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::RightInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_RightInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::RightInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_RightInset(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::RightInsetScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_RightInsetScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::RightInsetScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_RightInsetScale(value));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::Source() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::Source(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_Source(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::TopInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_TopInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::TopInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_TopInset(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::TopInsetScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_TopInsetScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::TopInsetScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_TopInsetScale(value));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::SetInsets(float inset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->SetInsets(inset));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::SetInsets(float left, float top, float right, float bottom) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->SetInsetsWithValues(left, top, right, bottom));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::SetInsetScales(float scale) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->SetInsetScales(scale));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::SetInsetScales(float left, float top, float right, float bottom) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->SetInsetScalesWithValues(left, top, right, bottom));
}

template <typename D> Windows::UI::Composition::Compositor consume_Windows_UI_Composition_ICompositionObject<D>::Compositor() const
{
    Windows::UI::Composition::Compositor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->get_Compositor(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher consume_Windows_UI_Composition_ICompositionObject<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->get_Dispatcher(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionPropertySet consume_Windows_UI_Composition_ICompositionObject<D>::Properties() const
{
    Windows::UI::Composition::CompositionPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject<D>::StartAnimation(param::hstring const& propertyName, Windows::UI::Composition::CompositionAnimation const& animation) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->StartAnimation(get_abi(propertyName), get_abi(animation)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject<D>::StopAnimation(param::hstring const& propertyName) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->StopAnimation(get_abi(propertyName)));
}

template <typename D> hstring consume_Windows_UI_Composition_ICompositionObject2<D>::Comment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->get_Comment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject2<D>::Comment(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->put_Comment(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ImplicitAnimationCollection consume_Windows_UI_Composition_ICompositionObject2<D>::ImplicitAnimations() const
{
    Windows::UI::Composition::ImplicitAnimationCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->get_ImplicitAnimations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject2<D>::ImplicitAnimations(Windows::UI::Composition::ImplicitAnimationCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->put_ImplicitAnimations(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject2<D>::StartAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->StartAnimationGroup(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject2<D>::StopAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->StopAnimationGroup(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertColor(param::hstring const& propertyName, Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertColor(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertMatrix3x2(param::hstring const& propertyName, Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertMatrix3x2(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertMatrix4x4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4x4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertMatrix4x4(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertQuaternion(param::hstring const& propertyName, Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertQuaternion(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertScalar(param::hstring const& propertyName, float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertScalar(get_abi(propertyName), value));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertVector2(param::hstring const& propertyName, Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertVector2(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertVector3(param::hstring const& propertyName, Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertVector3(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertVector4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertVector4(get_abi(propertyName), get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetColor(param::hstring const& propertyName, Windows::UI::Color& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetColor(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetMatrix3x2(param::hstring const& propertyName, Windows::Foundation::Numerics::float3x2& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetMatrix3x2(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetMatrix4x4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4x4& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetMatrix4x4(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetQuaternion(param::hstring const& propertyName, Windows::Foundation::Numerics::quaternion& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetQuaternion(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetScalar(param::hstring const& propertyName, float& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetScalar(get_abi(propertyName), &value, put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetVector2(param::hstring const& propertyName, Windows::Foundation::Numerics::float2& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetVector2(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetVector3(param::hstring const& propertyName, Windows::Foundation::Numerics::float3& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetVector3(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetVector4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetVector4(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet2<D>::InsertBoolean(param::hstring const& propertyName, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet2)->InsertBoolean(get_abi(propertyName), value));
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet2<D>::TryGetBoolean(param::hstring const& propertyName, bool& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet2)->TryGetBoolean(get_abi(propertyName), &value, put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionScopedBatch<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->get_IsActive(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionScopedBatch<D>::IsEnded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->get_IsEnded(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionScopedBatch<D>::End() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->End());
}

template <typename D> void consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->Resume());
}

template <typename D> void consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Suspend() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->Suspend());
}

template <typename D> event_token consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->add_Completed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Composition::ICompositionScopedBatch> consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Composition::ICompositionScopedBatch>(this, &abi_t<Windows::UI::Composition::ICompositionScopedBatch>::remove_Completed, Completed(handler));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Completed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->remove_Completed(get_abi(token)));
}

template <typename D> Windows::UI::Composition::CompositionBitmapInterpolationMode consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::BitmapInterpolationMode() const
{
    Windows::UI::Composition::CompositionBitmapInterpolationMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_BitmapInterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_BitmapInterpolationMode(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::HorizontalAlignmentRatio() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_HorizontalAlignmentRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::HorizontalAlignmentRatio(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_HorizontalAlignmentRatio(value));
}

template <typename D> Windows::UI::Composition::CompositionStretch consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::Stretch() const
{
    Windows::UI::Composition::CompositionStretch value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_Stretch(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::Stretch(Windows::UI::Composition::CompositionStretch const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_Stretch(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ICompositionSurface consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::Surface() const
{
    Windows::UI::Composition::ICompositionSurface value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_Surface(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::Surface(Windows::UI::Composition::ICompositionSurface const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_Surface(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::VerticalAlignmentRatio() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_VerticalAlignmentRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::VerticalAlignmentRatio(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_VerticalAlignmentRatio(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_AnchorPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_AnchorPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_CenterPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::CenterPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_CenterPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::RotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_RotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::RotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_RotationAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::RotationAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::Scale() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_Scale(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::Scale(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_Scale(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_ICompositionTarget<D>::Root() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionTarget)->get_Root(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionTarget<D>::Root(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionTarget)->put_Root(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionVirtualDrawingSurface<D>::Trim(array_view<Windows::Graphics::RectInt32 const> rects) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionVirtualDrawingSurface)->Trim(rects.size(), get_abi(rects)));
}

template <typename D> Windows::UI::Composition::ColorKeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateColorKeyFrameAnimation() const
{
    Windows::UI::Composition::ColorKeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateColorKeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionColorBrush consume_Windows_UI_Composition_ICompositor<D>::CreateColorBrush() const
{
    Windows::UI::Composition::CompositionColorBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateColorBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionColorBrush consume_Windows_UI_Composition_ICompositor<D>::CreateColorBrush(Windows::UI::Color const& color) const
{
    Windows::UI::Composition::CompositionColorBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateColorBrushWithColor(get_abi(color), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ContainerVisual consume_Windows_UI_Composition_ICompositor<D>::CreateContainerVisual() const
{
    Windows::UI::Composition::ContainerVisual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateContainerVisual(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CubicBezierEasingFunction consume_Windows_UI_Composition_ICompositor<D>::CreateCubicBezierEasingFunction(Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2) const
{
    Windows::UI::Composition::CubicBezierEasingFunction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateCubicBezierEasingFunction(get_abi(controlPoint1), get_abi(controlPoint2), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionEffectFactory consume_Windows_UI_Composition_ICompositor<D>::CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect) const
{
    Windows::UI::Composition::CompositionEffectFactory result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateEffectFactory(get_abi(graphicsEffect), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionEffectFactory consume_Windows_UI_Composition_ICompositor<D>::CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect, param::iterable<hstring> const& animatableProperties) const
{
    Windows::UI::Composition::CompositionEffectFactory result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateEffectFactoryWithProperties(get_abi(graphicsEffect), get_abi(animatableProperties), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateExpressionAnimation() const
{
    Windows::UI::Composition::ExpressionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateExpressionAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateExpressionAnimation(param::hstring const& expression) const
{
    Windows::UI::Composition::ExpressionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateExpressionAnimationWithExpression(get_abi(expression), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::InsetClip consume_Windows_UI_Composition_ICompositor<D>::CreateInsetClip() const
{
    Windows::UI::Composition::InsetClip result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateInsetClip(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::InsetClip consume_Windows_UI_Composition_ICompositor<D>::CreateInsetClip(float leftInset, float topInset, float rightInset, float bottomInset) const
{
    Windows::UI::Composition::InsetClip result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateInsetClipWithInsets(leftInset, topInset, rightInset, bottomInset, put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::LinearEasingFunction consume_Windows_UI_Composition_ICompositor<D>::CreateLinearEasingFunction() const
{
    Windows::UI::Composition::LinearEasingFunction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateLinearEasingFunction(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionPropertySet consume_Windows_UI_Composition_ICompositor<D>::CreatePropertySet() const
{
    Windows::UI::Composition::CompositionPropertySet result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreatePropertySet(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::QuaternionKeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateQuaternionKeyFrameAnimation() const
{
    Windows::UI::Composition::QuaternionKeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateQuaternionKeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ScalarKeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateScalarKeyFrameAnimation() const
{
    Windows::UI::Composition::ScalarKeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateScalarKeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionScopedBatch consume_Windows_UI_Composition_ICompositor<D>::CreateScopedBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType) const
{
    Windows::UI::Composition::CompositionScopedBatch result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateScopedBatch(get_abi(batchType), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::SpriteVisual consume_Windows_UI_Composition_ICompositor<D>::CreateSpriteVisual() const
{
    Windows::UI::Composition::SpriteVisual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateSpriteVisual(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionSurfaceBrush consume_Windows_UI_Composition_ICompositor<D>::CreateSurfaceBrush() const
{
    Windows::UI::Composition::CompositionSurfaceBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateSurfaceBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionSurfaceBrush consume_Windows_UI_Composition_ICompositor<D>::CreateSurfaceBrush(Windows::UI::Composition::ICompositionSurface const& surface) const
{
    Windows::UI::Composition::CompositionSurfaceBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateSurfaceBrushWithSurface(get_abi(surface), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionTarget consume_Windows_UI_Composition_ICompositor<D>::CreateTargetForCurrentView() const
{
    Windows::UI::Composition::CompositionTarget result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateTargetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Vector2KeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateVector2KeyFrameAnimation() const
{
    Windows::UI::Composition::Vector2KeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateVector2KeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Vector3KeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateVector3KeyFrameAnimation() const
{
    Windows::UI::Composition::Vector3KeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateVector3KeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Vector4KeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateVector4KeyFrameAnimation() const
{
    Windows::UI::Composition::Vector4KeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateVector4KeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionCommitBatch consume_Windows_UI_Composition_ICompositor<D>::GetCommitBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType) const
{
    Windows::UI::Composition::CompositionCommitBatch result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->GetCommitBatch(get_abi(batchType), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::AmbientLight consume_Windows_UI_Composition_ICompositor2<D>::CreateAmbientLight() const
{
    Windows::UI::Composition::AmbientLight result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateAmbientLight(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionAnimationGroup consume_Windows_UI_Composition_ICompositor2<D>::CreateAnimationGroup() const
{
    Windows::UI::Composition::CompositionAnimationGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateAnimationGroup(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionBackdropBrush consume_Windows_UI_Composition_ICompositor2<D>::CreateBackdropBrush() const
{
    Windows::UI::Composition::CompositionBackdropBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateBackdropBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::DistantLight consume_Windows_UI_Composition_ICompositor2<D>::CreateDistantLight() const
{
    Windows::UI::Composition::DistantLight result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateDistantLight(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::DropShadow consume_Windows_UI_Composition_ICompositor2<D>::CreateDropShadow() const
{
    Windows::UI::Composition::DropShadow result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateDropShadow(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ImplicitAnimationCollection consume_Windows_UI_Composition_ICompositor2<D>::CreateImplicitAnimationCollection() const
{
    Windows::UI::Composition::ImplicitAnimationCollection result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateImplicitAnimationCollection(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::LayerVisual consume_Windows_UI_Composition_ICompositor2<D>::CreateLayerVisual() const
{
    Windows::UI::Composition::LayerVisual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateLayerVisual(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionMaskBrush consume_Windows_UI_Composition_ICompositor2<D>::CreateMaskBrush() const
{
    Windows::UI::Composition::CompositionMaskBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateMaskBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionNineGridBrush consume_Windows_UI_Composition_ICompositor2<D>::CreateNineGridBrush() const
{
    Windows::UI::Composition::CompositionNineGridBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateNineGridBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::PointLight consume_Windows_UI_Composition_ICompositor2<D>::CreatePointLight() const
{
    Windows::UI::Composition::PointLight result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreatePointLight(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::SpotLight consume_Windows_UI_Composition_ICompositor2<D>::CreateSpotLight() const
{
    Windows::UI::Composition::SpotLight result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateSpotLight(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::StepEasingFunction consume_Windows_UI_Composition_ICompositor2<D>::CreateStepEasingFunction() const
{
    Windows::UI::Composition::StepEasingFunction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateStepEasingFunction(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::StepEasingFunction consume_Windows_UI_Composition_ICompositor2<D>::CreateStepEasingFunction(int32_t stepCount) const
{
    Windows::UI::Composition::StepEasingFunction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateStepEasingFunctionWithStepCount(stepCount, put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionBackdropBrush consume_Windows_UI_Composition_ICompositor3<D>::CreateHostBackdropBrush() const
{
    Windows::UI::Composition::CompositionBackdropBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor3)->CreateHostBackdropBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::VisualCollection consume_Windows_UI_Composition_IContainerVisual<D>::Children() const
{
    Windows::UI::Composition::VisualCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IContainerVisual)->get_Children(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICubicBezierEasingFunction<D>::ControlPoint1() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICubicBezierEasingFunction)->get_ControlPoint1(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICubicBezierEasingFunction<D>::ControlPoint2() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICubicBezierEasingFunction)->get_ControlPoint2(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_IDistantLight<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDistantLight<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_IDistantLight<D>::CoordinateSpace() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->get_CoordinateSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDistantLight<D>::CoordinateSpace(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->put_CoordinateSpace(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IDistantLight<D>::Direction() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDistantLight<D>::Direction(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->put_Direction(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IDropShadow<D>::BlurRadius() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_BlurRadius(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::BlurRadius(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_BlurRadius(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_IDropShadow<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_IDropShadow<D>::Mask() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_Mask(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::Mask(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_Mask(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IDropShadow<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::Offset(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IDropShadow<D>::Opacity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::Opacity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_Opacity(value));
}

template <typename D> hstring consume_Windows_UI_Composition_IExpressionAnimation<D>::Expression() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IExpressionAnimation)->get_Expression(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IExpressionAnimation<D>::Expression(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IExpressionAnimation)->put_Expression(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IInsetClip<D>::BottomInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->get_BottomInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IInsetClip<D>::BottomInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->put_BottomInset(value));
}

template <typename D> float consume_Windows_UI_Composition_IInsetClip<D>::LeftInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->get_LeftInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IInsetClip<D>::LeftInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->put_LeftInset(value));
}

template <typename D> float consume_Windows_UI_Composition_IInsetClip<D>::RightInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->get_RightInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IInsetClip<D>::RightInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->put_RightInset(value));
}

template <typename D> float consume_Windows_UI_Composition_IInsetClip<D>::TopInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->get_TopInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IInsetClip<D>::TopInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->put_TopInset(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Composition_IKeyFrameAnimation<D>::DelayTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_DelayTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::DelayTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_DelayTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Composition_IKeyFrameAnimation<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::Duration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_Duration(get_abi(value)));
}

template <typename D> Windows::UI::Composition::AnimationIterationBehavior consume_Windows_UI_Composition_IKeyFrameAnimation<D>::IterationBehavior() const
{
    Windows::UI::Composition::AnimationIterationBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_IterationBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_IterationBehavior(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Composition_IKeyFrameAnimation<D>::IterationCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_IterationCount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::IterationCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_IterationCount(value));
}

template <typename D> int32_t consume_Windows_UI_Composition_IKeyFrameAnimation<D>::KeyFrameCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_KeyFrameCount(&value));
    return value;
}

template <typename D> Windows::UI::Composition::AnimationStopBehavior consume_Windows_UI_Composition_IKeyFrameAnimation<D>::StopBehavior() const
{
    Windows::UI::Composition::AnimationStopBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_StopBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::StopBehavior(Windows::UI::Composition::AnimationStopBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_StopBehavior(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->InsertExpressionKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->InsertExpressionKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> Windows::UI::Composition::AnimationDirection consume_Windows_UI_Composition_IKeyFrameAnimation2<D>::Direction() const
{
    Windows::UI::Composition::AnimationDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation2)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation2<D>::Direction(Windows::UI::Composition::AnimationDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation2)->put_Direction(get_abi(value)));
}

template <typename D> Windows::UI::Composition::AnimationDelayBehavior consume_Windows_UI_Composition_IKeyFrameAnimation3<D>::DelayBehavior() const
{
    Windows::UI::Composition::AnimationDelayBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation3)->get_DelayBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation3<D>::DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation3)->put_DelayBehavior(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionEffectBrush consume_Windows_UI_Composition_ILayerVisual<D>::Effect() const
{
    Windows::UI::Composition::CompositionEffectBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ILayerVisual)->get_Effect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ILayerVisual<D>::Effect(Windows::UI::Composition::CompositionEffectBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ILayerVisual)->put_Effect(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_IPointLight<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_Color(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IPointLight<D>::ConstantAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_ConstantAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::ConstantAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_ConstantAttenuation(value));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_IPointLight<D>::CoordinateSpace() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_CoordinateSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::CoordinateSpace(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_CoordinateSpace(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IPointLight<D>::LinearAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_LinearAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::LinearAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_LinearAttenuation(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IPointLight<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::Offset(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IPointLight<D>::QuadraticAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_QuadraticAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::QuadraticAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_QuadraticAttenuation(value));
}

template <typename D> void consume_Windows_UI_Composition_IQuaternionKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IQuaternionKeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IQuaternionKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IQuaternionKeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> Windows::UI::Composition::CompositionGraphicsDevice consume_Windows_UI_Composition_IRenderingDeviceReplacedEventArgs<D>::GraphicsDevice() const
{
    Windows::UI::Composition::CompositionGraphicsDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IRenderingDeviceReplacedEventArgs)->get_GraphicsDevice(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IScalarKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarKeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, value));
}

template <typename D> void consume_Windows_UI_Composition_IScalarKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, float value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarKeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, value, get_abi(easingFunction)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::ConstantAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_ConstantAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::ConstantAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_ConstantAttenuation(value));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_ISpotLight<D>::CoordinateSpace() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_CoordinateSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::CoordinateSpace(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_CoordinateSpace(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_ISpotLight<D>::Direction() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::Direction(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_Direction(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::InnerConeAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_InnerConeAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::InnerConeAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_InnerConeAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::InnerConeAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_InnerConeAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::InnerConeAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_InnerConeAngleInDegrees(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_ISpotLight<D>::InnerConeColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_InnerConeColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::InnerConeColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_InnerConeColor(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::LinearAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_LinearAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::LinearAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_LinearAttenuation(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_ISpotLight<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::Offset(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::OuterConeAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_OuterConeAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::OuterConeAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_OuterConeAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::OuterConeAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_OuterConeAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::OuterConeAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_OuterConeAngleInDegrees(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_ISpotLight<D>::OuterConeColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_OuterConeColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::OuterConeColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_OuterConeColor(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::QuadraticAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_QuadraticAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::QuadraticAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_QuadraticAttenuation(value));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ISpriteVisual<D>::Brush() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpriteVisual)->get_Brush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpriteVisual<D>::Brush(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpriteVisual)->put_Brush(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionShadow consume_Windows_UI_Composition_ISpriteVisual2<D>::Shadow() const
{
    Windows::UI::Composition::CompositionShadow value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpriteVisual2)->get_Shadow(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpriteVisual2<D>::Shadow(Windows::UI::Composition::CompositionShadow const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpriteVisual2)->put_Shadow(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Composition_IStepEasingFunction<D>::FinalStep() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_FinalStep(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::FinalStep(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_FinalStep(value));
}

template <typename D> int32_t consume_Windows_UI_Composition_IStepEasingFunction<D>::InitialStep() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_InitialStep(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::InitialStep(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_InitialStep(value));
}

template <typename D> bool consume_Windows_UI_Composition_IStepEasingFunction<D>::IsFinalStepSingleFrame() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_IsFinalStepSingleFrame(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::IsFinalStepSingleFrame(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_IsFinalStepSingleFrame(value));
}

template <typename D> bool consume_Windows_UI_Composition_IStepEasingFunction<D>::IsInitialStepSingleFrame() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_IsInitialStepSingleFrame(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::IsInitialStepSingleFrame(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_IsInitialStepSingleFrame(value));
}

template <typename D> int32_t consume_Windows_UI_Composition_IStepEasingFunction<D>::StepCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_StepCount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::StepCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_StepCount(value));
}

template <typename D> void consume_Windows_UI_Composition_IVector2KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2KeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IVector2KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2KeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> void consume_Windows_UI_Composition_IVector3KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3KeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IVector3KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3KeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> void consume_Windows_UI_Composition_IVector4KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector4KeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IVector4KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector4KeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_IVisual<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_AnchorPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_AnchorPoint(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBackfaceVisibility consume_Windows_UI_Composition_IVisual<D>::BackfaceVisibility() const
{
    Windows::UI::Composition::CompositionBackfaceVisibility value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_BackfaceVisibility(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_BackfaceVisibility(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBorderMode consume_Windows_UI_Composition_IVisual<D>::BorderMode() const
{
    Windows::UI::Composition::CompositionBorderMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::BorderMode(Windows::UI::Composition::CompositionBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_BorderMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_CenterPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::CenterPoint(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_CenterPoint(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionClip consume_Windows_UI_Composition_IVisual<D>::Clip() const
{
    Windows::UI::Composition::CompositionClip value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Clip(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Clip(Windows::UI::Composition::CompositionClip const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Clip(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionCompositeMode consume_Windows_UI_Composition_IVisual<D>::CompositeMode() const
{
    Windows::UI::Composition::CompositionCompositeMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_CompositeMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::CompositeMode(Windows::UI::Composition::CompositionCompositeMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_CompositeMode(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Composition_IVisual<D>::IsVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_IsVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::IsVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_IsVisible(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Offset(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IVisual<D>::Opacity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Opacity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Opacity(value));
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_UI_Composition_IVisual<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Orientation(Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Orientation(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ContainerVisual consume_Windows_UI_Composition_IVisual<D>::Parent() const
{
    Windows::UI::Composition::ContainerVisual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Parent(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_IVisual<D>::RotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_RotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::RotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_RotationAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_IVisual<D>::RotationAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual<D>::RotationAxis() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_RotationAxis(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::RotationAxis(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_RotationAxis(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual<D>::Scale() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Scale(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Scale(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Scale(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_IVisual<D>::Size() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Size(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Size(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4x4 consume_Windows_UI_Composition_IVisual<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float4x4 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::TransformMatrix(Windows::Foundation::Numerics::float4x4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_IVisual2<D>::ParentForTransform() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->get_ParentForTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual2<D>::ParentForTransform(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->put_ParentForTransform(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual2<D>::RelativeOffsetAdjustment() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->get_RelativeOffsetAdjustment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual2<D>::RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->put_RelativeOffsetAdjustment(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_IVisual2<D>::RelativeSizeAdjustment() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->get_RelativeSizeAdjustment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual2<D>::RelativeSizeAdjustment(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->put_RelativeSizeAdjustment(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Composition_IVisualCollection<D>::Count() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->get_Count(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::InsertAbove(Windows::UI::Composition::Visual const& newChild, Windows::UI::Composition::Visual const& sibling) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->InsertAbove(get_abi(newChild), get_abi(sibling)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::InsertAtBottom(Windows::UI::Composition::Visual const& newChild) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->InsertAtBottom(get_abi(newChild)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::InsertAtTop(Windows::UI::Composition::Visual const& newChild) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->InsertAtTop(get_abi(newChild)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::InsertBelow(Windows::UI::Composition::Visual const& newChild, Windows::UI::Composition::Visual const& sibling) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->InsertBelow(get_abi(newChild), get_abi(sibling)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::Remove(Windows::UI::Composition::Visual const& child) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->Remove(get_abi(child)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::RemoveAll() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->RemoveAll());
}

template <typename D> int32_t consume_Windows_UI_Composition_IVisualUnorderedCollection<D>::Count() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualUnorderedCollection)->get_Count(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisualUnorderedCollection<D>::Add(Windows::UI::Composition::Visual const& newVisual) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualUnorderedCollection)->Add(get_abi(newVisual)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualUnorderedCollection<D>::Remove(Windows::UI::Composition::Visual const& visual) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualUnorderedCollection)->Remove(get_abi(visual)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualUnorderedCollection<D>::RemoveAll() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualUnorderedCollection)->RemoveAll());
}

template <typename D>
struct produce<D, Windows::UI::Composition::IAmbientLight> : produce_base<D, Windows::UI::Composition::IAmbientLight>
{
    HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IColorKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IColorKeyFrameAnimation>
{
    HRESULT __stdcall get_InterpolationColorSpace(abi_t<Windows::UI::Composition::CompositionColorSpace>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterpolationColorSpace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationColorSpace(abi_t<Windows::UI::Composition::CompositionColorSpace> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationColorSpace(*reinterpret_cast<Windows::UI::Composition::CompositionColorSpace const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::UI::Color> value, ::IUnknown* easingFunction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::UI::Color const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimation> : produce_base<D, Windows::UI::Composition::ICompositionAnimation>
{
    HRESULT __stdcall ClearAllParameters() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAllParameters();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearParameter(HSTRING key) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearParameter(*reinterpret_cast<hstring const*>(&key));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetColorParameter(HSTRING key, abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColorParameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetMatrix3x2Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMatrix3x2Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetMatrix4x4Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMatrix4x4Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetQuaternionParameter(HSTRING key, abi_t<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetQuaternionParameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetReferenceParameter(HSTRING key, ::IUnknown* compositionObject) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetReferenceParameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::UI::Composition::CompositionObject const*>(&compositionObject));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetScalarParameter(HSTRING key, float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetScalarParameter(*reinterpret_cast<hstring const*>(&key), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetVector2Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVector2Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetVector3Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVector3Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetVector4Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float4> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVector4Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimation2> : produce_base<D, Windows::UI::Composition::ICompositionAnimation2>
{
    HRESULT __stdcall SetBooleanParameter(HSTRING key, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBooleanParameter(*reinterpret_cast<hstring const*>(&key), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Target(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Target(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Target(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimationBase> : produce_base<D, Windows::UI::Composition::ICompositionAnimationBase>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimationFactory> : produce_base<D, Windows::UI::Composition::ICompositionAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimationGroup> : produce_base<D, Windows::UI::Composition::ICompositionAnimationGroup>
{
    HRESULT __stdcall get_Count(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Add(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Remove(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveAll() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBackdropBrush> : produce_base<D, Windows::UI::Composition::ICompositionBackdropBrush>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBatchCompletedEventArgs> : produce_base<D, Windows::UI::Composition::ICompositionBatchCompletedEventArgs>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBrush> : produce_base<D, Windows::UI::Composition::ICompositionBrush>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBrushFactory> : produce_base<D, Windows::UI::Composition::ICompositionBrushFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionCapabilities> : produce_base<D, Windows::UI::Composition::ICompositionCapabilities>
{
    HRESULT __stdcall AreEffectsSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AreEffectsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AreEffectsFast(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AreEffectsFast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Changed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Changed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Changed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Changed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionCapabilitiesStatics> : produce_base<D, Windows::UI::Composition::ICompositionCapabilitiesStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** current) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *current = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionClip> : produce_base<D, Windows::UI::Composition::ICompositionClip>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionClip2> : produce_base<D, Windows::UI::Composition::ICompositionClip2>
{
    HRESULT __stdcall get_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnchorPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(abi_t<Windows::Foundation::Numerics::float3x2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(abi_t<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionClipFactory> : produce_base<D, Windows::UI::Composition::ICompositionClipFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionColorBrush> : produce_base<D, Windows::UI::Composition::ICompositionColorBrush>
{
    HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionCommitBatch> : produce_base<D, Windows::UI::Composition::ICompositionCommitBatch>
{
    HRESULT __stdcall get_IsActive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnded(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionDrawingSurface> : produce_base<D, Windows::UI::Composition::ICompositionDrawingSurface>
{
    HRESULT __stdcall get_AlphaMode(abi_t<Windows::Graphics::DirectX::DirectXAlphaMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelFormat(abi_t<Windows::Graphics::DirectX::DirectXPixelFormat>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionDrawingSurface2> : produce_base<D, Windows::UI::Composition::ICompositionDrawingSurface2>
{
    HRESULT __stdcall get_SizeInt32(abi_t<Windows::Graphics::SizeInt32>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SizeInt32());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Resize(abi_t<Windows::Graphics::SizeInt32> sizePixels) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resize(*reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&sizePixels));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Scroll(abi_t<Windows::Graphics::PointInt32> offset) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scroll(*reinterpret_cast<Windows::Graphics::PointInt32 const*>(&offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ScrollRect(abi_t<Windows::Graphics::PointInt32> offset, abi_t<Windows::Graphics::RectInt32> scrollRect) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scroll(*reinterpret_cast<Windows::Graphics::PointInt32 const*>(&offset), *reinterpret_cast<Windows::Graphics::RectInt32 const*>(&scrollRect));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ScrollWithClip(abi_t<Windows::Graphics::PointInt32> offset, abi_t<Windows::Graphics::RectInt32> clipRect) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollWithClip(*reinterpret_cast<Windows::Graphics::PointInt32 const*>(&offset), *reinterpret_cast<Windows::Graphics::RectInt32 const*>(&clipRect));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ScrollRectWithClip(abi_t<Windows::Graphics::PointInt32> offset, abi_t<Windows::Graphics::RectInt32> clipRect, abi_t<Windows::Graphics::RectInt32> scrollRect) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollWithClip(*reinterpret_cast<Windows::Graphics::PointInt32 const*>(&offset), *reinterpret_cast<Windows::Graphics::RectInt32 const*>(&clipRect), *reinterpret_cast<Windows::Graphics::RectInt32 const*>(&scrollRect));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionDrawingSurfaceFactory> : produce_base<D, Windows::UI::Composition::ICompositionDrawingSurfaceFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEasingFunction> : produce_base<D, Windows::UI::Composition::ICompositionEasingFunction>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEasingFunctionFactory> : produce_base<D, Windows::UI::Composition::ICompositionEasingFunctionFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectBrush> : produce_base<D, Windows::UI::Composition::ICompositionEffectBrush>
{
    HRESULT __stdcall GetSourceParameter(HSTRING name, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSourceParameter(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSourceParameter(HSTRING name, ::IUnknown* source) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSourceParameter(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectFactory> : produce_base<D, Windows::UI::Composition::ICompositionEffectFactory>
{
    HRESULT __stdcall CreateBrush(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LoadStatus(abi_t<Windows::UI::Composition::CompositionEffectFactoryLoadStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LoadStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectSourceParameter> : produce_base<D, Windows::UI::Composition::ICompositionEffectSourceParameter>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
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
struct produce<D, Windows::UI::Composition::ICompositionEffectSourceParameterFactory> : produce_base<D, Windows::UI::Composition::ICompositionEffectSourceParameterFactory>
{
    HRESULT __stdcall Create(HSTRING name, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionGraphicsDevice> : produce_base<D, Windows::UI::Composition::ICompositionGraphicsDevice>
{
    HRESULT __stdcall CreateDrawingSurface(abi_t<Windows::Foundation::Size> sizePixels, abi_t<Windows::Graphics::DirectX::DirectXPixelFormat> pixelFormat, abi_t<Windows::Graphics::DirectX::DirectXAlphaMode> alphaMode, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDrawingSurface(*reinterpret_cast<Windows::Foundation::Size const*>(&sizePixels), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::DirectX::DirectXAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RenderingDeviceReplaced(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RenderingDeviceReplaced(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RenderingDeviceReplaced(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RenderingDeviceReplaced(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionGraphicsDevice2> : produce_base<D, Windows::UI::Composition::ICompositionGraphicsDevice2>
{
    HRESULT __stdcall CreateDrawingSurface2(abi_t<Windows::Graphics::SizeInt32> sizePixels, abi_t<Windows::Graphics::DirectX::DirectXPixelFormat> pixelFormat, abi_t<Windows::Graphics::DirectX::DirectXAlphaMode> alphaMode, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDrawingSurface2(*reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&sizePixels), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::DirectX::DirectXAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateVirtualDrawingSurface(abi_t<Windows::Graphics::SizeInt32> sizePixels, abi_t<Windows::Graphics::DirectX::DirectXPixelFormat> pixelFormat, abi_t<Windows::Graphics::DirectX::DirectXAlphaMode> alphaMode, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateVirtualDrawingSurface(*reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&sizePixels), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::DirectX::DirectXAlphaMode const*>(&alphaMode)));
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
struct produce<D, Windows::UI::Composition::ICompositionLight> : produce_base<D, Windows::UI::Composition::ICompositionLight>
{
    HRESULT __stdcall get_Targets(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Targets());
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
struct produce<D, Windows::UI::Composition::ICompositionLightFactory> : produce_base<D, Windows::UI::Composition::ICompositionLightFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionMaskBrush> : produce_base<D, Windows::UI::Composition::ICompositionMaskBrush>
{
    HRESULT __stdcall get_Mask(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mask());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mask(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mask(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionNineGridBrush> : produce_base<D, Windows::UI::Composition::ICompositionNineGridBrush>
{
    HRESULT __stdcall get_BottomInset(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BottomInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BottomInset(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BottomInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BottomInsetScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BottomInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BottomInsetScale(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BottomInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCenterHollow(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCenterHollow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCenterHollow(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCenterHollow(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftInset(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LeftInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LeftInset(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeftInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftInsetScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LeftInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LeftInsetScale(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeftInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightInset(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RightInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightInset(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightInsetScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RightInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightInsetScale(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TopInset(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TopInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TopInset(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TopInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TopInsetScale(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TopInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TopInsetScale(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TopInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetInsets(float inset) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInsets(inset);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetInsetsWithValues(float left, float top, float right, float bottom) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInsets(left, top, right, bottom);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetInsetScales(float scale) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInsetScales(scale);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetInsetScalesWithValues(float left, float top, float right, float bottom) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInsetScales(left, top, right, bottom);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObject> : produce_base<D, Windows::UI::Composition::ICompositionObject>
{
    HRESULT __stdcall get_Compositor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Compositor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dispatcher());
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

    HRESULT __stdcall StartAnimation(HSTRING propertyName, ::IUnknown* animation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAnimation(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&animation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAnimation(HSTRING propertyName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAnimation(*reinterpret_cast<hstring const*>(&propertyName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObject2> : produce_base<D, Windows::UI::Composition::ICompositionObject2>
{
    HRESULT __stdcall get_Comment(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Comment(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Comment(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImplicitAnimations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImplicitAnimations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ImplicitAnimations(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImplicitAnimations(*reinterpret_cast<Windows::UI::Composition::ImplicitAnimationCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAnimationGroup(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAnimationGroup(*reinterpret_cast<Windows::UI::Composition::ICompositionAnimationBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAnimationGroup(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAnimationGroup(*reinterpret_cast<Windows::UI::Composition::ICompositionAnimationBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObjectFactory> : produce_base<D, Windows::UI::Composition::ICompositionObjectFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionPropertySet> : produce_base<D, Windows::UI::Composition::ICompositionPropertySet>
{
    HRESULT __stdcall InsertColor(HSTRING propertyName, abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertColor(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertMatrix3x2(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertMatrix3x2(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertMatrix4x4(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertMatrix4x4(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertQuaternion(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertQuaternion(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertScalar(HSTRING propertyName, float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertScalar(*reinterpret_cast<hstring const*>(&propertyName), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertVector2(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertVector2(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertVector3(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertVector3(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertVector4(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float4> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertVector4(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetColor(HSTRING propertyName, abi_t<Windows::UI::Color>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetColor(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::UI::Color*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetMatrix3x2(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float3x2>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetMatrix3x2(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float3x2*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetMatrix4x4(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float4x4>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetMatrix4x4(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetQuaternion(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::quaternion>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetQuaternion(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::quaternion*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetScalar(HSTRING propertyName, float* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetScalar(*reinterpret_cast<hstring const*>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetVector2(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float2>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetVector2(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float2*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetVector3(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float3>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetVector3(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float3*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetVector4(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float4>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetVector4(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float4*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionPropertySet2> : produce_base<D, Windows::UI::Composition::ICompositionPropertySet2>
{
    HRESULT __stdcall InsertBoolean(HSTRING propertyName, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertBoolean(*reinterpret_cast<hstring const*>(&propertyName), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetBoolean(HSTRING propertyName, bool* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetBoolean(*reinterpret_cast<hstring const*>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionScopedBatch> : produce_base<D, Windows::UI::Composition::ICompositionScopedBatch>
{
    HRESULT __stdcall get_IsActive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnded(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEnded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall End() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().End();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Resume() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Suspend() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Suspend();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionShadow> : produce_base<D, Windows::UI::Composition::ICompositionShadow>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionShadowFactory> : produce_base<D, Windows::UI::Composition::ICompositionShadowFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSurface> : produce_base<D, Windows::UI::Composition::ICompositionSurface>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSurfaceBrush> : produce_base<D, Windows::UI::Composition::ICompositionSurfaceBrush>
{
    HRESULT __stdcall get_BitmapInterpolationMode(abi_t<Windows::UI::Composition::CompositionBitmapInterpolationMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitmapInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BitmapInterpolationMode(abi_t<Windows::UI::Composition::CompositionBitmapInterpolationMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BitmapInterpolationMode(*reinterpret_cast<Windows::UI::Composition::CompositionBitmapInterpolationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignmentRatio(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HorizontalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalAlignmentRatio(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Stretch(abi_t<Windows::UI::Composition::CompositionStretch>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Stretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Stretch(abi_t<Windows::UI::Composition::CompositionStretch> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stretch(*reinterpret_cast<Windows::UI::Composition::CompositionStretch const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Surface(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Surface());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Surface(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Surface(*reinterpret_cast<Windows::UI::Composition::ICompositionSurface const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignmentRatio(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VerticalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalAlignmentRatio(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSurfaceBrush2> : produce_base<D, Windows::UI::Composition::ICompositionSurfaceBrush2>
{
    HRESULT __stdcall get_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnchorPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(abi_t<Windows::Foundation::Numerics::float3x2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(abi_t<Windows::Foundation::Numerics::float3x2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionTarget> : produce_base<D, Windows::UI::Composition::ICompositionTarget>
{
    HRESULT __stdcall get_Root(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Root());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Root(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Root(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionVirtualDrawingSurface> : produce_base<D, Windows::UI::Composition::ICompositionVirtualDrawingSurface>
{
    HRESULT __stdcall Trim(uint32_t __rectsSize, abi_t<Windows::Graphics::RectInt32>* rects) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Trim(array_view<Windows::Graphics::RectInt32 const>(reinterpret_cast<Windows::Graphics::RectInt32 const *>(rects), reinterpret_cast<Windows::Graphics::RectInt32 const *>(rects) + __rectsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory> : produce_base<D, Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositor> : produce_base<D, Windows::UI::Composition::ICompositor>
{
    HRESULT __stdcall CreateColorKeyFrameAnimation(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateColorKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateColorBrush(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateColorBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateColorBrushWithColor(abi_t<Windows::UI::Color> color, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateColorBrush(*reinterpret_cast<Windows::UI::Color const*>(&color)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateContainerVisual(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateContainerVisual());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCubicBezierEasingFunction(abi_t<Windows::Foundation::Numerics::float2> controlPoint1, abi_t<Windows::Foundation::Numerics::float2> controlPoint2, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateCubicBezierEasingFunction(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint1), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint2)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateEffectFactory(::IUnknown* graphicsEffect, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateEffectFactory(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffect const*>(&graphicsEffect)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateEffectFactoryWithProperties(::IUnknown* graphicsEffect, ::IUnknown* animatableProperties, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateEffectFactory(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffect const*>(&graphicsEffect), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&animatableProperties)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateExpressionAnimation(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateExpressionAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateExpressionAnimationWithExpression(HSTRING expression, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateExpressionAnimation(*reinterpret_cast<hstring const*>(&expression)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInsetClip(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateInsetClip());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateInsetClipWithInsets(float leftInset, float topInset, float rightInset, float bottomInset, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateInsetClip(leftInset, topInset, rightInset, bottomInset));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLinearEasingFunction(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateLinearEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePropertySet(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePropertySet());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateQuaternionKeyFrameAnimation(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateQuaternionKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateScalarKeyFrameAnimation(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateScalarKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateScopedBatch(abi_t<Windows::UI::Composition::CompositionBatchTypes> batchType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateScopedBatch(*reinterpret_cast<Windows::UI::Composition::CompositionBatchTypes const*>(&batchType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSpriteVisual(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateSpriteVisual());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSurfaceBrush(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateSurfaceBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSurfaceBrushWithSurface(::IUnknown* surface, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateSurfaceBrush(*reinterpret_cast<Windows::UI::Composition::ICompositionSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateTargetForCurrentView(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateTargetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateVector2KeyFrameAnimation(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateVector2KeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateVector3KeyFrameAnimation(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateVector3KeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateVector4KeyFrameAnimation(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateVector4KeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCommitBatch(abi_t<Windows::UI::Composition::CompositionBatchTypes> batchType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCommitBatch(*reinterpret_cast<Windows::UI::Composition::CompositionBatchTypes const*>(&batchType)));
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
struct produce<D, Windows::UI::Composition::ICompositor2> : produce_base<D, Windows::UI::Composition::ICompositor2>
{
    HRESULT __stdcall CreateAmbientLight(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAmbientLight());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAnimationGroup(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAnimationGroup());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBackdropBrush(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateBackdropBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDistantLight(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDistantLight());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDropShadow(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDropShadow());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateImplicitAnimationCollection(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateImplicitAnimationCollection());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerVisual(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateLayerVisual());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMaskBrush(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateMaskBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateNineGridBrush(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateNineGridBrush());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePointLight(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreatePointLight());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSpotLight(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateSpotLight());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStepEasingFunction(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateStepEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateStepEasingFunctionWithStepCount(int32_t stepCount, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateStepEasingFunction(stepCount));
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
struct produce<D, Windows::UI::Composition::ICompositor3> : produce_base<D, Windows::UI::Composition::ICompositor3>
{
    HRESULT __stdcall CreateHostBackdropBrush(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateHostBackdropBrush());
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
struct produce<D, Windows::UI::Composition::IContainerVisual> : produce_base<D, Windows::UI::Composition::IContainerVisual>
{
    HRESULT __stdcall get_Children(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Children());
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
struct produce<D, Windows::UI::Composition::IContainerVisualFactory> : produce_base<D, Windows::UI::Composition::IContainerVisualFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICubicBezierEasingFunction> : produce_base<D, Windows::UI::Composition::ICubicBezierEasingFunction>
{
    HRESULT __stdcall get_ControlPoint1(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControlPoint1());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlPoint2(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControlPoint2());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IDistantLight> : produce_base<D, Windows::UI::Composition::IDistantLight>
{
    HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSpace(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CoordinateSpace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CoordinateSpace(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CoordinateSpace(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
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
};

template <typename D>
struct produce<D, Windows::UI::Composition::IDropShadow> : produce_base<D, Windows::UI::Composition::IDropShadow>
{
    HRESULT __stdcall get_BlurRadius(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlurRadius());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BlurRadius(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlurRadius(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mask(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mask());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mask(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mask(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(float* value) noexcept override
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

    HRESULT __stdcall put_Opacity(float value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::UI::Composition::IExpressionAnimation> : produce_base<D, Windows::UI::Composition::IExpressionAnimation>
{
    HRESULT __stdcall get_Expression(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Expression());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Expression(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Expression(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IImplicitAnimationCollection> : produce_base<D, Windows::UI::Composition::IImplicitAnimationCollection>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IInsetClip> : produce_base<D, Windows::UI::Composition::IInsetClip>
{
    HRESULT __stdcall get_BottomInset(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BottomInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BottomInset(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BottomInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftInset(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LeftInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LeftInset(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeftInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightInset(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RightInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightInset(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TopInset(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TopInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TopInset(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TopInset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimation>
{
    HRESULT __stdcall get_DelayTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DelayTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DelayTime(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DelayTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
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

    HRESULT __stdcall put_Duration(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IterationBehavior(abi_t<Windows::UI::Composition::AnimationIterationBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IterationBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IterationBehavior(abi_t<Windows::UI::Composition::AnimationIterationBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IterationBehavior(*reinterpret_cast<Windows::UI::Composition::AnimationIterationBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IterationCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IterationCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IterationCount(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IterationCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyFrameCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyFrameCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StopBehavior(abi_t<Windows::UI::Composition::AnimationStopBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StopBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StopBehavior(abi_t<Windows::UI::Composition::AnimationStopBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopBehavior(*reinterpret_cast<Windows::UI::Composition::AnimationStopBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertExpressionKeyFrame(float normalizedProgressKey, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertExpressionKeyFrame(normalizedProgressKey, *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertExpressionKeyFrameWithEasingFunction(float normalizedProgressKey, HSTRING value, ::IUnknown* easingFunction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertExpressionKeyFrame(normalizedProgressKey, *reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimation2> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimation2>
{
    HRESULT __stdcall get_Direction(abi_t<Windows::UI::Composition::AnimationDirection>* value) noexcept override
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

    HRESULT __stdcall put_Direction(abi_t<Windows::UI::Composition::AnimationDirection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Direction(*reinterpret_cast<Windows::UI::Composition::AnimationDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimation3> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimation3>
{
    HRESULT __stdcall get_DelayBehavior(abi_t<Windows::UI::Composition::AnimationDelayBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DelayBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DelayBehavior(abi_t<Windows::UI::Composition::AnimationDelayBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DelayBehavior(*reinterpret_cast<Windows::UI::Composition::AnimationDelayBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimationFactory> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ILayerVisual> : produce_base<D, Windows::UI::Composition::ILayerVisual>
{
    HRESULT __stdcall get_Effect(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Effect());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Effect(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Effect(*reinterpret_cast<Windows::UI::Composition::CompositionEffectBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ILinearEasingFunction> : produce_base<D, Windows::UI::Composition::ILinearEasingFunction>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IPointLight> : produce_base<D, Windows::UI::Composition::IPointLight>
{
    HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConstantAttenuation(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConstantAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConstantAttenuation(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConstantAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSpace(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CoordinateSpace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CoordinateSpace(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CoordinateSpace(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinearAttenuation(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinearAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LinearAttenuation(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LinearAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QuadraticAttenuation(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QuadraticAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_QuadraticAttenuation(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuadraticAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IQuaternionKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IQuaternionKeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::quaternion> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::quaternion> value, ::IUnknown* easingFunction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IRenderingDeviceReplacedEventArgs> : produce_base<D, Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>
{
    HRESULT __stdcall get_GraphicsDevice(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GraphicsDevice());
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
struct produce<D, Windows::UI::Composition::IScalarKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IScalarKeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, float value, ::IUnknown* easingFunction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, value, *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpotLight> : produce_base<D, Windows::UI::Composition::ISpotLight>
{
    HRESULT __stdcall get_ConstantAttenuation(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConstantAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ConstantAttenuation(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConstantAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSpace(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CoordinateSpace());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CoordinateSpace(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CoordinateSpace(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
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

    HRESULT __stdcall get_InnerConeAngle(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InnerConeAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeAngle(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InnerConeAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InnerConeAngleInDegrees(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InnerConeAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeAngleInDegrees(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InnerConeAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InnerConeColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InnerConeColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InnerConeColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinearAttenuation(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinearAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LinearAttenuation(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LinearAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeAngle(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OuterConeAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeAngle(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OuterConeAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeAngleInDegrees(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OuterConeAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeAngleInDegrees(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OuterConeAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OuterConeColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OuterConeColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QuadraticAttenuation(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QuadraticAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_QuadraticAttenuation(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuadraticAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpriteVisual> : produce_base<D, Windows::UI::Composition::ISpriteVisual>
{
    HRESULT __stdcall get_Brush(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Brush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Brush(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Brush(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpriteVisual2> : produce_base<D, Windows::UI::Composition::ISpriteVisual2>
{
    HRESULT __stdcall get_Shadow(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Shadow());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Shadow(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Shadow(*reinterpret_cast<Windows::UI::Composition::CompositionShadow const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IStepEasingFunction> : produce_base<D, Windows::UI::Composition::IStepEasingFunction>
{
    HRESULT __stdcall get_FinalStep(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FinalStep());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FinalStep(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FinalStep(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialStep(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InitialStep());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InitialStep(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialStep(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFinalStepSingleFrame(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFinalStepSingleFrame());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsFinalStepSingleFrame(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsFinalStepSingleFrame(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInitialStepSingleFrame(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInitialStepSingleFrame());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInitialStepSingleFrame(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInitialStepSingleFrame(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StepCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StepCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StepCount(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StepCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector2KeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IVector2KeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float2> value, ::IUnknown* easingFunction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector3KeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IVector3KeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float3> value, ::IUnknown* easingFunction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector4KeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IVector4KeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float4> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float4> value, ::IUnknown* easingFunction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisual> : produce_base<D, Windows::UI::Composition::IVisual>
{
    HRESULT __stdcall get_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnchorPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackfaceVisibility(abi_t<Windows::UI::Composition::CompositionBackfaceVisibility>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackfaceVisibility());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackfaceVisibility(abi_t<Windows::UI::Composition::CompositionBackfaceVisibility> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackfaceVisibility(*reinterpret_cast<Windows::UI::Composition::CompositionBackfaceVisibility const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(abi_t<Windows::UI::Composition::CompositionBorderMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(abi_t<Windows::UI::Composition::CompositionBorderMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Windows::UI::Composition::CompositionBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterPoint(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_Clip(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clip(*reinterpret_cast<Windows::UI::Composition::CompositionClip const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompositeMode(abi_t<Windows::UI::Composition::CompositionCompositeMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompositeMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompositeMode(abi_t<Windows::UI::Composition::CompositionCompositeMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositeMode(*reinterpret_cast<Windows::UI::Composition::CompositionCompositeMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsVisible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(float* value) noexcept override
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

    HRESULT __stdcall put_Opacity(float value) noexcept override
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

    HRESULT __stdcall get_Parent(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAxis(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RotationAxis());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAxis(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAxis(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Size(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(abi_t<Windows::Foundation::Numerics::float4x4>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(abi_t<Windows::Foundation::Numerics::float4x4> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisual2> : produce_base<D, Windows::UI::Composition::IVisual2>
{
    HRESULT __stdcall get_ParentForTransform(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ParentForTransform());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ParentForTransform(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParentForTransform(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeOffsetAdjustment(abi_t<Windows::Foundation::Numerics::float3>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeOffsetAdjustment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeOffsetAdjustment(abi_t<Windows::Foundation::Numerics::float3> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeOffsetAdjustment(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeSizeAdjustment(abi_t<Windows::Foundation::Numerics::float2>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeSizeAdjustment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeSizeAdjustment(abi_t<Windows::Foundation::Numerics::float2> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeSizeAdjustment(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisualCollection> : produce_base<D, Windows::UI::Composition::IVisualCollection>
{
    HRESULT __stdcall get_Count(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertAbove(::IUnknown* newChild, ::IUnknown* sibling) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertAbove(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newChild), *reinterpret_cast<Windows::UI::Composition::Visual const*>(&sibling));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertAtBottom(::IUnknown* newChild) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertAtBottom(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newChild));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertAtTop(::IUnknown* newChild) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertAtTop(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newChild));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertBelow(::IUnknown* newChild, ::IUnknown* sibling) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertBelow(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newChild), *reinterpret_cast<Windows::UI::Composition::Visual const*>(&sibling));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Remove(::IUnknown* child) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&child));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveAll() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisualFactory> : produce_base<D, Windows::UI::Composition::IVisualFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisualUnorderedCollection> : produce_base<D, Windows::UI::Composition::IVisualUnorderedCollection>
{
    HRESULT __stdcall get_Count(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Add(::IUnknown* newVisual) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newVisual));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Remove(::IUnknown* visual) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&visual));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveAll() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

inline Windows::UI::Composition::CompositionCapabilities CompositionCapabilities::GetForCurrentView()
{
    return get_activation_factory<CompositionCapabilities, Windows::UI::Composition::ICompositionCapabilitiesStatics>().GetForCurrentView();
}

inline CompositionEffectSourceParameter::CompositionEffectSourceParameter(param::hstring const& name) :
    CompositionEffectSourceParameter(get_activation_factory<CompositionEffectSourceParameter, Windows::UI::Composition::ICompositionEffectSourceParameterFactory>().Create(name))
{}

inline Compositor::Compositor() :
    Compositor(activate_instance<Compositor>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Composition::IAmbientLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IAmbientLight> {};

template<> struct hash<winrt::Windows::UI::Composition::IColorKeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IColorKeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionAnimation2> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimationBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionAnimationBase> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionAnimationFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimationGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionAnimationGroup> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionBackdropBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionBackdropBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionBatchCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionBatchCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionBrushFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionBrushFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionCapabilities> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionCapabilitiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionCapabilitiesStatics> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionClip> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionClip> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionClip2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionClip2> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionClipFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionClipFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionColorBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionColorBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionCommitBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionCommitBatch> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionDrawingSurface> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionDrawingSurface> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionDrawingSurface2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionDrawingSurface2> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionDrawingSurfaceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionDrawingSurfaceFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionEasingFunction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionEasingFunction> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionEasingFunctionFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionEasingFunctionFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionEffectBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionEffectBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionEffectFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionEffectFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionEffectSourceParameter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionEffectSourceParameter> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionEffectSourceParameterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionEffectSourceParameterFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionGraphicsDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionGraphicsDevice> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionGraphicsDevice2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionGraphicsDevice2> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionLight> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionLightFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionLightFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionMaskBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionMaskBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionNineGridBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionNineGridBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionObject> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionObject> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionObject2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionObject2> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionObjectFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionObjectFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionPropertySet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionPropertySet> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionPropertySet2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionPropertySet2> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionScopedBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionScopedBatch> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionShadow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionShadow> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionShadowFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionShadowFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionSurface> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionSurface> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionSurfaceBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionSurfaceBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionSurfaceBrush2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionSurfaceBrush2> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionTarget> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionTarget> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurface> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurface> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositor> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositor2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositor2> {};

template<> struct hash<winrt::Windows::UI::Composition::ICompositor3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICompositor3> {};

template<> struct hash<winrt::Windows::UI::Composition::IContainerVisual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IContainerVisual> {};

template<> struct hash<winrt::Windows::UI::Composition::IContainerVisualFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IContainerVisualFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ICubicBezierEasingFunction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ICubicBezierEasingFunction> {};

template<> struct hash<winrt::Windows::UI::Composition::IDistantLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IDistantLight> {};

template<> struct hash<winrt::Windows::UI::Composition::IDropShadow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IDropShadow> {};

template<> struct hash<winrt::Windows::UI::Composition::IExpressionAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IExpressionAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::IImplicitAnimationCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IImplicitAnimationCollection> {};

template<> struct hash<winrt::Windows::UI::Composition::IInsetClip> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IInsetClip> {};

template<> struct hash<winrt::Windows::UI::Composition::IKeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IKeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::IKeyFrameAnimation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IKeyFrameAnimation2> {};

template<> struct hash<winrt::Windows::UI::Composition::IKeyFrameAnimation3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IKeyFrameAnimation3> {};

template<> struct hash<winrt::Windows::UI::Composition::IKeyFrameAnimationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IKeyFrameAnimationFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::ILayerVisual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ILayerVisual> {};

template<> struct hash<winrt::Windows::UI::Composition::ILinearEasingFunction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ILinearEasingFunction> {};

template<> struct hash<winrt::Windows::UI::Composition::IPointLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IPointLight> {};

template<> struct hash<winrt::Windows::UI::Composition::IQuaternionKeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IQuaternionKeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::IRenderingDeviceReplacedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IRenderingDeviceReplacedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::ISpotLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ISpotLight> {};

template<> struct hash<winrt::Windows::UI::Composition::ISpriteVisual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ISpriteVisual> {};

template<> struct hash<winrt::Windows::UI::Composition::ISpriteVisual2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ISpriteVisual2> {};

template<> struct hash<winrt::Windows::UI::Composition::IStepEasingFunction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IStepEasingFunction> {};

template<> struct hash<winrt::Windows::UI::Composition::IVector2KeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IVector2KeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::IVector3KeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IVector3KeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::IVector4KeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IVector4KeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::IVisual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IVisual> {};

template<> struct hash<winrt::Windows::UI::Composition::IVisual2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IVisual2> {};

template<> struct hash<winrt::Windows::UI::Composition::IVisualCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IVisualCollection> {};

template<> struct hash<winrt::Windows::UI::Composition::IVisualFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IVisualFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::IVisualUnorderedCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::IVisualUnorderedCollection> {};

template<> struct hash<winrt::Windows::UI::Composition::AmbientLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::AmbientLight> {};

template<> struct hash<winrt::Windows::UI::Composition::ColorKeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ColorKeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionAnimationGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionAnimationGroup> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionBackdropBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionBackdropBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionCapabilities> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionClip> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionClip> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionColorBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionColorBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionCommitBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionCommitBatch> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionDrawingSurface> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionDrawingSurface> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionEasingFunction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionEasingFunction> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionEffectBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionEffectBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionEffectFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionEffectFactory> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionEffectSourceParameter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionEffectSourceParameter> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionGraphicsDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionGraphicsDevice> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionLight> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionMaskBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionMaskBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionNineGridBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionNineGridBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionObject> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionObject> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionPropertySet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionPropertySet> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionScopedBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionScopedBatch> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionShadow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionShadow> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionSurfaceBrush> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionSurfaceBrush> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionTarget> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionTarget> {};

template<> struct hash<winrt::Windows::UI::Composition::CompositionVirtualDrawingSurface> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CompositionVirtualDrawingSurface> {};

template<> struct hash<winrt::Windows::UI::Composition::Compositor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Compositor> {};

template<> struct hash<winrt::Windows::UI::Composition::ContainerVisual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ContainerVisual> {};

template<> struct hash<winrt::Windows::UI::Composition::CubicBezierEasingFunction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::CubicBezierEasingFunction> {};

template<> struct hash<winrt::Windows::UI::Composition::DistantLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::DistantLight> {};

template<> struct hash<winrt::Windows::UI::Composition::DropShadow> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::DropShadow> {};

template<> struct hash<winrt::Windows::UI::Composition::ExpressionAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ExpressionAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::ImplicitAnimationCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ImplicitAnimationCollection> {};

template<> struct hash<winrt::Windows::UI::Composition::InsetClip> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::InsetClip> {};

template<> struct hash<winrt::Windows::UI::Composition::KeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::KeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::LayerVisual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::LayerVisual> {};

template<> struct hash<winrt::Windows::UI::Composition::LinearEasingFunction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::LinearEasingFunction> {};

template<> struct hash<winrt::Windows::UI::Composition::PointLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::PointLight> {};

template<> struct hash<winrt::Windows::UI::Composition::QuaternionKeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::QuaternionKeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::RenderingDeviceReplacedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::RenderingDeviceReplacedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::SpotLight> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::SpotLight> {};

template<> struct hash<winrt::Windows::UI::Composition::SpriteVisual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::SpriteVisual> {};

template<> struct hash<winrt::Windows::UI::Composition::StepEasingFunction> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::StepEasingFunction> {};

template<> struct hash<winrt::Windows::UI::Composition::Vector2KeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Vector2KeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::Vector3KeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Vector3KeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::Vector4KeyFrameAnimation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Vector4KeyFrameAnimation> {};

template<> struct hash<winrt::Windows::UI::Composition::Visual> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::Visual> {};

template<> struct hash<winrt::Windows::UI::Composition::VisualCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::VisualCollection> {};

template<> struct hash<winrt::Windows::UI::Composition::VisualUnorderedCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Composition::VisualUnorderedCollection> {};

}

WINRT_WARNING_POP
