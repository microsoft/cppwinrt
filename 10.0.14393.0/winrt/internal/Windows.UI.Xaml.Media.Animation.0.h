// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Media::Animation {

struct KeyTime;
struct RepeatBehavior;

}

namespace Windows::UI::Xaml::Media::Animation {

using KeyTime = ABI::Windows::UI::Xaml::Media::Animation::KeyTime;
using RepeatBehavior = ABI::Windows::UI::Xaml::Media::Animation::RepeatBehavior;

}

namespace ABI::Windows::UI::Xaml::Media::Animation {

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

}

namespace Windows::UI::Xaml::Media::Animation {

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

}

namespace Windows::UI::Xaml::Media::Animation {

enum class ClockState
{
    Active = 0,
    Filling = 1,
    Stopped = 2,
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

}

}
