// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct CompositionEasingFunction;
struct ICompositionAnimationBase;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct DependencyObject;
struct DependencyProperty;
struct Duration;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls {

struct ListViewBase;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives {

enum class AnimationDirection;
enum class EdgeTransitionLocation;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Animation {

enum class ClockState
{
    Active = 0,
    Filling = 1,
    Stopped = 2,
};

enum class ConnectedAnimationComponent
{
    OffsetX = 0,
    OffsetY = 1,
    CrossFade = 2,
    Scale = 3,
};

enum class EasingMode
{
    EaseOut = 0,
    EaseIn = 1,
    EaseInOut = 2,
};

enum class FillBehavior
{
    HoldEnd = 0,
    Stop = 1,
};

enum class RepeatBehaviorType
{
    Count = 0,
    Duration = 1,
    Forever = 2,
};

struct IAddDeleteThemeTransition;
struct IBackEase;
struct IBackEaseStatics;
struct IBeginStoryboard;
struct IBeginStoryboardStatics;
struct IBounceEase;
struct IBounceEaseStatics;
struct ICircleEase;
struct IColorAnimation;
struct IColorAnimationStatics;
struct IColorAnimationUsingKeyFrames;
struct IColorAnimationUsingKeyFramesStatics;
struct IColorKeyFrame;
struct IColorKeyFrameFactory;
struct IColorKeyFrameStatics;
struct ICommonNavigationTransitionInfo;
struct ICommonNavigationTransitionInfoStatics;
struct IConnectedAnimation;
struct IConnectedAnimation2;
struct IConnectedAnimationService;
struct IConnectedAnimationServiceStatics;
struct IContentThemeTransition;
struct IContentThemeTransitionStatics;
struct IContinuumNavigationTransitionInfo;
struct IContinuumNavigationTransitionInfoStatics;
struct ICubicEase;
struct IDiscreteColorKeyFrame;
struct IDiscreteDoubleKeyFrame;
struct IDiscreteObjectKeyFrame;
struct IDiscretePointKeyFrame;
struct IDoubleAnimation;
struct IDoubleAnimationStatics;
struct IDoubleAnimationUsingKeyFrames;
struct IDoubleAnimationUsingKeyFramesStatics;
struct IDoubleKeyFrame;
struct IDoubleKeyFrameFactory;
struct IDoubleKeyFrameStatics;
struct IDragItemThemeAnimation;
struct IDragItemThemeAnimationStatics;
struct IDragOverThemeAnimation;
struct IDragOverThemeAnimationStatics;
struct IDrillInNavigationTransitionInfo;
struct IDrillInThemeAnimation;
struct IDrillInThemeAnimationStatics;
struct IDrillOutThemeAnimation;
struct IDrillOutThemeAnimationStatics;
struct IDropTargetItemThemeAnimation;
struct IDropTargetItemThemeAnimationStatics;
struct IEasingColorKeyFrame;
struct IEasingColorKeyFrameStatics;
struct IEasingDoubleKeyFrame;
struct IEasingDoubleKeyFrameStatics;
struct IEasingFunctionBase;
struct IEasingFunctionBaseFactory;
struct IEasingFunctionBaseStatics;
struct IEasingPointKeyFrame;
struct IEasingPointKeyFrameStatics;
struct IEdgeUIThemeTransition;
struct IEdgeUIThemeTransitionStatics;
struct IElasticEase;
struct IElasticEaseStatics;
struct IEntranceNavigationTransitionInfo;
struct IEntranceNavigationTransitionInfoStatics;
struct IEntranceThemeTransition;
struct IEntranceThemeTransitionStatics;
struct IExponentialEase;
struct IExponentialEaseStatics;
struct IFadeInThemeAnimation;
struct IFadeInThemeAnimationStatics;
struct IFadeOutThemeAnimation;
struct IFadeOutThemeAnimationStatics;
struct IKeySpline;
struct IKeyTimeHelper;
struct IKeyTimeHelperStatics;
struct ILinearColorKeyFrame;
struct ILinearDoubleKeyFrame;
struct ILinearPointKeyFrame;
struct INavigationThemeTransition;
struct INavigationThemeTransitionStatics;
struct INavigationTransitionInfo;
struct INavigationTransitionInfoFactory;
struct INavigationTransitionInfoOverrides;
struct IObjectAnimationUsingKeyFrames;
struct IObjectAnimationUsingKeyFramesStatics;
struct IObjectKeyFrame;
struct IObjectKeyFrameFactory;
struct IObjectKeyFrameStatics;
struct IPaneThemeTransition;
struct IPaneThemeTransitionStatics;
struct IPointAnimation;
struct IPointAnimationStatics;
struct IPointAnimationUsingKeyFrames;
struct IPointAnimationUsingKeyFramesStatics;
struct IPointKeyFrame;
struct IPointKeyFrameFactory;
struct IPointKeyFrameStatics;
struct IPointerDownThemeAnimation;
struct IPointerDownThemeAnimationStatics;
struct IPointerUpThemeAnimation;
struct IPointerUpThemeAnimationStatics;
struct IPopInThemeAnimation;
struct IPopInThemeAnimationStatics;
struct IPopOutThemeAnimation;
struct IPopOutThemeAnimationStatics;
struct IPopupThemeTransition;
struct IPopupThemeTransitionStatics;
struct IPowerEase;
struct IPowerEaseStatics;
struct IQuadraticEase;
struct IQuarticEase;
struct IQuinticEase;
struct IReorderThemeTransition;
struct IRepeatBehaviorHelper;
struct IRepeatBehaviorHelperStatics;
struct IRepositionThemeAnimation;
struct IRepositionThemeAnimationStatics;
struct IRepositionThemeTransition;
struct IRepositionThemeTransition2;
struct IRepositionThemeTransitionStatics2;
struct ISineEase;
struct ISlideNavigationTransitionInfo;
struct ISplineColorKeyFrame;
struct ISplineColorKeyFrameStatics;
struct ISplineDoubleKeyFrame;
struct ISplineDoubleKeyFrameStatics;
struct ISplinePointKeyFrame;
struct ISplinePointKeyFrameStatics;
struct ISplitCloseThemeAnimation;
struct ISplitCloseThemeAnimationStatics;
struct ISplitOpenThemeAnimation;
struct ISplitOpenThemeAnimationStatics;
struct IStoryboard;
struct IStoryboardStatics;
struct ISuppressNavigationTransitionInfo;
struct ISwipeBackThemeAnimation;
struct ISwipeBackThemeAnimationStatics;
struct ISwipeHintThemeAnimation;
struct ISwipeHintThemeAnimationStatics;
struct ITimeline;
struct ITimelineFactory;
struct ITimelineStatics;
struct ITransition;
struct ITransitionFactory;
struct AddDeleteThemeTransition;
struct BackEase;
struct BeginStoryboard;
struct BounceEase;
struct CircleEase;
struct ColorAnimation;
struct ColorAnimationUsingKeyFrames;
struct ColorKeyFrame;
struct ColorKeyFrameCollection;
struct CommonNavigationTransitionInfo;
struct ConnectedAnimation;
struct ConnectedAnimationService;
struct ContentThemeTransition;
struct ContinuumNavigationTransitionInfo;
struct CubicEase;
struct DiscreteColorKeyFrame;
struct DiscreteDoubleKeyFrame;
struct DiscreteObjectKeyFrame;
struct DiscretePointKeyFrame;
struct DoubleAnimation;
struct DoubleAnimationUsingKeyFrames;
struct DoubleKeyFrame;
struct DoubleKeyFrameCollection;
struct DragItemThemeAnimation;
struct DragOverThemeAnimation;
struct DrillInNavigationTransitionInfo;
struct DrillInThemeAnimation;
struct DrillOutThemeAnimation;
struct DropTargetItemThemeAnimation;
struct EasingColorKeyFrame;
struct EasingDoubleKeyFrame;
struct EasingFunctionBase;
struct EasingPointKeyFrame;
struct EdgeUIThemeTransition;
struct ElasticEase;
struct EntranceNavigationTransitionInfo;
struct EntranceThemeTransition;
struct ExponentialEase;
struct FadeInThemeAnimation;
struct FadeOutThemeAnimation;
struct KeySpline;
struct KeyTimeHelper;
struct LinearColorKeyFrame;
struct LinearDoubleKeyFrame;
struct LinearPointKeyFrame;
struct NavigationThemeTransition;
struct NavigationTransitionInfo;
struct ObjectAnimationUsingKeyFrames;
struct ObjectKeyFrame;
struct ObjectKeyFrameCollection;
struct PaneThemeTransition;
struct PointAnimation;
struct PointAnimationUsingKeyFrames;
struct PointKeyFrame;
struct PointKeyFrameCollection;
struct PointerDownThemeAnimation;
struct PointerUpThemeAnimation;
struct PopInThemeAnimation;
struct PopOutThemeAnimation;
struct PopupThemeTransition;
struct PowerEase;
struct QuadraticEase;
struct QuarticEase;
struct QuinticEase;
struct ReorderThemeTransition;
struct RepeatBehaviorHelper;
struct RepositionThemeAnimation;
struct RepositionThemeTransition;
struct SineEase;
struct SlideNavigationTransitionInfo;
struct SplineColorKeyFrame;
struct SplineDoubleKeyFrame;
struct SplinePointKeyFrame;
struct SplitCloseThemeAnimation;
struct SplitOpenThemeAnimation;
struct Storyboard;
struct SuppressNavigationTransitionInfo;
struct SwipeBackThemeAnimation;
struct SwipeHintThemeAnimation;
struct Timeline;
struct TimelineCollection;
struct Transition;
struct TransitionCollection;
struct KeyTime;
struct RepeatBehavior;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IBackEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IBackEaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IBeginStoryboard>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IBounceEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ICircleEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IColorAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IColorKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IConnectedAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IContentThemeTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ICubicEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDoubleAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IElasticEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IExponentialEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IKeySpline>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPowerEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IQuadraticEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IQuarticEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IQuinticEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISineEase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IStoryboard>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::IStoryboardStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ITimeline>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ITimelineFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ITimelineStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ITransition>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ITransitionFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::BackEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::BeginStoryboard>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::BounceEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::CircleEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ColorAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ColorKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ConnectedAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ConnectedAnimationService>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ContentThemeTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::CubicEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DoubleAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::EasingFunctionBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ElasticEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::EntranceThemeTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ExponentialEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::KeySpline>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::KeyTimeHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::NavigationThemeTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PaneThemeTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PointAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PointKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PopInThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PopupThemeTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::PowerEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::QuadraticEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::QuarticEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::QuinticEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ReorderThemeTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::RepositionThemeTransition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SineEase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::Storyboard>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::Timeline>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::TimelineCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::Transition>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::TransitionCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ClockState>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::EasingMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::FillBehavior>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::RepeatBehaviorType>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Media::Animation::KeyTime>{ using type = struct_category<Windows::Foundation::TimeSpan>; };
template <> struct category<Windows::UI::Xaml::Media::Animation::RepeatBehavior>{ using type = struct_category<double,Windows::Foundation::TimeSpan,Windows::UI::Xaml::Media::Animation::RepeatBehaviorType>; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IAddDeleteThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IBackEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IBackEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IBackEaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IBackEaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IBeginStoryboard>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IBeginStoryboard" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IBeginStoryboardStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IBounceEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IBounceEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IBounceEaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ICircleEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ICircleEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IColorAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IColorAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IColorAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IColorAnimationUsingKeyFrames" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IColorAnimationUsingKeyFramesStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IColorKeyFrameFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IColorKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ICommonNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ICommonNavigationTransitionInfoStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IConnectedAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IConnectedAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IConnectedAnimation2" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IConnectedAnimationService" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IConnectedAnimationServiceStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IContentThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IContentThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IContentThemeTransitionStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IContinuumNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IContinuumNavigationTransitionInfoStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ICubicEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ICubicEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDiscreteColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDiscreteDoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDiscreteObjectKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDiscretePointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDoubleAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDoubleAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDoubleAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDoubleAnimationUsingKeyFrames" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDoubleAnimationUsingKeyFramesStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDoubleKeyFrameFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDoubleKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDragItemThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDragItemThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDragOverThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDragOverThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDrillInNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDrillInThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDrillInThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDrillOutThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDrillOutThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDropTargetItemThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IDropTargetItemThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEasingColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEasingColorKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEasingDoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEasingDoubleKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEasingFunctionBase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEasingFunctionBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEasingFunctionBaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEasingPointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEasingPointKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEdgeUIThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEdgeUIThemeTransitionStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IElasticEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IElasticEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IElasticEaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEntranceNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEntranceNavigationTransitionInfoStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEntranceThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IEntranceThemeTransitionStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IExponentialEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IExponentialEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IExponentialEaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IFadeInThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IFadeInThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IFadeOutThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IFadeOutThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IKeySpline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IKeySpline" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IKeyTimeHelper" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IKeyTimeHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ILinearColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ILinearDoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ILinearPointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.INavigationThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.INavigationThemeTransitionStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.INavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.INavigationTransitionInfoFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.INavigationTransitionInfoOverrides" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IObjectAnimationUsingKeyFrames" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IObjectAnimationUsingKeyFramesStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IObjectKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IObjectKeyFrameFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IObjectKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPaneThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPaneThemeTransitionStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointAnimationUsingKeyFrames" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointAnimationUsingKeyFramesStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointKeyFrameFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointerDownThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointerDownThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointerUpThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPointerUpThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPopInThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPopInThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPopOutThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPopOutThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPopupThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPopupThemeTransitionStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPowerEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPowerEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IPowerEaseStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IQuadraticEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IQuadraticEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IQuarticEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IQuarticEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IQuinticEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IQuinticEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IReorderThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IRepeatBehaviorHelper" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IRepeatBehaviorHelperStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IRepositionThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IRepositionThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IRepositionThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IRepositionThemeTransition2" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IRepositionThemeTransitionStatics2" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISineEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISineEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISlideNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplineColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplineColorKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplineDoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplineDoubleKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplinePointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplinePointKeyFrameStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplitCloseThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplitCloseThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplitOpenThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISplitOpenThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IStoryboard>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IStoryboard" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::IStoryboardStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.IStoryboardStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISuppressNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISwipeBackThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISwipeBackThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISwipeHintThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ISwipeHintThemeAnimationStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ITimeline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ITimeline" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ITimelineFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ITimelineFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ITimelineStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ITimelineStatics" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ITransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ITransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ITransitionFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ITransitionFactory" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.AddDeleteThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::BackEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.BackEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::BeginStoryboard>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.BeginStoryboard" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::BounceEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.BounceEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::CircleEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.CircleEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ColorAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ColorAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ColorAnimationUsingKeyFrames" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ColorKeyFrameCollection" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.CommonNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ConnectedAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ConnectedAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ConnectedAnimationService>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ConnectedAnimationService" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ContentThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ContentThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ContinuumNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::CubicEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.CubicEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DiscreteColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DiscreteDoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DiscreteObjectKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DiscretePointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DoubleAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DoubleAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DoubleAnimationUsingKeyFrames" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DoubleKeyFrameCollection" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DragItemThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DragOverThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DrillInNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DrillInThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DrillOutThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.DropTargetItemThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.EasingColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.EasingDoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::EasingFunctionBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.EasingFunctionBase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.EasingPointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.EdgeUIThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ElasticEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ElasticEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.EntranceNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::EntranceThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.EntranceThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ExponentialEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ExponentialEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.FadeInThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.FadeOutThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::KeySpline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.KeySpline" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::KeyTimeHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.KeyTimeHelper" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.LinearColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.LinearDoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.LinearPointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::NavigationThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.NavigationThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.NavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ObjectAnimationUsingKeyFrames" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ObjectKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ObjectKeyFrameCollection" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PaneThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PaneThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PointAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PointAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PointAnimationUsingKeyFrames" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PointKeyFrameCollection" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PointerDownThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PointerUpThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PopInThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PopInThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PopOutThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PopupThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PopupThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::PowerEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.PowerEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::QuadraticEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.QuadraticEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::QuarticEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.QuarticEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::QuinticEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.QuinticEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ReorderThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ReorderThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.RepeatBehaviorHelper" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.RepositionThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::RepositionThemeTransition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.RepositionThemeTransition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SineEase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SineEase" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SlideNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SplineColorKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SplineDoubleKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SplinePointKeyFrame" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SplitCloseThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SplitOpenThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::Storyboard>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.Storyboard" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SuppressNavigationTransitionInfo" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SwipeBackThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.SwipeHintThemeAnimation" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::Timeline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.Timeline" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::TimelineCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.TimelineCollection" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::Transition>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.Transition" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::TransitionCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.TransitionCollection" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ClockState>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ClockState" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.ConnectedAnimationComponent" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::EasingMode>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.EasingMode" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::FillBehavior>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.FillBehavior" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::RepeatBehaviorType>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.RepeatBehaviorType" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::KeyTime>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.KeyTime" }; };
template <> struct name<Windows::UI::Xaml::Media::Animation::RepeatBehavior>{ static constexpr auto & value{ L"Windows.UI.Xaml.Media.Animation.RepeatBehavior" }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>{ static constexpr GUID value{ 0xADEC852E,0x4424,0x4DAB,{ 0x99,0xC1,0x3A,0x04,0xE3,0x6A,0x3C,0x48 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IBackEase>{ static constexpr GUID value{ 0xE47796E7,0xF805,0x4A8F,{ 0x81,0xC9,0x38,0xE6,0x47,0x2C,0xAA,0x94 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IBackEaseStatics>{ static constexpr GUID value{ 0x3C70A2FF,0xA0A0,0x4786,{ 0x92,0x6C,0x22,0x32,0x1F,0x8F,0x25,0xB7 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IBeginStoryboard>{ static constexpr GUID value{ 0x64189FCD,0x49EC,0x4E52,{ 0xA6,0xF6,0x55,0x32,0x4C,0x92,0x10,0x53 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>{ static constexpr GUID value{ 0x12CFF18C,0xAA91,0x4C4A,{ 0xB8,0x2F,0xDF,0x34,0xFC,0x57,0xF9,0x4B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IBounceEase>{ static constexpr GUID value{ 0x2BF1464E,0xFC71,0x47ED,{ 0x85,0xA1,0x3B,0xA9,0x57,0x77,0x18,0xB4 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>{ static constexpr GUID value{ 0xC0701DA2,0x4F73,0x41C9,{ 0xB2,0xCB,0x2E,0xA3,0x10,0x51,0x07,0xFF } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ICircleEase>{ static constexpr GUID value{ 0x53A3BDB2,0x9177,0x4E6E,{ 0xA0,0x43,0x50,0x82,0xD8,0x89,0xAB,0x1F } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IColorAnimation>{ static constexpr GUID value{ 0xB8AE8A15,0x0F63,0x4694,{ 0x94,0x67,0xBD,0xAF,0xAC,0x12,0x53,0xEA } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>{ static constexpr GUID value{ 0x55EAF6E2,0x87E3,0x4F48,{ 0x95,0x8F,0x85,0x5B,0x2F,0x9E,0xA9,0xEC } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>{ static constexpr GUID value{ 0xF5C82640,0x13C3,0x42AA,{ 0x9A,0xE2,0x7E,0x6B,0x51,0xC9,0x2F,0x95 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>{ static constexpr GUID value{ 0xB4723CDC,0x96E9,0x48F9,{ 0x8D,0x92,0x9B,0x64,0x8B,0x2F,0x1C,0xC6 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IColorKeyFrame>{ static constexpr GUID value{ 0xB51D82D9,0x0910,0x4589,{ 0xA2,0x84,0xB0,0xC9,0x20,0x58,0x58,0xE9 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>{ static constexpr GUID value{ 0x769BD88A,0x9CFB,0x4A7D,{ 0x96,0xC4,0xA1,0xE7,0xDE,0x6F,0xDB,0x4B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>{ static constexpr GUID value{ 0xC043AE99,0x210C,0x430F,{ 0x9D,0xA5,0xDF,0x10,0x82,0x69,0x20,0x55 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>{ static constexpr GUID value{ 0x50345692,0xA555,0x4624,{ 0xA3,0x61,0x0A,0x91,0xC1,0x70,0x64,0x73 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>{ static constexpr GUID value{ 0x1E3EFE33,0x50BE,0x4443,{ 0x88,0x3C,0xE5,0x62,0x72,0x01,0xC2,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IConnectedAnimation>{ static constexpr GUID value{ 0x3518628C,0xF387,0x4C25,{ 0xAC,0x98,0x44,0xE8,0x6C,0x3C,0xAD,0xF0 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>{ static constexpr GUID value{ 0x5D2F8E5C,0x584B,0x4DDD,{ 0xB6,0x68,0x97,0x38,0x91,0x43,0x14,0x59 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>{ static constexpr GUID value{ 0x1C6875C9,0x19BB,0x4D47,{ 0xB9,0xAA,0x66,0xC8,0x02,0xDC,0xB9,0xFF } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>{ static constexpr GUID value{ 0xC7078EA5,0xD688,0x40E8,{ 0x8F,0x90,0x96,0xA6,0x27,0x92,0x73,0xD2 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IContentThemeTransition>{ static constexpr GUID value{ 0xF66FC5C3,0x5915,0x437D,{ 0x8E,0x3B,0xAD,0xF8,0xE7,0xF0,0xAB,0x57 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>{ static constexpr GUID value{ 0x0E8EE385,0x9A42,0x4459,{ 0xAF,0xA9,0x33,0x7D,0xC4,0x1E,0x15,0x87 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>{ static constexpr GUID value{ 0x4BE1DBAD,0x8BA6,0x4004,{ 0x84,0x38,0x8A,0x90,0x17,0x97,0x85,0x43 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>{ static constexpr GUID value{ 0x3E25DD53,0xB18F,0x4BF1,{ 0xB3,0xBC,0x92,0xF5,0x16,0xF2,0x99,0x03 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ICubicEase>{ static constexpr GUID value{ 0x1B94FC76,0xDAD7,0x4354,{ 0xB1,0xA2,0x79,0x69,0xFB,0xF6,0xA7,0x0D } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>{ static constexpr GUID value{ 0x230C08F4,0xE062,0x4CB1,{ 0x8E,0x2A,0x14,0x09,0x3D,0x73,0xED,0x8C } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>{ static constexpr GUID value{ 0xF5F51F3A,0xAD11,0x49CE,{ 0x8E,0x1C,0x08,0xFD,0xF1,0x44,0x74,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>{ static constexpr GUID value{ 0xC7DCDE89,0xF12D,0x4A9C,{ 0x81,0x99,0xE7,0xA9,0xEC,0xE3,0xA4,0x73 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>{ static constexpr GUID value{ 0xE0A9070D,0x4C42,0x4A90,{ 0x98,0x3A,0x75,0xF5,0xA8,0x3A,0x2F,0xBE } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDoubleAnimation>{ static constexpr GUID value{ 0x7E9F3D59,0x0F07,0x4BC9,{ 0x97,0x7D,0x03,0x76,0x3F,0xF8,0x15,0x4F } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>{ static constexpr GUID value{ 0xE27A935D,0xF111,0x43B7,{ 0xB8,0x24,0x83,0x2B,0x58,0xD7,0x78,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>{ static constexpr GUID value{ 0x4FEE628F,0xBFEE,0x4F75,{ 0x83,0xC2,0xA9,0x3B,0x39,0x48,0x84,0x73 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>{ static constexpr GUID value{ 0x109BF2F6,0xC60F,0x49AA,{ 0xAB,0xF6,0xF6,0x96,0xD4,0x92,0x11,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>{ static constexpr GUID value{ 0x674456FD,0xE81E,0x4F4E,{ 0xB4,0xAD,0x0A,0xCF,0xED,0x9E,0xCD,0x68 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>{ static constexpr GUID value{ 0xAC97DEC3,0x7538,0x40B9,{ 0xB1,0x52,0x69,0x6F,0x7F,0xBF,0x47,0x22 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>{ static constexpr GUID value{ 0x324641B0,0x7D37,0x427A,{ 0xAD,0xEB,0x43,0xF3,0x8B,0xB6,0x1A,0x4D } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>{ static constexpr GUID value{ 0x0C7D5DB5,0x7ED6,0x4949,{ 0xB4,0xE6,0xA7,0x8C,0x9F,0x4F,0x97,0x8D } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>{ static constexpr GUID value{ 0x6218B9F5,0x013A,0x4FB1,{ 0x86,0xFC,0x92,0xBC,0x4E,0x8D,0x02,0x41 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>{ static constexpr GUID value{ 0x72F762F7,0x7E51,0x4A6B,{ 0xB9,0x37,0xDC,0x4B,0x4C,0x1C,0x54,0x58 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>{ static constexpr GUID value{ 0x146FFE57,0x3C9D,0x41D9,{ 0xA5,0xFF,0x8D,0x72,0x39,0x51,0x68,0x10 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>{ static constexpr GUID value{ 0x3B86201A,0x45D3,0x463B,{ 0x93,0x9E,0xC8,0x59,0x5F,0x43,0x9B,0xCC } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>{ static constexpr GUID value{ 0xB090B824,0xF1D2,0x41B8,{ 0x87,0xBA,0x78,0x03,0x41,0x26,0x59,0x4C } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>{ static constexpr GUID value{ 0xC61FE488,0xA17A,0x4B11,{ 0xB5,0x3B,0xA4,0xF1,0xA0,0x7D,0x4B,0xA9 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>{ static constexpr GUID value{ 0xD890CCDF,0x06D3,0x4F7E,{ 0x8E,0x4A,0x4F,0xB7,0x6E,0x25,0x61,0x39 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>{ static constexpr GUID value{ 0xBEB5DB9B,0x2617,0x4888,{ 0x80,0xDD,0x72,0xFA,0x7B,0xB6,0xFA,0xC3 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>{ static constexpr GUID value{ 0x1881C968,0x1824,0x462B,{ 0x87,0xE8,0xC3,0x57,0x21,0x2B,0x97,0x7B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>{ static constexpr GUID value{ 0xAE80F486,0x2E56,0x4513,{ 0xBF,0x18,0xD7,0x74,0x70,0x16,0x4A,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>{ static constexpr GUID value{ 0xC733D630,0xF4B9,0x4934,{ 0x9B,0xDD,0x27,0xAC,0x5E,0xD1,0xCF,0xD8 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>{ static constexpr GUID value{ 0x6F3837FC,0x8E3D,0x4522,{ 0x9B,0x0F,0x00,0x3D,0xB8,0x60,0x98,0x51 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>{ static constexpr GUID value{ 0x965ADB8D,0x9A54,0x4108,{ 0xB4,0xFF,0xB5,0xA5,0x21,0x2C,0xB3,0x38 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>{ static constexpr GUID value{ 0xC8D3D845,0xDBAE,0x4E5B,{ 0x8B,0x84,0xD9,0x53,0x73,0x98,0xE5,0xB1 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>{ static constexpr GUID value{ 0xC108383F,0x2C02,0x4151,{ 0x8E,0xCD,0x68,0xDD,0xAA,0x3F,0x0D,0x9B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>{ static constexpr GUID value{ 0x1830FE6A,0xF01B,0x43E0,{ 0xB6,0x1F,0xB4,0x52,0xA1,0xC6,0x6F,0xD2 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>{ static constexpr GUID value{ 0x2A5031AA,0x2C50,0x4A1D,{ 0xBB,0x04,0xD7,0x5E,0x07,0xB7,0x15,0x48 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>{ static constexpr GUID value{ 0xB3C91380,0x6868,0x4225,{ 0xA7,0x0B,0x39,0x81,0xCC,0x0B,0x29,0x47 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>{ static constexpr GUID value{ 0xE22DBFC4,0x080C,0x402C,{ 0xA6,0xB5,0xF4,0x8D,0x0A,0x98,0x11,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>{ static constexpr GUID value{ 0x5C86C19B,0x49D7,0x19EC,{ 0xCF,0x19,0x83,0xA7,0x3C,0x6D,0xE7,0x5E } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>{ static constexpr GUID value{ 0x16A2B13B,0x4705,0x302B,{ 0x27,0xC6,0x2A,0xAC,0x92,0xF6,0x45,0xAC } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IElasticEase>{ static constexpr GUID value{ 0xEF5BA58C,0xB0B6,0x4A6C,{ 0x9C,0xA8,0xFB,0x42,0x33,0xF1,0x24,0x59 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>{ static constexpr GUID value{ 0xA9F566EC,0xFE9C,0x4B2B,{ 0x8E,0x52,0xBB,0x78,0x5D,0x56,0x21,0x85 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>{ static constexpr GUID value{ 0x720A256B,0x1C8A,0x41EE,{ 0x82,0xEC,0x8A,0x87,0xC0,0xCF,0x47,0xDA } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>{ static constexpr GUID value{ 0xF948C27A,0x40C9,0x469F,{ 0x8F,0x33,0xBF,0x45,0xC8,0x81,0x1F,0x21 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>{ static constexpr GUID value{ 0x07698C09,0xA8E3,0x419A,{ 0xA0,0x1D,0x74,0x10,0xA0,0xAE,0x8E,0xC8 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>{ static constexpr GUID value{ 0x37CC0577,0xFF98,0x4AED,{ 0xB8,0x6E,0x5E,0xC2,0x37,0x02,0xF8,0x77 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IExponentialEase>{ static constexpr GUID value{ 0x7CB9E41D,0xF0BB,0x4BCA,{ 0x9D,0xA5,0x9B,0xA3,0xA1,0x17,0x34,0xC4 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>{ static constexpr GUID value{ 0xF37EE7E3,0xA761,0x4352,{ 0x9A,0xD6,0x70,0x79,0x45,0x67,0x58,0x1A } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>{ static constexpr GUID value{ 0x6D4BC8F5,0xA918,0x4477,{ 0x80,0x78,0x55,0x4C,0x68,0x81,0x2A,0xB8 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>{ static constexpr GUID value{ 0x7F0117E1,0xBEA9,0x4923,{ 0xB2,0x3A,0x0D,0xDF,0x4D,0x7B,0x87,0x37 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>{ static constexpr GUID value{ 0x89276BA9,0xFFD4,0x45B6,{ 0x9B,0x9A,0xCE,0xD4,0x89,0x51,0xE7,0x12 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>{ static constexpr GUID value{ 0xFE17A81A,0x4168,0x4F68,{ 0xA2,0x8C,0xE5,0xDD,0x98,0xCF,0x68,0x0F } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IKeySpline>{ static constexpr GUID value{ 0x77A163BB,0xD5CA,0x4A32,{ 0xBA,0x0B,0x7D,0xFF,0x98,0x8E,0x58,0xA0 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>{ static constexpr GUID value{ 0x3643E480,0x4823,0x466A,{ 0xAB,0xE5,0x5E,0x79,0xC8,0xED,0x77,0xED } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>{ static constexpr GUID value{ 0x7FA2612C,0x22A9,0x45E9,{ 0x9A,0xF7,0xC7,0x41,0x6E,0xFF,0xF7,0xA5 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>{ static constexpr GUID value{ 0x66FDB6EF,0xAC81,0x4611,{ 0xB1,0xD2,0x61,0xF5,0x45,0x98,0x3F,0x03 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>{ static constexpr GUID value{ 0x8EFDF265,0x9A7B,0x431D,{ 0x8F,0x0C,0x14,0xC5,0x6B,0x5E,0xA4,0xD9 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>{ static constexpr GUID value{ 0xE7C9B8EF,0xAF24,0x49EE,{ 0x84,0xF1,0xA8,0x66,0x00,0xA4,0xE3,0x19 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>{ static constexpr GUID value{ 0x8833848C,0x4EB7,0x41F2,{ 0x87,0x99,0x9E,0xEF,0x0A,0x21,0x3B,0x73 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>{ static constexpr GUID value{ 0xEA2F06E0,0x5E60,0x4F8E,{ 0xBC,0xAF,0x43,0x14,0x87,0xA2,0x94,0xAB } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>{ static constexpr GUID value{ 0xA9B05091,0xAE4A,0x4372,{ 0x86,0x25,0x21,0xB7,0xA8,0xB9,0x8C,0xA4 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>{ static constexpr GUID value{ 0xEDF4F8D5,0xAF63,0x4FAB,{ 0x9D,0x4A,0x87,0x92,0x7F,0x82,0xDD,0x6B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>{ static constexpr GUID value{ 0xD9517E6A,0xA9D0,0x4BF7,{ 0x9D,0xB0,0x46,0x33,0xA6,0x9D,0xAF,0xF2 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>{ static constexpr GUID value{ 0x334A2D92,0xB74A,0x4C64,{ 0xB9,0xA6,0x58,0xBC,0xFA,0x31,0x4F,0x22 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>{ static constexpr GUID value{ 0xEB736182,0x6AF1,0x49A3,{ 0x97,0xB6,0x78,0x3E,0xD9,0x74,0x00,0xFE } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>{ static constexpr GUID value{ 0x9852A851,0x8593,0x48EE,{ 0xA6,0xA4,0xD5,0xD4,0x72,0x0F,0x02,0x9A } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>{ static constexpr GUID value{ 0x1626143E,0x3E6D,0x44D8,{ 0x9B,0x9A,0x04,0xAE,0xA7,0x0F,0x84,0x92 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>{ static constexpr GUID value{ 0x2CD6AB00,0x5319,0x4286,{ 0x8E,0xED,0x4E,0x75,0x5E,0xA0,0xCF,0x9C } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>{ static constexpr GUID value{ 0x4708EB8E,0x4BFC,0xEE46,{ 0xD4,0xF9,0x70,0x8D,0xEF,0x3F,0xBB,0x2B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>{ static constexpr GUID value{ 0x316B382F,0x4BE4,0x1797,{ 0xB4,0x5C,0xCD,0x90,0x0B,0xBE,0x0C,0xAA } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointAnimation>{ static constexpr GUID value{ 0x30F04312,0x7726,0x4F88,{ 0xB8,0xE2,0x2F,0xA5,0x45,0x18,0x96,0x3B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>{ static constexpr GUID value{ 0x2F99B356,0xE737,0x408B,{ 0xA0,0xFD,0x32,0x78,0x26,0xD3,0x22,0x55 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>{ static constexpr GUID value{ 0x9B944F72,0x446A,0x41D0,{ 0xA1,0x29,0x41,0xA6,0x20,0xF4,0x59,0x5D } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>{ static constexpr GUID value{ 0x5F454C87,0x2390,0x46EA,{ 0xBA,0xA7,0x76,0x2F,0x4B,0xC3,0x0D,0x04 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointKeyFrame>{ static constexpr GUID value{ 0xFCC88D01,0x7F82,0x4DAE,{ 0x80,0x26,0x7B,0x7E,0x08,0x68,0x78,0xB3 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>{ static constexpr GUID value{ 0xCB214BDF,0x426A,0x4392,{ 0x83,0x55,0xC2,0xAE,0x52,0x85,0x26,0x23 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>{ static constexpr GUID value{ 0x95CF1B27,0x7965,0x4BEC,{ 0xB9,0xFB,0xFB,0xE9,0x4B,0x65,0x51,0x8E } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>{ static constexpr GUID value{ 0xB58E714E,0xC49D,0x4788,{ 0xA2,0x33,0x0A,0xE8,0x5D,0x99,0xDD,0x5A } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>{ static constexpr GUID value{ 0x63A7CB7B,0x6D46,0x4494,{ 0xB9,0x4A,0xE7,0x2F,0x3B,0x49,0x2A,0x61 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>{ static constexpr GUID value{ 0xE9E9D07D,0x6340,0x4828,{ 0xAD,0x12,0x69,0x06,0x94,0xB9,0x91,0x0B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>{ static constexpr GUID value{ 0x7C618F9C,0x7992,0x4139,{ 0x8B,0xFC,0x08,0x83,0xB9,0x72,0x7A,0x7E } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>{ static constexpr GUID value{ 0x196938C1,0x1C07,0x4C28,{ 0x88,0x47,0xF9,0xF0,0x55,0xB3,0x28,0x55 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>{ static constexpr GUID value{ 0xEFAA99D3,0x218A,0x4701,{ 0x97,0x7F,0xF1,0xBF,0xAE,0x8B,0xA6,0x49 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>{ static constexpr GUID value{ 0x4786AB49,0x0E48,0x4E81,{ 0xA2,0xE5,0xCC,0x5A,0xA1,0x9E,0x48,0xD3 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>{ static constexpr GUID value{ 0x1D492C09,0x03C1,0x4490,{ 0x99,0xDC,0x90,0x9F,0xEA,0xB3,0x57,0xFB } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>{ static constexpr GUID value{ 0x47843552,0x4283,0x545E,{ 0xC7,0x91,0x26,0x8D,0xCA,0x22,0xCE,0x4B } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>{ static constexpr GUID value{ 0xE5A1640E,0x490D,0x1505,{ 0x9F,0x6B,0x8F,0xAF,0xC0,0x44,0xDE,0xC5 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPowerEase>{ static constexpr GUID value{ 0x69C80579,0xEEDF,0x405B,{ 0x86,0x80,0xD9,0x60,0x68,0x80,0xC9,0x37 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>{ static constexpr GUID value{ 0xA5955103,0x91A2,0x460C,{ 0x9C,0x41,0xD2,0x8F,0x6A,0x93,0x9B,0xDA } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IQuadraticEase>{ static constexpr GUID value{ 0xE1510E91,0xEF6D,0x44F0,{ 0x80,0x3D,0x68,0xD1,0x6D,0xE0,0xDD,0xFC } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IQuarticEase>{ static constexpr GUID value{ 0xE8698814,0xFE42,0x4A05,{ 0xB5,0xB8,0x08,0x1F,0x41,0x15,0x78,0x15 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IQuinticEase>{ static constexpr GUID value{ 0x92EE793B,0x3C49,0x4108,{ 0xAA,0x11,0xAB,0x78,0x66,0x03,0xDA,0x21 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>{ static constexpr GUID value{ 0xF2065C6C,0xD052,0x4AD1,{ 0x83,0x62,0xB7,0x1B,0x36,0xDF,0x74,0x97 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>{ static constexpr GUID value{ 0x6863AB72,0x4997,0x47F9,{ 0x87,0xAD,0x37,0xEF,0xB7,0x59,0x93,0xEA } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>{ static constexpr GUID value{ 0x7A795033,0x79F3,0x4DD9,{ 0xB2,0x67,0x9C,0xF5,0x0F,0xB5,0x1F,0x84 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>{ static constexpr GUID value{ 0xECDA24E8,0x8945,0x4949,{ 0xA1,0xBF,0x62,0x10,0x99,0x65,0xA7,0xE9 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>{ static constexpr GUID value{ 0x4D92B1B1,0x860B,0x4BF9,{ 0xA5,0x9D,0x1E,0xB1,0xCC,0xBE,0x8F,0xE0 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>{ static constexpr GUID value{ 0x88329B82,0x98F3,0x455A,{ 0xAC,0x53,0x2E,0x70,0x83,0xB6,0xE2,0x2C } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>{ static constexpr GUID value{ 0xCEBFE864,0xDBEA,0x4404,{ 0x8E,0x6E,0xDE,0x55,0xAD,0xA7,0x52,0x39 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>{ static constexpr GUID value{ 0x9240E930,0x0A19,0x468B,{ 0x8C,0x2A,0x68,0xFA,0xB4,0x50,0x00,0x27 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISineEase>{ static constexpr GUID value{ 0xA9382962,0x230B,0x49DA,{ 0x9E,0x0D,0x66,0x49,0x87,0x89,0x23,0x43 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>{ static constexpr GUID value{ 0xD6AC9D77,0x2E03,0x405F,{ 0x80,0xED,0xE6,0x2B,0xEE,0xF3,0x66,0x8F } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>{ static constexpr GUID value{ 0x1A4A5941,0x1FE0,0x473A,{ 0x8E,0xFE,0x43,0x16,0xD8,0xC8,0x62,0x29 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>{ static constexpr GUID value{ 0x61D1D997,0x8589,0x4F2F,{ 0x8F,0xBB,0x7D,0x03,0xED,0xC9,0x8D,0xD3 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>{ static constexpr GUID value{ 0x00D72D38,0x6B2B,0x4843,{ 0x83,0x8E,0xC8,0xB1,0x15,0xEE,0xC8,0x01 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>{ static constexpr GUID value{ 0x060A8FFC,0x975F,0x4E4E,{ 0x9E,0xC7,0x13,0xC5,0xAE,0xE0,0x20,0x62 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>{ static constexpr GUID value{ 0x0F19F306,0x7036,0x494F,{ 0xBC,0x3C,0x78,0x0D,0xF0,0xCC,0x52,0x4A } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>{ static constexpr GUID value{ 0xE97A32C2,0x0A7A,0x4766,{ 0x95,0xCB,0x0D,0x69,0x26,0x11,0xCB,0x4C } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>{ static constexpr GUID value{ 0x4F799518,0xFF39,0x4E90,{ 0xBB,0x74,0x2A,0xBD,0x56,0x02,0x74,0x02 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>{ static constexpr GUID value{ 0x7AA94DE9,0xCC9B,0x4E90,{ 0xA1,0x1A,0x00,0x50,0xA2,0x21,0x6A,0x9E } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>{ static constexpr GUID value{ 0x785FD7AA,0x5456,0x4639,{ 0x8F,0xD2,0x26,0xBA,0xE6,0xA5,0xFF,0xE4 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>{ static constexpr GUID value{ 0x8D4CFA89,0x3A91,0x458D,{ 0xB0,0xFB,0x4C,0xAD,0x62,0x5C,0xBF,0x8D } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IStoryboard>{ static constexpr GUID value{ 0xD45C1E6E,0x3594,0x460E,{ 0x98,0x1A,0x32,0x27,0x1B,0xD3,0xAA,0x06 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::IStoryboardStatics>{ static constexpr GUID value{ 0xD82F07D8,0x73D5,0x4379,{ 0xBD,0x48,0x7E,0x05,0x18,0x4A,0x8B,0xAD } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>{ static constexpr GUID value{ 0x244D7B0C,0xB1B7,0x4871,{ 0x9D,0x3E,0xD5,0x62,0x03,0xA3,0xA5,0xB4 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>{ static constexpr GUID value{ 0xA38A4214,0x0BCA,0x4D2D,{ 0x95,0xF7,0xCE,0xBA,0x57,0xFB,0xAF,0x60 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>{ static constexpr GUID value{ 0x693F31BF,0x4DA6,0x468A,{ 0x8C,0xE0,0x99,0x6C,0x9A,0xAD,0x42,0xE0 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>{ static constexpr GUID value{ 0xCDD067C0,0x580E,0x4E40,{ 0xBE,0x98,0xF2,0x02,0xD3,0xD8,0x43,0x65 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>{ static constexpr GUID value{ 0x23D61A57,0x9115,0x4D63,{ 0xB0,0x4A,0xB8,0x9F,0x1C,0x74,0x4D,0xC0 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ITimeline>{ static constexpr GUID value{ 0x0BC465DC,0xBE4D,0x4D0D,{ 0x95,0x49,0x22,0x08,0xB7,0x15,0xF4,0x0D } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ITimelineFactory>{ static constexpr GUID value{ 0x1D56BB07,0xBDA4,0x478B,{ 0x8A,0xDA,0xEB,0x04,0xD5,0x80,0xCD,0x5E } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ITimelineStatics>{ static constexpr GUID value{ 0xA902ED4E,0xEF10,0x4D6F,{ 0x9A,0x40,0x93,0xCB,0x88,0x95,0xF4,0xE5 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ITransition>{ static constexpr GUID value{ 0x3C677C7C,0x01D0,0x4DCE,{ 0xB3,0x33,0x97,0x6F,0x93,0x31,0x2B,0x08 } }; };
template <> struct guid<Windows::UI::Xaml::Media::Animation::ITransitionFactory>{ static constexpr GUID value{ 0xDC9AB2CF,0x3BC9,0x44AA,{ 0xB3,0xFC,0x88,0x3A,0x83,0x23,0x3A,0x2C } }; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition>{ using type = Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::BackEase>{ using type = Windows::UI::Xaml::Media::Animation::IBackEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::BeginStoryboard>{ using type = Windows::UI::Xaml::Media::Animation::IBeginStoryboard; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::BounceEase>{ using type = Windows::UI::Xaml::Media::Animation::IBounceEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::CircleEase>{ using type = Windows::UI::Xaml::Media::Animation::ICircleEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ColorAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IColorAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames>{ using type = Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ColorKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IColorKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::ColorKeyFrame>; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo>{ using type = Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ConnectedAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IConnectedAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ConnectedAnimationService>{ using type = Windows::UI::Xaml::Media::Animation::IConnectedAnimationService; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ContentThemeTransition>{ using type = Windows::UI::Xaml::Media::Animation::IContentThemeTransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo>{ using type = Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::CubicEase>{ using type = Windows::UI::Xaml::Media::Animation::ICubicEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DoubleAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IDoubleAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames>{ using type = Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo>{ using type = Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::EasingFunctionBase>{ using type = Windows::UI::Xaml::Media::Animation::IEasingFunctionBase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition>{ using type = Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ElasticEase>{ using type = Windows::UI::Xaml::Media::Animation::IElasticEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo>{ using type = Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::EntranceThemeTransition>{ using type = Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ExponentialEase>{ using type = Windows::UI::Xaml::Media::Animation::IExponentialEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::KeySpline>{ using type = Windows::UI::Xaml::Media::Animation::IKeySpline; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::KeyTimeHelper>{ using type = Windows::UI::Xaml::Media::Animation::IKeyTimeHelper; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::NavigationThemeTransition>{ using type = Windows::UI::Xaml::Media::Animation::INavigationThemeTransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>{ using type = Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames>{ using type = Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IObjectKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PaneThemeTransition>{ using type = Windows::UI::Xaml::Media::Animation::IPaneThemeTransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PointAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IPointAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames>{ using type = Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PointKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::IPointKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::PointKeyFrame>; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PopInThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PopupThemeTransition>{ using type = Windows::UI::Xaml::Media::Animation::IPopupThemeTransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::PowerEase>{ using type = Windows::UI::Xaml::Media::Animation::IPowerEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::QuadraticEase>{ using type = Windows::UI::Xaml::Media::Animation::IQuadraticEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::QuarticEase>{ using type = Windows::UI::Xaml::Media::Animation::IQuarticEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::QuinticEase>{ using type = Windows::UI::Xaml::Media::Animation::IQuinticEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::ReorderThemeTransition>{ using type = Windows::UI::Xaml::Media::Animation::IReorderThemeTransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper>{ using type = Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::RepositionThemeTransition>{ using type = Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SineEase>{ using type = Windows::UI::Xaml::Media::Animation::ISineEase; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo>{ using type = Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame>{ using type = Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::Storyboard>{ using type = Windows::UI::Xaml::Media::Animation::IStoryboard; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo>{ using type = Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation>{ using type = Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::Timeline>{ using type = Windows::UI::Xaml::Media::Animation::ITimeline; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::TimelineCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Timeline>; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::Transition>{ using type = Windows::UI::Xaml::Media::Animation::ITransition; };
template <> struct default_interface<Windows::UI::Xaml::Media::Animation::TransitionCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IAddDeleteThemeTransition
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IAddDeleteThemeTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IBackEase
{
    double Amplitude() const;
    void Amplitude(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IBackEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBackEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IBackEaseStatics
{
    Windows::UI::Xaml::DependencyProperty AmplitudeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IBackEaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBackEaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboard
{
    Windows::UI::Xaml::Media::Animation::Storyboard Storyboard() const;
    void Storyboard(Windows::UI::Xaml::Media::Animation::Storyboard const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IBeginStoryboard> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboard<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboardStatics
{
    Windows::UI::Xaml::DependencyProperty StoryboardProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboardStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IBounceEase
{
    int32_t Bounces() const;
    void Bounces(int32_t value) const;
    double Bounciness() const;
    void Bounciness(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IBounceEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBounceEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IBounceEaseStatics
{
    Windows::UI::Xaml::DependencyProperty BouncesProperty() const;
    Windows::UI::Xaml::DependencyProperty BouncinessProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IBounceEaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBounceEaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ICircleEase
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ICircleEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ICircleEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IColorAnimation
{
    Windows::Foundation::IReference<Windows::UI::Color> From() const;
    void From(optional<Windows::UI::Color> const& value) const;
    Windows::Foundation::IReference<Windows::UI::Color> To() const;
    void To(optional<Windows::UI::Color> const& value) const;
    Windows::Foundation::IReference<Windows::UI::Color> By() const;
    void By(optional<Windows::UI::Color> const& value) const;
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase EasingFunction() const;
    void EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
    bool EnableDependentAnimation() const;
    void EnableDependentAnimation(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IColorAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IColorAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty FromProperty() const;
    Windows::UI::Xaml::DependencyProperty ToProperty() const;
    Windows::UI::Xaml::DependencyProperty ByProperty() const;
    Windows::UI::Xaml::DependencyProperty EasingFunctionProperty() const;
    Windows::UI::Xaml::DependencyProperty EnableDependentAnimationProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IColorAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFrames
{
    Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection KeyFrames() const;
    bool EnableDependentAnimation() const;
    void EnableDependentAnimation(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFrames<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFramesStatics
{
    Windows::UI::Xaml::DependencyProperty EnableDependentAnimationProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFramesStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrame
{
    Windows::UI::Color Value() const;
    void Value(Windows::UI::Color const& value) const;
    Windows::UI::Xaml::Media::Animation::KeyTime KeyTime() const;
    void KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IColorKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameFactory
{
    Windows::UI::Xaml::Media::Animation::ColorKeyFrame CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty ValueProperty() const;
    Windows::UI::Xaml::DependencyProperty KeyTimeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfo
{
    bool IsStaggeringEnabled() const;
    void IsStaggeringEnabled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfoStatics
{
    Windows::UI::Xaml::DependencyProperty IsStaggeringEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty IsStaggerElementProperty() const;
    bool GetIsStaggerElement(Windows::UI::Xaml::UIElement const& element) const;
    void SetIsStaggerElement(Windows::UI::Xaml::UIElement const& element, bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfoStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation
{
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::Foundation::IInspectable> const& value) const;
    using Completed_revoker = event_revoker<Windows::UI::Xaml::Media::Animation::IConnectedAnimation>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::Animation::ConnectedAnimation, Windows::Foundation::IInspectable> const& value) const;
    void Completed(event_token const& token) const;
    bool TryStart(Windows::UI::Xaml::UIElement const& destination) const;
    void Cancel() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IConnectedAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation2
{
    bool IsScaleAnimationEnabled() const;
    void IsScaleAnimationEnabled(bool value) const;
    bool TryStart(Windows::UI::Xaml::UIElement const& destination, param::iterable<Windows::UI::Xaml::UIElement> const& coordinatedElements) const;
    void SetAnimationComponent(Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent const& component, Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IConnectedAnimation2> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService
{
    Windows::Foundation::TimeSpan DefaultDuration() const;
    void DefaultDuration(Windows::Foundation::TimeSpan const& value) const;
    Windows::UI::Composition::CompositionEasingFunction DefaultEasingFunction() const;
    void DefaultEasingFunction(Windows::UI::Composition::CompositionEasingFunction const& value) const;
    Windows::UI::Xaml::Media::Animation::ConnectedAnimation PrepareToAnimate(param::hstring const& key, Windows::UI::Xaml::UIElement const& source) const;
    Windows::UI::Xaml::Media::Animation::ConnectedAnimation GetAnimation(param::hstring const& key) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IConnectedAnimationService> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationServiceStatics
{
    Windows::UI::Xaml::Media::Animation::ConnectedAnimationService GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationServiceStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransition
{
    double HorizontalOffset() const;
    void HorizontalOffset(double value) const;
    double VerticalOffset() const;
    void VerticalOffset(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IContentThemeTransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransitionStatics
{
    Windows::UI::Xaml::DependencyProperty HorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty VerticalOffsetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransitionStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfo
{
    Windows::UI::Xaml::UIElement ExitElement() const;
    void ExitElement(Windows::UI::Xaml::UIElement const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics
{
    Windows::UI::Xaml::DependencyProperty ExitElementProperty() const;
    Windows::UI::Xaml::DependencyProperty IsEntranceElementProperty() const;
    bool GetIsEntranceElement(Windows::UI::Xaml::UIElement const& element) const;
    void SetIsEntranceElement(Windows::UI::Xaml::UIElement const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty IsExitElementProperty() const;
    bool GetIsExitElement(Windows::UI::Xaml::UIElement const& element) const;
    void SetIsExitElement(Windows::UI::Xaml::UIElement const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty ExitElementContainerProperty() const;
    bool GetExitElementContainer(Windows::UI::Xaml::Controls::ListViewBase const& element) const;
    void SetExitElementContainer(Windows::UI::Xaml::Controls::ListViewBase const& element, bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ICubicEase
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ICubicEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ICubicEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDiscreteColorKeyFrame
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDiscreteColorKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDiscreteDoubleKeyFrame
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDiscreteDoubleKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDiscreteObjectKeyFrame
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDiscreteObjectKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDiscretePointKeyFrame
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDiscretePointKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation
{
    Windows::Foundation::IReference<double> From() const;
    void From(optional<double> const& value) const;
    Windows::Foundation::IReference<double> To() const;
    void To(optional<double> const& value) const;
    Windows::Foundation::IReference<double> By() const;
    void By(optional<double> const& value) const;
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase EasingFunction() const;
    void EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
    bool EnableDependentAnimation() const;
    void EnableDependentAnimation(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDoubleAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty FromProperty() const;
    Windows::UI::Xaml::DependencyProperty ToProperty() const;
    Windows::UI::Xaml::DependencyProperty ByProperty() const;
    Windows::UI::Xaml::DependencyProperty EasingFunctionProperty() const;
    Windows::UI::Xaml::DependencyProperty EnableDependentAnimationProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFrames
{
    Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection KeyFrames() const;
    bool EnableDependentAnimation() const;
    void EnableDependentAnimation(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFrames<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFramesStatics
{
    Windows::UI::Xaml::DependencyProperty EnableDependentAnimationProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFramesStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrame
{
    double Value() const;
    void Value(double value) const;
    Windows::UI::Xaml::Media::Animation::KeyTime KeyTime() const;
    void KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameFactory
{
    Windows::UI::Xaml::Media::Animation::DoubleKeyFrame CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty ValueProperty() const;
    Windows::UI::Xaml::DependencyProperty KeyTimeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
    double ToOffset() const;
    void ToOffset(double value) const;
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection Direction() const;
    void Direction(Windows::UI::Xaml::Controls::Primitives::AnimationDirection const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty ToOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty DirectionProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDrillInNavigationTransitionInfo
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillInNavigationTransitionInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation
{
    hstring EntranceTargetName() const;
    void EntranceTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject EntranceTarget() const;
    void EntranceTarget(Windows::UI::Xaml::DependencyObject const& value) const;
    hstring ExitTargetName() const;
    void ExitTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject ExitTarget() const;
    void ExitTarget(Windows::UI::Xaml::DependencyObject const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty EntranceTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty EntranceTargetProperty() const;
    Windows::UI::Xaml::DependencyProperty ExitTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty ExitTargetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation
{
    hstring EntranceTargetName() const;
    void EntranceTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject EntranceTarget() const;
    void EntranceTarget(Windows::UI::Xaml::DependencyObject const& value) const;
    hstring ExitTargetName() const;
    void ExitTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject ExitTarget() const;
    void ExitTarget(Windows::UI::Xaml::DependencyObject const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty EntranceTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty EntranceTargetProperty() const;
    Windows::UI::Xaml::DependencyProperty ExitTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty ExitTargetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrame
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase EasingFunction() const;
    void EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty EasingFunctionProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrame
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase EasingFunction() const;
    void EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty EasingFunctionProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBase
{
    Windows::UI::Xaml::Media::Animation::EasingMode EasingMode() const;
    void EasingMode(Windows::UI::Xaml::Media::Animation::EasingMode const& value) const;
    double Ease(double normalizedTime) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBaseFactory
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBaseStatics
{
    Windows::UI::Xaml::DependencyProperty EasingModeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrame
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase EasingFunction() const;
    void EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty EasingFunctionProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransition
{
    Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation Edge() const;
    void Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransitionStatics
{
    Windows::UI::Xaml::DependencyProperty EdgeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransitionStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IElasticEase
{
    int32_t Oscillations() const;
    void Oscillations(int32_t value) const;
    double Springiness() const;
    void Springiness(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IElasticEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IElasticEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IElasticEaseStatics
{
    Windows::UI::Xaml::DependencyProperty OscillationsProperty() const;
    Windows::UI::Xaml::DependencyProperty SpringinessProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IElasticEaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IElasticEaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfo
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfoStatics
{
    Windows::UI::Xaml::DependencyProperty IsTargetElementProperty() const;
    bool GetIsTargetElement(Windows::UI::Xaml::UIElement const& element) const;
    void SetIsTargetElement(Windows::UI::Xaml::UIElement const& element, bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfoStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition
{
    double FromHorizontalOffset() const;
    void FromHorizontalOffset(double value) const;
    double FromVerticalOffset() const;
    void FromVerticalOffset(double value) const;
    bool IsStaggeringEnabled() const;
    void IsStaggeringEnabled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransitionStatics
{
    Windows::UI::Xaml::DependencyProperty FromHorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty FromVerticalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty IsStaggeringEnabledProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransitionStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IExponentialEase
{
    double Exponent() const;
    void Exponent(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IExponentialEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IExponentialEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IExponentialEaseStatics
{
    Windows::UI::Xaml::DependencyProperty ExponentProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IExponentialEaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IKeySpline
{
    Windows::Foundation::Point ControlPoint1() const;
    void ControlPoint1(Windows::Foundation::Point const& value) const;
    Windows::Foundation::Point ControlPoint2() const;
    void ControlPoint2(Windows::Foundation::Point const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IKeySpline> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IKeySpline<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IKeyTimeHelper
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IKeyTimeHelper> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IKeyTimeHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IKeyTimeHelperStatics
{
    Windows::UI::Xaml::Media::Animation::KeyTime FromTimeSpan(Windows::Foundation::TimeSpan const& timeSpan) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IKeyTimeHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ILinearColorKeyFrame
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ILinearColorKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ILinearDoubleKeyFrame
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ILinearDoubleKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ILinearPointKeyFrame
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ILinearPointKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransition
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo DefaultNavigationTransitionInfo() const;
    void DefaultNavigationTransitionInfo(Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::INavigationThemeTransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransitionStatics
{
    Windows::UI::Xaml::DependencyProperty DefaultNavigationTransitionInfoProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransitionStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfo
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoFactory
{
    Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoOverrides
{
    hstring GetNavigationStateCore() const;
    void SetNavigationStateCore(param::hstring const& navigationState) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFrames
{
    Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection KeyFrames() const;
    bool EnableDependentAnimation() const;
    void EnableDependentAnimation(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFrames<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFramesStatics
{
    Windows::UI::Xaml::DependencyProperty EnableDependentAnimationProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFramesStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrame
{
    Windows::Foundation::IInspectable Value() const;
    void Value(Windows::Foundation::IInspectable const& value) const;
    Windows::UI::Xaml::Media::Animation::KeyTime KeyTime() const;
    void KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IObjectKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameFactory
{
    Windows::UI::Xaml::Media::Animation::ObjectKeyFrame CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty ValueProperty() const;
    Windows::UI::Xaml::DependencyProperty KeyTimeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransition
{
    Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation Edge() const;
    void Edge(Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPaneThemeTransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransitionStatics
{
    Windows::UI::Xaml::DependencyProperty EdgeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransitionStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointAnimation
{
    Windows::Foundation::IReference<Windows::Foundation::Point> From() const;
    void From(optional<Windows::Foundation::Point> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::Point> To() const;
    void To(optional<Windows::Foundation::Point> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::Point> By() const;
    void By(optional<Windows::Foundation::Point> const& value) const;
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase EasingFunction() const;
    void EasingFunction(Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
    bool EnableDependentAnimation() const;
    void EnableDependentAnimation(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty FromProperty() const;
    Windows::UI::Xaml::DependencyProperty ToProperty() const;
    Windows::UI::Xaml::DependencyProperty ByProperty() const;
    Windows::UI::Xaml::DependencyProperty EasingFunctionProperty() const;
    Windows::UI::Xaml::DependencyProperty EnableDependentAnimationProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFrames
{
    Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection KeyFrames() const;
    bool EnableDependentAnimation() const;
    void EnableDependentAnimation(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFrames<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFramesStatics
{
    Windows::UI::Xaml::DependencyProperty EnableDependentAnimationProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFramesStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrame
{
    Windows::Foundation::Point Value() const;
    void Value(Windows::Foundation::Point const& value) const;
    Windows::UI::Xaml::Media::Animation::KeyTime KeyTime() const;
    void KeyTime(Windows::UI::Xaml::Media::Animation::KeyTime const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameFactory
{
    Windows::UI::Xaml::Media::Animation::PointKeyFrame CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty ValueProperty() const;
    Windows::UI::Xaml::DependencyProperty KeyTimeProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
    double FromHorizontalOffset() const;
    void FromHorizontalOffset(double value) const;
    double FromVerticalOffset() const;
    void FromVerticalOffset(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty FromHorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty FromVerticalOffsetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransition
{
    double FromHorizontalOffset() const;
    void FromHorizontalOffset(double value) const;
    double FromVerticalOffset() const;
    void FromVerticalOffset(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPopupThemeTransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransitionStatics
{
    Windows::UI::Xaml::DependencyProperty FromHorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty FromVerticalOffsetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransitionStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPowerEase
{
    double Power() const;
    void Power(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPowerEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPowerEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IPowerEaseStatics
{
    Windows::UI::Xaml::DependencyProperty PowerProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IPowerEaseStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPowerEaseStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IQuadraticEase
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IQuadraticEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IQuadraticEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IQuarticEase
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IQuarticEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IQuarticEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IQuinticEase
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IQuinticEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IQuinticEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IReorderThemeTransition
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IReorderThemeTransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IReorderThemeTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelper
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelper<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics
{
    Windows::UI::Xaml::Media::Animation::RepeatBehavior Forever() const;
    Windows::UI::Xaml::Media::Animation::RepeatBehavior FromCount(double count) const;
    Windows::UI::Xaml::Media::Animation::RepeatBehavior FromDuration(Windows::Foundation::TimeSpan const& duration) const;
    bool GetHasCount(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target) const;
    bool GetHasDuration(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target) const;
    bool Equals(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target, Windows::UI::Xaml::Media::Animation::RepeatBehavior const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
    double FromHorizontalOffset() const;
    void FromHorizontalOffset(double value) const;
    double FromVerticalOffset() const;
    void FromVerticalOffset(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty FromHorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty FromVerticalOffsetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition2
{
    bool IsStaggeringEnabled() const;
    void IsStaggeringEnabled(bool value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransitionStatics2
{
    Windows::UI::Xaml::DependencyProperty IsStaggeringEnabledProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransitionStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISineEase
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISineEase> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISineEase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISlideNavigationTransitionInfo
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISlideNavigationTransitionInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrame
{
    Windows::UI::Xaml::Media::Animation::KeySpline KeySpline() const;
    void KeySpline(Windows::UI::Xaml::Media::Animation::KeySpline const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty KeySplineProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrame
{
    Windows::UI::Xaml::Media::Animation::KeySpline KeySpline() const;
    void KeySpline(Windows::UI::Xaml::Media::Animation::KeySpline const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty KeySplineProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrame
{
    Windows::UI::Xaml::Media::Animation::KeySpline KeySpline() const;
    void KeySpline(Windows::UI::Xaml::Media::Animation::KeySpline const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrame<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrameStatics
{
    Windows::UI::Xaml::DependencyProperty KeySplineProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrameStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation
{
    hstring OpenedTargetName() const;
    void OpenedTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject OpenedTarget() const;
    void OpenedTarget(Windows::UI::Xaml::DependencyObject const& value) const;
    hstring ClosedTargetName() const;
    void ClosedTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject ClosedTarget() const;
    void ClosedTarget(Windows::UI::Xaml::DependencyObject const& value) const;
    hstring ContentTargetName() const;
    void ContentTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject ContentTarget() const;
    void ContentTarget(Windows::UI::Xaml::DependencyObject const& value) const;
    double OpenedLength() const;
    void OpenedLength(double value) const;
    double ClosedLength() const;
    void ClosedLength(double value) const;
    double OffsetFromCenter() const;
    void OffsetFromCenter(double value) const;
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection ContentTranslationDirection() const;
    void ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection const& value) const;
    double ContentTranslationOffset() const;
    void ContentTranslationOffset(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty OpenedTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty OpenedTargetProperty() const;
    Windows::UI::Xaml::DependencyProperty ClosedTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty ClosedTargetProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentTargetProperty() const;
    Windows::UI::Xaml::DependencyProperty OpenedLengthProperty() const;
    Windows::UI::Xaml::DependencyProperty ClosedLengthProperty() const;
    Windows::UI::Xaml::DependencyProperty OffsetFromCenterProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentTranslationDirectionProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentTranslationOffsetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation
{
    hstring OpenedTargetName() const;
    void OpenedTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject OpenedTarget() const;
    void OpenedTarget(Windows::UI::Xaml::DependencyObject const& value) const;
    hstring ClosedTargetName() const;
    void ClosedTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject ClosedTarget() const;
    void ClosedTarget(Windows::UI::Xaml::DependencyObject const& value) const;
    hstring ContentTargetName() const;
    void ContentTargetName(param::hstring const& value) const;
    Windows::UI::Xaml::DependencyObject ContentTarget() const;
    void ContentTarget(Windows::UI::Xaml::DependencyObject const& value) const;
    double OpenedLength() const;
    void OpenedLength(double value) const;
    double ClosedLength() const;
    void ClosedLength(double value) const;
    double OffsetFromCenter() const;
    void OffsetFromCenter(double value) const;
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection ContentTranslationDirection() const;
    void ContentTranslationDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection const& value) const;
    double ContentTranslationOffset() const;
    void ContentTranslationOffset(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty OpenedTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty OpenedTargetProperty() const;
    Windows::UI::Xaml::DependencyProperty ClosedTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty ClosedTargetProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentTargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentTargetProperty() const;
    Windows::UI::Xaml::DependencyProperty OpenedLengthProperty() const;
    Windows::UI::Xaml::DependencyProperty ClosedLengthProperty() const;
    Windows::UI::Xaml::DependencyProperty OffsetFromCenterProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentTranslationDirectionProperty() const;
    Windows::UI::Xaml::DependencyProperty ContentTranslationOffsetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IStoryboard
{
    Windows::UI::Xaml::Media::Animation::TimelineCollection Children() const;
    void Seek(Windows::Foundation::TimeSpan const& offset) const;
    void Stop() const;
    void Begin() const;
    void Pause() const;
    void Resume() const;
    Windows::UI::Xaml::Media::Animation::ClockState GetCurrentState() const;
    Windows::Foundation::TimeSpan GetCurrentTime() const;
    void SeekAlignedToLastTick(Windows::Foundation::TimeSpan const& offset) const;
    void SkipToFill() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IStoryboard> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics
{
    Windows::UI::Xaml::DependencyProperty TargetPropertyProperty() const;
    hstring GetTargetProperty(Windows::UI::Xaml::Media::Animation::Timeline const& element) const;
    void SetTargetProperty(Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& path) const;
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
    hstring GetTargetName(Windows::UI::Xaml::Media::Animation::Timeline const& element) const;
    void SetTargetName(Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& name) const;
    void SetTarget(Windows::UI::Xaml::Media::Animation::Timeline const& timeline, Windows::UI::Xaml::DependencyObject const& target) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::IStoryboardStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISuppressNavigationTransitionInfo
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISuppressNavigationTransitionInfo<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
    double FromHorizontalOffset() const;
    void FromHorizontalOffset(double value) const;
    double FromVerticalOffset() const;
    void FromVerticalOffset(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty FromHorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty FromVerticalOffsetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation
{
    hstring TargetName() const;
    void TargetName(param::hstring const& value) const;
    double ToHorizontalOffset() const;
    void ToHorizontalOffset(double value) const;
    double ToVerticalOffset() const;
    void ToVerticalOffset(double value) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimationStatics
{
    Windows::UI::Xaml::DependencyProperty TargetNameProperty() const;
    Windows::UI::Xaml::DependencyProperty ToHorizontalOffsetProperty() const;
    Windows::UI::Xaml::DependencyProperty ToVerticalOffsetProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ITimeline
{
    bool AutoReverse() const;
    void AutoReverse(bool value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> BeginTime() const;
    void BeginTime(optional<Windows::Foundation::TimeSpan> const& value) const;
    Windows::UI::Xaml::Duration Duration() const;
    void Duration(Windows::UI::Xaml::Duration const& value) const;
    double SpeedRatio() const;
    void SpeedRatio(double value) const;
    Windows::UI::Xaml::Media::Animation::FillBehavior FillBehavior() const;
    void FillBehavior(Windows::UI::Xaml::Media::Animation::FillBehavior const& value) const;
    Windows::UI::Xaml::Media::Animation::RepeatBehavior RepeatBehavior() const;
    void RepeatBehavior(Windows::UI::Xaml::Media::Animation::RepeatBehavior const& value) const;
    event_token Completed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    using Completed_revoker = event_revoker<Windows::UI::Xaml::Media::Animation::ITimeline>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const;
    void Completed(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ITimeline> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ITimelineFactory
{
    Windows::UI::Xaml::Media::Animation::Timeline CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ITimelineFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITimelineFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics
{
    bool AllowDependentAnimations() const;
    void AllowDependentAnimations(bool value) const;
    Windows::UI::Xaml::DependencyProperty AutoReverseProperty() const;
    Windows::UI::Xaml::DependencyProperty BeginTimeProperty() const;
    Windows::UI::Xaml::DependencyProperty DurationProperty() const;
    Windows::UI::Xaml::DependencyProperty SpeedRatioProperty() const;
    Windows::UI::Xaml::DependencyProperty FillBehaviorProperty() const;
    Windows::UI::Xaml::DependencyProperty RepeatBehaviorProperty() const;
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ITimelineStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ITransition
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ITransition> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITransition<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Media_Animation_ITransitionFactory
{
};
template <> struct consume<Windows::UI::Xaml::Media::Animation::ITransitionFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITransitionFactory<D>; };

template <> struct abi<Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IBackEase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Amplitude(double* value) = 0;
    virtual HRESULT __stdcall put_Amplitude(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IBackEaseStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AmplitudeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IBeginStoryboard>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Storyboard(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Storyboard(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StoryboardProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IBounceEase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Bounces(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Bounces(int32_t value) = 0;
    virtual HRESULT __stdcall get_Bounciness(double* value) = 0;
    virtual HRESULT __stdcall put_Bounciness(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BouncesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BouncinessProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ICircleEase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IColorAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_From(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_From(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_To(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_To(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_By(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_By(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_EasingFunction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool* value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FromProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ToProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ByProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyFrames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool* value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IColorKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Value(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_Value(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall get_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* value) = 0;
    virtual HRESULT __stdcall put_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ValueProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTimeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsStaggeringEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsStaggeringEnabled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsStaggeringEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsStaggerElementProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetIsStaggerElement(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetIsStaggerElement(::IUnknown* element, bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IConnectedAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Completed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall TryStart(::IUnknown* destination, bool* returnValue) = 0;
    virtual HRESULT __stdcall Cancel() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsScaleAnimationEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsScaleAnimationEnabled(bool value) = 0;
    virtual HRESULT __stdcall TryStartWithCoordinatedElements(::IUnknown* destination, ::IUnknown* coordinatedElements, bool* returnValue) = 0;
    virtual HRESULT __stdcall SetAnimationComponent(abi_t<Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent> component, ::IUnknown* animation) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DefaultDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_DefaultDuration(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_DefaultEasingFunction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DefaultEasingFunction(::IUnknown* value) = 0;
    virtual HRESULT __stdcall PrepareToAnimate(HSTRING key, ::IUnknown* source, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall GetAnimation(HSTRING key, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IContentThemeTransition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_HorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_VerticalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_VerticalOffset(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VerticalOffsetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExitElement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ExitElement(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExitElementProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsEntranceElementProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetIsEntranceElement(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetIsEntranceElement(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_IsExitElementProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetIsExitElement(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetIsExitElement(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_ExitElementContainerProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetExitElementContainer(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetExitElementContainer(::IUnknown* element, bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ICubicEase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDoubleAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_From(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_From(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_To(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_To(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_By(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_By(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_EasingFunction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool* value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FromProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ToProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ByProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyFrames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool* value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Value(double* value) = 0;
    virtual HRESULT __stdcall put_Value(double value) = 0;
    virtual HRESULT __stdcall get_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* value) = 0;
    virtual HRESULT __stdcall put_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ValueProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTimeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ToOffset(double* value) = 0;
    virtual HRESULT __stdcall put_ToOffset(double value) = 0;
    virtual HRESULT __stdcall get_Direction(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>* value) = 0;
    virtual HRESULT __stdcall put_Direction(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ToOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DirectionProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EntranceTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_EntranceTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_EntranceTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EntranceTarget(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ExitTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ExitTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ExitTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ExitTarget(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EntranceTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EntranceTargetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExitTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExitTargetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EntranceTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_EntranceTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_EntranceTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EntranceTarget(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ExitTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ExitTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ExitTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ExitTarget(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EntranceTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EntranceTargetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExitTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExitTargetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EasingMode(abi_t<Windows::UI::Xaml::Media::Animation::EasingMode>* value) = 0;
    virtual HRESULT __stdcall put_EasingMode(abi_t<Windows::UI::Xaml::Media::Animation::EasingMode> value) = 0;
    virtual HRESULT __stdcall Ease(double normalizedTime, double* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EasingModeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Edge(abi_t<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation>* value) = 0;
    virtual HRESULT __stdcall put_Edge(abi_t<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EdgeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IElasticEase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Oscillations(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Oscillations(int32_t value) = 0;
    virtual HRESULT __stdcall get_Springiness(double* value) = 0;
    virtual HRESULT __stdcall put_Springiness(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OscillationsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SpringinessProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsTargetElementProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetIsTargetElement(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetIsTargetElement(::IUnknown* element, bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
    virtual HRESULT __stdcall get_IsStaggeringEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsStaggeringEnabled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsStaggeringEnabledProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IExponentialEase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Exponent(double* value) = 0;
    virtual HRESULT __stdcall put_Exponent(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExponentProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IKeySpline>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ControlPoint1(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall put_ControlPoint1(abi_t<Windows::Foundation::Point> value) = 0;
    virtual HRESULT __stdcall get_ControlPoint2(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall put_ControlPoint2(abi_t<Windows::Foundation::Point> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromTimeSpan(abi_t<Windows::Foundation::TimeSpan> timeSpan, abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DefaultNavigationTransitionInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DefaultNavigationTransitionInfo(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DefaultNavigationTransitionInfoProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetNavigationStateCore(HSTRING* returnValue) = 0;
    virtual HRESULT __stdcall SetNavigationStateCore(HSTRING navigationState) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyFrames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool* value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Value(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* value) = 0;
    virtual HRESULT __stdcall put_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ValueProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTimeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Edge(abi_t<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation>* value) = 0;
    virtual HRESULT __stdcall put_Edge(abi_t<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EdgeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_From(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_From(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_To(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_To(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_By(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_By(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_EasingFunction(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_EasingFunction(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool* value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FromProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ToProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ByProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EasingFunctionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyFrames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_EnableDependentAnimation(bool* value) = 0;
    virtual HRESULT __stdcall put_EnableDependentAnimation(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnableDependentAnimationProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Value(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall put_Value(abi_t<Windows::Foundation::Point> value) = 0;
    virtual HRESULT __stdcall get_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime>* value) = 0;
    virtual HRESULT __stdcall put_KeyTime(abi_t<Windows::UI::Xaml::Media::Animation::KeyTime> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ValueProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTimeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPowerEase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Power(double* value) = 0;
    virtual HRESULT __stdcall put_Power(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PowerProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IQuadraticEase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IQuarticEase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IQuinticEase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Forever(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior>* value) = 0;
    virtual HRESULT __stdcall FromCount(double count, abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior>* returnValue) = 0;
    virtual HRESULT __stdcall FromDuration(abi_t<Windows::Foundation::TimeSpan> duration, abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior>* returnValue) = 0;
    virtual HRESULT __stdcall GetHasCount(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> target, bool* value) = 0;
    virtual HRESULT __stdcall GetHasDuration(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> target, bool* value) = 0;
    virtual HRESULT __stdcall Equals(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> target, abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> value, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsStaggeringEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsStaggeringEnabled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsStaggeringEnabledProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISineEase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeySpline(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_KeySpline(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeySplineProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeySpline(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_KeySpline(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeySplineProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeySpline(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_KeySpline(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeySplineProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OpenedTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_OpenedTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_OpenedTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_OpenedTarget(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ClosedTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ClosedTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ClosedTarget(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ContentTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ContentTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ContentTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ContentTarget(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OpenedLength(double* value) = 0;
    virtual HRESULT __stdcall put_OpenedLength(double value) = 0;
    virtual HRESULT __stdcall get_ClosedLength(double* value) = 0;
    virtual HRESULT __stdcall put_ClosedLength(double value) = 0;
    virtual HRESULT __stdcall get_OffsetFromCenter(double* value) = 0;
    virtual HRESULT __stdcall put_OffsetFromCenter(double value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationDirection(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>* value) = 0;
    virtual HRESULT __stdcall put_ContentTranslationDirection(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection> value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationOffset(double* value) = 0;
    virtual HRESULT __stdcall put_ContentTranslationOffset(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OpenedTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OpenedTargetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentTargetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OpenedLengthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClosedLengthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OffsetFromCenterProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationDirectionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationOffsetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OpenedTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_OpenedTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_OpenedTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_OpenedTarget(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ClosedTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ClosedTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ClosedTarget(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ContentTargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ContentTargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ContentTarget(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ContentTarget(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OpenedLength(double* value) = 0;
    virtual HRESULT __stdcall put_OpenedLength(double value) = 0;
    virtual HRESULT __stdcall get_ClosedLength(double* value) = 0;
    virtual HRESULT __stdcall put_ClosedLength(double value) = 0;
    virtual HRESULT __stdcall get_OffsetFromCenter(double* value) = 0;
    virtual HRESULT __stdcall put_OffsetFromCenter(double value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationDirection(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>* value) = 0;
    virtual HRESULT __stdcall put_ContentTranslationDirection(abi_t<Windows::UI::Xaml::Controls::Primitives::AnimationDirection> value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationOffset(double* value) = 0;
    virtual HRESULT __stdcall put_ContentTranslationOffset(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OpenedTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OpenedTargetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClosedTargetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentTargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentTargetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OpenedLengthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClosedLengthProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OffsetFromCenterProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationDirectionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentTranslationOffsetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IStoryboard>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Children(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Seek(abi_t<Windows::Foundation::TimeSpan> offset) = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall Begin() = 0;
    virtual HRESULT __stdcall Pause() = 0;
    virtual HRESULT __stdcall Resume() = 0;
    virtual HRESULT __stdcall GetCurrentState(abi_t<Windows::UI::Xaml::Media::Animation::ClockState>* returnValue) = 0;
    virtual HRESULT __stdcall GetCurrentTime(abi_t<Windows::Foundation::TimeSpan>* returnValue) = 0;
    virtual HRESULT __stdcall SeekAlignedToLastTick(abi_t<Windows::Foundation::TimeSpan> offset) = 0;
    virtual HRESULT __stdcall SkipToFill() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::IStoryboardStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetPropertyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetTargetProperty(::IUnknown* element, HSTRING* path) = 0;
    virtual HRESULT __stdcall SetTargetProperty(::IUnknown* element, HSTRING path) = 0;
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetTargetName(::IUnknown* element, HSTRING* name) = 0;
    virtual HRESULT __stdcall SetTargetName(::IUnknown* element, HSTRING name) = 0;
    virtual HRESULT __stdcall SetTarget(::IUnknown* timeline, ::IUnknown* target) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_FromVerticalOffset(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FromHorizontalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FromVerticalOffsetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TargetName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ToHorizontalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_ToHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_ToVerticalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_ToVerticalOffset(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetNameProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ToHorizontalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ToVerticalOffsetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ITimeline>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AutoReverse(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoReverse(bool value) = 0;
    virtual HRESULT __stdcall get_BeginTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_BeginTime(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::UI::Xaml::Duration>* value) = 0;
    virtual HRESULT __stdcall put_Duration(abi_t<Windows::UI::Xaml::Duration> value) = 0;
    virtual HRESULT __stdcall get_SpeedRatio(double* value) = 0;
    virtual HRESULT __stdcall put_SpeedRatio(double value) = 0;
    virtual HRESULT __stdcall get_FillBehavior(abi_t<Windows::UI::Xaml::Media::Animation::FillBehavior>* value) = 0;
    virtual HRESULT __stdcall put_FillBehavior(abi_t<Windows::UI::Xaml::Media::Animation::FillBehavior> value) = 0;
    virtual HRESULT __stdcall get_RepeatBehavior(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior>* value) = 0;
    virtual HRESULT __stdcall put_RepeatBehavior(abi_t<Windows::UI::Xaml::Media::Animation::RepeatBehavior> value) = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* value, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ITimelineFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ITimelineStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowDependentAnimations(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowDependentAnimations(bool value) = 0;
    virtual HRESULT __stdcall get_AutoReverseProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BeginTimeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DurationProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SpeedRatioProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FillBehaviorProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RepeatBehaviorProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ITransition>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Media::Animation::ITransitionFactory>{ struct type : ::IInspectable
{
};};

}
