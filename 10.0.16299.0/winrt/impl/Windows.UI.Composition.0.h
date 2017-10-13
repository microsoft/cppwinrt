// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics {

struct PointInt32;
struct RectInt32;
struct SizeInt32;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX {

enum class DirectXAlphaMode;
enum class DirectXPixelFormat;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Effects {

struct IGraphicsEffect;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct DispatcherQueue;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct CoreDispatcher;

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

enum class AnimationDelayBehavior : int32_t
{
    SetInitialValueAfterDelay = 0,
    SetInitialValueBeforeDelay = 1,
};

enum class AnimationDirection : int32_t
{
    Normal = 0,
    Reverse = 1,
    Alternate = 2,
    AlternateReverse = 3,
};

enum class AnimationIterationBehavior : int32_t
{
    Count = 0,
    Forever = 1,
};

enum class AnimationStopBehavior : int32_t
{
    LeaveCurrentValue = 0,
    SetToInitialValue = 1,
    SetToFinalValue = 2,
};

enum class CompositionBackfaceVisibility : int32_t
{
    Inherit = 0,
    Visible = 1,
    Hidden = 2,
};

enum class CompositionBatchTypes : uint32_t
{
    None = 0x0,
    Animation = 0x1,
    Effect = 0x2,
};

enum class CompositionBitmapInterpolationMode : int32_t
{
    NearestNeighbor = 0,
    Linear = 1,
};

enum class CompositionBorderMode : int32_t
{
    Inherit = 0,
    Soft = 1,
    Hard = 2,
};

enum class CompositionColorSpace : int32_t
{
    Auto = 0,
    Hsl = 1,
    Rgb = 2,
    HslLinear = 3,
    RgbLinear = 4,
};

enum class CompositionCompositeMode : int32_t
{
    Inherit = 0,
    SourceOver = 1,
    DestinationInvert = 2,
    MinBlend = 3,
};

enum class CompositionDropShadowSourcePolicy : int32_t
{
    Default = 0,
    InheritFromVisualContent = 1,
};

enum class CompositionEffectFactoryLoadStatus : int32_t
{
    Success = 0,
    EffectTooComplex = 1,
    Pending = 2,
    Other = -1,
};

enum class CompositionGetValueStatus : int32_t
{
    Succeeded = 0,
    TypeMismatch = 1,
    NotFound = 2,
};

enum class CompositionGradientExtendMode : int32_t
{
    Clamp = 0,
    Wrap = 1,
    Mirror = 2,
};

enum class CompositionStretch : int32_t
{
    None = 0,
    Fill = 1,
    Uniform = 2,
    UniformToFill = 3,
};

struct IAmbientLight;
struct IAmbientLight2;
struct IColorKeyFrameAnimation;
struct ICompositionAnimation;
struct ICompositionAnimation2;
struct ICompositionAnimation3;
struct ICompositionAnimationBase;
struct ICompositionAnimationFactory;
struct ICompositionAnimationGroup;
struct ICompositionBackdropBrush;
struct ICompositionBatchCompletedEventArgs;
struct ICompositionBrush;
struct ICompositionBrushFactory;
struct ICompositionCapabilities;
struct ICompositionCapabilitiesStatics;
struct ICompositionClip;
struct ICompositionClip2;
struct ICompositionClipFactory;
struct ICompositionColorBrush;
struct ICompositionColorGradientStop;
struct ICompositionColorGradientStopCollection;
struct ICompositionCommitBatch;
struct ICompositionDrawingSurface;
struct ICompositionDrawingSurface2;
struct ICompositionDrawingSurfaceFactory;
struct ICompositionEasingFunction;
struct ICompositionEasingFunctionFactory;
struct ICompositionEffectBrush;
struct ICompositionEffectFactory;
struct ICompositionEffectSourceParameter;
struct ICompositionEffectSourceParameterFactory;
struct ICompositionGradientBrush;
struct ICompositionGradientBrushFactory;
struct ICompositionGraphicsDevice;
struct ICompositionGraphicsDevice2;
struct ICompositionLight;
struct ICompositionLight2;
struct ICompositionLightFactory;
struct ICompositionLinearGradientBrush;
struct ICompositionMaskBrush;
struct ICompositionNineGridBrush;
struct ICompositionObject;
struct ICompositionObject2;
struct ICompositionObject3;
struct ICompositionObjectFactory;
struct ICompositionPropertySet;
struct ICompositionPropertySet2;
struct ICompositionScopedBatch;
struct ICompositionShadow;
struct ICompositionShadowFactory;
struct ICompositionSurface;
struct ICompositionSurfaceBrush;
struct ICompositionSurfaceBrush2;
struct ICompositionTarget;
struct ICompositionTargetFactory;
struct ICompositionVirtualDrawingSurface;
struct ICompositionVirtualDrawingSurfaceFactory;
struct ICompositor;
struct ICompositor2;
struct ICompositor3;
struct ICompositor4;
struct IContainerVisual;
struct IContainerVisualFactory;
struct ICubicBezierEasingFunction;
struct IDistantLight;
struct IDistantLight2;
struct IDropShadow;
struct IDropShadow2;
struct IExpressionAnimation;
struct IImplicitAnimationCollection;
struct IInsetClip;
struct IKeyFrameAnimation;
struct IKeyFrameAnimation2;
struct IKeyFrameAnimation3;
struct IKeyFrameAnimationFactory;
struct ILayerVisual;
struct ILayerVisual2;
struct ILinearEasingFunction;
struct INaturalMotionAnimation;
struct INaturalMotionAnimationFactory;
struct IPointLight;
struct IPointLight2;
struct IQuaternionKeyFrameAnimation;
struct IRenderingDeviceReplacedEventArgs;
struct IScalarKeyFrameAnimation;
struct IScalarNaturalMotionAnimation;
struct IScalarNaturalMotionAnimationFactory;
struct ISpotLight;
struct ISpotLight2;
struct ISpringScalarNaturalMotionAnimation;
struct ISpringVector2NaturalMotionAnimation;
struct ISpringVector3NaturalMotionAnimation;
struct ISpriteVisual;
struct ISpriteVisual2;
struct IStepEasingFunction;
struct IVector2KeyFrameAnimation;
struct IVector2NaturalMotionAnimation;
struct IVector2NaturalMotionAnimationFactory;
struct IVector3KeyFrameAnimation;
struct IVector3NaturalMotionAnimation;
struct IVector3NaturalMotionAnimationFactory;
struct IVector4KeyFrameAnimation;
struct IVisual;
struct IVisual2;
struct IVisualCollection;
struct IVisualFactory;
struct IVisualUnorderedCollection;
struct AmbientLight;
struct ColorKeyFrameAnimation;
struct CompositionAnimation;
struct CompositionAnimationGroup;
struct CompositionBackdropBrush;
struct CompositionBatchCompletedEventArgs;
struct CompositionBrush;
struct CompositionCapabilities;
struct CompositionClip;
struct CompositionColorBrush;
struct CompositionColorGradientStop;
struct CompositionColorGradientStopCollection;
struct CompositionCommitBatch;
struct CompositionDrawingSurface;
struct CompositionEasingFunction;
struct CompositionEffectBrush;
struct CompositionEffectFactory;
struct CompositionEffectSourceParameter;
struct CompositionGradientBrush;
struct CompositionGraphicsDevice;
struct CompositionLight;
struct CompositionLinearGradientBrush;
struct CompositionMaskBrush;
struct CompositionNineGridBrush;
struct CompositionObject;
struct CompositionPropertySet;
struct CompositionScopedBatch;
struct CompositionShadow;
struct CompositionSurfaceBrush;
struct CompositionTarget;
struct CompositionVirtualDrawingSurface;
struct Compositor;
struct ContainerVisual;
struct CubicBezierEasingFunction;
struct DistantLight;
struct DropShadow;
struct ExpressionAnimation;
struct ImplicitAnimationCollection;
struct InitialValueExpressionCollection;
struct InsetClip;
struct KeyFrameAnimation;
struct LayerVisual;
struct LinearEasingFunction;
struct NaturalMotionAnimation;
struct PointLight;
struct QuaternionKeyFrameAnimation;
struct RenderingDeviceReplacedEventArgs;
struct ScalarKeyFrameAnimation;
struct ScalarNaturalMotionAnimation;
struct SpotLight;
struct SpringScalarNaturalMotionAnimation;
struct SpringVector2NaturalMotionAnimation;
struct SpringVector3NaturalMotionAnimation;
struct SpriteVisual;
struct StepEasingFunction;
struct Vector2KeyFrameAnimation;
struct Vector2NaturalMotionAnimation;
struct Vector3KeyFrameAnimation;
struct Vector3NaturalMotionAnimation;
struct Vector4KeyFrameAnimation;
struct Visual;
struct VisualCollection;
struct VisualUnorderedCollection;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::UI::Composition::CompositionBatchTypes> : std::true_type {};
template <> struct category<Windows::UI::Composition::IAmbientLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IAmbientLight2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IColorKeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionAnimation2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionAnimation3>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionAnimationBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionAnimationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionAnimationGroup>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionBackdropBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionBrushFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionCapabilities>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionCapabilitiesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionClip>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionClip2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionClipFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionColorBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionColorGradientStop>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionColorGradientStopCollection>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionCommitBatch>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionDrawingSurface>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionDrawingSurface2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionDrawingSurfaceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionEasingFunction>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionEasingFunctionFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionEffectBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionEffectFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionEffectSourceParameter>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionGradientBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionGradientBrushFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionGraphicsDevice>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionGraphicsDevice2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionLight2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionLightFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionLinearGradientBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionMaskBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionNineGridBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionObject>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionObject2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionObject3>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionObjectFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionPropertySet>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionPropertySet2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionScopedBatch>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionShadow>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionShadowFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionSurface>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionSurfaceBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionSurfaceBrush2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionTarget>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionTargetFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionVirtualDrawingSurface>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositor>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositor2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositor3>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositor4>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IContainerVisual>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IContainerVisualFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICubicBezierEasingFunction>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IDistantLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IDistantLight2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IDropShadow>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IDropShadow2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IExpressionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IImplicitAnimationCollection>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IInsetClip>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IKeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IKeyFrameAnimation2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IKeyFrameAnimation3>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IKeyFrameAnimationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ILayerVisual>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ILayerVisual2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ILinearEasingFunction>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::INaturalMotionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::INaturalMotionAnimationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IPointLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IPointLight2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IQuaternionKeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IScalarKeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IScalarNaturalMotionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpotLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpotLight2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpriteVisual>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpriteVisual2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IStepEasingFunction>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVector2KeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVector2NaturalMotionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVector3KeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVector3NaturalMotionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVector4KeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVisual>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVisual2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVisualCollection>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVisualFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVisualUnorderedCollection>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::AmbientLight>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::ColorKeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionAnimationGroup>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionBackdropBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionBatchCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionCapabilities>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionClip>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionColorBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionColorGradientStop>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionColorGradientStopCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionCommitBatch>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionDrawingSurface>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionEasingFunction>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionEffectBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionEffectFactory>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionEffectSourceParameter>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionGradientBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionGraphicsDevice>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionLight>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionLinearGradientBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionMaskBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionNineGridBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionObject>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionPropertySet>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionScopedBatch>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionShadow>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionSurfaceBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionTarget>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionVirtualDrawingSurface>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Compositor>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::ContainerVisual>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CubicBezierEasingFunction>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::DistantLight>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::DropShadow>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::ExpressionAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::ImplicitAnimationCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::InitialValueExpressionCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::InsetClip>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::KeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::LayerVisual>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::LinearEasingFunction>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::NaturalMotionAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::PointLight>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::QuaternionKeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::ScalarKeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::ScalarNaturalMotionAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::SpotLight>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::SpringScalarNaturalMotionAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::SpringVector2NaturalMotionAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::SpringVector3NaturalMotionAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::SpriteVisual>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::StepEasingFunction>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Vector2KeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Vector2NaturalMotionAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Vector3KeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Vector3NaturalMotionAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Vector4KeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Visual>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::VisualCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::VisualUnorderedCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::AnimationDelayBehavior>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::AnimationDirection>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::AnimationIterationBehavior>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::AnimationStopBehavior>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionBackfaceVisibility>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionBatchTypes>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionBitmapInterpolationMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionBorderMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionColorSpace>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionCompositeMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionDropShadowSourcePolicy>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionEffectFactoryLoadStatus>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionGetValueStatus>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionGradientExtendMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionStretch>{ using type = enum_category; };
template <> struct name<Windows::UI::Composition::IAmbientLight>{ static constexpr auto & value{ L"Windows.UI.Composition.IAmbientLight" }; };
template <> struct name<Windows::UI::Composition::IAmbientLight2>{ static constexpr auto & value{ L"Windows.UI.Composition.IAmbientLight2" }; };
template <> struct name<Windows::UI::Composition::IColorKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IColorKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::ICompositionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimation" }; };
template <> struct name<Windows::UI::Composition::ICompositionAnimation2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimation2" }; };
template <> struct name<Windows::UI::Composition::ICompositionAnimation3>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimation3" }; };
template <> struct name<Windows::UI::Composition::ICompositionAnimationBase>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimationBase" }; };
template <> struct name<Windows::UI::Composition::ICompositionAnimationFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimationFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionAnimationGroup>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimationGroup" }; };
template <> struct name<Windows::UI::Composition::ICompositionBackdropBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionBackdropBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionBatchCompletedEventArgs" }; };
template <> struct name<Windows::UI::Composition::ICompositionBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionBrushFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionBrushFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionCapabilities>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionCapabilities" }; };
template <> struct name<Windows::UI::Composition::ICompositionCapabilitiesStatics>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionCapabilitiesStatics" }; };
template <> struct name<Windows::UI::Composition::ICompositionClip>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionClip" }; };
template <> struct name<Windows::UI::Composition::ICompositionClip2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionClip2" }; };
template <> struct name<Windows::UI::Composition::ICompositionClipFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionClipFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionColorBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionColorBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionColorGradientStop>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionColorGradientStop" }; };
template <> struct name<Windows::UI::Composition::ICompositionColorGradientStopCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionColorGradientStopCollection" }; };
template <> struct name<Windows::UI::Composition::ICompositionCommitBatch>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionCommitBatch" }; };
template <> struct name<Windows::UI::Composition::ICompositionDrawingSurface>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionDrawingSurface" }; };
template <> struct name<Windows::UI::Composition::ICompositionDrawingSurface2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionDrawingSurface2" }; };
template <> struct name<Windows::UI::Composition::ICompositionDrawingSurfaceFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionDrawingSurfaceFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEasingFunction" }; };
template <> struct name<Windows::UI::Composition::ICompositionEasingFunctionFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEasingFunctionFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionEffectBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEffectBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionEffectFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEffectFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionEffectSourceParameter>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEffectSourceParameter" }; };
template <> struct name<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionEffectSourceParameterFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionGradientBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGradientBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionGradientBrushFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGradientBrushFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionGraphicsDevice>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGraphicsDevice" }; };
template <> struct name<Windows::UI::Composition::ICompositionGraphicsDevice2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGraphicsDevice2" }; };
template <> struct name<Windows::UI::Composition::ICompositionLight>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLight" }; };
template <> struct name<Windows::UI::Composition::ICompositionLight2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLight2" }; };
template <> struct name<Windows::UI::Composition::ICompositionLightFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLightFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionLinearGradientBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLinearGradientBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionMaskBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionMaskBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionNineGridBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionNineGridBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionObject>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObject" }; };
template <> struct name<Windows::UI::Composition::ICompositionObject2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObject2" }; };
template <> struct name<Windows::UI::Composition::ICompositionObject3>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObject3" }; };
template <> struct name<Windows::UI::Composition::ICompositionObjectFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObjectFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionPropertySet>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionPropertySet" }; };
template <> struct name<Windows::UI::Composition::ICompositionPropertySet2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionPropertySet2" }; };
template <> struct name<Windows::UI::Composition::ICompositionScopedBatch>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionScopedBatch" }; };
template <> struct name<Windows::UI::Composition::ICompositionShadow>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionShadow" }; };
template <> struct name<Windows::UI::Composition::ICompositionShadowFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionShadowFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionSurface>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionSurface" }; };
template <> struct name<Windows::UI::Composition::ICompositionSurfaceBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionSurfaceBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionSurfaceBrush2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionSurfaceBrush2" }; };
template <> struct name<Windows::UI::Composition::ICompositionTarget>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionTarget" }; };
template <> struct name<Windows::UI::Composition::ICompositionTargetFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionTargetFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionVirtualDrawingSurface>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionVirtualDrawingSurface" }; };
template <> struct name<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionVirtualDrawingSurfaceFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositor>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositor" }; };
template <> struct name<Windows::UI::Composition::ICompositor2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositor2" }; };
template <> struct name<Windows::UI::Composition::ICompositor3>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositor3" }; };
template <> struct name<Windows::UI::Composition::ICompositor4>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositor4" }; };
template <> struct name<Windows::UI::Composition::IContainerVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.IContainerVisual" }; };
template <> struct name<Windows::UI::Composition::IContainerVisualFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.IContainerVisualFactory" }; };
template <> struct name<Windows::UI::Composition::ICubicBezierEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.ICubicBezierEasingFunction" }; };
template <> struct name<Windows::UI::Composition::IDistantLight>{ static constexpr auto & value{ L"Windows.UI.Composition.IDistantLight" }; };
template <> struct name<Windows::UI::Composition::IDistantLight2>{ static constexpr auto & value{ L"Windows.UI.Composition.IDistantLight2" }; };
template <> struct name<Windows::UI::Composition::IDropShadow>{ static constexpr auto & value{ L"Windows.UI.Composition.IDropShadow" }; };
template <> struct name<Windows::UI::Composition::IDropShadow2>{ static constexpr auto & value{ L"Windows.UI.Composition.IDropShadow2" }; };
template <> struct name<Windows::UI::Composition::IExpressionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IExpressionAnimation" }; };
template <> struct name<Windows::UI::Composition::IImplicitAnimationCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.IImplicitAnimationCollection" }; };
template <> struct name<Windows::UI::Composition::IInsetClip>{ static constexpr auto & value{ L"Windows.UI.Composition.IInsetClip" }; };
template <> struct name<Windows::UI::Composition::IKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::IKeyFrameAnimation2>{ static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimation2" }; };
template <> struct name<Windows::UI::Composition::IKeyFrameAnimation3>{ static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimation3" }; };
template <> struct name<Windows::UI::Composition::IKeyFrameAnimationFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimationFactory" }; };
template <> struct name<Windows::UI::Composition::ILayerVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.ILayerVisual" }; };
template <> struct name<Windows::UI::Composition::ILayerVisual2>{ static constexpr auto & value{ L"Windows.UI.Composition.ILayerVisual2" }; };
template <> struct name<Windows::UI::Composition::ILinearEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.ILinearEasingFunction" }; };
template <> struct name<Windows::UI::Composition::INaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.INaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::INaturalMotionAnimationFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.INaturalMotionAnimationFactory" }; };
template <> struct name<Windows::UI::Composition::IPointLight>{ static constexpr auto & value{ L"Windows.UI.Composition.IPointLight" }; };
template <> struct name<Windows::UI::Composition::IPointLight2>{ static constexpr auto & value{ L"Windows.UI.Composition.IPointLight2" }; };
template <> struct name<Windows::UI::Composition::IQuaternionKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IQuaternionKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.IRenderingDeviceReplacedEventArgs" }; };
template <> struct name<Windows::UI::Composition::IScalarKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IScalarKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::IScalarNaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IScalarNaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.IScalarNaturalMotionAnimationFactory" }; };
template <> struct name<Windows::UI::Composition::ISpotLight>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpotLight" }; };
template <> struct name<Windows::UI::Composition::ISpotLight2>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpotLight2" }; };
template <> struct name<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpringScalarNaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpringVector2NaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpringVector3NaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::ISpriteVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpriteVisual" }; };
template <> struct name<Windows::UI::Composition::ISpriteVisual2>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpriteVisual2" }; };
template <> struct name<Windows::UI::Composition::IStepEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.IStepEasingFunction" }; };
template <> struct name<Windows::UI::Composition::IVector2KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IVector2KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::IVector2NaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IVector2NaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.IVector2NaturalMotionAnimationFactory" }; };
template <> struct name<Windows::UI::Composition::IVector3KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IVector3KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::IVector3NaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IVector3NaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.IVector3NaturalMotionAnimationFactory" }; };
template <> struct name<Windows::UI::Composition::IVector4KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IVector4KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::IVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.IVisual" }; };
template <> struct name<Windows::UI::Composition::IVisual2>{ static constexpr auto & value{ L"Windows.UI.Composition.IVisual2" }; };
template <> struct name<Windows::UI::Composition::IVisualCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.IVisualCollection" }; };
template <> struct name<Windows::UI::Composition::IVisualFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.IVisualFactory" }; };
template <> struct name<Windows::UI::Composition::IVisualUnorderedCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.IVisualUnorderedCollection" }; };
template <> struct name<Windows::UI::Composition::AmbientLight>{ static constexpr auto & value{ L"Windows.UI.Composition.AmbientLight" }; };
template <> struct name<Windows::UI::Composition::ColorKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ColorKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::CompositionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionAnimation" }; };
template <> struct name<Windows::UI::Composition::CompositionAnimationGroup>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionAnimationGroup" }; };
template <> struct name<Windows::UI::Composition::CompositionBackdropBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionBackdropBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionBatchCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionBatchCompletedEventArgs" }; };
template <> struct name<Windows::UI::Composition::CompositionBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionCapabilities>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionCapabilities" }; };
template <> struct name<Windows::UI::Composition::CompositionClip>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionClip" }; };
template <> struct name<Windows::UI::Composition::CompositionColorBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionColorBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionColorGradientStop>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionColorGradientStop" }; };
template <> struct name<Windows::UI::Composition::CompositionColorGradientStopCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionColorGradientStopCollection" }; };
template <> struct name<Windows::UI::Composition::CompositionCommitBatch>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionCommitBatch" }; };
template <> struct name<Windows::UI::Composition::CompositionDrawingSurface>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionDrawingSurface" }; };
template <> struct name<Windows::UI::Composition::CompositionEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEasingFunction" }; };
template <> struct name<Windows::UI::Composition::CompositionEffectBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionEffectFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectFactory" }; };
template <> struct name<Windows::UI::Composition::CompositionEffectSourceParameter>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectSourceParameter" }; };
template <> struct name<Windows::UI::Composition::CompositionGradientBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionGradientBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionGraphicsDevice>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionGraphicsDevice" }; };
template <> struct name<Windows::UI::Composition::CompositionLight>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionLight" }; };
template <> struct name<Windows::UI::Composition::CompositionLinearGradientBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionLinearGradientBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionMaskBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionMaskBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionNineGridBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionNineGridBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionObject>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionObject" }; };
template <> struct name<Windows::UI::Composition::CompositionPropertySet>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionPropertySet" }; };
template <> struct name<Windows::UI::Composition::CompositionScopedBatch>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionScopedBatch" }; };
template <> struct name<Windows::UI::Composition::CompositionShadow>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionShadow" }; };
template <> struct name<Windows::UI::Composition::CompositionSurfaceBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionSurfaceBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionTarget>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionTarget" }; };
template <> struct name<Windows::UI::Composition::CompositionVirtualDrawingSurface>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionVirtualDrawingSurface" }; };
template <> struct name<Windows::UI::Composition::Compositor>{ static constexpr auto & value{ L"Windows.UI.Composition.Compositor" }; };
template <> struct name<Windows::UI::Composition::ContainerVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.ContainerVisual" }; };
template <> struct name<Windows::UI::Composition::CubicBezierEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.CubicBezierEasingFunction" }; };
template <> struct name<Windows::UI::Composition::DistantLight>{ static constexpr auto & value{ L"Windows.UI.Composition.DistantLight" }; };
template <> struct name<Windows::UI::Composition::DropShadow>{ static constexpr auto & value{ L"Windows.UI.Composition.DropShadow" }; };
template <> struct name<Windows::UI::Composition::ExpressionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ExpressionAnimation" }; };
template <> struct name<Windows::UI::Composition::ImplicitAnimationCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.ImplicitAnimationCollection" }; };
template <> struct name<Windows::UI::Composition::InitialValueExpressionCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.InitialValueExpressionCollection" }; };
template <> struct name<Windows::UI::Composition::InsetClip>{ static constexpr auto & value{ L"Windows.UI.Composition.InsetClip" }; };
template <> struct name<Windows::UI::Composition::KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::LayerVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.LayerVisual" }; };
template <> struct name<Windows::UI::Composition::LinearEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.LinearEasingFunction" }; };
template <> struct name<Windows::UI::Composition::NaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.NaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::PointLight>{ static constexpr auto & value{ L"Windows.UI.Composition.PointLight" }; };
template <> struct name<Windows::UI::Composition::QuaternionKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.QuaternionKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.RenderingDeviceReplacedEventArgs" }; };
template <> struct name<Windows::UI::Composition::ScalarKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ScalarKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::ScalarNaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ScalarNaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::SpotLight>{ static constexpr auto & value{ L"Windows.UI.Composition.SpotLight" }; };
template <> struct name<Windows::UI::Composition::SpringScalarNaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.SpringScalarNaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::SpringVector2NaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.SpringVector2NaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::SpringVector3NaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.SpringVector3NaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::SpriteVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.SpriteVisual" }; };
template <> struct name<Windows::UI::Composition::StepEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.StepEasingFunction" }; };
template <> struct name<Windows::UI::Composition::Vector2KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.Vector2KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::Vector2NaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.Vector2NaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::Vector3KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.Vector3KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::Vector3NaturalMotionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.Vector3NaturalMotionAnimation" }; };
template <> struct name<Windows::UI::Composition::Vector4KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.Vector4KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::Visual>{ static constexpr auto & value{ L"Windows.UI.Composition.Visual" }; };
template <> struct name<Windows::UI::Composition::VisualCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.VisualCollection" }; };
template <> struct name<Windows::UI::Composition::VisualUnorderedCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.VisualUnorderedCollection" }; };
template <> struct name<Windows::UI::Composition::AnimationDelayBehavior>{ static constexpr auto & value{ L"Windows.UI.Composition.AnimationDelayBehavior" }; };
template <> struct name<Windows::UI::Composition::AnimationDirection>{ static constexpr auto & value{ L"Windows.UI.Composition.AnimationDirection" }; };
template <> struct name<Windows::UI::Composition::AnimationIterationBehavior>{ static constexpr auto & value{ L"Windows.UI.Composition.AnimationIterationBehavior" }; };
template <> struct name<Windows::UI::Composition::AnimationStopBehavior>{ static constexpr auto & value{ L"Windows.UI.Composition.AnimationStopBehavior" }; };
template <> struct name<Windows::UI::Composition::CompositionBackfaceVisibility>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionBackfaceVisibility" }; };
template <> struct name<Windows::UI::Composition::CompositionBatchTypes>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionBatchTypes" }; };
template <> struct name<Windows::UI::Composition::CompositionBitmapInterpolationMode>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionBitmapInterpolationMode" }; };
template <> struct name<Windows::UI::Composition::CompositionBorderMode>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionBorderMode" }; };
template <> struct name<Windows::UI::Composition::CompositionColorSpace>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionColorSpace" }; };
template <> struct name<Windows::UI::Composition::CompositionCompositeMode>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionCompositeMode" }; };
template <> struct name<Windows::UI::Composition::CompositionDropShadowSourcePolicy>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionDropShadowSourcePolicy" }; };
template <> struct name<Windows::UI::Composition::CompositionEffectFactoryLoadStatus>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectFactoryLoadStatus" }; };
template <> struct name<Windows::UI::Composition::CompositionGetValueStatus>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionGetValueStatus" }; };
template <> struct name<Windows::UI::Composition::CompositionGradientExtendMode>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionGradientExtendMode" }; };
template <> struct name<Windows::UI::Composition::CompositionStretch>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionStretch" }; };
template <> struct guid<Windows::UI::Composition::IAmbientLight>{ static constexpr GUID value{ 0xA48130A1,0xB7C4,0x46F7,{ 0xB9,0xBF,0xDA,0xF4,0x3A,0x44,0xE6,0xEE } }; };
template <> struct guid<Windows::UI::Composition::IAmbientLight2>{ static constexpr GUID value{ 0x3B64A6BF,0x5F97,0x4C94,{ 0x86,0xE5,0x04,0x2D,0xD3,0x86,0xB2,0x7D } }; };
template <> struct guid<Windows::UI::Composition::IColorKeyFrameAnimation>{ static constexpr GUID value{ 0x93ADB5E9,0x8E05,0x4593,{ 0x84,0xA3,0xDC,0xA1,0x52,0x78,0x1E,0x56 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionAnimation>{ static constexpr GUID value{ 0x464C4C2C,0x1CAA,0x4061,{ 0x9B,0x40,0xE1,0x3F,0xDE,0x15,0x03,0xCA } }; };
template <> struct guid<Windows::UI::Composition::ICompositionAnimation2>{ static constexpr GUID value{ 0x369B603E,0xA80F,0x4948,{ 0x93,0xE3,0xED,0x23,0xFB,0x38,0xC6,0xCB } }; };
template <> struct guid<Windows::UI::Composition::ICompositionAnimation3>{ static constexpr GUID value{ 0xD51E030D,0x7DA4,0x4BD7,{ 0xBC,0x2D,0xF4,0x51,0x75,0x29,0xF4,0x3A } }; };
template <> struct guid<Windows::UI::Composition::ICompositionAnimationBase>{ static constexpr GUID value{ 0x1C2C2999,0xE818,0x48D3,{ 0xA6,0xDD,0xD7,0x8C,0x82,0xF8,0xAC,0xE9 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionAnimationFactory>{ static constexpr GUID value{ 0x10F6C4FB,0x6E51,0x4C25,{ 0xBB,0xD3,0x58,0x6A,0x9B,0xEC,0x3E,0xF4 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionAnimationGroup>{ static constexpr GUID value{ 0x5E7CC90C,0xCD14,0x4E07,{ 0x8A,0x55,0xC7,0x25,0x27,0xAA,0xBD,0xAC } }; };
template <> struct guid<Windows::UI::Composition::ICompositionBackdropBrush>{ static constexpr GUID value{ 0xC5ACAE58,0x3898,0x499E,{ 0x8D,0x7F,0x22,0x4E,0x91,0x28,0x6A,0x5D } }; };
template <> struct guid<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>{ static constexpr GUID value{ 0x0D00DAD0,0x9464,0x450A,{ 0xA5,0x62,0x2E,0x26,0x98,0xB0,0xA8,0x12 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionBrush>{ static constexpr GUID value{ 0xAB0D7608,0x30C0,0x40E9,{ 0xB5,0x68,0xB6,0x0A,0x6B,0xD1,0xFB,0x46 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionBrushFactory>{ static constexpr GUID value{ 0xDA53FB4C,0x4650,0x47C4,{ 0xAD,0x76,0x76,0x53,0x79,0x60,0x7E,0xD6 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionCapabilities>{ static constexpr GUID value{ 0x8253353E,0xB517,0x48BC,{ 0xB1,0xE8,0x4B,0x35,0x61,0xA2,0xE1,0x81 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionCapabilitiesStatics>{ static constexpr GUID value{ 0xF7B7A86E,0x6416,0x49E5,{ 0x8D,0xDF,0xAF,0xE9,0x49,0xE2,0x05,0x62 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionClip>{ static constexpr GUID value{ 0x1CCD2A52,0xCFC7,0x4ACE,{ 0x99,0x83,0x14,0x6B,0xB8,0xEB,0x6A,0x3C } }; };
template <> struct guid<Windows::UI::Composition::ICompositionClip2>{ static constexpr GUID value{ 0x5893E069,0x3516,0x40E1,{ 0x89,0xE0,0x5B,0xA9,0x24,0x92,0x72,0x35 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionClipFactory>{ static constexpr GUID value{ 0xB9484CAF,0x20C7,0x4AED,{ 0xAC,0x4A,0x9C,0x78,0xBA,0x13,0x02,0xCF } }; };
template <> struct guid<Windows::UI::Composition::ICompositionColorBrush>{ static constexpr GUID value{ 0x2B264C5E,0xBF35,0x4831,{ 0x86,0x42,0xCF,0x70,0xC2,0x0F,0xFF,0x2F } }; };
template <> struct guid<Windows::UI::Composition::ICompositionColorGradientStop>{ static constexpr GUID value{ 0x6F00CA92,0xC801,0x4E41,{ 0x9A,0x8F,0xA5,0x3E,0x20,0xF5,0x77,0x78 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionColorGradientStopCollection>{ static constexpr GUID value{ 0x9F1D20EC,0x7B04,0x4B1D,{ 0x90,0xBC,0x9F,0xA3,0x2C,0x0C,0xFD,0x26 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionCommitBatch>{ static constexpr GUID value{ 0x0D00DAD0,0xCA07,0x4400,{ 0x8C,0x8E,0xCB,0x5D,0xB0,0x85,0x59,0xCC } }; };
template <> struct guid<Windows::UI::Composition::ICompositionDrawingSurface>{ static constexpr GUID value{ 0xA166C300,0xFAD0,0x4D11,{ 0x9E,0x67,0xE4,0x33,0x16,0x2F,0xF4,0x9E } }; };
template <> struct guid<Windows::UI::Composition::ICompositionDrawingSurface2>{ static constexpr GUID value{ 0xFAD0E88B,0xE354,0x44E8,{ 0x8E,0x3D,0xC4,0x88,0x0D,0x5A,0x21,0x3F } }; };
template <> struct guid<Windows::UI::Composition::ICompositionDrawingSurfaceFactory>{ static constexpr GUID value{ 0x9497B00A,0x312D,0x46B9,{ 0x9D,0xB3,0x41,0x2F,0xD7,0x94,0x64,0xC8 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionEasingFunction>{ static constexpr GUID value{ 0x5145E356,0xBF79,0x4EA8,{ 0x8C,0xC2,0x6B,0x5B,0x47,0x2E,0x6C,0x9A } }; };
template <> struct guid<Windows::UI::Composition::ICompositionEasingFunctionFactory>{ static constexpr GUID value{ 0x60840774,0x3DA0,0x4949,{ 0x82,0x00,0x72,0x06,0xC0,0x01,0x90,0xA0 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionEffectBrush>{ static constexpr GUID value{ 0xBF7F795E,0x83CC,0x44BF,{ 0xA4,0x47,0x3E,0x3C,0x07,0x17,0x89,0xEC } }; };
template <> struct guid<Windows::UI::Composition::ICompositionEffectFactory>{ static constexpr GUID value{ 0xBE5624AF,0xBA7E,0x4510,{ 0x98,0x50,0x41,0xC0,0xB4,0xFF,0x74,0xDF } }; };
template <> struct guid<Windows::UI::Composition::ICompositionEffectSourceParameter>{ static constexpr GUID value{ 0x858AB13A,0x3292,0x4E4E,{ 0xB3,0xBB,0x2B,0x6C,0x65,0x44,0xA6,0xEE } }; };
template <> struct guid<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>{ static constexpr GUID value{ 0xB3D9F276,0xABA3,0x4724,{ 0xAC,0xF3,0xD0,0x39,0x74,0x64,0xDB,0x1C } }; };
template <> struct guid<Windows::UI::Composition::ICompositionGradientBrush>{ static constexpr GUID value{ 0x1D9709E0,0xFFC6,0x4C0E,{ 0xA9,0xAB,0x34,0x14,0x4D,0x4C,0x90,0x98 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionGradientBrushFactory>{ static constexpr GUID value{ 0x56D765D7,0xF189,0x48C9,{ 0x9C,0x8D,0x94,0xDA,0xF1,0xBE,0xC0,0x10 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionGraphicsDevice>{ static constexpr GUID value{ 0xFB22C6E1,0x80A2,0x4667,{ 0x99,0x36,0xDB,0xEA,0xF6,0xEE,0xFE,0x95 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionGraphicsDevice2>{ static constexpr GUID value{ 0x0FB8BDF6,0xC0F0,0x4BCC,{ 0x9F,0xB8,0x08,0x49,0x82,0x49,0x0D,0x7D } }; };
template <> struct guid<Windows::UI::Composition::ICompositionLight>{ static constexpr GUID value{ 0x41A6D7C2,0x2E5D,0x4BC1,{ 0xB0,0x9E,0x8F,0x0A,0x03,0xE3,0xD8,0xD3 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionLight2>{ static constexpr GUID value{ 0xA7BCDA72,0xF35D,0x425D,{ 0x9B,0x98,0x23,0xF4,0x20,0x5F,0x66,0x69 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionLightFactory>{ static constexpr GUID value{ 0x069CF306,0xDA3C,0x4B44,{ 0x83,0x8A,0x5E,0x03,0xD5,0x1A,0xCE,0x55 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionLinearGradientBrush>{ static constexpr GUID value{ 0x983BC519,0xA9DB,0x413C,{ 0xA2,0xD8,0x2A,0x90,0x56,0xFC,0x52,0x5E } }; };
template <> struct guid<Windows::UI::Composition::ICompositionMaskBrush>{ static constexpr GUID value{ 0x522CF09E,0xBE6B,0x4F41,{ 0xBE,0x49,0xF9,0x22,0x6D,0x47,0x1B,0x4A } }; };
template <> struct guid<Windows::UI::Composition::ICompositionNineGridBrush>{ static constexpr GUID value{ 0xF25154E4,0xBC8C,0x4BE7,{ 0xB8,0x0F,0x86,0x85,0xB8,0x3C,0x01,0x86 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionObject>{ static constexpr GUID value{ 0xBCB4AD45,0x7609,0x4550,{ 0x93,0x4F,0x16,0x00,0x2A,0x68,0xFD,0xED } }; };
template <> struct guid<Windows::UI::Composition::ICompositionObject2>{ static constexpr GUID value{ 0xEF874EA1,0x5CFF,0x4B68,{ 0x9E,0x30,0xA1,0x51,0x9D,0x08,0xBA,0x03 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionObject3>{ static constexpr GUID value{ 0x4BC27925,0xDACD,0x4CF2,{ 0x98,0xB1,0x98,0x6B,0x76,0xE7,0xEB,0xE6 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionObjectFactory>{ static constexpr GUID value{ 0x51205C5E,0x558A,0x4F2A,{ 0x8D,0x39,0x37,0xBF,0xE1,0xE2,0x0D,0xDD } }; };
template <> struct guid<Windows::UI::Composition::ICompositionPropertySet>{ static constexpr GUID value{ 0xC9D6D202,0x5F67,0x4453,{ 0x91,0x17,0x9E,0xAD,0xD4,0x30,0xD3,0xC2 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionPropertySet2>{ static constexpr GUID value{ 0xDE80731E,0xA211,0x4455,{ 0x88,0x80,0x7D,0x0F,0x3F,0x6A,0x44,0xFD } }; };
template <> struct guid<Windows::UI::Composition::ICompositionScopedBatch>{ static constexpr GUID value{ 0x0D00DAD0,0xFB07,0x46FD,{ 0x8C,0x72,0x62,0x80,0xD1,0xA3,0xD1,0xDD } }; };
template <> struct guid<Windows::UI::Composition::ICompositionShadow>{ static constexpr GUID value{ 0x329E52E2,0x4335,0x49CC,{ 0xB1,0x4A,0x37,0x78,0x2D,0x10,0xF0,0xC4 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionShadowFactory>{ static constexpr GUID value{ 0x221F492F,0xDCBA,0x4B91,{ 0x99,0x9E,0x1D,0xC2,0x17,0xA0,0x15,0x30 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionSurface>{ static constexpr GUID value{ 0x1527540D,0x42C7,0x47A6,{ 0xA4,0x08,0x66,0x8F,0x79,0xA9,0x0D,0xFB } }; };
template <> struct guid<Windows::UI::Composition::ICompositionSurfaceBrush>{ static constexpr GUID value{ 0xAD016D79,0x1E4C,0x4C0D,{ 0x9C,0x29,0x83,0x33,0x8C,0x87,0xC1,0x62 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionSurfaceBrush2>{ static constexpr GUID value{ 0xD27174D5,0x64F5,0x4692,{ 0x9D,0xC7,0x71,0xB6,0x1D,0x7E,0x58,0x80 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionTarget>{ static constexpr GUID value{ 0xA1BEA8BA,0xD726,0x4663,{ 0x81,0x29,0x6B,0x5E,0x79,0x27,0xFF,0xA6 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionTargetFactory>{ static constexpr GUID value{ 0x93CD9D2B,0x8516,0x4B14,{ 0xA8,0xCE,0xF4,0x9E,0x21,0x19,0xEC,0x42 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionVirtualDrawingSurface>{ static constexpr GUID value{ 0xA9C384DB,0x8740,0x4F94,{ 0x8B,0x9D,0xB6,0x85,0x21,0xE7,0x86,0x3D } }; };
template <> struct guid<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>{ static constexpr GUID value{ 0x6766106C,0xD56B,0x4A49,{ 0xB1,0xDF,0x50,0x76,0xA0,0x62,0x07,0x68 } }; };
template <> struct guid<Windows::UI::Composition::ICompositor>{ static constexpr GUID value{ 0xB403CA50,0x7F8C,0x4E83,{ 0x98,0x5F,0xCC,0x45,0x06,0x00,0x36,0xD8 } }; };
template <> struct guid<Windows::UI::Composition::ICompositor2>{ static constexpr GUID value{ 0x735081DC,0x5E24,0x45DA,{ 0xA3,0x8F,0xE3,0x2C,0xC3,0x49,0xA9,0xA0 } }; };
template <> struct guid<Windows::UI::Composition::ICompositor3>{ static constexpr GUID value{ 0xC9DD8EF0,0x6EB1,0x4E3C,{ 0xA6,0x58,0x67,0x5D,0x9C,0x64,0xD4,0xAB } }; };
template <> struct guid<Windows::UI::Composition::ICompositor4>{ static constexpr GUID value{ 0xAE47E78A,0x7910,0x4425,{ 0xA4,0x82,0xA0,0x5B,0x75,0x8A,0xDC,0xE9 } }; };
template <> struct guid<Windows::UI::Composition::IContainerVisual>{ static constexpr GUID value{ 0x02F6BC74,0xED20,0x4773,{ 0xAF,0xE6,0xD4,0x9B,0x4A,0x93,0xDB,0x32 } }; };
template <> struct guid<Windows::UI::Composition::IContainerVisualFactory>{ static constexpr GUID value{ 0x0363A65B,0xC7DA,0x4D9A,{ 0x95,0xF4,0x69,0xB5,0xC8,0xDF,0x67,0x0B } }; };
template <> struct guid<Windows::UI::Composition::ICubicBezierEasingFunction>{ static constexpr GUID value{ 0x32350666,0xC1E8,0x44F9,{ 0x96,0xB8,0xC9,0x8A,0xCF,0x0A,0xE6,0x98 } }; };
template <> struct guid<Windows::UI::Composition::IDistantLight>{ static constexpr GUID value{ 0x318CFAFC,0x5CE3,0x4B55,{ 0xAB,0x5D,0x07,0xA0,0x03,0x53,0xAC,0x99 } }; };
template <> struct guid<Windows::UI::Composition::IDistantLight2>{ static constexpr GUID value{ 0xDBCDAA1C,0x294B,0x48D7,{ 0xB6,0x0E,0x76,0xDF,0x64,0xAA,0x39,0x2B } }; };
template <> struct guid<Windows::UI::Composition::IDropShadow>{ static constexpr GUID value{ 0xCB977C07,0xA154,0x4851,{ 0x85,0xE7,0xA8,0x92,0x4C,0x84,0xFA,0xD8 } }; };
template <> struct guid<Windows::UI::Composition::IDropShadow2>{ static constexpr GUID value{ 0x6C4218BC,0x15B9,0x4C2D,{ 0x8D,0x4A,0x07,0x67,0xDF,0x11,0x97,0x7A } }; };
template <> struct guid<Windows::UI::Composition::IExpressionAnimation>{ static constexpr GUID value{ 0x6ACC5431,0x7D3D,0x4BF3,{ 0xAB,0xB6,0xF4,0x4B,0xDC,0x48,0x88,0xC1 } }; };
template <> struct guid<Windows::UI::Composition::IImplicitAnimationCollection>{ static constexpr GUID value{ 0x0598A3FF,0x0A92,0x4C9D,{ 0xA4,0x27,0xB2,0x55,0x19,0x25,0x0D,0xBF } }; };
template <> struct guid<Windows::UI::Composition::IInsetClip>{ static constexpr GUID value{ 0x1E73E647,0x84C7,0x477A,{ 0xB4,0x74,0x58,0x80,0xE0,0x44,0x2E,0x15 } }; };
template <> struct guid<Windows::UI::Composition::IKeyFrameAnimation>{ static constexpr GUID value{ 0x126E7F22,0x3AE9,0x4540,{ 0x9A,0x8A,0xDE,0xAE,0x8A,0x4A,0x4A,0x84 } }; };
template <> struct guid<Windows::UI::Composition::IKeyFrameAnimation2>{ static constexpr GUID value{ 0xF4B488BB,0x2940,0x4EC0,{ 0xA4,0x1A,0xEB,0x6D,0x80,0x1A,0x2F,0x18 } }; };
template <> struct guid<Windows::UI::Composition::IKeyFrameAnimation3>{ static constexpr GUID value{ 0x845BF0B4,0xD8DE,0x462F,{ 0x87,0x53,0xC8,0x0D,0x43,0xC6,0xFF,0x5A } }; };
template <> struct guid<Windows::UI::Composition::IKeyFrameAnimationFactory>{ static constexpr GUID value{ 0xBF0803F8,0x712A,0x4FC1,{ 0x8C,0x87,0x97,0x08,0x59,0xED,0x8D,0x2E } }; };
template <> struct guid<Windows::UI::Composition::ILayerVisual>{ static constexpr GUID value{ 0xAF843985,0x0444,0x4887,{ 0x8E,0x83,0xB4,0x0B,0x25,0x3F,0x82,0x2C } }; };
template <> struct guid<Windows::UI::Composition::ILayerVisual2>{ static constexpr GUID value{ 0x98F9AEEB,0x6F23,0x49F1,{ 0x90,0xB1,0x1F,0x59,0xA1,0x4F,0xBC,0xE3 } }; };
template <> struct guid<Windows::UI::Composition::ILinearEasingFunction>{ static constexpr GUID value{ 0x9400975A,0xC7A6,0x46B3,{ 0xAC,0xF7,0x1A,0x26,0x8A,0x0A,0x11,0x7D } }; };
template <> struct guid<Windows::UI::Composition::INaturalMotionAnimation>{ static constexpr GUID value{ 0x438DE12D,0x769B,0x4821,{ 0xA9,0x49,0x28,0x4A,0x65,0x47,0xE8,0x73 } }; };
template <> struct guid<Windows::UI::Composition::INaturalMotionAnimationFactory>{ static constexpr GUID value{ 0xF53ACB06,0xCF6A,0x4387,{ 0xA3,0xFE,0x52,0x21,0xF3,0xE7,0xE0,0xE0 } }; };
template <> struct guid<Windows::UI::Composition::IPointLight>{ static constexpr GUID value{ 0xB18545B3,0x0C5A,0x4AB0,{ 0xBE,0xDC,0x4F,0x35,0x46,0x94,0x82,0x72 } }; };
template <> struct guid<Windows::UI::Composition::IPointLight2>{ static constexpr GUID value{ 0xEFE98F2C,0x0678,0x4F69,{ 0xB1,0x64,0xA8,0x10,0xD9,0x95,0xBC,0xB7 } }; };
template <> struct guid<Windows::UI::Composition::IQuaternionKeyFrameAnimation>{ static constexpr GUID value{ 0x404E5835,0xECF6,0x4240,{ 0x85,0x20,0x67,0x12,0x79,0xCF,0x36,0xBC } }; };
template <> struct guid<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>{ static constexpr GUID value{ 0x3A31AC7D,0x28BF,0x4E7A,{ 0x85,0x24,0x71,0x67,0x9D,0x48,0x0F,0x38 } }; };
template <> struct guid<Windows::UI::Composition::IScalarKeyFrameAnimation>{ static constexpr GUID value{ 0xAE288FA9,0x252C,0x4B95,{ 0xA7,0x25,0xBF,0x85,0xE3,0x80,0x00,0xA1 } }; };
template <> struct guid<Windows::UI::Composition::IScalarNaturalMotionAnimation>{ static constexpr GUID value{ 0x94A94581,0xBF92,0x495B,{ 0xB5,0xBD,0xD2,0xC6,0x59,0x43,0x07,0x37 } }; };
template <> struct guid<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>{ static constexpr GUID value{ 0x835AA4FC,0x671C,0x41DD,{ 0xAF,0x48,0xAE,0x8D,0xEF,0x8B,0x15,0x29 } }; };
template <> struct guid<Windows::UI::Composition::ISpotLight>{ static constexpr GUID value{ 0x5A9FE273,0x44A1,0x4F95,{ 0xA4,0x22,0x8F,0xA5,0x11,0x6B,0xDB,0x44 } }; };
template <> struct guid<Windows::UI::Composition::ISpotLight2>{ static constexpr GUID value{ 0x64EE615E,0x0686,0x4DEA,{ 0xA9,0xE8,0xBC,0x3A,0x8C,0x70,0x14,0x59 } }; };
template <> struct guid<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>{ static constexpr GUID value{ 0x0572A95F,0x37F9,0x4FBE,{ 0xB8,0x7B,0x5C,0xD0,0x3A,0x89,0x50,0x1C } }; };
template <> struct guid<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>{ static constexpr GUID value{ 0x23F494B5,0xEE73,0x4F0F,{ 0xA4,0x23,0x40,0x2B,0x94,0x6D,0xF4,0xB3 } }; };
template <> struct guid<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>{ static constexpr GUID value{ 0x6C8749DF,0xD57B,0x4794,{ 0x8E,0x2D,0xCE,0xCB,0x11,0xE1,0x94,0xE5 } }; };
template <> struct guid<Windows::UI::Composition::ISpriteVisual>{ static constexpr GUID value{ 0x08E05581,0x1AD1,0x4F97,{ 0x97,0x57,0x40,0x2D,0x76,0xE4,0x23,0x3B } }; };
template <> struct guid<Windows::UI::Composition::ISpriteVisual2>{ static constexpr GUID value{ 0x588C9664,0x997A,0x4850,{ 0x91,0xFE,0x53,0xCB,0x58,0xF8,0x1C,0xE9 } }; };
template <> struct guid<Windows::UI::Composition::IStepEasingFunction>{ static constexpr GUID value{ 0xD0CAA74B,0x560C,0x4A0B,{ 0xA5,0xF6,0x20,0x6C,0xA8,0xC3,0xEC,0xD6 } }; };
template <> struct guid<Windows::UI::Composition::IVector2KeyFrameAnimation>{ static constexpr GUID value{ 0xDF414515,0x4E29,0x4F11,{ 0xB5,0x5E,0xBF,0x2A,0x6E,0xB3,0x62,0x94 } }; };
template <> struct guid<Windows::UI::Composition::IVector2NaturalMotionAnimation>{ static constexpr GUID value{ 0x0F3E0B7D,0xE512,0x479D,{ 0xA0,0x0C,0x77,0xC9,0x3A,0x30,0xA3,0x95 } }; };
template <> struct guid<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>{ static constexpr GUID value{ 0x8C74FF61,0x0761,0x48A2,{ 0xBD,0xDB,0x6A,0xFC,0xC5,0x2B,0x89,0xD8 } }; };
template <> struct guid<Windows::UI::Composition::IVector3KeyFrameAnimation>{ static constexpr GUID value{ 0xC8039DAA,0xA281,0x43C2,{ 0xA7,0x3D,0xB6,0x8E,0x3C,0x53,0x3C,0x40 } }; };
template <> struct guid<Windows::UI::Composition::IVector3NaturalMotionAnimation>{ static constexpr GUID value{ 0x9C17042C,0xE2CA,0x45AD,{ 0x96,0x9E,0x4E,0x78,0xB7,0xB9,0xAD,0x41 } }; };
template <> struct guid<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>{ static constexpr GUID value{ 0x21A81D2F,0x0880,0x457B,{ 0xAC,0x87,0xB6,0x09,0x01,0x8C,0x87,0x6D } }; };
template <> struct guid<Windows::UI::Composition::IVector4KeyFrameAnimation>{ static constexpr GUID value{ 0x2457945B,0xADDD,0x4385,{ 0x96,0x06,0xB6,0xA3,0xD5,0xE4,0xE1,0xB9 } }; };
template <> struct guid<Windows::UI::Composition::IVisual>{ static constexpr GUID value{ 0x117E202D,0xA859,0x4C89,{ 0x87,0x3B,0xC2,0xAA,0x56,0x67,0x88,0xE3 } }; };
template <> struct guid<Windows::UI::Composition::IVisual2>{ static constexpr GUID value{ 0x3052B611,0x56C3,0x4C3E,{ 0x8B,0xF3,0xF6,0xE1,0xAD,0x47,0x3F,0x06 } }; };
template <> struct guid<Windows::UI::Composition::IVisualCollection>{ static constexpr GUID value{ 0x8B745505,0xFD3E,0x4A98,{ 0x84,0xA8,0xE9,0x49,0x46,0x8C,0x6B,0xCB } }; };
template <> struct guid<Windows::UI::Composition::IVisualFactory>{ static constexpr GUID value{ 0xAD0FF93E,0xB502,0x4EB5,{ 0x87,0xB4,0x9A,0x38,0xA7,0x1D,0x01,0x37 } }; };
template <> struct guid<Windows::UI::Composition::IVisualUnorderedCollection>{ static constexpr GUID value{ 0x338FAA70,0x54C8,0x40A7,{ 0x80,0x29,0xC9,0xCE,0xEB,0x0A,0xA2,0x50 } }; };
template <> struct default_interface<Windows::UI::Composition::AmbientLight>{ using type = Windows::UI::Composition::IAmbientLight; };
template <> struct default_interface<Windows::UI::Composition::ColorKeyFrameAnimation>{ using type = Windows::UI::Composition::IColorKeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::CompositionAnimation>{ using type = Windows::UI::Composition::ICompositionAnimation; };
template <> struct default_interface<Windows::UI::Composition::CompositionAnimationGroup>{ using type = Windows::UI::Composition::ICompositionAnimationGroup; };
template <> struct default_interface<Windows::UI::Composition::CompositionBackdropBrush>{ using type = Windows::UI::Composition::ICompositionBackdropBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionBatchCompletedEventArgs>{ using type = Windows::UI::Composition::ICompositionBatchCompletedEventArgs; };
template <> struct default_interface<Windows::UI::Composition::CompositionBrush>{ using type = Windows::UI::Composition::ICompositionBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionCapabilities>{ using type = Windows::UI::Composition::ICompositionCapabilities; };
template <> struct default_interface<Windows::UI::Composition::CompositionClip>{ using type = Windows::UI::Composition::ICompositionClip; };
template <> struct default_interface<Windows::UI::Composition::CompositionColorBrush>{ using type = Windows::UI::Composition::ICompositionColorBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionColorGradientStop>{ using type = Windows::UI::Composition::ICompositionColorGradientStop; };
template <> struct default_interface<Windows::UI::Composition::CompositionColorGradientStopCollection>{ using type = Windows::UI::Composition::ICompositionColorGradientStopCollection; };
template <> struct default_interface<Windows::UI::Composition::CompositionCommitBatch>{ using type = Windows::UI::Composition::ICompositionCommitBatch; };
template <> struct default_interface<Windows::UI::Composition::CompositionDrawingSurface>{ using type = Windows::UI::Composition::ICompositionDrawingSurface; };
template <> struct default_interface<Windows::UI::Composition::CompositionEasingFunction>{ using type = Windows::UI::Composition::ICompositionEasingFunction; };
template <> struct default_interface<Windows::UI::Composition::CompositionEffectBrush>{ using type = Windows::UI::Composition::ICompositionEffectBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionEffectFactory>{ using type = Windows::UI::Composition::ICompositionEffectFactory; };
template <> struct default_interface<Windows::UI::Composition::CompositionEffectSourceParameter>{ using type = Windows::UI::Composition::ICompositionEffectSourceParameter; };
template <> struct default_interface<Windows::UI::Composition::CompositionGradientBrush>{ using type = Windows::UI::Composition::ICompositionGradientBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionGraphicsDevice>{ using type = Windows::UI::Composition::ICompositionGraphicsDevice; };
template <> struct default_interface<Windows::UI::Composition::CompositionLight>{ using type = Windows::UI::Composition::ICompositionLight; };
template <> struct default_interface<Windows::UI::Composition::CompositionLinearGradientBrush>{ using type = Windows::UI::Composition::ICompositionLinearGradientBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionMaskBrush>{ using type = Windows::UI::Composition::ICompositionMaskBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionNineGridBrush>{ using type = Windows::UI::Composition::ICompositionNineGridBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionObject>{ using type = Windows::UI::Composition::ICompositionObject; };
template <> struct default_interface<Windows::UI::Composition::CompositionPropertySet>{ using type = Windows::UI::Composition::ICompositionPropertySet; };
template <> struct default_interface<Windows::UI::Composition::CompositionScopedBatch>{ using type = Windows::UI::Composition::ICompositionScopedBatch; };
template <> struct default_interface<Windows::UI::Composition::CompositionShadow>{ using type = Windows::UI::Composition::ICompositionShadow; };
template <> struct default_interface<Windows::UI::Composition::CompositionSurfaceBrush>{ using type = Windows::UI::Composition::ICompositionSurfaceBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionTarget>{ using type = Windows::UI::Composition::ICompositionTarget; };
template <> struct default_interface<Windows::UI::Composition::CompositionVirtualDrawingSurface>{ using type = Windows::UI::Composition::ICompositionVirtualDrawingSurface; };
template <> struct default_interface<Windows::UI::Composition::Compositor>{ using type = Windows::UI::Composition::ICompositor; };
template <> struct default_interface<Windows::UI::Composition::ContainerVisual>{ using type = Windows::UI::Composition::IContainerVisual; };
template <> struct default_interface<Windows::UI::Composition::CubicBezierEasingFunction>{ using type = Windows::UI::Composition::ICubicBezierEasingFunction; };
template <> struct default_interface<Windows::UI::Composition::DistantLight>{ using type = Windows::UI::Composition::IDistantLight; };
template <> struct default_interface<Windows::UI::Composition::DropShadow>{ using type = Windows::UI::Composition::IDropShadow; };
template <> struct default_interface<Windows::UI::Composition::ExpressionAnimation>{ using type = Windows::UI::Composition::IExpressionAnimation; };
template <> struct default_interface<Windows::UI::Composition::ImplicitAnimationCollection>{ using type = Windows::UI::Composition::IImplicitAnimationCollection; };
template <> struct default_interface<Windows::UI::Composition::InitialValueExpressionCollection>{ using type = Windows::Foundation::Collections::IMap<hstring, hstring>; };
template <> struct default_interface<Windows::UI::Composition::InsetClip>{ using type = Windows::UI::Composition::IInsetClip; };
template <> struct default_interface<Windows::UI::Composition::KeyFrameAnimation>{ using type = Windows::UI::Composition::IKeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::LayerVisual>{ using type = Windows::UI::Composition::ILayerVisual; };
template <> struct default_interface<Windows::UI::Composition::LinearEasingFunction>{ using type = Windows::UI::Composition::ILinearEasingFunction; };
template <> struct default_interface<Windows::UI::Composition::NaturalMotionAnimation>{ using type = Windows::UI::Composition::INaturalMotionAnimation; };
template <> struct default_interface<Windows::UI::Composition::PointLight>{ using type = Windows::UI::Composition::IPointLight; };
template <> struct default_interface<Windows::UI::Composition::QuaternionKeyFrameAnimation>{ using type = Windows::UI::Composition::IQuaternionKeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>{ using type = Windows::UI::Composition::IRenderingDeviceReplacedEventArgs; };
template <> struct default_interface<Windows::UI::Composition::ScalarKeyFrameAnimation>{ using type = Windows::UI::Composition::IScalarKeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::ScalarNaturalMotionAnimation>{ using type = Windows::UI::Composition::IScalarNaturalMotionAnimation; };
template <> struct default_interface<Windows::UI::Composition::SpotLight>{ using type = Windows::UI::Composition::ISpotLight; };
template <> struct default_interface<Windows::UI::Composition::SpringScalarNaturalMotionAnimation>{ using type = Windows::UI::Composition::ISpringScalarNaturalMotionAnimation; };
template <> struct default_interface<Windows::UI::Composition::SpringVector2NaturalMotionAnimation>{ using type = Windows::UI::Composition::ISpringVector2NaturalMotionAnimation; };
template <> struct default_interface<Windows::UI::Composition::SpringVector3NaturalMotionAnimation>{ using type = Windows::UI::Composition::ISpringVector3NaturalMotionAnimation; };
template <> struct default_interface<Windows::UI::Composition::SpriteVisual>{ using type = Windows::UI::Composition::ISpriteVisual; };
template <> struct default_interface<Windows::UI::Composition::StepEasingFunction>{ using type = Windows::UI::Composition::IStepEasingFunction; };
template <> struct default_interface<Windows::UI::Composition::Vector2KeyFrameAnimation>{ using type = Windows::UI::Composition::IVector2KeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::Vector2NaturalMotionAnimation>{ using type = Windows::UI::Composition::IVector2NaturalMotionAnimation; };
template <> struct default_interface<Windows::UI::Composition::Vector3KeyFrameAnimation>{ using type = Windows::UI::Composition::IVector3KeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::Vector3NaturalMotionAnimation>{ using type = Windows::UI::Composition::IVector3NaturalMotionAnimation; };
template <> struct default_interface<Windows::UI::Composition::Vector4KeyFrameAnimation>{ using type = Windows::UI::Composition::IVector4KeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::Visual>{ using type = Windows::UI::Composition::IVisual; };
template <> struct default_interface<Windows::UI::Composition::VisualCollection>{ using type = Windows::UI::Composition::IVisualCollection; };
template <> struct default_interface<Windows::UI::Composition::VisualUnorderedCollection>{ using type = Windows::UI::Composition::IVisualUnorderedCollection; };

template <typename D>
struct consume_Windows_UI_Composition_IAmbientLight
{
    Windows::UI::Color Color() const noexcept;
    void Color(Windows::UI::Color const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IAmbientLight> { template <typename D> using type = consume_Windows_UI_Composition_IAmbientLight<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IAmbientLight2
{
    float Intensity() const noexcept;
    void Intensity(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IAmbientLight2> { template <typename D> using type = consume_Windows_UI_Composition_IAmbientLight2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IColorKeyFrameAnimation
{
    Windows::UI::Composition::CompositionColorSpace InterpolationColorSpace() const noexcept;
    void InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace const& value) const noexcept;
    void InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value) const;
    void InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
};
template <> struct consume<Windows::UI::Composition::IColorKeyFrameAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionAnimation
{
    void ClearAllParameters() const;
    void ClearParameter(param::hstring const& key) const;
    void SetColorParameter(param::hstring const& key, Windows::UI::Color const& value) const;
    void SetMatrix3x2Parameter(param::hstring const& key, Windows::Foundation::Numerics::float3x2 const& value) const;
    void SetMatrix4x4Parameter(param::hstring const& key, Windows::Foundation::Numerics::float4x4 const& value) const;
    void SetQuaternionParameter(param::hstring const& key, Windows::Foundation::Numerics::quaternion const& value) const;
    void SetReferenceParameter(param::hstring const& key, Windows::UI::Composition::CompositionObject const& compositionObject) const;
    void SetScalarParameter(param::hstring const& key, float value) const;
    void SetVector2Parameter(param::hstring const& key, Windows::Foundation::Numerics::float2 const& value) const;
    void SetVector3Parameter(param::hstring const& key, Windows::Foundation::Numerics::float3 const& value) const;
    void SetVector4Parameter(param::hstring const& key, Windows::Foundation::Numerics::float4 const& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionAnimation> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionAnimation2
{
    void SetBooleanParameter(param::hstring const& key, bool value) const;
    hstring Target() const noexcept;
    void Target(param::hstring const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionAnimation2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimation2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionAnimation3
{
    Windows::UI::Composition::InitialValueExpressionCollection InitialValueExpressions() const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionAnimation3> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimation3<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionAnimationBase
{
};
template <> struct consume<Windows::UI::Composition::ICompositionAnimationBase> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimationBase<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionAnimationFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionAnimationFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimationFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionAnimationGroup
{
    int32_t Count() const noexcept;
    void Add(Windows::UI::Composition::CompositionAnimation const& value) const;
    void Remove(Windows::UI::Composition::CompositionAnimation const& value) const;
    void RemoveAll() const;
};
template <> struct consume<Windows::UI::Composition::ICompositionAnimationGroup> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimationGroup<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionBackdropBrush
{
};
template <> struct consume<Windows::UI::Composition::ICompositionBackdropBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionBackdropBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionBatchCompletedEventArgs
{
};
template <> struct consume<Windows::UI::Composition::ICompositionBatchCompletedEventArgs> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionBatchCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionBrush
{
};
template <> struct consume<Windows::UI::Composition::ICompositionBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionBrushFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionBrushFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionBrushFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionCapabilities
{
    bool AreEffectsSupported() const;
    bool AreEffectsFast() const;
    event_token Changed(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler) const;
    using Changed_revoker = event_revoker<Windows::UI::Composition::ICompositionCapabilities>;
    Changed_revoker Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler) const;
    void Changed(event_token const& token) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionCapabilities> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionCapabilities<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionCapabilitiesStatics
{
    Windows::UI::Composition::CompositionCapabilities GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Composition::ICompositionCapabilitiesStatics> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionCapabilitiesStatics<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionClip
{
};
template <> struct consume<Windows::UI::Composition::ICompositionClip> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionClip<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionClip2
{
    Windows::Foundation::Numerics::float2 AnchorPoint() const noexcept;
    void AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float2 CenterPoint() const noexcept;
    void CenterPoint(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float2 Offset() const noexcept;
    void Offset(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    float RotationAngle() const noexcept;
    void RotationAngle(float value) const noexcept;
    float RotationAngleInDegrees() const noexcept;
    void RotationAngleInDegrees(float value) const noexcept;
    Windows::Foundation::Numerics::float2 Scale() const noexcept;
    void Scale(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float3x2 TransformMatrix() const noexcept;
    void TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionClip2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionClip2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionClipFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionClipFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionClipFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionColorBrush
{
    Windows::UI::Color Color() const noexcept;
    void Color(Windows::UI::Color const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionColorBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionColorBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionColorGradientStop
{
    Windows::UI::Color Color() const noexcept;
    void Color(Windows::UI::Color const& value) const noexcept;
    float Offset() const noexcept;
    void Offset(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionColorGradientStop> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionColorGradientStop<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionColorGradientStopCollection
{
};
template <> struct consume<Windows::UI::Composition::ICompositionColorGradientStopCollection> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionColorGradientStopCollection<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionCommitBatch
{
    bool IsActive() const noexcept;
    bool IsEnded() const noexcept;
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
    using Completed_revoker = event_revoker<Windows::UI::Composition::ICompositionCommitBatch>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
    void Completed(event_token const& token) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionCommitBatch> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionCommitBatch<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionDrawingSurface
{
    Windows::Graphics::DirectX::DirectXAlphaMode AlphaMode() const noexcept;
    Windows::Graphics::DirectX::DirectXPixelFormat PixelFormat() const noexcept;
    Windows::Foundation::Size Size() const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionDrawingSurface> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionDrawingSurface<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionDrawingSurface2
{
    Windows::Graphics::SizeInt32 SizeInt32() const noexcept;
    void Resize(Windows::Graphics::SizeInt32 const& sizePixels) const;
    void Scroll(Windows::Graphics::PointInt32 const& offset) const;
    void Scroll(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& scrollRect) const;
    void ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect) const;
    void ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect, Windows::Graphics::RectInt32 const& scrollRect) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionDrawingSurface2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionDrawingSurfaceFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionDrawingSurfaceFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionDrawingSurfaceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionEasingFunction
{
};
template <> struct consume<Windows::UI::Composition::ICompositionEasingFunction> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionEasingFunction<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionEasingFunctionFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionEasingFunctionFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionEasingFunctionFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionEffectBrush
{
    Windows::UI::Composition::CompositionBrush GetSourceParameter(param::hstring const& name) const;
    void SetSourceParameter(param::hstring const& name, Windows::UI::Composition::CompositionBrush const& source) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionEffectBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionEffectFactory
{
    Windows::UI::Composition::CompositionEffectBrush CreateBrush() const;
    HRESULT ExtendedError() const noexcept;
    Windows::UI::Composition::CompositionEffectFactoryLoadStatus LoadStatus() const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionEffectFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionEffectSourceParameter
{
    hstring Name() const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionEffectSourceParameter> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectSourceParameter<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionEffectSourceParameterFactory
{
    Windows::UI::Composition::CompositionEffectSourceParameter Create(param::hstring const& name) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionEffectSourceParameterFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectSourceParameterFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionGradientBrush
{
    Windows::Foundation::Numerics::float2 AnchorPoint() const noexcept;
    void AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float2 CenterPoint() const noexcept;
    void CenterPoint(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::UI::Composition::CompositionColorGradientStopCollection ColorStops() const noexcept;
    Windows::UI::Composition::CompositionGradientExtendMode ExtendMode() const noexcept;
    void ExtendMode(Windows::UI::Composition::CompositionGradientExtendMode const& value) const noexcept;
    Windows::UI::Composition::CompositionColorSpace InterpolationSpace() const noexcept;
    void InterpolationSpace(Windows::UI::Composition::CompositionColorSpace const& value) const noexcept;
    Windows::Foundation::Numerics::float2 Offset() const noexcept;
    void Offset(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    float RotationAngle() const noexcept;
    void RotationAngle(float value) const noexcept;
    float RotationAngleInDegrees() const noexcept;
    void RotationAngleInDegrees(float value) const noexcept;
    Windows::Foundation::Numerics::float2 Scale() const noexcept;
    void Scale(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float3x2 TransformMatrix() const noexcept;
    void TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionGradientBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionGradientBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionGradientBrushFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionGradientBrushFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionGradientBrushFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionGraphicsDevice
{
    Windows::UI::Composition::CompositionDrawingSurface CreateDrawingSurface(Windows::Foundation::Size const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const;
    event_token RenderingDeviceReplaced(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler) const;
    using RenderingDeviceReplaced_revoker = event_revoker<Windows::UI::Composition::ICompositionGraphicsDevice>;
    RenderingDeviceReplaced_revoker RenderingDeviceReplaced(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler) const;
    void RenderingDeviceReplaced(event_token const& token) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionGraphicsDevice> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionGraphicsDevice2
{
    Windows::UI::Composition::CompositionDrawingSurface CreateDrawingSurface2(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const;
    Windows::UI::Composition::CompositionVirtualDrawingSurface CreateVirtualDrawingSurface(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionGraphicsDevice2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionGraphicsDevice2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionLight
{
    Windows::UI::Composition::VisualUnorderedCollection Targets() const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionLight> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionLight<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionLight2
{
    Windows::UI::Composition::VisualUnorderedCollection ExclusionsFromTargets() const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionLight2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionLight2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionLightFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionLightFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionLightFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionLinearGradientBrush
{
    Windows::Foundation::Numerics::float2 EndPoint() const noexcept;
    void EndPoint(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float2 StartPoint() const noexcept;
    void StartPoint(Windows::Foundation::Numerics::float2 const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionLinearGradientBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionLinearGradientBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionMaskBrush
{
    Windows::UI::Composition::CompositionBrush Mask() const noexcept;
    void Mask(Windows::UI::Composition::CompositionBrush const& value) const noexcept;
    Windows::UI::Composition::CompositionBrush Source() const noexcept;
    void Source(Windows::UI::Composition::CompositionBrush const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionMaskBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionMaskBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionNineGridBrush
{
    float BottomInset() const noexcept;
    void BottomInset(float value) const noexcept;
    float BottomInsetScale() const noexcept;
    void BottomInsetScale(float value) const noexcept;
    bool IsCenterHollow() const noexcept;
    void IsCenterHollow(bool value) const noexcept;
    float LeftInset() const noexcept;
    void LeftInset(float value) const noexcept;
    float LeftInsetScale() const noexcept;
    void LeftInsetScale(float value) const noexcept;
    float RightInset() const noexcept;
    void RightInset(float value) const noexcept;
    float RightInsetScale() const noexcept;
    void RightInsetScale(float value) const noexcept;
    Windows::UI::Composition::CompositionBrush Source() const noexcept;
    void Source(Windows::UI::Composition::CompositionBrush const& value) const noexcept;
    float TopInset() const noexcept;
    void TopInset(float value) const noexcept;
    float TopInsetScale() const noexcept;
    void TopInsetScale(float value) const noexcept;
    void SetInsets(float inset) const;
    void SetInsets(float left, float top, float right, float bottom) const;
    void SetInsetScales(float scale) const;
    void SetInsetScales(float left, float top, float right, float bottom) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionNineGridBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionNineGridBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionObject
{
    Windows::UI::Composition::Compositor Compositor() const noexcept;
    Windows::UI::Core::CoreDispatcher Dispatcher() const noexcept;
    Windows::UI::Composition::CompositionPropertySet Properties() const noexcept;
    void StartAnimation(param::hstring const& propertyName, Windows::UI::Composition::CompositionAnimation const& animation) const;
    void StopAnimation(param::hstring const& propertyName) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionObject> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionObject<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionObject2
{
    hstring Comment() const noexcept;
    void Comment(param::hstring const& value) const noexcept;
    Windows::UI::Composition::ImplicitAnimationCollection ImplicitAnimations() const noexcept;
    void ImplicitAnimations(Windows::UI::Composition::ImplicitAnimationCollection const& value) const noexcept;
    void StartAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const;
    void StopAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionObject2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionObject2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionObject3
{
    Windows::System::DispatcherQueue DispatcherQueue() const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionObject3> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionObject3<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionObjectFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionObjectFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionObjectFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionPropertySet
{
    void InsertColor(param::hstring const& propertyName, Windows::UI::Color const& value) const;
    void InsertMatrix3x2(param::hstring const& propertyName, Windows::Foundation::Numerics::float3x2 const& value) const;
    void InsertMatrix4x4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4x4 const& value) const;
    void InsertQuaternion(param::hstring const& propertyName, Windows::Foundation::Numerics::quaternion const& value) const;
    void InsertScalar(param::hstring const& propertyName, float value) const;
    void InsertVector2(param::hstring const& propertyName, Windows::Foundation::Numerics::float2 const& value) const;
    void InsertVector3(param::hstring const& propertyName, Windows::Foundation::Numerics::float3 const& value) const;
    void InsertVector4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4 const& value) const;
    Windows::UI::Composition::CompositionGetValueStatus TryGetColor(param::hstring const& propertyName, Windows::UI::Color& value) const;
    Windows::UI::Composition::CompositionGetValueStatus TryGetMatrix3x2(param::hstring const& propertyName, Windows::Foundation::Numerics::float3x2& value) const;
    Windows::UI::Composition::CompositionGetValueStatus TryGetMatrix4x4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4x4& value) const;
    Windows::UI::Composition::CompositionGetValueStatus TryGetQuaternion(param::hstring const& propertyName, Windows::Foundation::Numerics::quaternion& value) const;
    Windows::UI::Composition::CompositionGetValueStatus TryGetScalar(param::hstring const& propertyName, float& value) const;
    Windows::UI::Composition::CompositionGetValueStatus TryGetVector2(param::hstring const& propertyName, Windows::Foundation::Numerics::float2& value) const;
    Windows::UI::Composition::CompositionGetValueStatus TryGetVector3(param::hstring const& propertyName, Windows::Foundation::Numerics::float3& value) const;
    Windows::UI::Composition::CompositionGetValueStatus TryGetVector4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionPropertySet> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionPropertySet<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionPropertySet2
{
    void InsertBoolean(param::hstring const& propertyName, bool value) const;
    Windows::UI::Composition::CompositionGetValueStatus TryGetBoolean(param::hstring const& propertyName, bool& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionPropertySet2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionPropertySet2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionScopedBatch
{
    bool IsActive() const noexcept;
    bool IsEnded() const noexcept;
    void End() const;
    void Resume() const;
    void Suspend() const;
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
    using Completed_revoker = event_revoker<Windows::UI::Composition::ICompositionScopedBatch>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
    void Completed(event_token const& token) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionScopedBatch> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionScopedBatch<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionShadow
{
};
template <> struct consume<Windows::UI::Composition::ICompositionShadow> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionShadow<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionShadowFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionShadowFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionShadowFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionSurface
{
};
template <> struct consume<Windows::UI::Composition::ICompositionSurface> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionSurface<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionSurfaceBrush
{
    Windows::UI::Composition::CompositionBitmapInterpolationMode BitmapInterpolationMode() const noexcept;
    void BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode const& value) const noexcept;
    float HorizontalAlignmentRatio() const noexcept;
    void HorizontalAlignmentRatio(float value) const noexcept;
    Windows::UI::Composition::CompositionStretch Stretch() const noexcept;
    void Stretch(Windows::UI::Composition::CompositionStretch const& value) const noexcept;
    Windows::UI::Composition::ICompositionSurface Surface() const noexcept;
    void Surface(Windows::UI::Composition::ICompositionSurface const& value) const noexcept;
    float VerticalAlignmentRatio() const noexcept;
    void VerticalAlignmentRatio(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionSurfaceBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionSurfaceBrush2
{
    Windows::Foundation::Numerics::float2 AnchorPoint() const noexcept;
    void AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float2 CenterPoint() const noexcept;
    void CenterPoint(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float2 Offset() const noexcept;
    void Offset(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    float RotationAngle() const noexcept;
    void RotationAngle(float value) const noexcept;
    float RotationAngleInDegrees() const noexcept;
    void RotationAngleInDegrees(float value) const noexcept;
    Windows::Foundation::Numerics::float2 Scale() const noexcept;
    void Scale(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float3x2 TransformMatrix() const noexcept;
    void TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionSurfaceBrush2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionTarget
{
    Windows::UI::Composition::Visual Root() const noexcept;
    void Root(Windows::UI::Composition::Visual const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICompositionTarget> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionTarget<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionTargetFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionTargetFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionTargetFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionVirtualDrawingSurface
{
    void Trim(array_view<Windows::Graphics::RectInt32 const> rects) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionVirtualDrawingSurface> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionVirtualDrawingSurface<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionVirtualDrawingSurfaceFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionVirtualDrawingSurfaceFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositor
{
    Windows::UI::Composition::ColorKeyFrameAnimation CreateColorKeyFrameAnimation() const;
    Windows::UI::Composition::CompositionColorBrush CreateColorBrush() const;
    Windows::UI::Composition::CompositionColorBrush CreateColorBrush(Windows::UI::Color const& color) const;
    Windows::UI::Composition::ContainerVisual CreateContainerVisual() const;
    Windows::UI::Composition::CubicBezierEasingFunction CreateCubicBezierEasingFunction(Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2) const;
    Windows::UI::Composition::CompositionEffectFactory CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect) const;
    Windows::UI::Composition::CompositionEffectFactory CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect, param::iterable<hstring> const& animatableProperties) const;
    Windows::UI::Composition::ExpressionAnimation CreateExpressionAnimation() const;
    Windows::UI::Composition::ExpressionAnimation CreateExpressionAnimation(param::hstring const& expression) const;
    Windows::UI::Composition::InsetClip CreateInsetClip() const;
    Windows::UI::Composition::InsetClip CreateInsetClip(float leftInset, float topInset, float rightInset, float bottomInset) const;
    Windows::UI::Composition::LinearEasingFunction CreateLinearEasingFunction() const;
    Windows::UI::Composition::CompositionPropertySet CreatePropertySet() const;
    Windows::UI::Composition::QuaternionKeyFrameAnimation CreateQuaternionKeyFrameAnimation() const;
    Windows::UI::Composition::ScalarKeyFrameAnimation CreateScalarKeyFrameAnimation() const;
    Windows::UI::Composition::CompositionScopedBatch CreateScopedBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType) const;
    Windows::UI::Composition::SpriteVisual CreateSpriteVisual() const;
    Windows::UI::Composition::CompositionSurfaceBrush CreateSurfaceBrush() const;
    Windows::UI::Composition::CompositionSurfaceBrush CreateSurfaceBrush(Windows::UI::Composition::ICompositionSurface const& surface) const;
    Windows::UI::Composition::CompositionTarget CreateTargetForCurrentView() const;
    Windows::UI::Composition::Vector2KeyFrameAnimation CreateVector2KeyFrameAnimation() const;
    Windows::UI::Composition::Vector3KeyFrameAnimation CreateVector3KeyFrameAnimation() const;
    Windows::UI::Composition::Vector4KeyFrameAnimation CreateVector4KeyFrameAnimation() const;
    Windows::UI::Composition::CompositionCommitBatch GetCommitBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType) const;
};
template <> struct consume<Windows::UI::Composition::ICompositor> { template <typename D> using type = consume_Windows_UI_Composition_ICompositor<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositor2
{
    Windows::UI::Composition::AmbientLight CreateAmbientLight() const;
    Windows::UI::Composition::CompositionAnimationGroup CreateAnimationGroup() const;
    Windows::UI::Composition::CompositionBackdropBrush CreateBackdropBrush() const;
    Windows::UI::Composition::DistantLight CreateDistantLight() const;
    Windows::UI::Composition::DropShadow CreateDropShadow() const;
    Windows::UI::Composition::ImplicitAnimationCollection CreateImplicitAnimationCollection() const;
    Windows::UI::Composition::LayerVisual CreateLayerVisual() const;
    Windows::UI::Composition::CompositionMaskBrush CreateMaskBrush() const;
    Windows::UI::Composition::CompositionNineGridBrush CreateNineGridBrush() const;
    Windows::UI::Composition::PointLight CreatePointLight() const;
    Windows::UI::Composition::SpotLight CreateSpotLight() const;
    Windows::UI::Composition::StepEasingFunction CreateStepEasingFunction() const;
    Windows::UI::Composition::StepEasingFunction CreateStepEasingFunction(int32_t stepCount) const;
};
template <> struct consume<Windows::UI::Composition::ICompositor2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositor2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositor3
{
    Windows::UI::Composition::CompositionBackdropBrush CreateHostBackdropBrush() const;
};
template <> struct consume<Windows::UI::Composition::ICompositor3> { template <typename D> using type = consume_Windows_UI_Composition_ICompositor3<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositor4
{
    Windows::UI::Composition::CompositionColorGradientStop CreateColorGradientStop() const;
    Windows::UI::Composition::CompositionColorGradientStop CreateColorGradientStop(float offset, Windows::UI::Color const& color) const;
    Windows::UI::Composition::CompositionLinearGradientBrush CreateLinearGradientBrush() const;
    Windows::UI::Composition::SpringScalarNaturalMotionAnimation CreateSpringScalarAnimation() const;
    Windows::UI::Composition::SpringVector2NaturalMotionAnimation CreateSpringVector2Animation() const;
    Windows::UI::Composition::SpringVector3NaturalMotionAnimation CreateSpringVector3Animation() const;
};
template <> struct consume<Windows::UI::Composition::ICompositor4> { template <typename D> using type = consume_Windows_UI_Composition_ICompositor4<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IContainerVisual
{
    Windows::UI::Composition::VisualCollection Children() const noexcept;
};
template <> struct consume<Windows::UI::Composition::IContainerVisual> { template <typename D> using type = consume_Windows_UI_Composition_IContainerVisual<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IContainerVisualFactory
{
};
template <> struct consume<Windows::UI::Composition::IContainerVisualFactory> { template <typename D> using type = consume_Windows_UI_Composition_IContainerVisualFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICubicBezierEasingFunction
{
    Windows::Foundation::Numerics::float2 ControlPoint1() const noexcept;
    Windows::Foundation::Numerics::float2 ControlPoint2() const noexcept;
};
template <> struct consume<Windows::UI::Composition::ICubicBezierEasingFunction> { template <typename D> using type = consume_Windows_UI_Composition_ICubicBezierEasingFunction<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IDistantLight
{
    Windows::UI::Color Color() const noexcept;
    void Color(Windows::UI::Color const& value) const noexcept;
    Windows::UI::Composition::Visual CoordinateSpace() const noexcept;
    void CoordinateSpace(Windows::UI::Composition::Visual const& value) const noexcept;
    Windows::Foundation::Numerics::float3 Direction() const noexcept;
    void Direction(Windows::Foundation::Numerics::float3 const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IDistantLight> { template <typename D> using type = consume_Windows_UI_Composition_IDistantLight<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IDistantLight2
{
    float Intensity() const noexcept;
    void Intensity(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IDistantLight2> { template <typename D> using type = consume_Windows_UI_Composition_IDistantLight2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IDropShadow
{
    float BlurRadius() const noexcept;
    void BlurRadius(float value) const noexcept;
    Windows::UI::Color Color() const noexcept;
    void Color(Windows::UI::Color const& value) const noexcept;
    Windows::UI::Composition::CompositionBrush Mask() const noexcept;
    void Mask(Windows::UI::Composition::CompositionBrush const& value) const noexcept;
    Windows::Foundation::Numerics::float3 Offset() const noexcept;
    void Offset(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    float Opacity() const noexcept;
    void Opacity(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IDropShadow> { template <typename D> using type = consume_Windows_UI_Composition_IDropShadow<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IDropShadow2
{
    Windows::UI::Composition::CompositionDropShadowSourcePolicy SourcePolicy() const noexcept;
    void SourcePolicy(Windows::UI::Composition::CompositionDropShadowSourcePolicy const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IDropShadow2> { template <typename D> using type = consume_Windows_UI_Composition_IDropShadow2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IExpressionAnimation
{
    hstring Expression() const noexcept;
    void Expression(param::hstring const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IExpressionAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IExpressionAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IImplicitAnimationCollection
{
};
template <> struct consume<Windows::UI::Composition::IImplicitAnimationCollection> { template <typename D> using type = consume_Windows_UI_Composition_IImplicitAnimationCollection<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IInsetClip
{
    float BottomInset() const noexcept;
    void BottomInset(float value) const noexcept;
    float LeftInset() const noexcept;
    void LeftInset(float value) const noexcept;
    float RightInset() const noexcept;
    void RightInset(float value) const noexcept;
    float TopInset() const noexcept;
    void TopInset(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IInsetClip> { template <typename D> using type = consume_Windows_UI_Composition_IInsetClip<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IKeyFrameAnimation
{
    Windows::Foundation::TimeSpan DelayTime() const noexcept;
    void DelayTime(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::Foundation::TimeSpan Duration() const noexcept;
    void Duration(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::UI::Composition::AnimationIterationBehavior IterationBehavior() const noexcept;
    void IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior const& value) const noexcept;
    int32_t IterationCount() const noexcept;
    void IterationCount(int32_t value) const noexcept;
    int32_t KeyFrameCount() const noexcept;
    Windows::UI::Composition::AnimationStopBehavior StopBehavior() const noexcept;
    void StopBehavior(Windows::UI::Composition::AnimationStopBehavior const& value) const noexcept;
    void InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value) const;
    void InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
};
template <> struct consume<Windows::UI::Composition::IKeyFrameAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IKeyFrameAnimation2
{
    Windows::UI::Composition::AnimationDirection Direction() const noexcept;
    void Direction(Windows::UI::Composition::AnimationDirection const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IKeyFrameAnimation2> { template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimation2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IKeyFrameAnimation3
{
    Windows::UI::Composition::AnimationDelayBehavior DelayBehavior() const noexcept;
    void DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IKeyFrameAnimation3> { template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimation3<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IKeyFrameAnimationFactory
{
};
template <> struct consume<Windows::UI::Composition::IKeyFrameAnimationFactory> { template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimationFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ILayerVisual
{
    Windows::UI::Composition::CompositionEffectBrush Effect() const noexcept;
    void Effect(Windows::UI::Composition::CompositionEffectBrush const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ILayerVisual> { template <typename D> using type = consume_Windows_UI_Composition_ILayerVisual<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ILayerVisual2
{
    Windows::UI::Composition::CompositionShadow Shadow() const noexcept;
    void Shadow(Windows::UI::Composition::CompositionShadow const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ILayerVisual2> { template <typename D> using type = consume_Windows_UI_Composition_ILayerVisual2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ILinearEasingFunction
{
};
template <> struct consume<Windows::UI::Composition::ILinearEasingFunction> { template <typename D> using type = consume_Windows_UI_Composition_ILinearEasingFunction<D>; };

template <typename D>
struct consume_Windows_UI_Composition_INaturalMotionAnimation
{
    Windows::UI::Composition::AnimationDelayBehavior DelayBehavior() const noexcept;
    void DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior const& value) const noexcept;
    Windows::Foundation::TimeSpan DelayTime() const noexcept;
    void DelayTime(Windows::Foundation::TimeSpan const& value) const noexcept;
    Windows::UI::Composition::AnimationStopBehavior StopBehavior() const noexcept;
    void StopBehavior(Windows::UI::Composition::AnimationStopBehavior const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::INaturalMotionAnimation> { template <typename D> using type = consume_Windows_UI_Composition_INaturalMotionAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_INaturalMotionAnimationFactory
{
};
template <> struct consume<Windows::UI::Composition::INaturalMotionAnimationFactory> { template <typename D> using type = consume_Windows_UI_Composition_INaturalMotionAnimationFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IPointLight
{
    Windows::UI::Color Color() const noexcept;
    void Color(Windows::UI::Color const& value) const noexcept;
    float ConstantAttenuation() const noexcept;
    void ConstantAttenuation(float value) const noexcept;
    Windows::UI::Composition::Visual CoordinateSpace() const noexcept;
    void CoordinateSpace(Windows::UI::Composition::Visual const& value) const noexcept;
    float LinearAttenuation() const noexcept;
    void LinearAttenuation(float value) const noexcept;
    Windows::Foundation::Numerics::float3 Offset() const noexcept;
    void Offset(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    float QuadraticAttenuation() const noexcept;
    void QuadraticAttenuation(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IPointLight> { template <typename D> using type = consume_Windows_UI_Composition_IPointLight<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IPointLight2
{
    float Intensity() const noexcept;
    void Intensity(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IPointLight2> { template <typename D> using type = consume_Windows_UI_Composition_IPointLight2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IQuaternionKeyFrameAnimation
{
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value) const;
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
};
template <> struct consume<Windows::UI::Composition::IQuaternionKeyFrameAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IQuaternionKeyFrameAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IRenderingDeviceReplacedEventArgs
{
    Windows::UI::Composition::CompositionGraphicsDevice GraphicsDevice() const noexcept;
};
template <> struct consume<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs> { template <typename D> using type = consume_Windows_UI_Composition_IRenderingDeviceReplacedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IScalarKeyFrameAnimation
{
    void InsertKeyFrame(float normalizedProgressKey, float value) const;
    void InsertKeyFrame(float normalizedProgressKey, float value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
};
template <> struct consume<Windows::UI::Composition::IScalarKeyFrameAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IScalarKeyFrameAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IScalarNaturalMotionAnimation
{
    Windows::Foundation::IReference<float> FinalValue() const noexcept;
    void FinalValue(optional<float> const& value) const noexcept;
    Windows::Foundation::IReference<float> InitialValue() const noexcept;
    void InitialValue(optional<float> const& value) const noexcept;
    float InitialVelocity() const noexcept;
    void InitialVelocity(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IScalarNaturalMotionAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IScalarNaturalMotionAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IScalarNaturalMotionAnimationFactory
{
};
template <> struct consume<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory> { template <typename D> using type = consume_Windows_UI_Composition_IScalarNaturalMotionAnimationFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ISpotLight
{
    float ConstantAttenuation() const noexcept;
    void ConstantAttenuation(float value) const noexcept;
    Windows::UI::Composition::Visual CoordinateSpace() const noexcept;
    void CoordinateSpace(Windows::UI::Composition::Visual const& value) const noexcept;
    Windows::Foundation::Numerics::float3 Direction() const noexcept;
    void Direction(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    float InnerConeAngle() const noexcept;
    void InnerConeAngle(float value) const noexcept;
    float InnerConeAngleInDegrees() const noexcept;
    void InnerConeAngleInDegrees(float value) const noexcept;
    Windows::UI::Color InnerConeColor() const noexcept;
    void InnerConeColor(Windows::UI::Color const& value) const noexcept;
    float LinearAttenuation() const noexcept;
    void LinearAttenuation(float value) const noexcept;
    Windows::Foundation::Numerics::float3 Offset() const noexcept;
    void Offset(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    float OuterConeAngle() const noexcept;
    void OuterConeAngle(float value) const noexcept;
    float OuterConeAngleInDegrees() const noexcept;
    void OuterConeAngleInDegrees(float value) const noexcept;
    Windows::UI::Color OuterConeColor() const noexcept;
    void OuterConeColor(Windows::UI::Color const& value) const noexcept;
    float QuadraticAttenuation() const noexcept;
    void QuadraticAttenuation(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ISpotLight> { template <typename D> using type = consume_Windows_UI_Composition_ISpotLight<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ISpotLight2
{
    float InnerConeIntensity() const noexcept;
    void InnerConeIntensity(float value) const noexcept;
    float OuterConeIntensity() const noexcept;
    void OuterConeIntensity(float value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ISpotLight2> { template <typename D> using type = consume_Windows_UI_Composition_ISpotLight2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation
{
    float DampingRatio() const noexcept;
    void DampingRatio(float value) const noexcept;
    Windows::Foundation::TimeSpan Period() const noexcept;
    void Period(Windows::Foundation::TimeSpan const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation> { template <typename D> using type = consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ISpringVector2NaturalMotionAnimation
{
    float DampingRatio() const noexcept;
    void DampingRatio(float value) const noexcept;
    Windows::Foundation::TimeSpan Period() const noexcept;
    void Period(Windows::Foundation::TimeSpan const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation> { template <typename D> using type = consume_Windows_UI_Composition_ISpringVector2NaturalMotionAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ISpringVector3NaturalMotionAnimation
{
    float DampingRatio() const noexcept;
    void DampingRatio(float value) const noexcept;
    Windows::Foundation::TimeSpan Period() const noexcept;
    void Period(Windows::Foundation::TimeSpan const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation> { template <typename D> using type = consume_Windows_UI_Composition_ISpringVector3NaturalMotionAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ISpriteVisual
{
    Windows::UI::Composition::CompositionBrush Brush() const noexcept;
    void Brush(Windows::UI::Composition::CompositionBrush const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ISpriteVisual> { template <typename D> using type = consume_Windows_UI_Composition_ISpriteVisual<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ISpriteVisual2
{
    Windows::UI::Composition::CompositionShadow Shadow() const noexcept;
    void Shadow(Windows::UI::Composition::CompositionShadow const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::ISpriteVisual2> { template <typename D> using type = consume_Windows_UI_Composition_ISpriteVisual2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IStepEasingFunction
{
    int32_t FinalStep() const noexcept;
    void FinalStep(int32_t value) const noexcept;
    int32_t InitialStep() const noexcept;
    void InitialStep(int32_t value) const noexcept;
    bool IsFinalStepSingleFrame() const noexcept;
    void IsFinalStepSingleFrame(bool value) const noexcept;
    bool IsInitialStepSingleFrame() const noexcept;
    void IsInitialStepSingleFrame(bool value) const noexcept;
    int32_t StepCount() const noexcept;
    void StepCount(int32_t value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IStepEasingFunction> { template <typename D> using type = consume_Windows_UI_Composition_IStepEasingFunction<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVector2KeyFrameAnimation
{
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value) const;
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
};
template <> struct consume<Windows::UI::Composition::IVector2KeyFrameAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IVector2KeyFrameAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVector2NaturalMotionAnimation
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> FinalValue() const noexcept;
    void FinalValue(optional<Windows::Foundation::Numerics::float2> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> InitialValue() const noexcept;
    void InitialValue(optional<Windows::Foundation::Numerics::float2> const& value) const noexcept;
    Windows::Foundation::Numerics::float2 InitialVelocity() const noexcept;
    void InitialVelocity(Windows::Foundation::Numerics::float2 const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IVector2NaturalMotionAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IVector2NaturalMotionAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVector2NaturalMotionAnimationFactory
{
};
template <> struct consume<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory> { template <typename D> using type = consume_Windows_UI_Composition_IVector2NaturalMotionAnimationFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVector3KeyFrameAnimation
{
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value) const;
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
};
template <> struct consume<Windows::UI::Composition::IVector3KeyFrameAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IVector3KeyFrameAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVector3NaturalMotionAnimation
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> FinalValue() const noexcept;
    void FinalValue(optional<Windows::Foundation::Numerics::float3> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> InitialValue() const noexcept;
    void InitialValue(optional<Windows::Foundation::Numerics::float3> const& value) const noexcept;
    Windows::Foundation::Numerics::float3 InitialVelocity() const noexcept;
    void InitialVelocity(Windows::Foundation::Numerics::float3 const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IVector3NaturalMotionAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IVector3NaturalMotionAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVector3NaturalMotionAnimationFactory
{
};
template <> struct consume<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory> { template <typename D> using type = consume_Windows_UI_Composition_IVector3NaturalMotionAnimationFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVector4KeyFrameAnimation
{
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value) const;
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
};
template <> struct consume<Windows::UI::Composition::IVector4KeyFrameAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IVector4KeyFrameAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVisual
{
    Windows::Foundation::Numerics::float2 AnchorPoint() const noexcept;
    void AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::UI::Composition::CompositionBackfaceVisibility BackfaceVisibility() const noexcept;
    void BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility const& value) const noexcept;
    Windows::UI::Composition::CompositionBorderMode BorderMode() const noexcept;
    void BorderMode(Windows::UI::Composition::CompositionBorderMode const& value) const noexcept;
    Windows::Foundation::Numerics::float3 CenterPoint() const noexcept;
    void CenterPoint(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    Windows::UI::Composition::CompositionClip Clip() const noexcept;
    void Clip(Windows::UI::Composition::CompositionClip const& value) const noexcept;
    Windows::UI::Composition::CompositionCompositeMode CompositeMode() const noexcept;
    void CompositeMode(Windows::UI::Composition::CompositionCompositeMode const& value) const noexcept;
    bool IsVisible() const noexcept;
    void IsVisible(bool value) const noexcept;
    Windows::Foundation::Numerics::float3 Offset() const noexcept;
    void Offset(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    float Opacity() const noexcept;
    void Opacity(float value) const noexcept;
    Windows::Foundation::Numerics::quaternion Orientation() const noexcept;
    void Orientation(Windows::Foundation::Numerics::quaternion const& value) const noexcept;
    Windows::UI::Composition::ContainerVisual Parent() const noexcept;
    float RotationAngle() const noexcept;
    void RotationAngle(float value) const noexcept;
    float RotationAngleInDegrees() const noexcept;
    void RotationAngleInDegrees(float value) const noexcept;
    Windows::Foundation::Numerics::float3 RotationAxis() const noexcept;
    void RotationAxis(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    Windows::Foundation::Numerics::float3 Scale() const noexcept;
    void Scale(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    Windows::Foundation::Numerics::float2 Size() const noexcept;
    void Size(Windows::Foundation::Numerics::float2 const& value) const noexcept;
    Windows::Foundation::Numerics::float4x4 TransformMatrix() const noexcept;
    void TransformMatrix(Windows::Foundation::Numerics::float4x4 const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IVisual> { template <typename D> using type = consume_Windows_UI_Composition_IVisual<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVisual2
{
    Windows::UI::Composition::Visual ParentForTransform() const noexcept;
    void ParentForTransform(Windows::UI::Composition::Visual const& value) const noexcept;
    Windows::Foundation::Numerics::float3 RelativeOffsetAdjustment() const noexcept;
    void RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3 const& value) const noexcept;
    Windows::Foundation::Numerics::float2 RelativeSizeAdjustment() const noexcept;
    void RelativeSizeAdjustment(Windows::Foundation::Numerics::float2 const& value) const noexcept;
};
template <> struct consume<Windows::UI::Composition::IVisual2> { template <typename D> using type = consume_Windows_UI_Composition_IVisual2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVisualCollection
{
    int32_t Count() const noexcept;
    void InsertAbove(Windows::UI::Composition::Visual const& newChild, Windows::UI::Composition::Visual const& sibling) const;
    void InsertAtBottom(Windows::UI::Composition::Visual const& newChild) const;
    void InsertAtTop(Windows::UI::Composition::Visual const& newChild) const;
    void InsertBelow(Windows::UI::Composition::Visual const& newChild, Windows::UI::Composition::Visual const& sibling) const;
    void Remove(Windows::UI::Composition::Visual const& child) const;
    void RemoveAll() const;
};
template <> struct consume<Windows::UI::Composition::IVisualCollection> { template <typename D> using type = consume_Windows_UI_Composition_IVisualCollection<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVisualFactory
{
};
template <> struct consume<Windows::UI::Composition::IVisualFactory> { template <typename D> using type = consume_Windows_UI_Composition_IVisualFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVisualUnorderedCollection
{
    int32_t Count() const noexcept;
    void Add(Windows::UI::Composition::Visual const& newVisual) const;
    void Remove(Windows::UI::Composition::Visual const& visual) const;
    void RemoveAll() const;
};
template <> struct consume<Windows::UI::Composition::IVisualUnorderedCollection> { template <typename D> using type = consume_Windows_UI_Composition_IVisualUnorderedCollection<D>; };

template <> struct abi<Windows::UI::Composition::IAmbientLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IAmbientLight2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Intensity(float* value) = 0;
    virtual HRESULT __stdcall put_Intensity(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IColorKeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace* value) = 0;
    virtual HRESULT __stdcall put_InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace value) = 0;
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, struct_of<4> value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, struct_of<4> value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ClearAllParameters() = 0;
    virtual HRESULT __stdcall ClearParameter(HSTRING key) = 0;
    virtual HRESULT __stdcall SetColorParameter(HSTRING key, struct_of<4> value) = 0;
    virtual HRESULT __stdcall SetMatrix3x2Parameter(HSTRING key, Windows::Foundation::Numerics::float3x2 value) = 0;
    virtual HRESULT __stdcall SetMatrix4x4Parameter(HSTRING key, Windows::Foundation::Numerics::float4x4 value) = 0;
    virtual HRESULT __stdcall SetQuaternionParameter(HSTRING key, Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall SetReferenceParameter(HSTRING key, ::IUnknown* compositionObject) = 0;
    virtual HRESULT __stdcall SetScalarParameter(HSTRING key, float value) = 0;
    virtual HRESULT __stdcall SetVector2Parameter(HSTRING key, Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall SetVector3Parameter(HSTRING key, Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall SetVector4Parameter(HSTRING key, Windows::Foundation::Numerics::float4 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionAnimation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetBooleanParameter(HSTRING key, bool value) = 0;
    virtual HRESULT __stdcall get_Target(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Target(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionAnimation3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InitialValueExpressions(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionAnimationBase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionAnimationFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionAnimationGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Count(int32_t* value) = 0;
    virtual HRESULT __stdcall Add(::IUnknown* value) = 0;
    virtual HRESULT __stdcall Remove(::IUnknown* value) = 0;
    virtual HRESULT __stdcall RemoveAll() = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionBackdropBrush>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionBatchCompletedEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionBrush>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionBrushFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AreEffectsSupported(bool* value) = 0;
    virtual HRESULT __stdcall AreEffectsFast(bool* value) = 0;
    virtual HRESULT __stdcall add_Changed(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Changed(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionCapabilitiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** current) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionClip>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionClip2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionClipFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionColorBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionColorGradientStop>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_Offset(float* value) = 0;
    virtual HRESULT __stdcall put_Offset(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionColorGradientStopCollection>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionCommitBatch>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall get_IsEnded(bool* value) = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Completed(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionDrawingSurface>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlphaMode(Windows::Graphics::DirectX::DirectXAlphaMode* value) = 0;
    virtual HRESULT __stdcall get_PixelFormat(Windows::Graphics::DirectX::DirectXPixelFormat* value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Size* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionDrawingSurface2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SizeInt32(struct_of<8>* value) = 0;
    virtual HRESULT __stdcall Resize(struct_of<8> sizePixels) = 0;
    virtual HRESULT __stdcall Scroll(struct_of<8> offset) = 0;
    virtual HRESULT __stdcall ScrollRect(struct_of<8> offset, struct_of<16> scrollRect) = 0;
    virtual HRESULT __stdcall ScrollWithClip(struct_of<8> offset, struct_of<16> clipRect) = 0;
    virtual HRESULT __stdcall ScrollRectWithClip(struct_of<8> offset, struct_of<16> clipRect, struct_of<16> scrollRect) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionDrawingSurfaceFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionEasingFunction>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionEasingFunctionFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionEffectBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetSourceParameter(HSTRING name, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SetSourceParameter(HSTRING name, ::IUnknown* source) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionEffectFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateBrush(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT* value) = 0;
    virtual HRESULT __stdcall get_LoadStatus(Windows::UI::Composition::CompositionEffectFactoryLoadStatus* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionEffectSourceParameter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING name, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionGradientBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_ColorStops(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExtendMode(Windows::UI::Composition::CompositionGradientExtendMode* value) = 0;
    virtual HRESULT __stdcall put_ExtendMode(Windows::UI::Composition::CompositionGradientExtendMode value) = 0;
    virtual HRESULT __stdcall get_InterpolationSpace(Windows::UI::Composition::CompositionColorSpace* value) = 0;
    virtual HRESULT __stdcall put_InterpolationSpace(Windows::UI::Composition::CompositionColorSpace value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionGradientBrushFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionGraphicsDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDrawingSurface(Windows::Foundation::Size sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode alphaMode, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_RenderingDeviceReplaced(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_RenderingDeviceReplaced(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionGraphicsDevice2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDrawingSurface2(struct_of<8> sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode alphaMode, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateVirtualDrawingSurface(struct_of<8> sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode alphaMode, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Targets(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionLight2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExclusionsFromTargets(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionLightFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionLinearGradientBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EndPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_EndPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_StartPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_StartPoint(Windows::Foundation::Numerics::float2 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionMaskBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Mask(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Mask(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionNineGridBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BottomInset(float* value) = 0;
    virtual HRESULT __stdcall put_BottomInset(float value) = 0;
    virtual HRESULT __stdcall get_BottomInsetScale(float* value) = 0;
    virtual HRESULT __stdcall put_BottomInsetScale(float value) = 0;
    virtual HRESULT __stdcall get_IsCenterHollow(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCenterHollow(bool value) = 0;
    virtual HRESULT __stdcall get_LeftInset(float* value) = 0;
    virtual HRESULT __stdcall put_LeftInset(float value) = 0;
    virtual HRESULT __stdcall get_LeftInsetScale(float* value) = 0;
    virtual HRESULT __stdcall put_LeftInsetScale(float value) = 0;
    virtual HRESULT __stdcall get_RightInset(float* value) = 0;
    virtual HRESULT __stdcall put_RightInset(float value) = 0;
    virtual HRESULT __stdcall get_RightInsetScale(float* value) = 0;
    virtual HRESULT __stdcall put_RightInsetScale(float value) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Source(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TopInset(float* value) = 0;
    virtual HRESULT __stdcall put_TopInset(float value) = 0;
    virtual HRESULT __stdcall get_TopInsetScale(float* value) = 0;
    virtual HRESULT __stdcall put_TopInsetScale(float value) = 0;
    virtual HRESULT __stdcall SetInsets(float inset) = 0;
    virtual HRESULT __stdcall SetInsetsWithValues(float left, float top, float right, float bottom) = 0;
    virtual HRESULT __stdcall SetInsetScales(float scale) = 0;
    virtual HRESULT __stdcall SetInsetScalesWithValues(float left, float top, float right, float bottom) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionObject>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Compositor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Dispatcher(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall StartAnimation(HSTRING propertyName, ::IUnknown* animation) = 0;
    virtual HRESULT __stdcall StopAnimation(HSTRING propertyName) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionObject2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Comment(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Comment(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ImplicitAnimations(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ImplicitAnimations(::IUnknown* value) = 0;
    virtual HRESULT __stdcall StartAnimationGroup(::IUnknown* value) = 0;
    virtual HRESULT __stdcall StopAnimationGroup(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionObject3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DispatcherQueue(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionObjectFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionPropertySet>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertColor(HSTRING propertyName, struct_of<4> value) = 0;
    virtual HRESULT __stdcall InsertMatrix3x2(HSTRING propertyName, Windows::Foundation::Numerics::float3x2 value) = 0;
    virtual HRESULT __stdcall InsertMatrix4x4(HSTRING propertyName, Windows::Foundation::Numerics::float4x4 value) = 0;
    virtual HRESULT __stdcall InsertQuaternion(HSTRING propertyName, Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall InsertScalar(HSTRING propertyName, float value) = 0;
    virtual HRESULT __stdcall InsertVector2(HSTRING propertyName, Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall InsertVector3(HSTRING propertyName, Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall InsertVector4(HSTRING propertyName, Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall TryGetColor(HSTRING propertyName, struct_of<4>* value, Windows::UI::Composition::CompositionGetValueStatus* result) = 0;
    virtual HRESULT __stdcall TryGetMatrix3x2(HSTRING propertyName, Windows::Foundation::Numerics::float3x2* value, Windows::UI::Composition::CompositionGetValueStatus* result) = 0;
    virtual HRESULT __stdcall TryGetMatrix4x4(HSTRING propertyName, Windows::Foundation::Numerics::float4x4* value, Windows::UI::Composition::CompositionGetValueStatus* result) = 0;
    virtual HRESULT __stdcall TryGetQuaternion(HSTRING propertyName, Windows::Foundation::Numerics::quaternion* value, Windows::UI::Composition::CompositionGetValueStatus* result) = 0;
    virtual HRESULT __stdcall TryGetScalar(HSTRING propertyName, float* value, Windows::UI::Composition::CompositionGetValueStatus* result) = 0;
    virtual HRESULT __stdcall TryGetVector2(HSTRING propertyName, Windows::Foundation::Numerics::float2* value, Windows::UI::Composition::CompositionGetValueStatus* result) = 0;
    virtual HRESULT __stdcall TryGetVector3(HSTRING propertyName, Windows::Foundation::Numerics::float3* value, Windows::UI::Composition::CompositionGetValueStatus* result) = 0;
    virtual HRESULT __stdcall TryGetVector4(HSTRING propertyName, Windows::Foundation::Numerics::float4* value, Windows::UI::Composition::CompositionGetValueStatus* result) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionPropertySet2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertBoolean(HSTRING propertyName, bool value) = 0;
    virtual HRESULT __stdcall TryGetBoolean(HSTRING propertyName, bool* value, Windows::UI::Composition::CompositionGetValueStatus* result) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionScopedBatch>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall get_IsEnded(bool* value) = 0;
    virtual HRESULT __stdcall End() = 0;
    virtual HRESULT __stdcall Resume() = 0;
    virtual HRESULT __stdcall Suspend() = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Completed(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionShadow>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionShadowFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionSurface>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionSurfaceBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode* value) = 0;
    virtual HRESULT __stdcall put_BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode value) = 0;
    virtual HRESULT __stdcall get_HorizontalAlignmentRatio(float* value) = 0;
    virtual HRESULT __stdcall put_HorizontalAlignmentRatio(float value) = 0;
    virtual HRESULT __stdcall get_Stretch(Windows::UI::Composition::CompositionStretch* value) = 0;
    virtual HRESULT __stdcall put_Stretch(Windows::UI::Composition::CompositionStretch value) = 0;
    virtual HRESULT __stdcall get_Surface(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Surface(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_VerticalAlignmentRatio(float* value) = 0;
    virtual HRESULT __stdcall put_VerticalAlignmentRatio(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionSurfaceBrush2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionTarget>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Root(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Root(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionTargetFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionVirtualDrawingSurface>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Trim(uint32_t __rectsSize, struct_of<16>* rects) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateColorKeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateColorBrush(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateColorBrushWithColor(struct_of<4> color, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateContainerVisual(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateCubicBezierEasingFunction(Windows::Foundation::Numerics::float2 controlPoint1, Windows::Foundation::Numerics::float2 controlPoint2, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateEffectFactory(::IUnknown* graphicsEffect, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateEffectFactoryWithProperties(::IUnknown* graphicsEffect, ::IUnknown* animatableProperties, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateExpressionAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateExpressionAnimationWithExpression(HSTRING expression, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateInsetClip(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateInsetClipWithInsets(float leftInset, float topInset, float rightInset, float bottomInset, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateLinearEasingFunction(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreatePropertySet(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateQuaternionKeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateScalarKeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateScopedBatch(Windows::UI::Composition::CompositionBatchTypes batchType, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSpriteVisual(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSurfaceBrush(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSurfaceBrushWithSurface(::IUnknown* surface, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateTargetForCurrentView(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateVector2KeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateVector3KeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateVector4KeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetCommitBatch(Windows::UI::Composition::CompositionBatchTypes batchType, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositor2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAmbientLight(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateAnimationGroup(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateBackdropBrush(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateDistantLight(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateDropShadow(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateImplicitAnimationCollection(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateLayerVisual(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateMaskBrush(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateNineGridBrush(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreatePointLight(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSpotLight(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateStepEasingFunction(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateStepEasingFunctionWithStepCount(int32_t stepCount, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositor3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateHostBackdropBrush(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositor4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateColorGradientStop(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateColorGradientStopWithOffsetAndColor(float offset, struct_of<4> color, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateLinearGradientBrush(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSpringScalarAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSpringVector2Animation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSpringVector3Animation(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::IContainerVisual>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Children(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IContainerVisualFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICubicBezierEasingFunction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ControlPoint1(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall get_ControlPoint2(Windows::Foundation::Numerics::float2* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IDistantLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_CoordinateSpace(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CoordinateSpace(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Direction(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_Direction(Windows::Foundation::Numerics::float3 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IDistantLight2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Intensity(float* value) = 0;
    virtual HRESULT __stdcall put_Intensity(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IDropShadow>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BlurRadius(float* value) = 0;
    virtual HRESULT __stdcall put_BlurRadius(float value) = 0;
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_Mask(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Mask(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Opacity(float* value) = 0;
    virtual HRESULT __stdcall put_Opacity(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IDropShadow2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SourcePolicy(Windows::UI::Composition::CompositionDropShadowSourcePolicy* value) = 0;
    virtual HRESULT __stdcall put_SourcePolicy(Windows::UI::Composition::CompositionDropShadowSourcePolicy value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IExpressionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Expression(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Expression(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IImplicitAnimationCollection>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::IInsetClip>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BottomInset(float* value) = 0;
    virtual HRESULT __stdcall put_BottomInset(float value) = 0;
    virtual HRESULT __stdcall get_LeftInset(float* value) = 0;
    virtual HRESULT __stdcall put_LeftInset(float value) = 0;
    virtual HRESULT __stdcall get_RightInset(float* value) = 0;
    virtual HRESULT __stdcall put_RightInset(float value) = 0;
    virtual HRESULT __stdcall get_TopInset(float* value) = 0;
    virtual HRESULT __stdcall put_TopInset(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IKeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DelayTime(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_DelayTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior* value) = 0;
    virtual HRESULT __stdcall put_IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior value) = 0;
    virtual HRESULT __stdcall get_IterationCount(int32_t* value) = 0;
    virtual HRESULT __stdcall put_IterationCount(int32_t value) = 0;
    virtual HRESULT __stdcall get_KeyFrameCount(int32_t* value) = 0;
    virtual HRESULT __stdcall get_StopBehavior(Windows::UI::Composition::AnimationStopBehavior* value) = 0;
    virtual HRESULT __stdcall put_StopBehavior(Windows::UI::Composition::AnimationStopBehavior value) = 0;
    virtual HRESULT __stdcall InsertExpressionKeyFrame(float normalizedProgressKey, HSTRING value) = 0;
    virtual HRESULT __stdcall InsertExpressionKeyFrameWithEasingFunction(float normalizedProgressKey, HSTRING value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IKeyFrameAnimation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Direction(Windows::UI::Composition::AnimationDirection* value) = 0;
    virtual HRESULT __stdcall put_Direction(Windows::UI::Composition::AnimationDirection value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IKeyFrameAnimation3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior* value) = 0;
    virtual HRESULT __stdcall put_DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IKeyFrameAnimationFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ILayerVisual>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Effect(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Effect(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ILayerVisual2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Shadow(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Shadow(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ILinearEasingFunction>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::INaturalMotionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior* value) = 0;
    virtual HRESULT __stdcall put_DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior value) = 0;
    virtual HRESULT __stdcall get_DelayTime(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_DelayTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_StopBehavior(Windows::UI::Composition::AnimationStopBehavior* value) = 0;
    virtual HRESULT __stdcall put_StopBehavior(Windows::UI::Composition::AnimationStopBehavior value) = 0;
};};

template <> struct abi<Windows::UI::Composition::INaturalMotionAnimationFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::IPointLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_Color(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_ConstantAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_ConstantAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_CoordinateSpace(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CoordinateSpace(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_LinearAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_LinearAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_QuadraticAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_QuadraticAttenuation(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IPointLight2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Intensity(float* value) = 0;
    virtual HRESULT __stdcall put_Intensity(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IQuaternionKeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GraphicsDevice(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IScalarKeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, float value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, float value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IScalarNaturalMotionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FinalValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FinalValue(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_InitialValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_InitialValue(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_InitialVelocity(float* value) = 0;
    virtual HRESULT __stdcall put_InitialVelocity(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ISpotLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConstantAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_ConstantAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_CoordinateSpace(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CoordinateSpace(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Direction(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_Direction(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_InnerConeAngle(float* value) = 0;
    virtual HRESULT __stdcall put_InnerConeAngle(float value) = 0;
    virtual HRESULT __stdcall get_InnerConeAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_InnerConeAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_InnerConeColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_InnerConeColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_LinearAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_LinearAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_OuterConeAngle(float* value) = 0;
    virtual HRESULT __stdcall put_OuterConeAngle(float value) = 0;
    virtual HRESULT __stdcall get_OuterConeAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_OuterConeAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_OuterConeColor(struct_of<4>* value) = 0;
    virtual HRESULT __stdcall put_OuterConeColor(struct_of<4> value) = 0;
    virtual HRESULT __stdcall get_QuadraticAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_QuadraticAttenuation(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ISpotLight2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InnerConeIntensity(float* value) = 0;
    virtual HRESULT __stdcall put_InnerConeIntensity(float value) = 0;
    virtual HRESULT __stdcall get_OuterConeIntensity(float* value) = 0;
    virtual HRESULT __stdcall put_OuterConeIntensity(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DampingRatio(float* value) = 0;
    virtual HRESULT __stdcall put_DampingRatio(float value) = 0;
    virtual HRESULT __stdcall get_Period(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_Period(Windows::Foundation::TimeSpan value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DampingRatio(float* value) = 0;
    virtual HRESULT __stdcall put_DampingRatio(float value) = 0;
    virtual HRESULT __stdcall get_Period(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_Period(Windows::Foundation::TimeSpan value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DampingRatio(float* value) = 0;
    virtual HRESULT __stdcall put_DampingRatio(float value) = 0;
    virtual HRESULT __stdcall get_Period(Windows::Foundation::TimeSpan* value) = 0;
    virtual HRESULT __stdcall put_Period(Windows::Foundation::TimeSpan value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ISpriteVisual>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Brush(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Brush(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ISpriteVisual2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Shadow(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Shadow(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IStepEasingFunction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FinalStep(int32_t* value) = 0;
    virtual HRESULT __stdcall put_FinalStep(int32_t value) = 0;
    virtual HRESULT __stdcall get_InitialStep(int32_t* value) = 0;
    virtual HRESULT __stdcall put_InitialStep(int32_t value) = 0;
    virtual HRESULT __stdcall get_IsFinalStepSingleFrame(bool* value) = 0;
    virtual HRESULT __stdcall put_IsFinalStepSingleFrame(bool value) = 0;
    virtual HRESULT __stdcall get_IsInitialStepSingleFrame(bool* value) = 0;
    virtual HRESULT __stdcall put_IsInitialStepSingleFrame(bool value) = 0;
    virtual HRESULT __stdcall get_StepCount(int32_t* value) = 0;
    virtual HRESULT __stdcall put_StepCount(int32_t value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVector2KeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::float2 value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVector2NaturalMotionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FinalValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FinalValue(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_InitialValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_InitialValue(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_InitialVelocity(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_InitialVelocity(Windows::Foundation::Numerics::float2 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::IVector3KeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::float3 value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVector3NaturalMotionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FinalValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FinalValue(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_InitialValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_InitialValue(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_InitialVelocity(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_InitialVelocity(Windows::Foundation::Numerics::float3 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::IVector4KeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::float4 value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVisual>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility* value) = 0;
    virtual HRESULT __stdcall put_BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility value) = 0;
    virtual HRESULT __stdcall get_BorderMode(Windows::UI::Composition::CompositionBorderMode* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(Windows::UI::Composition::CompositionBorderMode value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Clip(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Clip(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CompositeMode(Windows::UI::Composition::CompositionCompositeMode* value) = 0;
    virtual HRESULT __stdcall put_CompositeMode(Windows::UI::Composition::CompositionCompositeMode value) = 0;
    virtual HRESULT __stdcall get_IsVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsVisible(bool value) = 0;
    virtual HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Opacity(float* value) = 0;
    virtual HRESULT __stdcall put_Opacity(float value) = 0;
    virtual HRESULT __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion* value) = 0;
    virtual HRESULT __stdcall put_Orientation(Windows::Foundation::Numerics::quaternion value) = 0;
    virtual HRESULT __stdcall get_Parent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_RotationAxis(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_RotationAxis(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_Size(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_Size(Windows::Foundation::Numerics::float2 value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float4x4* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float4x4 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVisual2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ParentForTransform(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ParentForTransform(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3* value) = 0;
    virtual HRESULT __stdcall put_RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3 value) = 0;
    virtual HRESULT __stdcall get_RelativeSizeAdjustment(Windows::Foundation::Numerics::float2* value) = 0;
    virtual HRESULT __stdcall put_RelativeSizeAdjustment(Windows::Foundation::Numerics::float2 value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVisualCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Count(int32_t* value) = 0;
    virtual HRESULT __stdcall InsertAbove(::IUnknown* newChild, ::IUnknown* sibling) = 0;
    virtual HRESULT __stdcall InsertAtBottom(::IUnknown* newChild) = 0;
    virtual HRESULT __stdcall InsertAtTop(::IUnknown* newChild) = 0;
    virtual HRESULT __stdcall InsertBelow(::IUnknown* newChild, ::IUnknown* sibling) = 0;
    virtual HRESULT __stdcall Remove(::IUnknown* child) = 0;
    virtual HRESULT __stdcall RemoveAll() = 0;
};};

template <> struct abi<Windows::UI::Composition::IVisualFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::IVisualUnorderedCollection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Count(int32_t* value) = 0;
    virtual HRESULT __stdcall Add(::IUnknown* newVisual) = 0;
    virtual HRESULT __stdcall Remove(::IUnknown* visual) = 0;
    virtual HRESULT __stdcall RemoveAll() = 0;
};};

}
