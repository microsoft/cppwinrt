// C++/WinRT v1.0.170825.9
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

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct CoreDispatcher;

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

enum class AnimationDelayBehavior
{
    SetInitialValueAfterDelay = 0,
    SetInitialValueBeforeDelay = 1,
};

enum class AnimationDirection
{
    Normal = 0,
    Reverse = 1,
    Alternate = 2,
    AlternateReverse = 3,
};

enum class AnimationIterationBehavior
{
    Count = 0,
    Forever = 1,
};

enum class AnimationStopBehavior
{
    LeaveCurrentValue = 0,
    SetToInitialValue = 1,
    SetToFinalValue = 2,
};

enum class CompositionBackfaceVisibility
{
    Inherit = 0,
    Visible = 1,
    Hidden = 2,
};

enum class CompositionBatchTypes : unsigned
{
    None = 0x0,
    Animation = 0x1,
    Effect = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(CompositionBatchTypes)

enum class CompositionBitmapInterpolationMode
{
    NearestNeighbor = 0,
    Linear = 1,
};

enum class CompositionBorderMode
{
    Inherit = 0,
    Soft = 1,
    Hard = 2,
};

enum class CompositionColorSpace
{
    Auto = 0,
    Hsl = 1,
    Rgb = 2,
};

enum class CompositionCompositeMode
{
    Inherit = 0,
    SourceOver = 1,
    DestinationInvert = 2,
    MinBlend = 3,
};

enum class CompositionEffectFactoryLoadStatus
{
    Success = 0,
    EffectTooComplex = 1,
    Pending = 2,
    Other = -1,
};

enum class CompositionGetValueStatus
{
    Succeeded = 0,
    TypeMismatch = 1,
    NotFound = 2,
};

enum class CompositionStretch
{
    None = 0,
    Fill = 1,
    Uniform = 2,
    UniformToFill = 3,
};

struct IAmbientLight;
struct IColorKeyFrameAnimation;
struct ICompositionAnimation;
struct ICompositionAnimation2;
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
struct ICompositionGraphicsDevice;
struct ICompositionGraphicsDevice2;
struct ICompositionLight;
struct ICompositionLightFactory;
struct ICompositionMaskBrush;
struct ICompositionNineGridBrush;
struct ICompositionObject;
struct ICompositionObject2;
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
struct ICompositionVirtualDrawingSurface;
struct ICompositionVirtualDrawingSurfaceFactory;
struct ICompositor;
struct ICompositor2;
struct ICompositor3;
struct IContainerVisual;
struct IContainerVisualFactory;
struct ICubicBezierEasingFunction;
struct IDistantLight;
struct IDropShadow;
struct IExpressionAnimation;
struct IImplicitAnimationCollection;
struct IInsetClip;
struct IKeyFrameAnimation;
struct IKeyFrameAnimation2;
struct IKeyFrameAnimation3;
struct IKeyFrameAnimationFactory;
struct ILayerVisual;
struct ILinearEasingFunction;
struct IPointLight;
struct IQuaternionKeyFrameAnimation;
struct IRenderingDeviceReplacedEventArgs;
struct IScalarKeyFrameAnimation;
struct ISpotLight;
struct ISpriteVisual;
struct ISpriteVisual2;
struct IStepEasingFunction;
struct IVector2KeyFrameAnimation;
struct IVector3KeyFrameAnimation;
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
struct CompositionCommitBatch;
struct CompositionDrawingSurface;
struct CompositionEasingFunction;
struct CompositionEffectBrush;
struct CompositionEffectFactory;
struct CompositionEffectSourceParameter;
struct CompositionGraphicsDevice;
struct CompositionLight;
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
struct InsetClip;
struct KeyFrameAnimation;
struct LayerVisual;
struct LinearEasingFunction;
struct PointLight;
struct QuaternionKeyFrameAnimation;
struct RenderingDeviceReplacedEventArgs;
struct ScalarKeyFrameAnimation;
struct SpotLight;
struct SpriteVisual;
struct StepEasingFunction;
struct Vector2KeyFrameAnimation;
struct Vector3KeyFrameAnimation;
struct Vector4KeyFrameAnimation;
struct Visual;
struct VisualCollection;
struct VisualUnorderedCollection;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Composition::IAmbientLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IColorKeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionAnimation2>{ using type = interface_category; };
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
template <> struct category<Windows::UI::Composition::ICompositionGraphicsDevice>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionGraphicsDevice2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionLightFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionMaskBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionNineGridBrush>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionObject>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionObject2>{ using type = interface_category; };
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
template <> struct category<Windows::UI::Composition::ICompositionVirtualDrawingSurface>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositor>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositor2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICompositor3>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IContainerVisual>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IContainerVisualFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ICubicBezierEasingFunction>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IDistantLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IDropShadow>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IExpressionAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IImplicitAnimationCollection>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IInsetClip>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IKeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IKeyFrameAnimation2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IKeyFrameAnimation3>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IKeyFrameAnimationFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ILayerVisual>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ILinearEasingFunction>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IPointLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IQuaternionKeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IScalarKeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpotLight>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpriteVisual>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::ISpriteVisual2>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IStepEasingFunction>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVector2KeyFrameAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::IVector3KeyFrameAnimation>{ using type = interface_category; };
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
template <> struct category<Windows::UI::Composition::CompositionCommitBatch>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionDrawingSurface>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionEasingFunction>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionEffectBrush>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionEffectFactory>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionEffectSourceParameter>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionGraphicsDevice>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::CompositionLight>{ using type = class_category; };
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
template <> struct category<Windows::UI::Composition::InsetClip>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::KeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::LayerVisual>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::LinearEasingFunction>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::PointLight>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::QuaternionKeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::ScalarKeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::SpotLight>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::SpriteVisual>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::StepEasingFunction>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Vector2KeyFrameAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Composition::Vector3KeyFrameAnimation>{ using type = class_category; };
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
template <> struct category<Windows::UI::Composition::CompositionEffectFactoryLoadStatus>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionGetValueStatus>{ using type = enum_category; };
template <> struct category<Windows::UI::Composition::CompositionStretch>{ using type = enum_category; };
template <> struct name<Windows::UI::Composition::IAmbientLight>{ static constexpr auto & value{ L"Windows.UI.Composition.IAmbientLight" }; };
template <> struct name<Windows::UI::Composition::IColorKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IColorKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::ICompositionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimation" }; };
template <> struct name<Windows::UI::Composition::ICompositionAnimation2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionAnimation2" }; };
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
template <> struct name<Windows::UI::Composition::ICompositionGraphicsDevice>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGraphicsDevice" }; };
template <> struct name<Windows::UI::Composition::ICompositionGraphicsDevice2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionGraphicsDevice2" }; };
template <> struct name<Windows::UI::Composition::ICompositionLight>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLight" }; };
template <> struct name<Windows::UI::Composition::ICompositionLightFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionLightFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositionMaskBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionMaskBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionNineGridBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionNineGridBrush" }; };
template <> struct name<Windows::UI::Composition::ICompositionObject>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObject" }; };
template <> struct name<Windows::UI::Composition::ICompositionObject2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionObject2" }; };
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
template <> struct name<Windows::UI::Composition::ICompositionVirtualDrawingSurface>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionVirtualDrawingSurface" }; };
template <> struct name<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositionVirtualDrawingSurfaceFactory" }; };
template <> struct name<Windows::UI::Composition::ICompositor>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositor" }; };
template <> struct name<Windows::UI::Composition::ICompositor2>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositor2" }; };
template <> struct name<Windows::UI::Composition::ICompositor3>{ static constexpr auto & value{ L"Windows.UI.Composition.ICompositor3" }; };
template <> struct name<Windows::UI::Composition::IContainerVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.IContainerVisual" }; };
template <> struct name<Windows::UI::Composition::IContainerVisualFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.IContainerVisualFactory" }; };
template <> struct name<Windows::UI::Composition::ICubicBezierEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.ICubicBezierEasingFunction" }; };
template <> struct name<Windows::UI::Composition::IDistantLight>{ static constexpr auto & value{ L"Windows.UI.Composition.IDistantLight" }; };
template <> struct name<Windows::UI::Composition::IDropShadow>{ static constexpr auto & value{ L"Windows.UI.Composition.IDropShadow" }; };
template <> struct name<Windows::UI::Composition::IExpressionAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IExpressionAnimation" }; };
template <> struct name<Windows::UI::Composition::IImplicitAnimationCollection>{ static constexpr auto & value{ L"Windows.UI.Composition.IImplicitAnimationCollection" }; };
template <> struct name<Windows::UI::Composition::IInsetClip>{ static constexpr auto & value{ L"Windows.UI.Composition.IInsetClip" }; };
template <> struct name<Windows::UI::Composition::IKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::IKeyFrameAnimation2>{ static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimation2" }; };
template <> struct name<Windows::UI::Composition::IKeyFrameAnimation3>{ static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimation3" }; };
template <> struct name<Windows::UI::Composition::IKeyFrameAnimationFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.IKeyFrameAnimationFactory" }; };
template <> struct name<Windows::UI::Composition::ILayerVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.ILayerVisual" }; };
template <> struct name<Windows::UI::Composition::ILinearEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.ILinearEasingFunction" }; };
template <> struct name<Windows::UI::Composition::IPointLight>{ static constexpr auto & value{ L"Windows.UI.Composition.IPointLight" }; };
template <> struct name<Windows::UI::Composition::IQuaternionKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IQuaternionKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.IRenderingDeviceReplacedEventArgs" }; };
template <> struct name<Windows::UI::Composition::IScalarKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IScalarKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::ISpotLight>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpotLight" }; };
template <> struct name<Windows::UI::Composition::ISpriteVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpriteVisual" }; };
template <> struct name<Windows::UI::Composition::ISpriteVisual2>{ static constexpr auto & value{ L"Windows.UI.Composition.ISpriteVisual2" }; };
template <> struct name<Windows::UI::Composition::IStepEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.IStepEasingFunction" }; };
template <> struct name<Windows::UI::Composition::IVector2KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IVector2KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::IVector3KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.IVector3KeyFrameAnimation" }; };
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
template <> struct name<Windows::UI::Composition::CompositionCommitBatch>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionCommitBatch" }; };
template <> struct name<Windows::UI::Composition::CompositionDrawingSurface>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionDrawingSurface" }; };
template <> struct name<Windows::UI::Composition::CompositionEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEasingFunction" }; };
template <> struct name<Windows::UI::Composition::CompositionEffectBrush>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectBrush" }; };
template <> struct name<Windows::UI::Composition::CompositionEffectFactory>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectFactory" }; };
template <> struct name<Windows::UI::Composition::CompositionEffectSourceParameter>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectSourceParameter" }; };
template <> struct name<Windows::UI::Composition::CompositionGraphicsDevice>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionGraphicsDevice" }; };
template <> struct name<Windows::UI::Composition::CompositionLight>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionLight" }; };
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
template <> struct name<Windows::UI::Composition::InsetClip>{ static constexpr auto & value{ L"Windows.UI.Composition.InsetClip" }; };
template <> struct name<Windows::UI::Composition::KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::LayerVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.LayerVisual" }; };
template <> struct name<Windows::UI::Composition::LinearEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.LinearEasingFunction" }; };
template <> struct name<Windows::UI::Composition::PointLight>{ static constexpr auto & value{ L"Windows.UI.Composition.PointLight" }; };
template <> struct name<Windows::UI::Composition::QuaternionKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.QuaternionKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Composition.RenderingDeviceReplacedEventArgs" }; };
template <> struct name<Windows::UI::Composition::ScalarKeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.ScalarKeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::SpotLight>{ static constexpr auto & value{ L"Windows.UI.Composition.SpotLight" }; };
template <> struct name<Windows::UI::Composition::SpriteVisual>{ static constexpr auto & value{ L"Windows.UI.Composition.SpriteVisual" }; };
template <> struct name<Windows::UI::Composition::StepEasingFunction>{ static constexpr auto & value{ L"Windows.UI.Composition.StepEasingFunction" }; };
template <> struct name<Windows::UI::Composition::Vector2KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.Vector2KeyFrameAnimation" }; };
template <> struct name<Windows::UI::Composition::Vector3KeyFrameAnimation>{ static constexpr auto & value{ L"Windows.UI.Composition.Vector3KeyFrameAnimation" }; };
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
template <> struct name<Windows::UI::Composition::CompositionEffectFactoryLoadStatus>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionEffectFactoryLoadStatus" }; };
template <> struct name<Windows::UI::Composition::CompositionGetValueStatus>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionGetValueStatus" }; };
template <> struct name<Windows::UI::Composition::CompositionStretch>{ static constexpr auto & value{ L"Windows.UI.Composition.CompositionStretch" }; };
template <> struct guid<Windows::UI::Composition::IAmbientLight>{ static constexpr GUID value{ 0xA48130A1,0xB7C4,0x46F7,{ 0xB9,0xBF,0xDA,0xF4,0x3A,0x44,0xE6,0xEE } }; };
template <> struct guid<Windows::UI::Composition::IColorKeyFrameAnimation>{ static constexpr GUID value{ 0x93ADB5E9,0x8E05,0x4593,{ 0x84,0xA3,0xDC,0xA1,0x52,0x78,0x1E,0x56 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionAnimation>{ static constexpr GUID value{ 0x464C4C2C,0x1CAA,0x4061,{ 0x9B,0x40,0xE1,0x3F,0xDE,0x15,0x03,0xCA } }; };
template <> struct guid<Windows::UI::Composition::ICompositionAnimation2>{ static constexpr GUID value{ 0x369B603E,0xA80F,0x4948,{ 0x93,0xE3,0xED,0x23,0xFB,0x38,0xC6,0xCB } }; };
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
template <> struct guid<Windows::UI::Composition::ICompositionGraphicsDevice>{ static constexpr GUID value{ 0xFB22C6E1,0x80A2,0x4667,{ 0x99,0x36,0xDB,0xEA,0xF6,0xEE,0xFE,0x95 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionGraphicsDevice2>{ static constexpr GUID value{ 0x0FB8BDF6,0xC0F0,0x4BCC,{ 0x9F,0xB8,0x08,0x49,0x82,0x49,0x0D,0x7D } }; };
template <> struct guid<Windows::UI::Composition::ICompositionLight>{ static constexpr GUID value{ 0x41A6D7C2,0x2E5D,0x4BC1,{ 0xB0,0x9E,0x8F,0x0A,0x03,0xE3,0xD8,0xD3 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionLightFactory>{ static constexpr GUID value{ 0x069CF306,0xDA3C,0x4B44,{ 0x83,0x8A,0x5E,0x03,0xD5,0x1A,0xCE,0x55 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionMaskBrush>{ static constexpr GUID value{ 0x522CF09E,0xBE6B,0x4F41,{ 0xBE,0x49,0xF9,0x22,0x6D,0x47,0x1B,0x4A } }; };
template <> struct guid<Windows::UI::Composition::ICompositionNineGridBrush>{ static constexpr GUID value{ 0xF25154E4,0xBC8C,0x4BE7,{ 0xB8,0x0F,0x86,0x85,0xB8,0x3C,0x01,0x86 } }; };
template <> struct guid<Windows::UI::Composition::ICompositionObject>{ static constexpr GUID value{ 0xBCB4AD45,0x7609,0x4550,{ 0x93,0x4F,0x16,0x00,0x2A,0x68,0xFD,0xED } }; };
template <> struct guid<Windows::UI::Composition::ICompositionObject2>{ static constexpr GUID value{ 0xEF874EA1,0x5CFF,0x4B68,{ 0x9E,0x30,0xA1,0x51,0x9D,0x08,0xBA,0x03 } }; };
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
template <> struct guid<Windows::UI::Composition::ICompositionVirtualDrawingSurface>{ static constexpr GUID value{ 0xA9C384DB,0x8740,0x4F94,{ 0x8B,0x9D,0xB6,0x85,0x21,0xE7,0x86,0x3D } }; };
template <> struct guid<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>{ static constexpr GUID value{ 0x6766106C,0xD56B,0x4A49,{ 0xB1,0xDF,0x50,0x76,0xA0,0x62,0x07,0x68 } }; };
template <> struct guid<Windows::UI::Composition::ICompositor>{ static constexpr GUID value{ 0xB403CA50,0x7F8C,0x4E83,{ 0x98,0x5F,0xCC,0x45,0x06,0x00,0x36,0xD8 } }; };
template <> struct guid<Windows::UI::Composition::ICompositor2>{ static constexpr GUID value{ 0x735081DC,0x5E24,0x45DA,{ 0xA3,0x8F,0xE3,0x2C,0xC3,0x49,0xA9,0xA0 } }; };
template <> struct guid<Windows::UI::Composition::ICompositor3>{ static constexpr GUID value{ 0xC9DD8EF0,0x6EB1,0x4E3C,{ 0xA6,0x58,0x67,0x5D,0x9C,0x64,0xD4,0xAB } }; };
template <> struct guid<Windows::UI::Composition::IContainerVisual>{ static constexpr GUID value{ 0x02F6BC74,0xED20,0x4773,{ 0xAF,0xE6,0xD4,0x9B,0x4A,0x93,0xDB,0x32 } }; };
template <> struct guid<Windows::UI::Composition::IContainerVisualFactory>{ static constexpr GUID value{ 0x0363A65B,0xC7DA,0x4D9A,{ 0x95,0xF4,0x69,0xB5,0xC8,0xDF,0x67,0x0B } }; };
template <> struct guid<Windows::UI::Composition::ICubicBezierEasingFunction>{ static constexpr GUID value{ 0x32350666,0xC1E8,0x44F9,{ 0x96,0xB8,0xC9,0x8A,0xCF,0x0A,0xE6,0x98 } }; };
template <> struct guid<Windows::UI::Composition::IDistantLight>{ static constexpr GUID value{ 0x318CFAFC,0x5CE3,0x4B55,{ 0xAB,0x5D,0x07,0xA0,0x03,0x53,0xAC,0x99 } }; };
template <> struct guid<Windows::UI::Composition::IDropShadow>{ static constexpr GUID value{ 0xCB977C07,0xA154,0x4851,{ 0x85,0xE7,0xA8,0x92,0x4C,0x84,0xFA,0xD8 } }; };
template <> struct guid<Windows::UI::Composition::IExpressionAnimation>{ static constexpr GUID value{ 0x6ACC5431,0x7D3D,0x4BF3,{ 0xAB,0xB6,0xF4,0x4B,0xDC,0x48,0x88,0xC1 } }; };
template <> struct guid<Windows::UI::Composition::IImplicitAnimationCollection>{ static constexpr GUID value{ 0x0598A3FF,0x0A92,0x4C9D,{ 0xA4,0x27,0xB2,0x55,0x19,0x25,0x0D,0xBF } }; };
template <> struct guid<Windows::UI::Composition::IInsetClip>{ static constexpr GUID value{ 0x1E73E647,0x84C7,0x477A,{ 0xB4,0x74,0x58,0x80,0xE0,0x44,0x2E,0x15 } }; };
template <> struct guid<Windows::UI::Composition::IKeyFrameAnimation>{ static constexpr GUID value{ 0x126E7F22,0x3AE9,0x4540,{ 0x9A,0x8A,0xDE,0xAE,0x8A,0x4A,0x4A,0x84 } }; };
template <> struct guid<Windows::UI::Composition::IKeyFrameAnimation2>{ static constexpr GUID value{ 0xF4B488BB,0x2940,0x4EC0,{ 0xA4,0x1A,0xEB,0x6D,0x80,0x1A,0x2F,0x18 } }; };
template <> struct guid<Windows::UI::Composition::IKeyFrameAnimation3>{ static constexpr GUID value{ 0x845BF0B4,0xD8DE,0x462F,{ 0x87,0x53,0xC8,0x0D,0x43,0xC6,0xFF,0x5A } }; };
template <> struct guid<Windows::UI::Composition::IKeyFrameAnimationFactory>{ static constexpr GUID value{ 0xBF0803F8,0x712A,0x4FC1,{ 0x8C,0x87,0x97,0x08,0x59,0xED,0x8D,0x2E } }; };
template <> struct guid<Windows::UI::Composition::ILayerVisual>{ static constexpr GUID value{ 0xAF843985,0x0444,0x4887,{ 0x8E,0x83,0xB4,0x0B,0x25,0x3F,0x82,0x2C } }; };
template <> struct guid<Windows::UI::Composition::ILinearEasingFunction>{ static constexpr GUID value{ 0x9400975A,0xC7A6,0x46B3,{ 0xAC,0xF7,0x1A,0x26,0x8A,0x0A,0x11,0x7D } }; };
template <> struct guid<Windows::UI::Composition::IPointLight>{ static constexpr GUID value{ 0xB18545B3,0x0C5A,0x4AB0,{ 0xBE,0xDC,0x4F,0x35,0x46,0x94,0x82,0x72 } }; };
template <> struct guid<Windows::UI::Composition::IQuaternionKeyFrameAnimation>{ static constexpr GUID value{ 0x404E5835,0xECF6,0x4240,{ 0x85,0x20,0x67,0x12,0x79,0xCF,0x36,0xBC } }; };
template <> struct guid<Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>{ static constexpr GUID value{ 0x3A31AC7D,0x28BF,0x4E7A,{ 0x85,0x24,0x71,0x67,0x9D,0x48,0x0F,0x38 } }; };
template <> struct guid<Windows::UI::Composition::IScalarKeyFrameAnimation>{ static constexpr GUID value{ 0xAE288FA9,0x252C,0x4B95,{ 0xA7,0x25,0xBF,0x85,0xE3,0x80,0x00,0xA1 } }; };
template <> struct guid<Windows::UI::Composition::ISpotLight>{ static constexpr GUID value{ 0x5A9FE273,0x44A1,0x4F95,{ 0xA4,0x22,0x8F,0xA5,0x11,0x6B,0xDB,0x44 } }; };
template <> struct guid<Windows::UI::Composition::ISpriteVisual>{ static constexpr GUID value{ 0x08E05581,0x1AD1,0x4F97,{ 0x97,0x57,0x40,0x2D,0x76,0xE4,0x23,0x3B } }; };
template <> struct guid<Windows::UI::Composition::ISpriteVisual2>{ static constexpr GUID value{ 0x588C9664,0x997A,0x4850,{ 0x91,0xFE,0x53,0xCB,0x58,0xF8,0x1C,0xE9 } }; };
template <> struct guid<Windows::UI::Composition::IStepEasingFunction>{ static constexpr GUID value{ 0xD0CAA74B,0x560C,0x4A0B,{ 0xA5,0xF6,0x20,0x6C,0xA8,0xC3,0xEC,0xD6 } }; };
template <> struct guid<Windows::UI::Composition::IVector2KeyFrameAnimation>{ static constexpr GUID value{ 0xDF414515,0x4E29,0x4F11,{ 0xB5,0x5E,0xBF,0x2A,0x6E,0xB3,0x62,0x94 } }; };
template <> struct guid<Windows::UI::Composition::IVector3KeyFrameAnimation>{ static constexpr GUID value{ 0xC8039DAA,0xA281,0x43C2,{ 0xA7,0x3D,0xB6,0x8E,0x3C,0x53,0x3C,0x40 } }; };
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
template <> struct default_interface<Windows::UI::Composition::CompositionCommitBatch>{ using type = Windows::UI::Composition::ICompositionCommitBatch; };
template <> struct default_interface<Windows::UI::Composition::CompositionDrawingSurface>{ using type = Windows::UI::Composition::ICompositionDrawingSurface; };
template <> struct default_interface<Windows::UI::Composition::CompositionEasingFunction>{ using type = Windows::UI::Composition::ICompositionEasingFunction; };
template <> struct default_interface<Windows::UI::Composition::CompositionEffectBrush>{ using type = Windows::UI::Composition::ICompositionEffectBrush; };
template <> struct default_interface<Windows::UI::Composition::CompositionEffectFactory>{ using type = Windows::UI::Composition::ICompositionEffectFactory; };
template <> struct default_interface<Windows::UI::Composition::CompositionEffectSourceParameter>{ using type = Windows::UI::Composition::ICompositionEffectSourceParameter; };
template <> struct default_interface<Windows::UI::Composition::CompositionGraphicsDevice>{ using type = Windows::UI::Composition::ICompositionGraphicsDevice; };
template <> struct default_interface<Windows::UI::Composition::CompositionLight>{ using type = Windows::UI::Composition::ICompositionLight; };
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
template <> struct default_interface<Windows::UI::Composition::InsetClip>{ using type = Windows::UI::Composition::IInsetClip; };
template <> struct default_interface<Windows::UI::Composition::KeyFrameAnimation>{ using type = Windows::UI::Composition::IKeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::LayerVisual>{ using type = Windows::UI::Composition::ILayerVisual; };
template <> struct default_interface<Windows::UI::Composition::LinearEasingFunction>{ using type = Windows::UI::Composition::ILinearEasingFunction; };
template <> struct default_interface<Windows::UI::Composition::PointLight>{ using type = Windows::UI::Composition::IPointLight; };
template <> struct default_interface<Windows::UI::Composition::QuaternionKeyFrameAnimation>{ using type = Windows::UI::Composition::IQuaternionKeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::RenderingDeviceReplacedEventArgs>{ using type = Windows::UI::Composition::IRenderingDeviceReplacedEventArgs; };
template <> struct default_interface<Windows::UI::Composition::ScalarKeyFrameAnimation>{ using type = Windows::UI::Composition::IScalarKeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::SpotLight>{ using type = Windows::UI::Composition::ISpotLight; };
template <> struct default_interface<Windows::UI::Composition::SpriteVisual>{ using type = Windows::UI::Composition::ISpriteVisual; };
template <> struct default_interface<Windows::UI::Composition::StepEasingFunction>{ using type = Windows::UI::Composition::IStepEasingFunction; };
template <> struct default_interface<Windows::UI::Composition::Vector2KeyFrameAnimation>{ using type = Windows::UI::Composition::IVector2KeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::Vector3KeyFrameAnimation>{ using type = Windows::UI::Composition::IVector3KeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::Vector4KeyFrameAnimation>{ using type = Windows::UI::Composition::IVector4KeyFrameAnimation; };
template <> struct default_interface<Windows::UI::Composition::Visual>{ using type = Windows::UI::Composition::IVisual; };
template <> struct default_interface<Windows::UI::Composition::VisualCollection>{ using type = Windows::UI::Composition::IVisualCollection; };
template <> struct default_interface<Windows::UI::Composition::VisualUnorderedCollection>{ using type = Windows::UI::Composition::IVisualUnorderedCollection; };

template <typename D>
struct consume_Windows_UI_Composition_IAmbientLight
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
};
template <> struct consume<Windows::UI::Composition::IAmbientLight> { template <typename D> using type = consume_Windows_UI_Composition_IAmbientLight<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IColorKeyFrameAnimation
{
    Windows::UI::Composition::CompositionColorSpace InterpolationColorSpace() const;
    void InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace const& value) const;
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
    hstring Target() const;
    void Target(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionAnimation2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionAnimation2<D>; };

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
    int32_t Count() const;
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
    Windows::Foundation::Numerics::float2 AnchorPoint() const;
    void AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 CenterPoint() const;
    void CenterPoint(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 Offset() const;
    void Offset(Windows::Foundation::Numerics::float2 const& value) const;
    float RotationAngle() const;
    void RotationAngle(float value) const;
    float RotationAngleInDegrees() const;
    void RotationAngleInDegrees(float value) const;
    Windows::Foundation::Numerics::float2 Scale() const;
    void Scale(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float3x2 TransformMatrix() const;
    void TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const;
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
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionColorBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionColorBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionCommitBatch
{
    bool IsActive() const;
    bool IsEnded() const;
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
    using Completed_revoker = event_revoker<Windows::UI::Composition::ICompositionCommitBatch>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const;
    void Completed(event_token const& token) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionCommitBatch> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionCommitBatch<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionDrawingSurface
{
    Windows::Graphics::DirectX::DirectXAlphaMode AlphaMode() const;
    Windows::Graphics::DirectX::DirectXPixelFormat PixelFormat() const;
    Windows::Foundation::Size Size() const;
};
template <> struct consume<Windows::UI::Composition::ICompositionDrawingSurface> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionDrawingSurface<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionDrawingSurface2
{
    Windows::Graphics::SizeInt32 SizeInt32() const;
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
    HRESULT ExtendedError() const;
    Windows::UI::Composition::CompositionEffectFactoryLoadStatus LoadStatus() const;
};
template <> struct consume<Windows::UI::Composition::ICompositionEffectFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionEffectSourceParameter
{
    hstring Name() const;
};
template <> struct consume<Windows::UI::Composition::ICompositionEffectSourceParameter> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectSourceParameter<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionEffectSourceParameterFactory
{
    Windows::UI::Composition::CompositionEffectSourceParameter Create(param::hstring const& name) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionEffectSourceParameterFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionEffectSourceParameterFactory<D>; };

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
    Windows::UI::Composition::VisualUnorderedCollection Targets() const;
};
template <> struct consume<Windows::UI::Composition::ICompositionLight> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionLight<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionLightFactory
{
};
template <> struct consume<Windows::UI::Composition::ICompositionLightFactory> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionLightFactory<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionMaskBrush
{
    Windows::UI::Composition::CompositionBrush Mask() const;
    void Mask(Windows::UI::Composition::CompositionBrush const& value) const;
    Windows::UI::Composition::CompositionBrush Source() const;
    void Source(Windows::UI::Composition::CompositionBrush const& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionMaskBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionMaskBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionNineGridBrush
{
    float BottomInset() const;
    void BottomInset(float value) const;
    float BottomInsetScale() const;
    void BottomInsetScale(float value) const;
    bool IsCenterHollow() const;
    void IsCenterHollow(bool value) const;
    float LeftInset() const;
    void LeftInset(float value) const;
    float LeftInsetScale() const;
    void LeftInsetScale(float value) const;
    float RightInset() const;
    void RightInset(float value) const;
    float RightInsetScale() const;
    void RightInsetScale(float value) const;
    Windows::UI::Composition::CompositionBrush Source() const;
    void Source(Windows::UI::Composition::CompositionBrush const& value) const;
    float TopInset() const;
    void TopInset(float value) const;
    float TopInsetScale() const;
    void TopInsetScale(float value) const;
    void SetInsets(float inset) const;
    void SetInsets(float left, float top, float right, float bottom) const;
    void SetInsetScales(float scale) const;
    void SetInsetScales(float left, float top, float right, float bottom) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionNineGridBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionNineGridBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionObject
{
    Windows::UI::Composition::Compositor Compositor() const;
    Windows::UI::Core::CoreDispatcher Dispatcher() const;
    Windows::UI::Composition::CompositionPropertySet Properties() const;
    void StartAnimation(param::hstring const& propertyName, Windows::UI::Composition::CompositionAnimation const& animation) const;
    void StopAnimation(param::hstring const& propertyName) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionObject> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionObject<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionObject2
{
    hstring Comment() const;
    void Comment(param::hstring const& value) const;
    Windows::UI::Composition::ImplicitAnimationCollection ImplicitAnimations() const;
    void ImplicitAnimations(Windows::UI::Composition::ImplicitAnimationCollection const& value) const;
    void StartAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const;
    void StopAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionObject2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionObject2<D>; };

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
    bool IsActive() const;
    bool IsEnded() const;
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
    Windows::UI::Composition::CompositionBitmapInterpolationMode BitmapInterpolationMode() const;
    void BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode const& value) const;
    float HorizontalAlignmentRatio() const;
    void HorizontalAlignmentRatio(float value) const;
    Windows::UI::Composition::CompositionStretch Stretch() const;
    void Stretch(Windows::UI::Composition::CompositionStretch const& value) const;
    Windows::UI::Composition::ICompositionSurface Surface() const;
    void Surface(Windows::UI::Composition::ICompositionSurface const& value) const;
    float VerticalAlignmentRatio() const;
    void VerticalAlignmentRatio(float value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionSurfaceBrush> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionSurfaceBrush2
{
    Windows::Foundation::Numerics::float2 AnchorPoint() const;
    void AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 CenterPoint() const;
    void CenterPoint(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float2 Offset() const;
    void Offset(Windows::Foundation::Numerics::float2 const& value) const;
    float RotationAngle() const;
    void RotationAngle(float value) const;
    float RotationAngleInDegrees() const;
    void RotationAngleInDegrees(float value) const;
    Windows::Foundation::Numerics::float2 Scale() const;
    void Scale(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float3x2 TransformMatrix() const;
    void TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionSurfaceBrush2> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ICompositionTarget
{
    Windows::UI::Composition::Visual Root() const;
    void Root(Windows::UI::Composition::Visual const& value) const;
};
template <> struct consume<Windows::UI::Composition::ICompositionTarget> { template <typename D> using type = consume_Windows_UI_Composition_ICompositionTarget<D>; };

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
struct consume_Windows_UI_Composition_IContainerVisual
{
    Windows::UI::Composition::VisualCollection Children() const;
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
    Windows::Foundation::Numerics::float2 ControlPoint1() const;
    Windows::Foundation::Numerics::float2 ControlPoint2() const;
};
template <> struct consume<Windows::UI::Composition::ICubicBezierEasingFunction> { template <typename D> using type = consume_Windows_UI_Composition_ICubicBezierEasingFunction<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IDistantLight
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    Windows::UI::Composition::Visual CoordinateSpace() const;
    void CoordinateSpace(Windows::UI::Composition::Visual const& value) const;
    Windows::Foundation::Numerics::float3 Direction() const;
    void Direction(Windows::Foundation::Numerics::float3 const& value) const;
};
template <> struct consume<Windows::UI::Composition::IDistantLight> { template <typename D> using type = consume_Windows_UI_Composition_IDistantLight<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IDropShadow
{
    float BlurRadius() const;
    void BlurRadius(float value) const;
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    Windows::UI::Composition::CompositionBrush Mask() const;
    void Mask(Windows::UI::Composition::CompositionBrush const& value) const;
    Windows::Foundation::Numerics::float3 Offset() const;
    void Offset(Windows::Foundation::Numerics::float3 const& value) const;
    float Opacity() const;
    void Opacity(float value) const;
};
template <> struct consume<Windows::UI::Composition::IDropShadow> { template <typename D> using type = consume_Windows_UI_Composition_IDropShadow<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IExpressionAnimation
{
    hstring Expression() const;
    void Expression(param::hstring const& value) const;
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
    float BottomInset() const;
    void BottomInset(float value) const;
    float LeftInset() const;
    void LeftInset(float value) const;
    float RightInset() const;
    void RightInset(float value) const;
    float TopInset() const;
    void TopInset(float value) const;
};
template <> struct consume<Windows::UI::Composition::IInsetClip> { template <typename D> using type = consume_Windows_UI_Composition_IInsetClip<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IKeyFrameAnimation
{
    Windows::Foundation::TimeSpan DelayTime() const;
    void DelayTime(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void Duration(Windows::Foundation::TimeSpan const& value) const;
    Windows::UI::Composition::AnimationIterationBehavior IterationBehavior() const;
    void IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior const& value) const;
    int32_t IterationCount() const;
    void IterationCount(int32_t value) const;
    int32_t KeyFrameCount() const;
    Windows::UI::Composition::AnimationStopBehavior StopBehavior() const;
    void StopBehavior(Windows::UI::Composition::AnimationStopBehavior const& value) const;
    void InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value) const;
    void InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
};
template <> struct consume<Windows::UI::Composition::IKeyFrameAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IKeyFrameAnimation2
{
    Windows::UI::Composition::AnimationDirection Direction() const;
    void Direction(Windows::UI::Composition::AnimationDirection const& value) const;
};
template <> struct consume<Windows::UI::Composition::IKeyFrameAnimation2> { template <typename D> using type = consume_Windows_UI_Composition_IKeyFrameAnimation2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IKeyFrameAnimation3
{
    Windows::UI::Composition::AnimationDelayBehavior DelayBehavior() const;
    void DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior const& value) const;
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
    Windows::UI::Composition::CompositionEffectBrush Effect() const;
    void Effect(Windows::UI::Composition::CompositionEffectBrush const& value) const;
};
template <> struct consume<Windows::UI::Composition::ILayerVisual> { template <typename D> using type = consume_Windows_UI_Composition_ILayerVisual<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ILinearEasingFunction
{
};
template <> struct consume<Windows::UI::Composition::ILinearEasingFunction> { template <typename D> using type = consume_Windows_UI_Composition_ILinearEasingFunction<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IPointLight
{
    Windows::UI::Color Color() const;
    void Color(Windows::UI::Color const& value) const;
    float ConstantAttenuation() const;
    void ConstantAttenuation(float value) const;
    Windows::UI::Composition::Visual CoordinateSpace() const;
    void CoordinateSpace(Windows::UI::Composition::Visual const& value) const;
    float LinearAttenuation() const;
    void LinearAttenuation(float value) const;
    Windows::Foundation::Numerics::float3 Offset() const;
    void Offset(Windows::Foundation::Numerics::float3 const& value) const;
    float QuadraticAttenuation() const;
    void QuadraticAttenuation(float value) const;
};
template <> struct consume<Windows::UI::Composition::IPointLight> { template <typename D> using type = consume_Windows_UI_Composition_IPointLight<D>; };

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
    Windows::UI::Composition::CompositionGraphicsDevice GraphicsDevice() const;
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
struct consume_Windows_UI_Composition_ISpotLight
{
    float ConstantAttenuation() const;
    void ConstantAttenuation(float value) const;
    Windows::UI::Composition::Visual CoordinateSpace() const;
    void CoordinateSpace(Windows::UI::Composition::Visual const& value) const;
    Windows::Foundation::Numerics::float3 Direction() const;
    void Direction(Windows::Foundation::Numerics::float3 const& value) const;
    float InnerConeAngle() const;
    void InnerConeAngle(float value) const;
    float InnerConeAngleInDegrees() const;
    void InnerConeAngleInDegrees(float value) const;
    Windows::UI::Color InnerConeColor() const;
    void InnerConeColor(Windows::UI::Color const& value) const;
    float LinearAttenuation() const;
    void LinearAttenuation(float value) const;
    Windows::Foundation::Numerics::float3 Offset() const;
    void Offset(Windows::Foundation::Numerics::float3 const& value) const;
    float OuterConeAngle() const;
    void OuterConeAngle(float value) const;
    float OuterConeAngleInDegrees() const;
    void OuterConeAngleInDegrees(float value) const;
    Windows::UI::Color OuterConeColor() const;
    void OuterConeColor(Windows::UI::Color const& value) const;
    float QuadraticAttenuation() const;
    void QuadraticAttenuation(float value) const;
};
template <> struct consume<Windows::UI::Composition::ISpotLight> { template <typename D> using type = consume_Windows_UI_Composition_ISpotLight<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ISpriteVisual
{
    Windows::UI::Composition::CompositionBrush Brush() const;
    void Brush(Windows::UI::Composition::CompositionBrush const& value) const;
};
template <> struct consume<Windows::UI::Composition::ISpriteVisual> { template <typename D> using type = consume_Windows_UI_Composition_ISpriteVisual<D>; };

template <typename D>
struct consume_Windows_UI_Composition_ISpriteVisual2
{
    Windows::UI::Composition::CompositionShadow Shadow() const;
    void Shadow(Windows::UI::Composition::CompositionShadow const& value) const;
};
template <> struct consume<Windows::UI::Composition::ISpriteVisual2> { template <typename D> using type = consume_Windows_UI_Composition_ISpriteVisual2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IStepEasingFunction
{
    int32_t FinalStep() const;
    void FinalStep(int32_t value) const;
    int32_t InitialStep() const;
    void InitialStep(int32_t value) const;
    bool IsFinalStepSingleFrame() const;
    void IsFinalStepSingleFrame(bool value) const;
    bool IsInitialStepSingleFrame() const;
    void IsInitialStepSingleFrame(bool value) const;
    int32_t StepCount() const;
    void StepCount(int32_t value) const;
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
struct consume_Windows_UI_Composition_IVector3KeyFrameAnimation
{
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value) const;
    void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const;
};
template <> struct consume<Windows::UI::Composition::IVector3KeyFrameAnimation> { template <typename D> using type = consume_Windows_UI_Composition_IVector3KeyFrameAnimation<D>; };

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
    Windows::Foundation::Numerics::float2 AnchorPoint() const;
    void AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::UI::Composition::CompositionBackfaceVisibility BackfaceVisibility() const;
    void BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility const& value) const;
    Windows::UI::Composition::CompositionBorderMode BorderMode() const;
    void BorderMode(Windows::UI::Composition::CompositionBorderMode const& value) const;
    Windows::Foundation::Numerics::float3 CenterPoint() const;
    void CenterPoint(Windows::Foundation::Numerics::float3 const& value) const;
    Windows::UI::Composition::CompositionClip Clip() const;
    void Clip(Windows::UI::Composition::CompositionClip const& value) const;
    Windows::UI::Composition::CompositionCompositeMode CompositeMode() const;
    void CompositeMode(Windows::UI::Composition::CompositionCompositeMode const& value) const;
    bool IsVisible() const;
    void IsVisible(bool value) const;
    Windows::Foundation::Numerics::float3 Offset() const;
    void Offset(Windows::Foundation::Numerics::float3 const& value) const;
    float Opacity() const;
    void Opacity(float value) const;
    Windows::Foundation::Numerics::quaternion Orientation() const;
    void Orientation(Windows::Foundation::Numerics::quaternion const& value) const;
    Windows::UI::Composition::ContainerVisual Parent() const;
    float RotationAngle() const;
    void RotationAngle(float value) const;
    float RotationAngleInDegrees() const;
    void RotationAngleInDegrees(float value) const;
    Windows::Foundation::Numerics::float3 RotationAxis() const;
    void RotationAxis(Windows::Foundation::Numerics::float3 const& value) const;
    Windows::Foundation::Numerics::float3 Scale() const;
    void Scale(Windows::Foundation::Numerics::float3 const& value) const;
    Windows::Foundation::Numerics::float2 Size() const;
    void Size(Windows::Foundation::Numerics::float2 const& value) const;
    Windows::Foundation::Numerics::float4x4 TransformMatrix() const;
    void TransformMatrix(Windows::Foundation::Numerics::float4x4 const& value) const;
};
template <> struct consume<Windows::UI::Composition::IVisual> { template <typename D> using type = consume_Windows_UI_Composition_IVisual<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVisual2
{
    Windows::UI::Composition::Visual ParentForTransform() const;
    void ParentForTransform(Windows::UI::Composition::Visual const& value) const;
    Windows::Foundation::Numerics::float3 RelativeOffsetAdjustment() const;
    void RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3 const& value) const;
    Windows::Foundation::Numerics::float2 RelativeSizeAdjustment() const;
    void RelativeSizeAdjustment(Windows::Foundation::Numerics::float2 const& value) const;
};
template <> struct consume<Windows::UI::Composition::IVisual2> { template <typename D> using type = consume_Windows_UI_Composition_IVisual2<D>; };

template <typename D>
struct consume_Windows_UI_Composition_IVisualCollection
{
    int32_t Count() const;
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
    int32_t Count() const;
    void Add(Windows::UI::Composition::Visual const& newVisual) const;
    void Remove(Windows::UI::Composition::Visual const& visual) const;
    void RemoveAll() const;
};
template <> struct consume<Windows::UI::Composition::IVisualUnorderedCollection> { template <typename D> using type = consume_Windows_UI_Composition_IVisualUnorderedCollection<D>; };

template <> struct abi<Windows::UI::Composition::IAmbientLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IColorKeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InterpolationColorSpace(abi_t<Windows::UI::Composition::CompositionColorSpace>* value) = 0;
    virtual HRESULT __stdcall put_InterpolationColorSpace(abi_t<Windows::UI::Composition::CompositionColorSpace> value) = 0;
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::UI::Color> value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ClearAllParameters() = 0;
    virtual HRESULT __stdcall ClearParameter(HSTRING key) = 0;
    virtual HRESULT __stdcall SetColorParameter(HSTRING key, abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall SetMatrix3x2Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float3x2> value) = 0;
    virtual HRESULT __stdcall SetMatrix4x4Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float4x4> value) = 0;
    virtual HRESULT __stdcall SetQuaternionParameter(HSTRING key, abi_t<Windows::Foundation::Numerics::quaternion> value) = 0;
    virtual HRESULT __stdcall SetReferenceParameter(HSTRING key, ::IUnknown* compositionObject) = 0;
    virtual HRESULT __stdcall SetScalarParameter(HSTRING key, float value) = 0;
    virtual HRESULT __stdcall SetVector2Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall SetVector3Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall SetVector4Parameter(HSTRING key, abi_t<Windows::Foundation::Numerics::float4> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionAnimation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetBooleanParameter(HSTRING key, bool value) = 0;
    virtual HRESULT __stdcall get_Target(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Target(HSTRING value) = 0;
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
    virtual HRESULT __stdcall add_Changed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Changed(abi_t<event_token> token) = 0;
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
    virtual HRESULT __stdcall get_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_Scale(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_Scale(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(abi_t<Windows::Foundation::Numerics::float3x2>* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(abi_t<Windows::Foundation::Numerics::float3x2> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionClipFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionColorBrush>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionCommitBatch>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall get_IsEnded(bool* value) = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionDrawingSurface>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlphaMode(abi_t<Windows::Graphics::DirectX::DirectXAlphaMode>* value) = 0;
    virtual HRESULT __stdcall get_PixelFormat(abi_t<Windows::Graphics::DirectX::DirectXPixelFormat>* value) = 0;
    virtual HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Size>* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionDrawingSurface2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SizeInt32(abi_t<Windows::Graphics::SizeInt32>* value) = 0;
    virtual HRESULT __stdcall Resize(abi_t<Windows::Graphics::SizeInt32> sizePixels) = 0;
    virtual HRESULT __stdcall Scroll(abi_t<Windows::Graphics::PointInt32> offset) = 0;
    virtual HRESULT __stdcall ScrollRect(abi_t<Windows::Graphics::PointInt32> offset, abi_t<Windows::Graphics::RectInt32> scrollRect) = 0;
    virtual HRESULT __stdcall ScrollWithClip(abi_t<Windows::Graphics::PointInt32> offset, abi_t<Windows::Graphics::RectInt32> clipRect) = 0;
    virtual HRESULT __stdcall ScrollRectWithClip(abi_t<Windows::Graphics::PointInt32> offset, abi_t<Windows::Graphics::RectInt32> clipRect, abi_t<Windows::Graphics::RectInt32> scrollRect) = 0;
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
    virtual HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) = 0;
    virtual HRESULT __stdcall get_LoadStatus(abi_t<Windows::UI::Composition::CompositionEffectFactoryLoadStatus>* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionEffectSourceParameter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING name, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionGraphicsDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDrawingSurface(abi_t<Windows::Foundation::Size> sizePixels, abi_t<Windows::Graphics::DirectX::DirectXPixelFormat> pixelFormat, abi_t<Windows::Graphics::DirectX::DirectXAlphaMode> alphaMode, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_RenderingDeviceReplaced(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RenderingDeviceReplaced(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionGraphicsDevice2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDrawingSurface2(abi_t<Windows::Graphics::SizeInt32> sizePixels, abi_t<Windows::Graphics::DirectX::DirectXPixelFormat> pixelFormat, abi_t<Windows::Graphics::DirectX::DirectXAlphaMode> alphaMode, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateVirtualDrawingSurface(abi_t<Windows::Graphics::SizeInt32> sizePixels, abi_t<Windows::Graphics::DirectX::DirectXPixelFormat> pixelFormat, abi_t<Windows::Graphics::DirectX::DirectXAlphaMode> alphaMode, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Targets(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionLightFactory>{ struct type : ::IInspectable
{
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

template <> struct abi<Windows::UI::Composition::ICompositionObjectFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositionPropertySet>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertColor(HSTRING propertyName, abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall InsertMatrix3x2(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float3x2> value) = 0;
    virtual HRESULT __stdcall InsertMatrix4x4(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float4x4> value) = 0;
    virtual HRESULT __stdcall InsertQuaternion(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::quaternion> value) = 0;
    virtual HRESULT __stdcall InsertScalar(HSTRING propertyName, float value) = 0;
    virtual HRESULT __stdcall InsertVector2(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall InsertVector3(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall InsertVector4(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float4> value) = 0;
    virtual HRESULT __stdcall TryGetColor(HSTRING propertyName, abi_t<Windows::UI::Color>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) = 0;
    virtual HRESULT __stdcall TryGetMatrix3x2(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float3x2>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) = 0;
    virtual HRESULT __stdcall TryGetMatrix4x4(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float4x4>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) = 0;
    virtual HRESULT __stdcall TryGetQuaternion(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::quaternion>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) = 0;
    virtual HRESULT __stdcall TryGetScalar(HSTRING propertyName, float* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) = 0;
    virtual HRESULT __stdcall TryGetVector2(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float2>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) = 0;
    virtual HRESULT __stdcall TryGetVector3(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float3>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) = 0;
    virtual HRESULT __stdcall TryGetVector4(HSTRING propertyName, abi_t<Windows::Foundation::Numerics::float4>* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionPropertySet2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertBoolean(HSTRING propertyName, bool value) = 0;
    virtual HRESULT __stdcall TryGetBoolean(HSTRING propertyName, bool* value, abi_t<Windows::UI::Composition::CompositionGetValueStatus>* result) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionScopedBatch>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall get_IsEnded(bool* value) = 0;
    virtual HRESULT __stdcall End() = 0;
    virtual HRESULT __stdcall Resume() = 0;
    virtual HRESULT __stdcall Suspend() = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> token) = 0;
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
    virtual HRESULT __stdcall get_BitmapInterpolationMode(abi_t<Windows::UI::Composition::CompositionBitmapInterpolationMode>* value) = 0;
    virtual HRESULT __stdcall put_BitmapInterpolationMode(abi_t<Windows::UI::Composition::CompositionBitmapInterpolationMode> value) = 0;
    virtual HRESULT __stdcall get_HorizontalAlignmentRatio(float* value) = 0;
    virtual HRESULT __stdcall put_HorizontalAlignmentRatio(float value) = 0;
    virtual HRESULT __stdcall get_Stretch(abi_t<Windows::UI::Composition::CompositionStretch>* value) = 0;
    virtual HRESULT __stdcall put_Stretch(abi_t<Windows::UI::Composition::CompositionStretch> value) = 0;
    virtual HRESULT __stdcall get_Surface(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Surface(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_VerticalAlignmentRatio(float* value) = 0;
    virtual HRESULT __stdcall put_VerticalAlignmentRatio(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionSurfaceBrush2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_Scale(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_Scale(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(abi_t<Windows::Foundation::Numerics::float3x2>* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(abi_t<Windows::Foundation::Numerics::float3x2> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionTarget>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Root(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Root(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionVirtualDrawingSurface>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Trim(uint32_t __rectsSize, abi_t<Windows::Graphics::RectInt32>* rects) = 0;
};};

template <> struct abi<Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICompositor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateColorKeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateColorBrush(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateColorBrushWithColor(abi_t<Windows::UI::Color> color, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateContainerVisual(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateCubicBezierEasingFunction(abi_t<Windows::Foundation::Numerics::float2> controlPoint1, abi_t<Windows::Foundation::Numerics::float2> controlPoint2, ::IUnknown** result) = 0;
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
    virtual HRESULT __stdcall CreateScopedBatch(abi_t<Windows::UI::Composition::CompositionBatchTypes> batchType, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSpriteVisual(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSurfaceBrush(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateSurfaceBrushWithSurface(::IUnknown* surface, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateTargetForCurrentView(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateVector2KeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateVector3KeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateVector4KeyFrameAnimation(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetCommitBatch(abi_t<Windows::UI::Composition::CompositionBatchTypes> batchType, ::IUnknown** result) = 0;
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

template <> struct abi<Windows::UI::Composition::IContainerVisual>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Children(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IContainerVisualFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ICubicBezierEasingFunction>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ControlPoint1(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall get_ControlPoint2(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IDistantLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_CoordinateSpace(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CoordinateSpace(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Direction(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_Direction(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IDropShadow>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BlurRadius(float* value) = 0;
    virtual HRESULT __stdcall put_BlurRadius(float value) = 0;
    virtual HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_Mask(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Mask(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_Opacity(float* value) = 0;
    virtual HRESULT __stdcall put_Opacity(float value) = 0;
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
    virtual HRESULT __stdcall get_DelayTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_DelayTime(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_Duration(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_IterationBehavior(abi_t<Windows::UI::Composition::AnimationIterationBehavior>* value) = 0;
    virtual HRESULT __stdcall put_IterationBehavior(abi_t<Windows::UI::Composition::AnimationIterationBehavior> value) = 0;
    virtual HRESULT __stdcall get_IterationCount(int32_t* value) = 0;
    virtual HRESULT __stdcall put_IterationCount(int32_t value) = 0;
    virtual HRESULT __stdcall get_KeyFrameCount(int32_t* value) = 0;
    virtual HRESULT __stdcall get_StopBehavior(abi_t<Windows::UI::Composition::AnimationStopBehavior>* value) = 0;
    virtual HRESULT __stdcall put_StopBehavior(abi_t<Windows::UI::Composition::AnimationStopBehavior> value) = 0;
    virtual HRESULT __stdcall InsertExpressionKeyFrame(float normalizedProgressKey, HSTRING value) = 0;
    virtual HRESULT __stdcall InsertExpressionKeyFrameWithEasingFunction(float normalizedProgressKey, HSTRING value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IKeyFrameAnimation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Direction(abi_t<Windows::UI::Composition::AnimationDirection>* value) = 0;
    virtual HRESULT __stdcall put_Direction(abi_t<Windows::UI::Composition::AnimationDirection> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IKeyFrameAnimation3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DelayBehavior(abi_t<Windows::UI::Composition::AnimationDelayBehavior>* value) = 0;
    virtual HRESULT __stdcall put_DelayBehavior(abi_t<Windows::UI::Composition::AnimationDelayBehavior> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IKeyFrameAnimationFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::ILayerVisual>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Effect(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Effect(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Composition::ILinearEasingFunction>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Composition::IPointLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_Color(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_ConstantAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_ConstantAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_CoordinateSpace(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CoordinateSpace(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_LinearAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_LinearAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_QuadraticAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_QuadraticAttenuation(float value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IQuaternionKeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::quaternion> value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::quaternion> value, ::IUnknown* easingFunction) = 0;
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

template <> struct abi<Windows::UI::Composition::ISpotLight>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConstantAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_ConstantAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_CoordinateSpace(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CoordinateSpace(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Direction(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_Direction(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_InnerConeAngle(float* value) = 0;
    virtual HRESULT __stdcall put_InnerConeAngle(float value) = 0;
    virtual HRESULT __stdcall get_InnerConeAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_InnerConeAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_InnerConeColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_InnerConeColor(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_LinearAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_LinearAttenuation(float value) = 0;
    virtual HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_OuterConeAngle(float* value) = 0;
    virtual HRESULT __stdcall put_OuterConeAngle(float value) = 0;
    virtual HRESULT __stdcall get_OuterConeAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_OuterConeAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_OuterConeColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_OuterConeColor(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_QuadraticAttenuation(float* value) = 0;
    virtual HRESULT __stdcall put_QuadraticAttenuation(float value) = 0;
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
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float2> value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVector3KeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float3> value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVector4KeyFrameAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float4> value) = 0;
    virtual HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, abi_t<Windows::Foundation::Numerics::float4> value, ::IUnknown* easingFunction) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVisual>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_AnchorPoint(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_BackfaceVisibility(abi_t<Windows::UI::Composition::CompositionBackfaceVisibility>* value) = 0;
    virtual HRESULT __stdcall put_BackfaceVisibility(abi_t<Windows::UI::Composition::CompositionBackfaceVisibility> value) = 0;
    virtual HRESULT __stdcall get_BorderMode(abi_t<Windows::UI::Composition::CompositionBorderMode>* value) = 0;
    virtual HRESULT __stdcall put_BorderMode(abi_t<Windows::UI::Composition::CompositionBorderMode> value) = 0;
    virtual HRESULT __stdcall get_CenterPoint(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_CenterPoint(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_Clip(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Clip(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CompositeMode(abi_t<Windows::UI::Composition::CompositionCompositeMode>* value) = 0;
    virtual HRESULT __stdcall put_CompositeMode(abi_t<Windows::UI::Composition::CompositionCompositeMode> value) = 0;
    virtual HRESULT __stdcall get_IsVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsVisible(bool value) = 0;
    virtual HRESULT __stdcall get_Offset(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_Offset(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_Opacity(float* value) = 0;
    virtual HRESULT __stdcall put_Opacity(float value) = 0;
    virtual HRESULT __stdcall get_Orientation(abi_t<Windows::Foundation::Numerics::quaternion>* value) = 0;
    virtual HRESULT __stdcall put_Orientation(abi_t<Windows::Foundation::Numerics::quaternion> value) = 0;
    virtual HRESULT __stdcall get_Parent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RotationAngle(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_RotationAngleInDegrees(float* value) = 0;
    virtual HRESULT __stdcall put_RotationAngleInDegrees(float value) = 0;
    virtual HRESULT __stdcall get_RotationAxis(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_RotationAxis(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_Scale(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_Scale(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_Size(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
    virtual HRESULT __stdcall get_TransformMatrix(abi_t<Windows::Foundation::Numerics::float4x4>* value) = 0;
    virtual HRESULT __stdcall put_TransformMatrix(abi_t<Windows::Foundation::Numerics::float4x4> value) = 0;
};};

template <> struct abi<Windows::UI::Composition::IVisual2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ParentForTransform(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ParentForTransform(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RelativeOffsetAdjustment(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall put_RelativeOffsetAdjustment(abi_t<Windows::Foundation::Numerics::float3> value) = 0;
    virtual HRESULT __stdcall get_RelativeSizeAdjustment(abi_t<Windows::Foundation::Numerics::float2>* value) = 0;
    virtual HRESULT __stdcall put_RelativeSizeAdjustment(abi_t<Windows::Foundation::Numerics::float2> value) = 0;
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
