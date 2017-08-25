// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Haptics {

struct SimpleHapticsController;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Input {

enum class PointerDeviceType;
struct PointerDevice;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct RandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct KeyEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input {

enum class CrossSlidingState
{
    Started = 0,
    Dragging = 1,
    Selecting = 2,
    SelectSpeedBumping = 3,
    SpeedBumping = 4,
    Rearranging = 5,
    Completed = 6,
};

enum class DraggingState
{
    Started = 0,
    Continuing = 1,
    Completed = 2,
};

enum class EdgeGestureKind
{
    Touch = 0,
    Keyboard = 1,
    Mouse = 2,
};

enum class GestureSettings : unsigned
{
    None = 0x0,
    Tap = 0x1,
    DoubleTap = 0x2,
    Hold = 0x4,
    HoldWithMouse = 0x8,
    RightTap = 0x10,
    Drag = 0x20,
    ManipulationTranslateX = 0x40,
    ManipulationTranslateY = 0x80,
    ManipulationTranslateRailsX = 0x100,
    ManipulationTranslateRailsY = 0x200,
    ManipulationRotate = 0x400,
    ManipulationScale = 0x800,
    ManipulationTranslateInertia = 0x1000,
    ManipulationRotateInertia = 0x2000,
    ManipulationScaleInertia = 0x4000,
    CrossSlide = 0x8000,
    ManipulationMultipleFingerPanning = 0x10000,
};

DEFINE_ENUM_FLAG_OPERATORS(GestureSettings)

enum class HoldingState
{
    Started = 0,
    Completed = 1,
    Canceled = 2,
};

enum class PointerUpdateKind
{
    Other = 0,
    LeftButtonPressed = 1,
    LeftButtonReleased = 2,
    RightButtonPressed = 3,
    RightButtonReleased = 4,
    MiddleButtonPressed = 5,
    MiddleButtonReleased = 6,
    XButton1Pressed = 7,
    XButton1Released = 8,
    XButton2Pressed = 9,
    XButton2Released = 10,
};

enum class RadialControllerMenuKnownIcon
{
    Scroll = 0,
    Zoom = 1,
    UndoRedo = 2,
    Volume = 3,
    NextPreviousTrack = 4,
    Ruler = 5,
    InkColor = 6,
    InkThickness = 7,
    PenType = 8,
};

enum class RadialControllerSystemMenuItemKind
{
    Scroll = 0,
    Zoom = 1,
    UndoRedo = 2,
    Volume = 3,
    NextPreviousTrack = 4,
};

struct ICrossSlidingEventArgs;
struct IDraggingEventArgs;
struct IEdgeGesture;
struct IEdgeGestureEventArgs;
struct IEdgeGestureStatics;
struct IGestureRecognizer;
struct IHoldingEventArgs;
struct IKeyboardDeliveryInterceptor;
struct IKeyboardDeliveryInterceptorStatics;
struct IManipulationCompletedEventArgs;
struct IManipulationInertiaStartingEventArgs;
struct IManipulationStartedEventArgs;
struct IManipulationUpdatedEventArgs;
struct IMouseWheelParameters;
struct IPointerPoint;
struct IPointerPointProperties;
struct IPointerPointProperties2;
struct IPointerPointStatics;
struct IPointerPointTransform;
struct IPointerVisualizationSettings;
struct IPointerVisualizationSettingsStatics;
struct IRadialController;
struct IRadialController2;
struct IRadialControllerButtonClickedEventArgs;
struct IRadialControllerButtonClickedEventArgs2;
struct IRadialControllerButtonHoldingEventArgs;
struct IRadialControllerButtonPressedEventArgs;
struct IRadialControllerButtonReleasedEventArgs;
struct IRadialControllerConfiguration;
struct IRadialControllerConfiguration2;
struct IRadialControllerConfigurationStatics;
struct IRadialControllerControlAcquiredEventArgs;
struct IRadialControllerControlAcquiredEventArgs2;
struct IRadialControllerMenu;
struct IRadialControllerMenuItem;
struct IRadialControllerMenuItemStatics;
struct IRadialControllerMenuItemStatics2;
struct IRadialControllerRotationChangedEventArgs;
struct IRadialControllerRotationChangedEventArgs2;
struct IRadialControllerScreenContact;
struct IRadialControllerScreenContactContinuedEventArgs;
struct IRadialControllerScreenContactContinuedEventArgs2;
struct IRadialControllerScreenContactEndedEventArgs;
struct IRadialControllerScreenContactStartedEventArgs;
struct IRadialControllerScreenContactStartedEventArgs2;
struct IRadialControllerStatics;
struct IRightTappedEventArgs;
struct ITappedEventArgs;
struct CrossSlidingEventArgs;
struct DraggingEventArgs;
struct EdgeGesture;
struct EdgeGestureEventArgs;
struct GestureRecognizer;
struct HoldingEventArgs;
struct KeyboardDeliveryInterceptor;
struct ManipulationCompletedEventArgs;
struct ManipulationInertiaStartingEventArgs;
struct ManipulationStartedEventArgs;
struct ManipulationUpdatedEventArgs;
struct MouseWheelParameters;
struct PointerPoint;
struct PointerPointProperties;
struct PointerVisualizationSettings;
struct RadialController;
struct RadialControllerButtonClickedEventArgs;
struct RadialControllerButtonHoldingEventArgs;
struct RadialControllerButtonPressedEventArgs;
struct RadialControllerButtonReleasedEventArgs;
struct RadialControllerConfiguration;
struct RadialControllerControlAcquiredEventArgs;
struct RadialControllerMenu;
struct RadialControllerMenuItem;
struct RadialControllerRotationChangedEventArgs;
struct RadialControllerScreenContact;
struct RadialControllerScreenContactContinuedEventArgs;
struct RadialControllerScreenContactEndedEventArgs;
struct RadialControllerScreenContactStartedEventArgs;
struct RightTappedEventArgs;
struct TappedEventArgs;
struct CrossSlideThresholds;
struct ManipulationDelta;
struct ManipulationVelocities;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Input::ICrossSlidingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IDraggingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IEdgeGesture>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IEdgeGestureEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IEdgeGestureStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IGestureRecognizer>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IHoldingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IKeyboardDeliveryInterceptor>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IManipulationCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IManipulationInertiaStartingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IManipulationStartedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IManipulationUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IMouseWheelParameters>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPoint>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPointProperties>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPointProperties2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPointStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPointTransform>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerVisualizationSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerVisualizationSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialController>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialController2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerConfiguration>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerConfiguration2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerConfigurationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerMenu>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerMenuItem>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerMenuItemStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerMenuItemStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContact>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRightTappedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::ITappedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::CrossSlidingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::DraggingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::EdgeGesture>{ using type = class_category; };
template <> struct category<Windows::UI::Input::EdgeGestureEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::GestureRecognizer>{ using type = class_category; };
template <> struct category<Windows::UI::Input::HoldingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::KeyboardDeliveryInterceptor>{ using type = class_category; };
template <> struct category<Windows::UI::Input::ManipulationCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::ManipulationInertiaStartingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::ManipulationStartedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::ManipulationUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::MouseWheelParameters>{ using type = class_category; };
template <> struct category<Windows::UI::Input::PointerPoint>{ using type = class_category; };
template <> struct category<Windows::UI::Input::PointerPointProperties>{ using type = class_category; };
template <> struct category<Windows::UI::Input::PointerVisualizationSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialController>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerButtonClickedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerButtonHoldingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerButtonPressedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerButtonReleasedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerConfiguration>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerMenu>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerMenuItem>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerRotationChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerScreenContact>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerScreenContactEndedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RightTappedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::TappedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::CrossSlidingState>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::DraggingState>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::EdgeGestureKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::GestureSettings>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::HoldingState>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::PointerUpdateKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::RadialControllerMenuKnownIcon>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::RadialControllerSystemMenuItemKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::CrossSlideThresholds>{ using type = struct_category<float,float,float,float>; };
template <> struct category<Windows::UI::Input::ManipulationDelta>{ using type = struct_category<Windows::Foundation::Point,float,float,float>; };
template <> struct category<Windows::UI::Input::ManipulationVelocities>{ using type = struct_category<Windows::Foundation::Point,float,float>; };
template <> struct name<Windows::UI::Input::ICrossSlidingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ICrossSlidingEventArgs" }; };
template <> struct name<Windows::UI::Input::IDraggingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IDraggingEventArgs" }; };
template <> struct name<Windows::UI::Input::IEdgeGesture>{ static constexpr auto & value{ L"Windows.UI.Input.IEdgeGesture" }; };
template <> struct name<Windows::UI::Input::IEdgeGestureEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IEdgeGestureEventArgs" }; };
template <> struct name<Windows::UI::Input::IEdgeGestureStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IEdgeGestureStatics" }; };
template <> struct name<Windows::UI::Input::IGestureRecognizer>{ static constexpr auto & value{ L"Windows.UI.Input.IGestureRecognizer" }; };
template <> struct name<Windows::UI::Input::IHoldingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IHoldingEventArgs" }; };
template <> struct name<Windows::UI::Input::IKeyboardDeliveryInterceptor>{ static constexpr auto & value{ L"Windows.UI.Input.IKeyboardDeliveryInterceptor" }; };
template <> struct name<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IKeyboardDeliveryInterceptorStatics" }; };
template <> struct name<Windows::UI::Input::IManipulationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IManipulationCompletedEventArgs" }; };
template <> struct name<Windows::UI::Input::IManipulationInertiaStartingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IManipulationInertiaStartingEventArgs" }; };
template <> struct name<Windows::UI::Input::IManipulationStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IManipulationStartedEventArgs" }; };
template <> struct name<Windows::UI::Input::IManipulationUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IManipulationUpdatedEventArgs" }; };
template <> struct name<Windows::UI::Input::IMouseWheelParameters>{ static constexpr auto & value{ L"Windows.UI.Input.IMouseWheelParameters" }; };
template <> struct name<Windows::UI::Input::IPointerPoint>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPoint" }; };
template <> struct name<Windows::UI::Input::IPointerPointProperties>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPointProperties" }; };
template <> struct name<Windows::UI::Input::IPointerPointProperties2>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPointProperties2" }; };
template <> struct name<Windows::UI::Input::IPointerPointStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPointStatics" }; };
template <> struct name<Windows::UI::Input::IPointerPointTransform>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPointTransform" }; };
template <> struct name<Windows::UI::Input::IPointerVisualizationSettings>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerVisualizationSettings" }; };
template <> struct name<Windows::UI::Input::IPointerVisualizationSettingsStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerVisualizationSettingsStatics" }; };
template <> struct name<Windows::UI::Input::IRadialController>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialController" }; };
template <> struct name<Windows::UI::Input::IRadialController2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialController2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonHoldingEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonPressedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonReleasedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerConfiguration>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfiguration" }; };
template <> struct name<Windows::UI::Input::IRadialControllerConfiguration2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfiguration2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerConfigurationStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfigurationStatics" }; };
template <> struct name<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerMenu>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenu" }; };
template <> struct name<Windows::UI::Input::IRadialControllerMenuItem>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenuItem" }; };
template <> struct name<Windows::UI::Input::IRadialControllerMenuItemStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenuItemStatics" }; };
template <> struct name<Windows::UI::Input::IRadialControllerMenuItemStatics2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenuItemStatics2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContact>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContact" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerStatics" }; };
template <> struct name<Windows::UI::Input::IRightTappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRightTappedEventArgs" }; };
template <> struct name<Windows::UI::Input::ITappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ITappedEventArgs" }; };
template <> struct name<Windows::UI::Input::CrossSlidingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.CrossSlidingEventArgs" }; };
template <> struct name<Windows::UI::Input::DraggingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.DraggingEventArgs" }; };
template <> struct name<Windows::UI::Input::EdgeGesture>{ static constexpr auto & value{ L"Windows.UI.Input.EdgeGesture" }; };
template <> struct name<Windows::UI::Input::EdgeGestureEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.EdgeGestureEventArgs" }; };
template <> struct name<Windows::UI::Input::GestureRecognizer>{ static constexpr auto & value{ L"Windows.UI.Input.GestureRecognizer" }; };
template <> struct name<Windows::UI::Input::HoldingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.HoldingEventArgs" }; };
template <> struct name<Windows::UI::Input::KeyboardDeliveryInterceptor>{ static constexpr auto & value{ L"Windows.UI.Input.KeyboardDeliveryInterceptor" }; };
template <> struct name<Windows::UI::Input::ManipulationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationCompletedEventArgs" }; };
template <> struct name<Windows::UI::Input::ManipulationInertiaStartingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationInertiaStartingEventArgs" }; };
template <> struct name<Windows::UI::Input::ManipulationStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationStartedEventArgs" }; };
template <> struct name<Windows::UI::Input::ManipulationUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationUpdatedEventArgs" }; };
template <> struct name<Windows::UI::Input::MouseWheelParameters>{ static constexpr auto & value{ L"Windows.UI.Input.MouseWheelParameters" }; };
template <> struct name<Windows::UI::Input::PointerPoint>{ static constexpr auto & value{ L"Windows.UI.Input.PointerPoint" }; };
template <> struct name<Windows::UI::Input::PointerPointProperties>{ static constexpr auto & value{ L"Windows.UI.Input.PointerPointProperties" }; };
template <> struct name<Windows::UI::Input::PointerVisualizationSettings>{ static constexpr auto & value{ L"Windows.UI.Input.PointerVisualizationSettings" }; };
template <> struct name<Windows::UI::Input::RadialController>{ static constexpr auto & value{ L"Windows.UI.Input.RadialController" }; };
template <> struct name<Windows::UI::Input::RadialControllerButtonClickedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonClickedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerButtonHoldingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonHoldingEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerButtonPressedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonPressedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerButtonReleasedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonReleasedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerConfiguration>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerConfiguration" }; };
template <> struct name<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerControlAcquiredEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerMenu>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerMenu" }; };
template <> struct name<Windows::UI::Input::RadialControllerMenuItem>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerMenuItem" }; };
template <> struct name<Windows::UI::Input::RadialControllerRotationChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerRotationChangedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerScreenContact>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContact" }; };
template <> struct name<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerScreenContactEndedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContactEndedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContactStartedEventArgs" }; };
template <> struct name<Windows::UI::Input::RightTappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RightTappedEventArgs" }; };
template <> struct name<Windows::UI::Input::TappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.TappedEventArgs" }; };
template <> struct name<Windows::UI::Input::CrossSlidingState>{ static constexpr auto & value{ L"Windows.UI.Input.CrossSlidingState" }; };
template <> struct name<Windows::UI::Input::DraggingState>{ static constexpr auto & value{ L"Windows.UI.Input.DraggingState" }; };
template <> struct name<Windows::UI::Input::EdgeGestureKind>{ static constexpr auto & value{ L"Windows.UI.Input.EdgeGestureKind" }; };
template <> struct name<Windows::UI::Input::GestureSettings>{ static constexpr auto & value{ L"Windows.UI.Input.GestureSettings" }; };
template <> struct name<Windows::UI::Input::HoldingState>{ static constexpr auto & value{ L"Windows.UI.Input.HoldingState" }; };
template <> struct name<Windows::UI::Input::PointerUpdateKind>{ static constexpr auto & value{ L"Windows.UI.Input.PointerUpdateKind" }; };
template <> struct name<Windows::UI::Input::RadialControllerMenuKnownIcon>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerMenuKnownIcon" }; };
template <> struct name<Windows::UI::Input::RadialControllerSystemMenuItemKind>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerSystemMenuItemKind" }; };
template <> struct name<Windows::UI::Input::CrossSlideThresholds>{ static constexpr auto & value{ L"Windows.UI.Input.CrossSlideThresholds" }; };
template <> struct name<Windows::UI::Input::ManipulationDelta>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationDelta" }; };
template <> struct name<Windows::UI::Input::ManipulationVelocities>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationVelocities" }; };
template <> struct guid<Windows::UI::Input::ICrossSlidingEventArgs>{ static constexpr GUID value{ 0xE9374738,0x6F88,0x41D9,{ 0x87,0x20,0x78,0xE0,0x8E,0x39,0x83,0x49 } }; };
template <> struct guid<Windows::UI::Input::IDraggingEventArgs>{ static constexpr GUID value{ 0x1C905384,0x083C,0x4BD3,{ 0xB5,0x59,0x17,0x9C,0xDD,0xEB,0x33,0xEC } }; };
template <> struct guid<Windows::UI::Input::IEdgeGesture>{ static constexpr GUID value{ 0x580D5292,0x2AB1,0x49AA,{ 0xA7,0xF0,0x33,0xBD,0x3F,0x8D,0xF9,0xF1 } }; };
template <> struct guid<Windows::UI::Input::IEdgeGestureEventArgs>{ static constexpr GUID value{ 0x44FA4A24,0x2D09,0x42E1,{ 0x8B,0x5E,0x36,0x82,0x08,0x79,0x6A,0x4C } }; };
template <> struct guid<Windows::UI::Input::IEdgeGestureStatics>{ static constexpr GUID value{ 0xBC6A8519,0x18EE,0x4043,{ 0x98,0x39,0x4F,0xC5,0x84,0xD6,0x0A,0x14 } }; };
template <> struct guid<Windows::UI::Input::IGestureRecognizer>{ static constexpr GUID value{ 0xB47A37BF,0x3D6B,0x4F88,{ 0x83,0xE8,0x6D,0xCB,0x40,0x12,0xFF,0xB0 } }; };
template <> struct guid<Windows::UI::Input::IHoldingEventArgs>{ static constexpr GUID value{ 0x2BF755C5,0xE799,0x41B4,{ 0xBB,0x40,0x24,0x2F,0x40,0x95,0x9B,0x71 } }; };
template <> struct guid<Windows::UI::Input::IKeyboardDeliveryInterceptor>{ static constexpr GUID value{ 0xB4BAF068,0x8F49,0x446C,{ 0x8D,0xB5,0x8C,0x0F,0xFE,0x85,0xCC,0x9E } }; };
template <> struct guid<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>{ static constexpr GUID value{ 0xF9F63BA2,0xCEBA,0x4755,{ 0x8A,0x7E,0x14,0xC0,0xFF,0xEC,0xD2,0x39 } }; };
template <> struct guid<Windows::UI::Input::IManipulationCompletedEventArgs>{ static constexpr GUID value{ 0xB34AB22B,0xD19B,0x46FF,{ 0x9F,0x38,0xDE,0xC7,0x75,0x4B,0xB9,0xE7 } }; };
template <> struct guid<Windows::UI::Input::IManipulationInertiaStartingEventArgs>{ static constexpr GUID value{ 0xDD37A898,0x26BF,0x467A,{ 0x9C,0xE5,0xCC,0xF3,0xFB,0x11,0x37,0x1E } }; };
template <> struct guid<Windows::UI::Input::IManipulationStartedEventArgs>{ static constexpr GUID value{ 0xDDEC873E,0xCFCE,0x4932,{ 0x8C,0x1D,0x3C,0x3D,0x01,0x1A,0x34,0xC0 } }; };
template <> struct guid<Windows::UI::Input::IManipulationUpdatedEventArgs>{ static constexpr GUID value{ 0xCB354CE5,0xABB8,0x4F9F,{ 0xB3,0xCE,0x81,0x81,0xAA,0x61,0xAD,0x82 } }; };
template <> struct guid<Windows::UI::Input::IMouseWheelParameters>{ static constexpr GUID value{ 0xEAD0CA44,0x9DED,0x4037,{ 0x81,0x49,0x5E,0x4C,0xC2,0x56,0x44,0x68 } }; };
template <> struct guid<Windows::UI::Input::IPointerPoint>{ static constexpr GUID value{ 0xE995317D,0x7296,0x42D9,{ 0x82,0x33,0xC5,0xBE,0x73,0xB7,0x4A,0x4A } }; };
template <> struct guid<Windows::UI::Input::IPointerPointProperties>{ static constexpr GUID value{ 0xC79D8A4B,0xC163,0x4EE7,{ 0x80,0x3F,0x67,0xCE,0x79,0xF9,0x97,0x2D } }; };
template <> struct guid<Windows::UI::Input::IPointerPointProperties2>{ static constexpr GUID value{ 0x22C3433A,0xC83B,0x41C0,{ 0xA2,0x96,0x5E,0x23,0x2D,0x64,0xD6,0xAF } }; };
template <> struct guid<Windows::UI::Input::IPointerPointStatics>{ static constexpr GUID value{ 0xA506638D,0x2A1A,0x413E,{ 0xBC,0x75,0x9F,0x38,0x38,0x1C,0xC0,0x69 } }; };
template <> struct guid<Windows::UI::Input::IPointerPointTransform>{ static constexpr GUID value{ 0x4D5FE14F,0xB87C,0x4028,{ 0xBC,0x9C,0x59,0xE9,0x94,0x7F,0xB0,0x56 } }; };
template <> struct guid<Windows::UI::Input::IPointerVisualizationSettings>{ static constexpr GUID value{ 0x4D1E6461,0x84F7,0x499D,{ 0xBD,0x91,0x2A,0x36,0xE2,0xB7,0xAA,0xA2 } }; };
template <> struct guid<Windows::UI::Input::IPointerVisualizationSettingsStatics>{ static constexpr GUID value{ 0x68870EDB,0x165B,0x4214,{ 0xB4,0xF3,0x58,0x4E,0xCA,0x8C,0x8A,0x69 } }; };
template <> struct guid<Windows::UI::Input::IRadialController>{ static constexpr GUID value{ 0x3055D1C8,0xDF51,0x43D4,{ 0xB2,0x3B,0x0E,0x10,0x37,0x46,0x7A,0x09 } }; };
template <> struct guid<Windows::UI::Input::IRadialController2>{ static constexpr GUID value{ 0x3D577EFF,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>{ static constexpr GUID value{ 0x206AA438,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>{ static constexpr GUID value{ 0x3D577EF3,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>{ static constexpr GUID value{ 0x3D577EEE,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>{ static constexpr GUID value{ 0x3D577EED,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>{ static constexpr GUID value{ 0x3D577EEF,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerConfiguration>{ static constexpr GUID value{ 0xA6B79ECB,0x6A52,0x4430,{ 0x91,0x0C,0x56,0x37,0x0A,0x9D,0x6B,0x42 } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerConfiguration2>{ static constexpr GUID value{ 0x3D577EF7,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerConfigurationStatics>{ static constexpr GUID value{ 0x79B6B0E5,0x069A,0x4486,{ 0xA9,0x9D,0x8D,0xB7,0x72,0xB9,0x64,0x2F } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>{ static constexpr GUID value{ 0x206AA439,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>{ static constexpr GUID value{ 0x3D577EF4,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerMenu>{ static constexpr GUID value{ 0x8506B35D,0xF640,0x4412,{ 0xAB,0xA0,0xBA,0xD0,0x77,0xE5,0xEA,0x8A } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerMenuItem>{ static constexpr GUID value{ 0xC80FC98D,0xAD0B,0x4C9C,{ 0x8F,0x2F,0x13,0x6A,0x23,0x73,0xA6,0xBA } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerMenuItemStatics>{ static constexpr GUID value{ 0x249E0887,0xD842,0x4524,{ 0x9D,0xF8,0xE0,0xD6,0x47,0xED,0xC8,0x87 } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerMenuItemStatics2>{ static constexpr GUID value{ 0x0CBB70BE,0x7E3E,0x48BD,{ 0xBE,0x04,0x2C,0x7F,0xCA,0xA9,0xC1,0xFF } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>{ static constexpr GUID value{ 0x206AA435,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>{ static constexpr GUID value{ 0x3D577EEC,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerScreenContact>{ static constexpr GUID value{ 0x206AA434,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>{ static constexpr GUID value{ 0x206AA437,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>{ static constexpr GUID value{ 0x3D577EF1,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>{ static constexpr GUID value{ 0x3D577EF2,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>{ static constexpr GUID value{ 0x206AA436,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>{ static constexpr GUID value{ 0x3D577EF0,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid<Windows::UI::Input::IRadialControllerStatics>{ static constexpr GUID value{ 0xFADED0B7,0xB84C,0x4894,{ 0x87,0xAA,0x8F,0x25,0xAA,0x5F,0x28,0x8B } }; };
template <> struct guid<Windows::UI::Input::IRightTappedEventArgs>{ static constexpr GUID value{ 0x4CBF40BD,0xAF7A,0x4A36,{ 0x94,0x76,0xB1,0xDC,0xE1,0x41,0x70,0x9A } }; };
template <> struct guid<Windows::UI::Input::ITappedEventArgs>{ static constexpr GUID value{ 0xCFA126E4,0x253A,0x4C3C,{ 0x95,0x3B,0x39,0x5C,0x37,0xAE,0xD3,0x09 } }; };
template <> struct default_interface<Windows::UI::Input::CrossSlidingEventArgs>{ using type = Windows::UI::Input::ICrossSlidingEventArgs; };
template <> struct default_interface<Windows::UI::Input::DraggingEventArgs>{ using type = Windows::UI::Input::IDraggingEventArgs; };
template <> struct default_interface<Windows::UI::Input::EdgeGesture>{ using type = Windows::UI::Input::IEdgeGesture; };
template <> struct default_interface<Windows::UI::Input::EdgeGestureEventArgs>{ using type = Windows::UI::Input::IEdgeGestureEventArgs; };
template <> struct default_interface<Windows::UI::Input::GestureRecognizer>{ using type = Windows::UI::Input::IGestureRecognizer; };
template <> struct default_interface<Windows::UI::Input::HoldingEventArgs>{ using type = Windows::UI::Input::IHoldingEventArgs; };
template <> struct default_interface<Windows::UI::Input::KeyboardDeliveryInterceptor>{ using type = Windows::UI::Input::IKeyboardDeliveryInterceptor; };
template <> struct default_interface<Windows::UI::Input::ManipulationCompletedEventArgs>{ using type = Windows::UI::Input::IManipulationCompletedEventArgs; };
template <> struct default_interface<Windows::UI::Input::ManipulationInertiaStartingEventArgs>{ using type = Windows::UI::Input::IManipulationInertiaStartingEventArgs; };
template <> struct default_interface<Windows::UI::Input::ManipulationStartedEventArgs>{ using type = Windows::UI::Input::IManipulationStartedEventArgs; };
template <> struct default_interface<Windows::UI::Input::ManipulationUpdatedEventArgs>{ using type = Windows::UI::Input::IManipulationUpdatedEventArgs; };
template <> struct default_interface<Windows::UI::Input::MouseWheelParameters>{ using type = Windows::UI::Input::IMouseWheelParameters; };
template <> struct default_interface<Windows::UI::Input::PointerPoint>{ using type = Windows::UI::Input::IPointerPoint; };
template <> struct default_interface<Windows::UI::Input::PointerPointProperties>{ using type = Windows::UI::Input::IPointerPointProperties; };
template <> struct default_interface<Windows::UI::Input::PointerVisualizationSettings>{ using type = Windows::UI::Input::IPointerVisualizationSettings; };
template <> struct default_interface<Windows::UI::Input::RadialController>{ using type = Windows::UI::Input::IRadialController; };
template <> struct default_interface<Windows::UI::Input::RadialControllerButtonClickedEventArgs>{ using type = Windows::UI::Input::IRadialControllerButtonClickedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerButtonHoldingEventArgs>{ using type = Windows::UI::Input::IRadialControllerButtonHoldingEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerButtonPressedEventArgs>{ using type = Windows::UI::Input::IRadialControllerButtonPressedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerButtonReleasedEventArgs>{ using type = Windows::UI::Input::IRadialControllerButtonReleasedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerConfiguration>{ using type = Windows::UI::Input::IRadialControllerConfiguration; };
template <> struct default_interface<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>{ using type = Windows::UI::Input::IRadialControllerControlAcquiredEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerMenu>{ using type = Windows::UI::Input::IRadialControllerMenu; };
template <> struct default_interface<Windows::UI::Input::RadialControllerMenuItem>{ using type = Windows::UI::Input::IRadialControllerMenuItem; };
template <> struct default_interface<Windows::UI::Input::RadialControllerRotationChangedEventArgs>{ using type = Windows::UI::Input::IRadialControllerRotationChangedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContact>{ using type = Windows::UI::Input::IRadialControllerScreenContact; };
template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>{ using type = Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContactEndedEventArgs>{ using type = Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>{ using type = Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RightTappedEventArgs>{ using type = Windows::UI::Input::IRightTappedEventArgs; };
template <> struct default_interface<Windows::UI::Input::TappedEventArgs>{ using type = Windows::UI::Input::ITappedEventArgs; };

template <typename D>
struct consume_Windows_UI_Input_ICrossSlidingEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::CrossSlidingState CrossSlidingState() const;
};
template <> struct consume<Windows::UI::Input::ICrossSlidingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_ICrossSlidingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IDraggingEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::DraggingState DraggingState() const;
};
template <> struct consume<Windows::UI::Input::IDraggingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IDraggingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IEdgeGesture
{
    event_token Starting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    using Starting_revoker = event_revoker<Windows::UI::Input::IEdgeGesture>;
    Starting_revoker Starting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    void Starting(event_token const& token) const;
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    using Completed_revoker = event_revoker<Windows::UI::Input::IEdgeGesture>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    void Completed(event_token const& token) const;
    event_token Canceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    using Canceled_revoker = event_revoker<Windows::UI::Input::IEdgeGesture>;
    Canceled_revoker Canceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    void Canceled(event_token const& token) const;
};
template <> struct consume<Windows::UI::Input::IEdgeGesture> { template <typename D> using type = consume_Windows_UI_Input_IEdgeGesture<D>; };

template <typename D>
struct consume_Windows_UI_Input_IEdgeGestureEventArgs
{
    Windows::UI::Input::EdgeGestureKind Kind() const;
};
template <> struct consume<Windows::UI::Input::IEdgeGestureEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IEdgeGestureEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IEdgeGestureStatics
{
    Windows::UI::Input::EdgeGesture GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IEdgeGestureStatics> { template <typename D> using type = consume_Windows_UI_Input_IEdgeGestureStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IGestureRecognizer
{
    Windows::UI::Input::GestureSettings GestureSettings() const;
    void GestureSettings(Windows::UI::Input::GestureSettings const& value) const;
    bool IsInertial() const;
    bool IsActive() const;
    bool ShowGestureFeedback() const;
    void ShowGestureFeedback(bool value) const;
    Windows::Foundation::Point PivotCenter() const;
    void PivotCenter(Windows::Foundation::Point const& value) const;
    float PivotRadius() const;
    void PivotRadius(float value) const;
    float InertiaTranslationDeceleration() const;
    void InertiaTranslationDeceleration(float value) const;
    float InertiaRotationDeceleration() const;
    void InertiaRotationDeceleration(float value) const;
    float InertiaExpansionDeceleration() const;
    void InertiaExpansionDeceleration(float value) const;
    float InertiaTranslationDisplacement() const;
    void InertiaTranslationDisplacement(float value) const;
    float InertiaRotationAngle() const;
    void InertiaRotationAngle(float value) const;
    float InertiaExpansion() const;
    void InertiaExpansion(float value) const;
    bool ManipulationExact() const;
    void ManipulationExact(bool value) const;
    Windows::UI::Input::CrossSlideThresholds CrossSlideThresholds() const;
    void CrossSlideThresholds(Windows::UI::Input::CrossSlideThresholds const& value) const;
    bool CrossSlideHorizontally() const;
    void CrossSlideHorizontally(bool value) const;
    bool CrossSlideExact() const;
    void CrossSlideExact(bool value) const;
    bool AutoProcessInertia() const;
    void AutoProcessInertia(bool value) const;
    Windows::UI::Input::MouseWheelParameters MouseWheelParameters() const;
    bool CanBeDoubleTap(Windows::UI::Input::PointerPoint const& value) const;
    void ProcessDownEvent(Windows::UI::Input::PointerPoint const& value) const;
    void ProcessMoveEvents(param::vector<Windows::UI::Input::PointerPoint> const& value) const;
    void ProcessUpEvent(Windows::UI::Input::PointerPoint const& value) const;
    void ProcessMouseWheelEvent(Windows::UI::Input::PointerPoint const& value, bool isShiftKeyDown, bool isControlKeyDown) const;
    void ProcessInertia() const;
    void CompleteGesture() const;
    event_token Tapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> const& handler) const;
    using Tapped_revoker = event_revoker<Windows::UI::Input::IGestureRecognizer>;
    Tapped_revoker Tapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> const& handler) const;
    void Tapped(event_token const& cookie) const;
    event_token RightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> const& handler) const;
    using RightTapped_revoker = event_revoker<Windows::UI::Input::IGestureRecognizer>;
    RightTapped_revoker RightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> const& handler) const;
    void RightTapped(event_token const& cookie) const;
    event_token Holding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> const& handler) const;
    using Holding_revoker = event_revoker<Windows::UI::Input::IGestureRecognizer>;
    Holding_revoker Holding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> const& handler) const;
    void Holding(event_token const& cookie) const;
    event_token Dragging(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> const& handler) const;
    using Dragging_revoker = event_revoker<Windows::UI::Input::IGestureRecognizer>;
    Dragging_revoker Dragging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> const& handler) const;
    void Dragging(event_token const& cookie) const;
    event_token ManipulationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> const& handler) const;
    using ManipulationStarted_revoker = event_revoker<Windows::UI::Input::IGestureRecognizer>;
    ManipulationStarted_revoker ManipulationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> const& handler) const;
    void ManipulationStarted(event_token const& cookie) const;
    event_token ManipulationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> const& handler) const;
    using ManipulationUpdated_revoker = event_revoker<Windows::UI::Input::IGestureRecognizer>;
    ManipulationUpdated_revoker ManipulationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> const& handler) const;
    void ManipulationUpdated(event_token const& cookie) const;
    event_token ManipulationInertiaStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> const& handler) const;
    using ManipulationInertiaStarting_revoker = event_revoker<Windows::UI::Input::IGestureRecognizer>;
    ManipulationInertiaStarting_revoker ManipulationInertiaStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> const& handler) const;
    void ManipulationInertiaStarting(event_token const& cookie) const;
    event_token ManipulationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> const& handler) const;
    using ManipulationCompleted_revoker = event_revoker<Windows::UI::Input::IGestureRecognizer>;
    ManipulationCompleted_revoker ManipulationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> const& handler) const;
    void ManipulationCompleted(event_token const& cookie) const;
    event_token CrossSliding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> const& handler) const;
    using CrossSliding_revoker = event_revoker<Windows::UI::Input::IGestureRecognizer>;
    CrossSliding_revoker CrossSliding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> const& handler) const;
    void CrossSliding(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Input::IGestureRecognizer> { template <typename D> using type = consume_Windows_UI_Input_IGestureRecognizer<D>; };

template <typename D>
struct consume_Windows_UI_Input_IHoldingEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::HoldingState HoldingState() const;
};
template <> struct consume<Windows::UI::Input::IHoldingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IHoldingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IKeyboardDeliveryInterceptor
{
    bool IsInterceptionEnabledWhenInForeground() const;
    void IsInterceptionEnabledWhenInForeground(bool value) const;
    event_token KeyDown(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
    using KeyDown_revoker = event_revoker<Windows::UI::Input::IKeyboardDeliveryInterceptor>;
    KeyDown_revoker KeyDown(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
    void KeyDown(event_token const& token) const;
    event_token KeyUp(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
    using KeyUp_revoker = event_revoker<Windows::UI::Input::IKeyboardDeliveryInterceptor>;
    KeyUp_revoker KeyUp(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
    void KeyUp(event_token const& token) const;
};
template <> struct consume<Windows::UI::Input::IKeyboardDeliveryInterceptor> { template <typename D> using type = consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>; };

template <typename D>
struct consume_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics
{
    Windows::UI::Input::KeyboardDeliveryInterceptor GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics> { template <typename D> using type = consume_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IManipulationCompletedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
};
template <> struct consume<Windows::UI::Input::IManipulationCompletedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IManipulationCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::ManipulationDelta Delta() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
};
template <> struct consume<Windows::UI::Input::IManipulationInertiaStartingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IManipulationStartedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
};
template <> struct consume<Windows::UI::Input::IManipulationStartedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IManipulationStartedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IManipulationUpdatedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::ManipulationDelta Delta() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
};
template <> struct consume<Windows::UI::Input::IManipulationUpdatedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IManipulationUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IMouseWheelParameters
{
    Windows::Foundation::Point CharTranslation() const;
    void CharTranslation(Windows::Foundation::Point const& value) const;
    float DeltaScale() const;
    void DeltaScale(float value) const;
    float DeltaRotationAngle() const;
    void DeltaRotationAngle(float value) const;
    Windows::Foundation::Point PageTranslation() const;
    void PageTranslation(Windows::Foundation::Point const& value) const;
};
template <> struct consume<Windows::UI::Input::IMouseWheelParameters> { template <typename D> using type = consume_Windows_UI_Input_IMouseWheelParameters<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPoint
{
    Windows::Devices::Input::PointerDevice PointerDevice() const;
    Windows::Foundation::Point Position() const;
    Windows::Foundation::Point RawPosition() const;
    uint32_t PointerId() const;
    uint32_t FrameId() const;
    uint64_t Timestamp() const;
    bool IsInContact() const;
    Windows::UI::Input::PointerPointProperties Properties() const;
};
template <> struct consume<Windows::UI::Input::IPointerPoint> { template <typename D> using type = consume_Windows_UI_Input_IPointerPoint<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPointProperties
{
    float Pressure() const;
    bool IsInverted() const;
    bool IsEraser() const;
    float Orientation() const;
    float XTilt() const;
    float YTilt() const;
    float Twist() const;
    Windows::Foundation::Rect ContactRect() const;
    Windows::Foundation::Rect ContactRectRaw() const;
    bool TouchConfidence() const;
    bool IsLeftButtonPressed() const;
    bool IsRightButtonPressed() const;
    bool IsMiddleButtonPressed() const;
    int32_t MouseWheelDelta() const;
    bool IsHorizontalMouseWheel() const;
    bool IsPrimary() const;
    bool IsInRange() const;
    bool IsCanceled() const;
    bool IsBarrelButtonPressed() const;
    bool IsXButton1Pressed() const;
    bool IsXButton2Pressed() const;
    Windows::UI::Input::PointerUpdateKind PointerUpdateKind() const;
    bool HasUsage(uint32_t usagePage, uint32_t usageId) const;
    int32_t GetUsageValue(uint32_t usagePage, uint32_t usageId) const;
};
template <> struct consume<Windows::UI::Input::IPointerPointProperties> { template <typename D> using type = consume_Windows_UI_Input_IPointerPointProperties<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPointProperties2
{
    Windows::Foundation::IReference<float> ZDistance() const;
};
template <> struct consume<Windows::UI::Input::IPointerPointProperties2> { template <typename D> using type = consume_Windows_UI_Input_IPointerPointProperties2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPointStatics
{
    Windows::UI::Input::PointerPoint GetCurrentPoint(uint32_t pointerId) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> GetIntermediatePoints(uint32_t pointerId) const;
    Windows::UI::Input::PointerPoint GetCurrentPoint(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> GetIntermediatePoints(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform) const;
};
template <> struct consume<Windows::UI::Input::IPointerPointStatics> { template <typename D> using type = consume_Windows_UI_Input_IPointerPointStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPointTransform
{
    Windows::UI::Input::IPointerPointTransform Inverse() const;
    bool TryTransform(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const;
    Windows::Foundation::Rect TransformBounds(Windows::Foundation::Rect const& rect) const;
};
template <> struct consume<Windows::UI::Input::IPointerPointTransform> { template <typename D> using type = consume_Windows_UI_Input_IPointerPointTransform<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerVisualizationSettings
{
    void IsContactFeedbackEnabled(bool value) const;
    bool IsContactFeedbackEnabled() const;
    void IsBarrelButtonFeedbackEnabled(bool value) const;
    bool IsBarrelButtonFeedbackEnabled() const;
};
template <> struct consume<Windows::UI::Input::IPointerVisualizationSettings> { template <typename D> using type = consume_Windows_UI_Input_IPointerVisualizationSettings<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerVisualizationSettingsStatics
{
    Windows::UI::Input::PointerVisualizationSettings GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IPointerVisualizationSettingsStatics> { template <typename D> using type = consume_Windows_UI_Input_IPointerVisualizationSettingsStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialController
{
    Windows::UI::Input::RadialControllerMenu Menu() const;
    double RotationResolutionInDegrees() const;
    void RotationResolutionInDegrees(double value) const;
    bool UseAutomaticHapticFeedback() const;
    void UseAutomaticHapticFeedback(bool value) const;
    event_token ScreenContactStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> const& handler) const;
    using ScreenContactStarted_revoker = event_revoker<Windows::UI::Input::IRadialController>;
    ScreenContactStarted_revoker ScreenContactStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> const& handler) const;
    void ScreenContactStarted(event_token const& cookie) const;
    event_token ScreenContactEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
    using ScreenContactEnded_revoker = event_revoker<Windows::UI::Input::IRadialController>;
    ScreenContactEnded_revoker ScreenContactEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
    void ScreenContactEnded(event_token const& cookie) const;
    event_token ScreenContactContinued(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> const& handler) const;
    using ScreenContactContinued_revoker = event_revoker<Windows::UI::Input::IRadialController>;
    ScreenContactContinued_revoker ScreenContactContinued(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> const& handler) const;
    void ScreenContactContinued(event_token const& cookie) const;
    event_token ControlLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
    using ControlLost_revoker = event_revoker<Windows::UI::Input::IRadialController>;
    ControlLost_revoker ControlLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
    void ControlLost(event_token const& cookie) const;
    event_token RotationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> const& handler) const;
    using RotationChanged_revoker = event_revoker<Windows::UI::Input::IRadialController>;
    RotationChanged_revoker RotationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> const& handler) const;
    void RotationChanged(event_token const& token) const;
    event_token ButtonClicked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> const& handler) const;
    using ButtonClicked_revoker = event_revoker<Windows::UI::Input::IRadialController>;
    ButtonClicked_revoker ButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> const& handler) const;
    void ButtonClicked(event_token const& token) const;
    event_token ControlAcquired(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> const& handler) const;
    using ControlAcquired_revoker = event_revoker<Windows::UI::Input::IRadialController>;
    ControlAcquired_revoker ControlAcquired(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> const& handler) const;
    void ControlAcquired(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Input::IRadialController> { template <typename D> using type = consume_Windows_UI_Input_IRadialController<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialController2
{
    event_token ButtonPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonPressedEventArgs> const& handler) const;
    using ButtonPressed_revoker = event_revoker<Windows::UI::Input::IRadialController2>;
    ButtonPressed_revoker ButtonPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonPressedEventArgs> const& handler) const;
    void ButtonPressed(event_token const& token) const;
    event_token ButtonHolding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonHoldingEventArgs> const& handler) const;
    using ButtonHolding_revoker = event_revoker<Windows::UI::Input::IRadialController2>;
    ButtonHolding_revoker ButtonHolding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonHoldingEventArgs> const& handler) const;
    void ButtonHolding(event_token const& token) const;
    event_token ButtonReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonReleasedEventArgs> const& handler) const;
    using ButtonReleased_revoker = event_revoker<Windows::UI::Input::IRadialController2>;
    ButtonReleased_revoker ButtonReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonReleasedEventArgs> const& handler) const;
    void ButtonReleased(event_token const& token) const;
};
template <> struct consume<Windows::UI::Input::IRadialController2> { template <typename D> using type = consume_Windows_UI_Input_IRadialController2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonClickedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2
{
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonPressedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonPressedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonPressedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerConfiguration
{
    void SetDefaultMenuItems(param::iterable<Windows::UI::Input::RadialControllerSystemMenuItemKind> const& buttons) const;
    void ResetToDefaultMenuItems() const;
    bool TrySelectDefaultMenuItem(Windows::UI::Input::RadialControllerSystemMenuItemKind const& type) const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerConfiguration> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfiguration<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerConfiguration2
{
    void ActiveControllerWhenMenuIsSuppressed(Windows::UI::Input::RadialController const& value) const;
    Windows::UI::Input::RadialController ActiveControllerWhenMenuIsSuppressed() const;
    void IsMenuSuppressed(bool value) const;
    bool IsMenuSuppressed() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerConfiguration2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfiguration2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerConfigurationStatics
{
    Windows::UI::Input::RadialControllerConfiguration GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerConfigurationStatics> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfigurationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerMenu
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::RadialControllerMenuItem> Items() const;
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    Windows::UI::Input::RadialControllerMenuItem GetSelectedMenuItem() const;
    void SelectMenuItem(Windows::UI::Input::RadialControllerMenuItem const& menuItem) const;
    bool TrySelectPreviouslySelectedMenuItem() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerMenu> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenu<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerMenuItem
{
    hstring DisplayText() const;
    Windows::Foundation::IInspectable Tag() const;
    void Tag(Windows::Foundation::IInspectable const& value) const;
    event_token Invoked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::Foundation::IInspectable> const& handler) const;
    using Invoked_revoker = event_revoker<Windows::UI::Input::IRadialControllerMenuItem>;
    Invoked_revoker Invoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::Foundation::IInspectable> const& handler) const;
    void Invoked(event_token const& token) const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerMenuItem> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenuItem<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerMenuItemStatics
{
    Windows::UI::Input::RadialControllerMenuItem CreateFromIcon(param::hstring const& displayText, Windows::Storage::Streams::RandomAccessStreamReference const& icon) const;
    Windows::UI::Input::RadialControllerMenuItem CreateFromKnownIcon(param::hstring const& displayText, Windows::UI::Input::RadialControllerMenuKnownIcon const& value) const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerMenuItemStatics> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenuItemStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerMenuItemStatics2
{
    Windows::UI::Input::RadialControllerMenuItem CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily) const;
    Windows::UI::Input::RadialControllerMenuItem CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri) const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerMenuItemStatics2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenuItemStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs
{
    double RotationDeltaInDegrees() const;
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerRotationChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContact
{
    Windows::Foundation::Rect Bounds() const;
    Windows::Foundation::Point Position() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContact> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContact<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerStatics
{
    bool IsSupported() const;
    Windows::UI::Input::RadialController CreateForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerStatics> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRightTappedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
};
template <> struct consume<Windows::UI::Input::IRightTappedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRightTappedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_ITappedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    uint32_t TapCount() const;
};
template <> struct consume<Windows::UI::Input::ITappedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_ITappedEventArgs<D>; };

template <> struct abi<Windows::UI::Input::ICrossSlidingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_CrossSlidingState(abi_t<Windows::UI::Input::CrossSlidingState>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IDraggingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_DraggingState(abi_t<Windows::UI::Input::DraggingState>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IEdgeGesture>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Starting(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Starting(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Completed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Completed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Canceled(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Canceled(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Input::IEdgeGestureEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::UI::Input::EdgeGestureKind>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IEdgeGestureStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** current) = 0;
};};

template <> struct abi<Windows::UI::Input::IGestureRecognizer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_GestureSettings(abi_t<Windows::UI::Input::GestureSettings>* value) = 0;
    virtual HRESULT __stdcall put_GestureSettings(abi_t<Windows::UI::Input::GestureSettings> value) = 0;
    virtual HRESULT __stdcall get_IsInertial(bool* value) = 0;
    virtual HRESULT __stdcall get_IsActive(bool* value) = 0;
    virtual HRESULT __stdcall get_ShowGestureFeedback(bool* value) = 0;
    virtual HRESULT __stdcall put_ShowGestureFeedback(bool value) = 0;
    virtual HRESULT __stdcall get_PivotCenter(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall put_PivotCenter(abi_t<Windows::Foundation::Point> value) = 0;
    virtual HRESULT __stdcall get_PivotRadius(float* value) = 0;
    virtual HRESULT __stdcall put_PivotRadius(float value) = 0;
    virtual HRESULT __stdcall get_InertiaTranslationDeceleration(float* value) = 0;
    virtual HRESULT __stdcall put_InertiaTranslationDeceleration(float value) = 0;
    virtual HRESULT __stdcall get_InertiaRotationDeceleration(float* value) = 0;
    virtual HRESULT __stdcall put_InertiaRotationDeceleration(float value) = 0;
    virtual HRESULT __stdcall get_InertiaExpansionDeceleration(float* value) = 0;
    virtual HRESULT __stdcall put_InertiaExpansionDeceleration(float value) = 0;
    virtual HRESULT __stdcall get_InertiaTranslationDisplacement(float* value) = 0;
    virtual HRESULT __stdcall put_InertiaTranslationDisplacement(float value) = 0;
    virtual HRESULT __stdcall get_InertiaRotationAngle(float* value) = 0;
    virtual HRESULT __stdcall put_InertiaRotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_InertiaExpansion(float* value) = 0;
    virtual HRESULT __stdcall put_InertiaExpansion(float value) = 0;
    virtual HRESULT __stdcall get_ManipulationExact(bool* value) = 0;
    virtual HRESULT __stdcall put_ManipulationExact(bool value) = 0;
    virtual HRESULT __stdcall get_CrossSlideThresholds(abi_t<Windows::UI::Input::CrossSlideThresholds>* value) = 0;
    virtual HRESULT __stdcall put_CrossSlideThresholds(abi_t<Windows::UI::Input::CrossSlideThresholds> value) = 0;
    virtual HRESULT __stdcall get_CrossSlideHorizontally(bool* value) = 0;
    virtual HRESULT __stdcall put_CrossSlideHorizontally(bool value) = 0;
    virtual HRESULT __stdcall get_CrossSlideExact(bool* value) = 0;
    virtual HRESULT __stdcall put_CrossSlideExact(bool value) = 0;
    virtual HRESULT __stdcall get_AutoProcessInertia(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoProcessInertia(bool value) = 0;
    virtual HRESULT __stdcall get_MouseWheelParameters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CanBeDoubleTap(::IUnknown* value, bool* canBeDoubleTap) = 0;
    virtual HRESULT __stdcall ProcessDownEvent(::IUnknown* value) = 0;
    virtual HRESULT __stdcall ProcessMoveEvents(::IUnknown* value) = 0;
    virtual HRESULT __stdcall ProcessUpEvent(::IUnknown* value) = 0;
    virtual HRESULT __stdcall ProcessMouseWheelEvent(::IUnknown* value, bool isShiftKeyDown, bool isControlKeyDown) = 0;
    virtual HRESULT __stdcall ProcessInertia() = 0;
    virtual HRESULT __stdcall CompleteGesture() = 0;
    virtual HRESULT __stdcall add_Tapped(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_Tapped(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_RightTapped(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_RightTapped(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_Holding(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_Holding(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_Dragging(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_Dragging(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ManipulationStarted(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_ManipulationStarted(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ManipulationUpdated(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_ManipulationUpdated(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ManipulationInertiaStarting(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_ManipulationInertiaStarting(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ManipulationCompleted(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_ManipulationCompleted(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_CrossSliding(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_CrossSliding(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Input::IHoldingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_HoldingState(abi_t<Windows::UI::Input::HoldingState>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IKeyboardDeliveryInterceptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsInterceptionEnabledWhenInForeground(bool* value) = 0;
    virtual HRESULT __stdcall put_IsInterceptionEnabledWhenInForeground(bool value) = 0;
    virtual HRESULT __stdcall add_KeyDown(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_KeyDown(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_KeyUp(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_KeyUp(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** keyboardDeliverySettings) = 0;
};};

template <> struct abi<Windows::UI::Input::IManipulationCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Velocities(abi_t<Windows::UI::Input::ManipulationVelocities>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IManipulationInertiaStartingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Delta(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Velocities(abi_t<Windows::UI::Input::ManipulationVelocities>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IManipulationStartedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IManipulationUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Delta(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Cumulative(abi_t<Windows::UI::Input::ManipulationDelta>* value) = 0;
    virtual HRESULT __stdcall get_Velocities(abi_t<Windows::UI::Input::ManipulationVelocities>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IMouseWheelParameters>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CharTranslation(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall put_CharTranslation(abi_t<Windows::Foundation::Point> value) = 0;
    virtual HRESULT __stdcall get_DeltaScale(float* value) = 0;
    virtual HRESULT __stdcall put_DeltaScale(float value) = 0;
    virtual HRESULT __stdcall get_DeltaRotationAngle(float* value) = 0;
    virtual HRESULT __stdcall put_DeltaRotationAngle(float value) = 0;
    virtual HRESULT __stdcall get_PageTranslation(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall put_PageTranslation(abi_t<Windows::Foundation::Point> value) = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPoint>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDevice(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_RawPosition(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_PointerId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_FrameId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Timestamp(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_IsInContact(bool* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPointProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Pressure(float* value) = 0;
    virtual HRESULT __stdcall get_IsInverted(bool* value) = 0;
    virtual HRESULT __stdcall get_IsEraser(bool* value) = 0;
    virtual HRESULT __stdcall get_Orientation(float* value) = 0;
    virtual HRESULT __stdcall get_XTilt(float* value) = 0;
    virtual HRESULT __stdcall get_YTilt(float* value) = 0;
    virtual HRESULT __stdcall get_Twist(float* value) = 0;
    virtual HRESULT __stdcall get_ContactRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_ContactRectRaw(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_TouchConfidence(bool* value) = 0;
    virtual HRESULT __stdcall get_IsLeftButtonPressed(bool* value) = 0;
    virtual HRESULT __stdcall get_IsRightButtonPressed(bool* value) = 0;
    virtual HRESULT __stdcall get_IsMiddleButtonPressed(bool* value) = 0;
    virtual HRESULT __stdcall get_MouseWheelDelta(int32_t* value) = 0;
    virtual HRESULT __stdcall get_IsHorizontalMouseWheel(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPrimary(bool* value) = 0;
    virtual HRESULT __stdcall get_IsInRange(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCanceled(bool* value) = 0;
    virtual HRESULT __stdcall get_IsBarrelButtonPressed(bool* value) = 0;
    virtual HRESULT __stdcall get_IsXButton1Pressed(bool* value) = 0;
    virtual HRESULT __stdcall get_IsXButton2Pressed(bool* value) = 0;
    virtual HRESULT __stdcall get_PointerUpdateKind(abi_t<Windows::UI::Input::PointerUpdateKind>* value) = 0;
    virtual HRESULT __stdcall HasUsage(uint32_t usagePage, uint32_t usageId, bool* value) = 0;
    virtual HRESULT __stdcall GetUsageValue(uint32_t usagePage, uint32_t usageId, int32_t* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPointProperties2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ZDistance(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPointStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentPoint(uint32_t pointerId, ::IUnknown** pointerPoint) = 0;
    virtual HRESULT __stdcall GetIntermediatePoints(uint32_t pointerId, ::IUnknown** pointerPoints) = 0;
    virtual HRESULT __stdcall GetCurrentPointTransformed(uint32_t pointerId, ::IUnknown* transform, ::IUnknown** pointerPoint) = 0;
    virtual HRESULT __stdcall GetIntermediatePointsTransformed(uint32_t pointerId, ::IUnknown* transform, ::IUnknown** pointerPoints) = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPointTransform>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Inverse(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryTransform(abi_t<Windows::Foundation::Point> inPoint, abi_t<Windows::Foundation::Point>* outPoint, bool* returnValue) = 0;
    virtual HRESULT __stdcall TransformBounds(abi_t<Windows::Foundation::Rect> rect, abi_t<Windows::Foundation::Rect>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerVisualizationSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_IsContactFeedbackEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsContactFeedbackEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsBarrelButtonFeedbackEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IsBarrelButtonFeedbackEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerVisualizationSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** visualizationSettings) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Menu(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RotationResolutionInDegrees(double* value) = 0;
    virtual HRESULT __stdcall put_RotationResolutionInDegrees(double value) = 0;
    virtual HRESULT __stdcall get_UseAutomaticHapticFeedback(bool* value) = 0;
    virtual HRESULT __stdcall put_UseAutomaticHapticFeedback(bool value) = 0;
    virtual HRESULT __stdcall add_ScreenContactStarted(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_ScreenContactStarted(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ScreenContactEnded(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_ScreenContactEnded(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ScreenContactContinued(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_ScreenContactContinued(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ControlLost(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_ControlLost(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_RotationChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RotationChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ButtonClicked(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ButtonClicked(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ControlAcquired(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_ControlAcquired(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialController2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ButtonPressed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ButtonPressed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ButtonHolding(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ButtonHolding(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ButtonReleased(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ButtonReleased(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetDefaultMenuItems(::IUnknown* buttons) = 0;
    virtual HRESULT __stdcall ResetToDefaultMenuItems() = 0;
    virtual HRESULT __stdcall TrySelectDefaultMenuItem(abi_t<Windows::UI::Input::RadialControllerSystemMenuItemKind> type, bool* result) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerConfiguration2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ActiveControllerWhenMenuIsSuppressed(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ActiveControllerWhenMenuIsSuppressed(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_IsMenuSuppressed(bool value) = 0;
    virtual HRESULT __stdcall get_IsMenuSuppressed(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerConfigurationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** configuration) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsButtonPressed(bool* value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerMenu>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Items(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall GetSelectedMenuItem(::IUnknown** result) = 0;
    virtual HRESULT __stdcall SelectMenuItem(::IUnknown* menuItem) = 0;
    virtual HRESULT __stdcall TrySelectPreviouslySelectedMenuItem(bool* result) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerMenuItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Tag(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Tag(::IUnknown* value) = 0;
    virtual HRESULT __stdcall add_Invoked(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Invoked(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerMenuItemStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromIcon(HSTRING displayText, ::IUnknown* icon, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateFromKnownIcon(HSTRING displayText, abi_t<Windows::UI::Input::RadialControllerMenuKnownIcon> value, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerMenuItemStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromFontGlyph(HSTRING displayText, HSTRING glyph, HSTRING fontFamily, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateFromFontGlyphWithUri(HSTRING displayText, HSTRING glyph, HSTRING fontFamily, ::IUnknown* fontUri, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RotationDeltaInDegrees(double* value) = 0;
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsButtonPressed(bool* value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContact>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Bounds(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsButtonPressed(bool* value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsButtonPressed(bool* value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contact(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsButtonPressed(bool* value) = 0;
    virtual HRESULT __stdcall get_SimpleHapticsController(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupported(bool* result) = 0;
    virtual HRESULT __stdcall CreateForCurrentView(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Input::IRightTappedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
};};

template <> struct abi<Windows::UI::Input::ITappedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_TapCount(uint32_t* value) = 0;
};};

}
