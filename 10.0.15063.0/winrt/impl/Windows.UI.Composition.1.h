// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.0.h"
#include "winrt/impl/Windows.Graphics.DirectX.0.h"
#include "winrt/impl/Windows.Graphics.Effects.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Core.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.UI.Composition.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct WINRT_EBO IAmbientLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAmbientLight>
{
    IAmbientLight(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IColorKeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IColorKeyFrameAnimation>
{
    IColorKeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimation>
{
    ICompositionAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionAnimation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimation2>
{
    ICompositionAnimation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionAnimationBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimationBase>
{
    ICompositionAnimationBase(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionAnimationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimationFactory>
{
    ICompositionAnimationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionAnimationGroup :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionAnimationGroup>,
    impl::require<ICompositionAnimationGroup, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionAnimation>>
{
    ICompositionAnimationGroup(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionBackdropBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionBackdropBrush>
{
    ICompositionBackdropBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionBatchCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionBatchCompletedEventArgs>
{
    ICompositionBatchCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionBrush>
{
    ICompositionBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionBrushFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionBrushFactory>
{
    ICompositionBrushFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionCapabilities>
{
    ICompositionCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionCapabilitiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionCapabilitiesStatics>
{
    ICompositionCapabilitiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionClip :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionClip>
{
    ICompositionClip(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionClip2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionClip2>
{
    ICompositionClip2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionClipFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionClipFactory>
{
    ICompositionClipFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionColorBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionColorBrush>
{
    ICompositionColorBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionCommitBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionCommitBatch>
{
    ICompositionCommitBatch(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionDrawingSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionDrawingSurface>
{
    ICompositionDrawingSurface(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionDrawingSurface2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionDrawingSurface2>
{
    ICompositionDrawingSurface2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionDrawingSurfaceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionDrawingSurfaceFactory>
{
    ICompositionDrawingSurfaceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionEasingFunction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEasingFunction>
{
    ICompositionEasingFunction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionEasingFunctionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEasingFunctionFactory>
{
    ICompositionEasingFunctionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionEffectBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEffectBrush>
{
    ICompositionEffectBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionEffectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEffectFactory>
{
    ICompositionEffectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionEffectSourceParameter :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEffectSourceParameter>,
    impl::require<ICompositionEffectSourceParameter, Windows::Graphics::Effects::IGraphicsEffectSource>
{
    ICompositionEffectSourceParameter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionEffectSourceParameterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionEffectSourceParameterFactory>
{
    ICompositionEffectSourceParameterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionGraphicsDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionGraphicsDevice>
{
    ICompositionGraphicsDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionGraphicsDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionGraphicsDevice2>
{
    ICompositionGraphicsDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionLight>
{
    ICompositionLight(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionLightFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionLightFactory>
{
    ICompositionLightFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionMaskBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionMaskBrush>
{
    ICompositionMaskBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionNineGridBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionNineGridBrush>
{
    ICompositionNineGridBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionObject>
{
    ICompositionObject(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionObject2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionObject2>
{
    ICompositionObject2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionObjectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionObjectFactory>
{
    ICompositionObjectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionPropertySet :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionPropertySet>
{
    ICompositionPropertySet(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionPropertySet2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionPropertySet2>
{
    ICompositionPropertySet2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionScopedBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionScopedBatch>
{
    ICompositionScopedBatch(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionShadow :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionShadow>
{
    ICompositionShadow(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionShadowFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionShadowFactory>
{
    ICompositionShadowFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionSurface>
{
    ICompositionSurface(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionSurfaceBrush :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionSurfaceBrush>
{
    ICompositionSurfaceBrush(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionSurfaceBrush2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionSurfaceBrush2>
{
    ICompositionSurfaceBrush2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionTarget>
{
    ICompositionTarget(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionVirtualDrawingSurface :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionVirtualDrawingSurface>
{
    ICompositionVirtualDrawingSurface(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositionVirtualDrawingSurfaceFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositionVirtualDrawingSurfaceFactory>
{
    ICompositionVirtualDrawingSurfaceFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositor :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositor>
{
    ICompositor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositor2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositor2>
{
    ICompositor2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICompositor3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICompositor3>
{
    ICompositor3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContainerVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContainerVisual>
{
    IContainerVisual(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContainerVisualFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContainerVisualFactory>
{
    IContainerVisualFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICubicBezierEasingFunction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICubicBezierEasingFunction>
{
    ICubicBezierEasingFunction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDistantLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDistantLight>
{
    IDistantLight(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDropShadow :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDropShadow>
{
    IDropShadow(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IExpressionAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExpressionAnimation>
{
    IExpressionAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImplicitAnimationCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImplicitAnimationCollection>,
    impl::require<IImplicitAnimationCollection, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::UI::Composition::ICompositionAnimationBase>>, Windows::Foundation::Collections::IMap<hstring, Windows::UI::Composition::ICompositionAnimationBase>>
{
    IImplicitAnimationCollection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInsetClip :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInsetClip>
{
    IInsetClip(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyFrameAnimation>
{
    IKeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyFrameAnimation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyFrameAnimation2>
{
    IKeyFrameAnimation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyFrameAnimation3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyFrameAnimation3>
{
    IKeyFrameAnimation3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyFrameAnimationFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyFrameAnimationFactory>
{
    IKeyFrameAnimationFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILayerVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILayerVisual>
{
    ILayerVisual(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILinearEasingFunction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILinearEasingFunction>
{
    ILinearEasingFunction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPointLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPointLight>
{
    IPointLight(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IQuaternionKeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IQuaternionKeyFrameAnimation>
{
    IQuaternionKeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRenderingDeviceReplacedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRenderingDeviceReplacedEventArgs>
{
    IRenderingDeviceReplacedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IScalarKeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IScalarKeyFrameAnimation>
{
    IScalarKeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpotLight :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpotLight>
{
    ISpotLight(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpriteVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpriteVisual>
{
    ISpriteVisual(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpriteVisual2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpriteVisual2>
{
    ISpriteVisual2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStepEasingFunction :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStepEasingFunction>
{
    IStepEasingFunction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVector2KeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVector2KeyFrameAnimation>
{
    IVector2KeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVector3KeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVector3KeyFrameAnimation>
{
    IVector3KeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVector4KeyFrameAnimation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVector4KeyFrameAnimation>
{
    IVector4KeyFrameAnimation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisual :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisual>
{
    IVisual(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisual2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisual2>
{
    IVisual2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualCollection>,
    impl::require<IVisualCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual>>
{
    IVisualCollection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualFactory>
{
    IVisualFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualUnorderedCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualUnorderedCollection>,
    impl::require<IVisualUnorderedCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual>>
{
    IVisualUnorderedCollection(std::nullptr_t = nullptr) noexcept {}
};

}
