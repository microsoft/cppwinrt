// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Composition {

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
struct ICompositionClip;
struct ICompositionClip2;
struct ICompositionClipFactory;
struct ICompositionColorBrush;
struct ICompositionCommitBatch;
struct ICompositionDrawingSurface;
struct ICompositionEasingFunction;
struct ICompositionEasingFunctionFactory;
struct ICompositionEffectBrush;
struct ICompositionEffectFactory;
struct ICompositionEffectSourceParameter;
struct ICompositionEffectSourceParameterFactory;
struct ICompositionGraphicsDevice;
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
struct ICompositor;
struct ICompositor2;
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

namespace Windows::UI::Composition {

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
struct ICompositionClip;
struct ICompositionClip2;
struct ICompositionClipFactory;
struct ICompositionColorBrush;
struct ICompositionCommitBatch;
struct ICompositionDrawingSurface;
struct ICompositionEasingFunction;
struct ICompositionEasingFunctionFactory;
struct ICompositionEffectBrush;
struct ICompositionEffectFactory;
struct ICompositionEffectSourceParameter;
struct ICompositionEffectSourceParameterFactory;
struct ICompositionGraphicsDevice;
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
struct ICompositor;
struct ICompositor2;
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

namespace Windows::UI::Composition {

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

}

}
