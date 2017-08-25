// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::System {

enum class VirtualKey;
enum class VirtualKeyModifiers : unsigned;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input {

struct PointerPoint;

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

struct IUICommand;
struct UICommandInvokedHandler;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

enum class AppViewBackButtonVisibility
{
    Visible = 0,
    Collapsed = 1,
};

enum class CoreAcceleratorKeyEventType
{
    Character = 2,
    DeadCharacter = 3,
    KeyDown = 0,
    KeyUp = 1,
    SystemCharacter = 6,
    SystemDeadCharacter = 7,
    SystemKeyDown = 4,
    SystemKeyUp = 5,
    UnicodeCharacter = 8,
};

enum class CoreCursorType
{
    Arrow = 0,
    Cross = 1,
    Custom = 2,
    Hand = 3,
    Help = 4,
    IBeam = 5,
    SizeAll = 6,
    SizeNortheastSouthwest = 7,
    SizeNorthSouth = 8,
    SizeNorthwestSoutheast = 9,
    SizeWestEast = 10,
    UniversalNo = 11,
    UpArrow = 12,
    Wait = 13,
};

enum class CoreDispatcherPriority
{
    Idle = -2,
    Low = -1,
    Normal = 0,
    High = 1,
};

enum class CoreInputDeviceTypes : unsigned
{
    None = 0x0,
    Touch = 0x1,
    Pen = 0x2,
    Mouse = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(CoreInputDeviceTypes)

enum class CoreProcessEventsOption
{
    ProcessOneAndAllPending = 0,
    ProcessOneIfPresent = 1,
    ProcessUntilQuit = 2,
    ProcessAllIfPresent = 3,
};

enum class CoreProximityEvaluationScore
{
    Closest = 0,
    Farthest = 2147483647,
};

enum class CoreVirtualKeyStates : unsigned
{
    None = 0x0,
    Down = 0x1,
    Locked = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(CoreVirtualKeyStates)

enum class CoreWindowActivationState
{
    CodeActivated = 0,
    Deactivated = 1,
    PointerActivated = 2,
};

enum class CoreWindowFlowDirection
{
    LeftToRight = 0,
    RightToLeft = 1,
};

struct IAcceleratorKeyEventArgs;
struct IAcceleratorKeyEventArgs2;
struct IAutomationProviderRequestedEventArgs;
struct IBackRequestedEventArgs;
struct ICharacterReceivedEventArgs;
struct IClosestInteractiveBoundsRequestedEventArgs;
struct ICoreAcceleratorKeys;
struct ICoreClosestInteractiveBoundsRequested;
struct ICoreComponentFocusable;
struct ICoreCursor;
struct ICoreCursorFactory;
struct ICoreDispatcher;
struct ICoreDispatcher2;
struct ICoreDispatcherWithTaskPriority;
struct ICoreInputSourceBase;
struct ICoreKeyboardInputSource;
struct ICoreKeyboardInputSource2;
struct ICorePointerInputSource;
struct ICorePointerRedirector;
struct ICoreTouchHitTesting;
struct ICoreWindow;
struct ICoreWindow2;
struct ICoreWindow3;
struct ICoreWindow4;
struct ICoreWindowDialog;
struct ICoreWindowDialogFactory;
struct ICoreWindowEventArgs;
struct ICoreWindowFlyout;
struct ICoreWindowFlyoutFactory;
struct ICoreWindowPopupShowingEventArgs;
struct ICoreWindowResizeManager;
struct ICoreWindowResizeManagerLayoutCapability;
struct ICoreWindowResizeManagerStatics;
struct ICoreWindowStatic;
struct IIdleDispatchedHandlerArgs;
struct IInitializeWithCoreWindow;
struct IInputEnabledEventArgs;
struct IKeyEventArgs;
struct IKeyEventArgs2;
struct IPointerEventArgs;
struct ISystemNavigationManager;
struct ISystemNavigationManager2;
struct ISystemNavigationManagerStatics;
struct ITouchHitTestingEventArgs;
struct IVisibilityChangedEventArgs;
struct IWindowActivatedEventArgs;
struct IWindowSizeChangedEventArgs;
struct AcceleratorKeyEventArgs;
struct AutomationProviderRequestedEventArgs;
struct BackRequestedEventArgs;
struct CharacterReceivedEventArgs;
struct ClosestInteractiveBoundsRequestedEventArgs;
struct CoreAcceleratorKeys;
struct CoreComponentInputSource;
struct CoreCursor;
struct CoreDispatcher;
struct CoreIndependentInputSource;
struct CoreWindow;
struct CoreWindowDialog;
struct CoreWindowEventArgs;
struct CoreWindowFlyout;
struct CoreWindowPopupShowingEventArgs;
struct CoreWindowResizeManager;
struct IdleDispatchedHandlerArgs;
struct InputEnabledEventArgs;
struct KeyEventArgs;
struct PointerEventArgs;
struct SystemNavigationManager;
struct TouchHitTestingEventArgs;
struct VisibilityChangedEventArgs;
struct WindowActivatedEventArgs;
struct WindowSizeChangedEventArgs;
struct CorePhysicalKeyStatus;
struct CoreProximityEvaluation;
struct DispatchedHandler;
struct IdleDispatchedHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Core::IAcceleratorKeyEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IAcceleratorKeyEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IAutomationProviderRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IBackRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICharacterReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreAcceleratorKeys>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreComponentFocusable>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreCursor>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreCursorFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreDispatcher>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreDispatcher2>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreDispatcherWithTaskPriority>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreInputSourceBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreKeyboardInputSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreKeyboardInputSource2>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICorePointerInputSource>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICorePointerRedirector>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreTouchHitTesting>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindow>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindow2>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindow3>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindow4>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowDialog>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowDialogFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowFlyout>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowFlyoutFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowPopupShowingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowResizeManager>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowResizeManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ICoreWindowStatic>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IIdleDispatchedHandlerArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IInitializeWithCoreWindow>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IInputEnabledEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IKeyEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IKeyEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IPointerEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ISystemNavigationManager>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ISystemNavigationManager2>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ISystemNavigationManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::ITouchHitTestingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IVisibilityChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IWindowActivatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::IWindowSizeChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Core::AcceleratorKeyEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::AutomationProviderRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::BackRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CharacterReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreAcceleratorKeys>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreComponentInputSource>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreCursor>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreDispatcher>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreIndependentInputSource>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreWindow>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreWindowDialog>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreWindowEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreWindowFlyout>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreWindowPopupShowingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::CoreWindowResizeManager>{ using type = class_category; };
template <> struct category<Windows::UI::Core::IdleDispatchedHandlerArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::InputEnabledEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::KeyEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::PointerEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::SystemNavigationManager>{ using type = class_category; };
template <> struct category<Windows::UI::Core::TouchHitTestingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::VisibilityChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::WindowActivatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::WindowSizeChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Core::AppViewBackButtonVisibility>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CoreAcceleratorKeyEventType>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CoreCursorType>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CoreDispatcherPriority>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CoreInputDeviceTypes>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CoreProcessEventsOption>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CoreProximityEvaluationScore>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CoreVirtualKeyStates>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CoreWindowActivationState>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CoreWindowFlowDirection>{ using type = enum_category; };
template <> struct category<Windows::UI::Core::CorePhysicalKeyStatus>{ using type = struct_category<uint32_t,uint32_t,bool,bool,bool,bool>; };
template <> struct category<Windows::UI::Core::CoreProximityEvaluation>{ using type = struct_category<int32_t,Windows::Foundation::Point>; };
template <> struct category<Windows::UI::Core::DispatchedHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::Core::IdleDispatchedHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::Core::IAcceleratorKeyEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IAcceleratorKeyEventArgs" }; };
template <> struct name<Windows::UI::Core::IAcceleratorKeyEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Core.IAcceleratorKeyEventArgs2" }; };
template <> struct name<Windows::UI::Core::IAutomationProviderRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IAutomationProviderRequestedEventArgs" }; };
template <> struct name<Windows::UI::Core::IBackRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IBackRequestedEventArgs" }; };
template <> struct name<Windows::UI::Core::ICharacterReceivedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.ICharacterReceivedEventArgs" }; };
template <> struct name<Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IClosestInteractiveBoundsRequestedEventArgs" }; };
template <> struct name<Windows::UI::Core::ICoreAcceleratorKeys>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreAcceleratorKeys" }; };
template <> struct name<Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreClosestInteractiveBoundsRequested" }; };
template <> struct name<Windows::UI::Core::ICoreComponentFocusable>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreComponentFocusable" }; };
template <> struct name<Windows::UI::Core::ICoreCursor>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreCursor" }; };
template <> struct name<Windows::UI::Core::ICoreCursorFactory>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreCursorFactory" }; };
template <> struct name<Windows::UI::Core::ICoreDispatcher>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreDispatcher" }; };
template <> struct name<Windows::UI::Core::ICoreDispatcher2>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreDispatcher2" }; };
template <> struct name<Windows::UI::Core::ICoreDispatcherWithTaskPriority>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreDispatcherWithTaskPriority" }; };
template <> struct name<Windows::UI::Core::ICoreInputSourceBase>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreInputSourceBase" }; };
template <> struct name<Windows::UI::Core::ICoreKeyboardInputSource>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreKeyboardInputSource" }; };
template <> struct name<Windows::UI::Core::ICoreKeyboardInputSource2>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreKeyboardInputSource2" }; };
template <> struct name<Windows::UI::Core::ICorePointerInputSource>{ static constexpr auto & value{ L"Windows.UI.Core.ICorePointerInputSource" }; };
template <> struct name<Windows::UI::Core::ICorePointerRedirector>{ static constexpr auto & value{ L"Windows.UI.Core.ICorePointerRedirector" }; };
template <> struct name<Windows::UI::Core::ICoreTouchHitTesting>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreTouchHitTesting" }; };
template <> struct name<Windows::UI::Core::ICoreWindow>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindow" }; };
template <> struct name<Windows::UI::Core::ICoreWindow2>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindow2" }; };
template <> struct name<Windows::UI::Core::ICoreWindow3>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindow3" }; };
template <> struct name<Windows::UI::Core::ICoreWindow4>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindow4" }; };
template <> struct name<Windows::UI::Core::ICoreWindowDialog>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowDialog" }; };
template <> struct name<Windows::UI::Core::ICoreWindowDialogFactory>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowDialogFactory" }; };
template <> struct name<Windows::UI::Core::ICoreWindowEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowEventArgs" }; };
template <> struct name<Windows::UI::Core::ICoreWindowFlyout>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowFlyout" }; };
template <> struct name<Windows::UI::Core::ICoreWindowFlyoutFactory>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowFlyoutFactory" }; };
template <> struct name<Windows::UI::Core::ICoreWindowPopupShowingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowPopupShowingEventArgs" }; };
template <> struct name<Windows::UI::Core::ICoreWindowResizeManager>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowResizeManager" }; };
template <> struct name<Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowResizeManagerLayoutCapability" }; };
template <> struct name<Windows::UI::Core::ICoreWindowResizeManagerStatics>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowResizeManagerStatics" }; };
template <> struct name<Windows::UI::Core::ICoreWindowStatic>{ static constexpr auto & value{ L"Windows.UI.Core.ICoreWindowStatic" }; };
template <> struct name<Windows::UI::Core::IIdleDispatchedHandlerArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IIdleDispatchedHandlerArgs" }; };
template <> struct name<Windows::UI::Core::IInitializeWithCoreWindow>{ static constexpr auto & value{ L"Windows.UI.Core.IInitializeWithCoreWindow" }; };
template <> struct name<Windows::UI::Core::IInputEnabledEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IInputEnabledEventArgs" }; };
template <> struct name<Windows::UI::Core::IKeyEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IKeyEventArgs" }; };
template <> struct name<Windows::UI::Core::IKeyEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Core.IKeyEventArgs2" }; };
template <> struct name<Windows::UI::Core::IPointerEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IPointerEventArgs" }; };
template <> struct name<Windows::UI::Core::ISystemNavigationManager>{ static constexpr auto & value{ L"Windows.UI.Core.ISystemNavigationManager" }; };
template <> struct name<Windows::UI::Core::ISystemNavigationManager2>{ static constexpr auto & value{ L"Windows.UI.Core.ISystemNavigationManager2" }; };
template <> struct name<Windows::UI::Core::ISystemNavigationManagerStatics>{ static constexpr auto & value{ L"Windows.UI.Core.ISystemNavigationManagerStatics" }; };
template <> struct name<Windows::UI::Core::ITouchHitTestingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.ITouchHitTestingEventArgs" }; };
template <> struct name<Windows::UI::Core::IVisibilityChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IVisibilityChangedEventArgs" }; };
template <> struct name<Windows::UI::Core::IWindowActivatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IWindowActivatedEventArgs" }; };
template <> struct name<Windows::UI::Core::IWindowSizeChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IWindowSizeChangedEventArgs" }; };
template <> struct name<Windows::UI::Core::AcceleratorKeyEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.AcceleratorKeyEventArgs" }; };
template <> struct name<Windows::UI::Core::AutomationProviderRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.AutomationProviderRequestedEventArgs" }; };
template <> struct name<Windows::UI::Core::BackRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.BackRequestedEventArgs" }; };
template <> struct name<Windows::UI::Core::CharacterReceivedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.CharacterReceivedEventArgs" }; };
template <> struct name<Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs" }; };
template <> struct name<Windows::UI::Core::CoreAcceleratorKeys>{ static constexpr auto & value{ L"Windows.UI.Core.CoreAcceleratorKeys" }; };
template <> struct name<Windows::UI::Core::CoreComponentInputSource>{ static constexpr auto & value{ L"Windows.UI.Core.CoreComponentInputSource" }; };
template <> struct name<Windows::UI::Core::CoreCursor>{ static constexpr auto & value{ L"Windows.UI.Core.CoreCursor" }; };
template <> struct name<Windows::UI::Core::CoreDispatcher>{ static constexpr auto & value{ L"Windows.UI.Core.CoreDispatcher" }; };
template <> struct name<Windows::UI::Core::CoreIndependentInputSource>{ static constexpr auto & value{ L"Windows.UI.Core.CoreIndependentInputSource" }; };
template <> struct name<Windows::UI::Core::CoreWindow>{ static constexpr auto & value{ L"Windows.UI.Core.CoreWindow" }; };
template <> struct name<Windows::UI::Core::CoreWindowDialog>{ static constexpr auto & value{ L"Windows.UI.Core.CoreWindowDialog" }; };
template <> struct name<Windows::UI::Core::CoreWindowEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.CoreWindowEventArgs" }; };
template <> struct name<Windows::UI::Core::CoreWindowFlyout>{ static constexpr auto & value{ L"Windows.UI.Core.CoreWindowFlyout" }; };
template <> struct name<Windows::UI::Core::CoreWindowPopupShowingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.CoreWindowPopupShowingEventArgs" }; };
template <> struct name<Windows::UI::Core::CoreWindowResizeManager>{ static constexpr auto & value{ L"Windows.UI.Core.CoreWindowResizeManager" }; };
template <> struct name<Windows::UI::Core::IdleDispatchedHandlerArgs>{ static constexpr auto & value{ L"Windows.UI.Core.IdleDispatchedHandlerArgs" }; };
template <> struct name<Windows::UI::Core::InputEnabledEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.InputEnabledEventArgs" }; };
template <> struct name<Windows::UI::Core::KeyEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.KeyEventArgs" }; };
template <> struct name<Windows::UI::Core::PointerEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.PointerEventArgs" }; };
template <> struct name<Windows::UI::Core::SystemNavigationManager>{ static constexpr auto & value{ L"Windows.UI.Core.SystemNavigationManager" }; };
template <> struct name<Windows::UI::Core::TouchHitTestingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.TouchHitTestingEventArgs" }; };
template <> struct name<Windows::UI::Core::VisibilityChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.VisibilityChangedEventArgs" }; };
template <> struct name<Windows::UI::Core::WindowActivatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.WindowActivatedEventArgs" }; };
template <> struct name<Windows::UI::Core::WindowSizeChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Core.WindowSizeChangedEventArgs" }; };
template <> struct name<Windows::UI::Core::AppViewBackButtonVisibility>{ static constexpr auto & value{ L"Windows.UI.Core.AppViewBackButtonVisibility" }; };
template <> struct name<Windows::UI::Core::CoreAcceleratorKeyEventType>{ static constexpr auto & value{ L"Windows.UI.Core.CoreAcceleratorKeyEventType" }; };
template <> struct name<Windows::UI::Core::CoreCursorType>{ static constexpr auto & value{ L"Windows.UI.Core.CoreCursorType" }; };
template <> struct name<Windows::UI::Core::CoreDispatcherPriority>{ static constexpr auto & value{ L"Windows.UI.Core.CoreDispatcherPriority" }; };
template <> struct name<Windows::UI::Core::CoreInputDeviceTypes>{ static constexpr auto & value{ L"Windows.UI.Core.CoreInputDeviceTypes" }; };
template <> struct name<Windows::UI::Core::CoreProcessEventsOption>{ static constexpr auto & value{ L"Windows.UI.Core.CoreProcessEventsOption" }; };
template <> struct name<Windows::UI::Core::CoreProximityEvaluationScore>{ static constexpr auto & value{ L"Windows.UI.Core.CoreProximityEvaluationScore" }; };
template <> struct name<Windows::UI::Core::CoreVirtualKeyStates>{ static constexpr auto & value{ L"Windows.UI.Core.CoreVirtualKeyStates" }; };
template <> struct name<Windows::UI::Core::CoreWindowActivationState>{ static constexpr auto & value{ L"Windows.UI.Core.CoreWindowActivationState" }; };
template <> struct name<Windows::UI::Core::CoreWindowFlowDirection>{ static constexpr auto & value{ L"Windows.UI.Core.CoreWindowFlowDirection" }; };
template <> struct name<Windows::UI::Core::CorePhysicalKeyStatus>{ static constexpr auto & value{ L"Windows.UI.Core.CorePhysicalKeyStatus" }; };
template <> struct name<Windows::UI::Core::CoreProximityEvaluation>{ static constexpr auto & value{ L"Windows.UI.Core.CoreProximityEvaluation" }; };
template <> struct name<Windows::UI::Core::DispatchedHandler>{ static constexpr auto & value{ L"Windows.UI.Core.DispatchedHandler" }; };
template <> struct name<Windows::UI::Core::IdleDispatchedHandler>{ static constexpr auto & value{ L"Windows.UI.Core.IdleDispatchedHandler" }; };
template <> struct guid<Windows::UI::Core::IAcceleratorKeyEventArgs>{ static constexpr GUID value{ 0xFF1C4C4A,0x9287,0x470B,{ 0x83,0x6E,0x90,0x86,0xE3,0x12,0x6A,0xDE } }; };
template <> struct guid<Windows::UI::Core::IAcceleratorKeyEventArgs2>{ static constexpr GUID value{ 0xD300A9F6,0x2F7E,0x4873,{ 0xA5,0x55,0x16,0x6E,0x59,0x6E,0xE1,0xC5 } }; };
template <> struct guid<Windows::UI::Core::IAutomationProviderRequestedEventArgs>{ static constexpr GUID value{ 0x961FF258,0x21BF,0x4B42,{ 0xA2,0x98,0xFA,0x47,0x9D,0x4C,0x52,0xE2 } }; };
template <> struct guid<Windows::UI::Core::IBackRequestedEventArgs>{ static constexpr GUID value{ 0xD603D28A,0xE411,0x4A4E,{ 0xBA,0x41,0x6A,0x32,0x7A,0x86,0x75,0xBC } }; };
template <> struct guid<Windows::UI::Core::ICharacterReceivedEventArgs>{ static constexpr GUID value{ 0xC584659F,0x99B2,0x4BCC,{ 0xBD,0x33,0x04,0xE6,0x3F,0x42,0x90,0x2E } }; };
template <> struct guid<Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>{ static constexpr GUID value{ 0x347C11D7,0xF6F8,0x40E3,{ 0xB2,0x9F,0xAE,0x50,0xD3,0xE8,0x64,0x86 } }; };
template <> struct guid<Windows::UI::Core::ICoreAcceleratorKeys>{ static constexpr GUID value{ 0x9FFDF7F5,0xB8C9,0x4EF0,{ 0xB7,0xD2,0x1D,0xE6,0x26,0x56,0x1F,0xC8 } }; };
template <> struct guid<Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>{ static constexpr GUID value{ 0xF303043A,0xE8BF,0x4E8E,{ 0xAE,0x69,0xC9,0xDA,0xDD,0x57,0xA1,0x14 } }; };
template <> struct guid<Windows::UI::Core::ICoreComponentFocusable>{ static constexpr GUID value{ 0x52F96FA3,0x8742,0x4411,{ 0xAE,0x69,0x79,0xA8,0x5F,0x29,0xAC,0x8B } }; };
template <> struct guid<Windows::UI::Core::ICoreCursor>{ static constexpr GUID value{ 0x96893ACF,0x111D,0x442C,{ 0x8A,0x77,0xB8,0x79,0x92,0xF8,0xE2,0xD6 } }; };
template <> struct guid<Windows::UI::Core::ICoreCursorFactory>{ static constexpr GUID value{ 0xF6359621,0xA79D,0x4ED3,{ 0x8C,0x32,0xA9,0xEF,0x9D,0x6B,0x76,0xA4 } }; };
template <> struct guid<Windows::UI::Core::ICoreDispatcher>{ static constexpr GUID value{ 0x60DB2FA8,0xB705,0x4FDE,{ 0xA7,0xD6,0xEB,0xBB,0x18,0x91,0xD3,0x9E } }; };
template <> struct guid<Windows::UI::Core::ICoreDispatcher2>{ static constexpr GUID value{ 0x6F5E63C7,0xE3AA,0x4EAE,{ 0xB0,0xE0,0xDC,0xF3,0x21,0xCA,0x4B,0x2F } }; };
template <> struct guid<Windows::UI::Core::ICoreDispatcherWithTaskPriority>{ static constexpr GUID value{ 0xBAFAECAD,0x484D,0x41BE,{ 0xBA,0x80,0x1D,0x58,0xC6,0x52,0x63,0xEA } }; };
template <> struct guid<Windows::UI::Core::ICoreInputSourceBase>{ static constexpr GUID value{ 0x9F488807,0x4580,0x4BE8,{ 0xBE,0x68,0x92,0xA9,0x31,0x17,0x13,0xBB } }; };
template <> struct guid<Windows::UI::Core::ICoreKeyboardInputSource>{ static constexpr GUID value{ 0x231C9088,0xE469,0x4DF1,{ 0xB2,0x08,0x6E,0x49,0x0D,0x71,0xCB,0x90 } }; };
template <> struct guid<Windows::UI::Core::ICoreKeyboardInputSource2>{ static constexpr GUID value{ 0xFA24CB94,0xF963,0x47A5,{ 0x87,0x78,0x20,0x7C,0x48,0x2B,0x0A,0xFD } }; };
template <> struct guid<Windows::UI::Core::ICorePointerInputSource>{ static constexpr GUID value{ 0xBBF1BB18,0xE47A,0x48EB,{ 0x88,0x07,0xF8,0xF8,0xD3,0xEA,0x45,0x51 } }; };
template <> struct guid<Windows::UI::Core::ICorePointerRedirector>{ static constexpr GUID value{ 0x8F9D0C94,0x5688,0x4B0C,{ 0xA9,0xF1,0xF9,0x31,0xF7,0xFA,0x3D,0xC3 } }; };
template <> struct guid<Windows::UI::Core::ICoreTouchHitTesting>{ static constexpr GUID value{ 0xB1D8A289,0x3ACF,0x4124,{ 0x9F,0xA3,0xEA,0x8A,0xBA,0x35,0x3C,0x21 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindow>{ static constexpr GUID value{ 0x79B9D5F2,0x879E,0x4B89,{ 0xB7,0x98,0x79,0xE4,0x75,0x98,0x03,0x0C } }; };
template <> struct guid<Windows::UI::Core::ICoreWindow2>{ static constexpr GUID value{ 0x7C2B1B85,0x6917,0x4361,{ 0x9C,0x02,0x0D,0x9E,0x3A,0x42,0x0B,0x95 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindow3>{ static constexpr GUID value{ 0x32C20DD8,0xFAEF,0x4375,{ 0xA2,0xAB,0x32,0x64,0x0E,0x48,0x15,0xC7 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindow4>{ static constexpr GUID value{ 0x35CAF0D0,0x47F0,0x436C,{ 0xAF,0x97,0x0D,0xD8,0x8F,0x6F,0x5F,0x02 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowDialog>{ static constexpr GUID value{ 0xE7392CE0,0xC78D,0x427E,{ 0x8B,0x2C,0x01,0xFF,0x42,0x0C,0x69,0xD5 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowDialogFactory>{ static constexpr GUID value{ 0xCFB2A855,0x1C59,0x4B13,{ 0xB1,0xE5,0x16,0xE2,0x98,0x05,0xF7,0xC4 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowEventArgs>{ static constexpr GUID value{ 0x272B1EF3,0xC633,0x4DA5,{ 0xA2,0x6C,0xC6,0xD0,0xF5,0x6B,0x29,0xDA } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowFlyout>{ static constexpr GUID value{ 0xE89D854D,0x2050,0x40BB,{ 0xB3,0x44,0xF6,0xF3,0x55,0xEE,0xB3,0x14 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowFlyoutFactory>{ static constexpr GUID value{ 0xDEC4C6C4,0x93E8,0x4F7C,{ 0xBE,0x27,0xCE,0xFA,0xA1,0xAF,0x68,0xA7 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowPopupShowingEventArgs>{ static constexpr GUID value{ 0x26155FA2,0x5BA5,0x4EA4,{ 0xA3,0xB4,0x2D,0xC7,0xD6,0x3C,0x8E,0x26 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowResizeManager>{ static constexpr GUID value{ 0xB8F0B925,0xB350,0x48B3,{ 0xA1,0x98,0x5C,0x1A,0x84,0x70,0x02,0x43 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>{ static constexpr GUID value{ 0xBB74F27B,0xA544,0x4301,{ 0x80,0xE6,0x0A,0xE0,0x33,0xEF,0x45,0x36 } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowResizeManagerStatics>{ static constexpr GUID value{ 0xAE4A9045,0x6D70,0x49DB,{ 0x8E,0x68,0x46,0xFF,0xBD,0x17,0xD3,0x8D } }; };
template <> struct guid<Windows::UI::Core::ICoreWindowStatic>{ static constexpr GUID value{ 0x4D239005,0x3C2A,0x41B1,{ 0x90,0x22,0x53,0x6B,0xB9,0xCF,0x93,0xB1 } }; };
template <> struct guid<Windows::UI::Core::IIdleDispatchedHandlerArgs>{ static constexpr GUID value{ 0x98BB6A24,0xDC1C,0x43CB,{ 0xB4,0xED,0xD1,0xC0,0xEB,0x23,0x91,0xF3 } }; };
template <> struct guid<Windows::UI::Core::IInitializeWithCoreWindow>{ static constexpr GUID value{ 0x188F20D6,0x9873,0x464A,{ 0xAC,0xE5,0x57,0xE0,0x10,0xF4,0x65,0xE6 } }; };
template <> struct guid<Windows::UI::Core::IInputEnabledEventArgs>{ static constexpr GUID value{ 0x80371D4F,0x2FD8,0x4C24,{ 0xAA,0x86,0x31,0x63,0xA8,0x7B,0x4E,0x5A } }; };
template <> struct guid<Windows::UI::Core::IKeyEventArgs>{ static constexpr GUID value{ 0x5FF5E930,0x2544,0x4A17,{ 0xBD,0x78,0x1F,0x2F,0xDE,0xBB,0x10,0x6B } }; };
template <> struct guid<Windows::UI::Core::IKeyEventArgs2>{ static constexpr GUID value{ 0x583ADD98,0x0790,0x4571,{ 0x9B,0x12,0x64,0x5E,0xF9,0xD7,0x9E,0x42 } }; };
template <> struct guid<Windows::UI::Core::IPointerEventArgs>{ static constexpr GUID value{ 0x920D9CB1,0xA5FC,0x4A21,{ 0x8C,0x09,0x49,0xDF,0xE6,0xFF,0xE2,0x5F } }; };
template <> struct guid<Windows::UI::Core::ISystemNavigationManager>{ static constexpr GUID value{ 0x93023118,0xCF50,0x42A6,{ 0x97,0x06,0x69,0x10,0x7F,0xA1,0x22,0xE1 } }; };
template <> struct guid<Windows::UI::Core::ISystemNavigationManager2>{ static constexpr GUID value{ 0x8C510401,0x67BE,0x49AE,{ 0x95,0x09,0x67,0x1C,0x1E,0x54,0xA3,0x89 } }; };
template <> struct guid<Windows::UI::Core::ISystemNavigationManagerStatics>{ static constexpr GUID value{ 0xDC52B5CE,0xBEE0,0x4305,{ 0x8C,0x54,0x68,0x22,0x8E,0xD6,0x83,0xB5 } }; };
template <> struct guid<Windows::UI::Core::ITouchHitTestingEventArgs>{ static constexpr GUID value{ 0x22F3B823,0x0B7C,0x424E,{ 0x9D,0xF7,0x33,0xD4,0xF9,0x62,0x93,0x1B } }; };
template <> struct guid<Windows::UI::Core::IVisibilityChangedEventArgs>{ static constexpr GUID value{ 0xBF9918EA,0xD801,0x4564,{ 0xA4,0x95,0xB1,0xE8,0x4F,0x8A,0xD0,0x85 } }; };
template <> struct guid<Windows::UI::Core::IWindowActivatedEventArgs>{ static constexpr GUID value{ 0x179D65E7,0x4658,0x4CB6,{ 0xAA,0x13,0x41,0xD0,0x94,0xEA,0x25,0x5E } }; };
template <> struct guid<Windows::UI::Core::IWindowSizeChangedEventArgs>{ static constexpr GUID value{ 0x5A200EC7,0x0426,0x47DC,{ 0xB8,0x6C,0x6F,0x47,0x59,0x15,0xE4,0x51 } }; };
template <> struct guid<Windows::UI::Core::DispatchedHandler>{ static constexpr GUID value{ 0xD1F276C4,0x98D8,0x4636,{ 0xBF,0x49,0xEB,0x79,0x50,0x75,0x48,0xE9 } }; };
template <> struct guid<Windows::UI::Core::IdleDispatchedHandler>{ static constexpr GUID value{ 0xA42B0C24,0x7F21,0x4ABC,{ 0x99,0xC1,0x8F,0x01,0x00,0x7F,0x08,0x80 } }; };
template <> struct default_interface<Windows::UI::Core::AcceleratorKeyEventArgs>{ using type = Windows::UI::Core::IAcceleratorKeyEventArgs; };
template <> struct default_interface<Windows::UI::Core::AutomationProviderRequestedEventArgs>{ using type = Windows::UI::Core::IAutomationProviderRequestedEventArgs; };
template <> struct default_interface<Windows::UI::Core::BackRequestedEventArgs>{ using type = Windows::UI::Core::IBackRequestedEventArgs; };
template <> struct default_interface<Windows::UI::Core::CharacterReceivedEventArgs>{ using type = Windows::UI::Core::ICharacterReceivedEventArgs; };
template <> struct default_interface<Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs>{ using type = Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs; };
template <> struct default_interface<Windows::UI::Core::CoreAcceleratorKeys>{ using type = Windows::UI::Core::ICoreAcceleratorKeys; };
template <> struct default_interface<Windows::UI::Core::CoreComponentInputSource>{ using type = Windows::UI::Core::ICoreInputSourceBase; };
template <> struct default_interface<Windows::UI::Core::CoreCursor>{ using type = Windows::UI::Core::ICoreCursor; };
template <> struct default_interface<Windows::UI::Core::CoreDispatcher>{ using type = Windows::UI::Core::ICoreDispatcher; };
template <> struct default_interface<Windows::UI::Core::CoreIndependentInputSource>{ using type = Windows::UI::Core::ICoreInputSourceBase; };
template <> struct default_interface<Windows::UI::Core::CoreWindow>{ using type = Windows::UI::Core::ICoreWindow; };
template <> struct default_interface<Windows::UI::Core::CoreWindowDialog>{ using type = Windows::UI::Core::ICoreWindowDialog; };
template <> struct default_interface<Windows::UI::Core::CoreWindowEventArgs>{ using type = Windows::UI::Core::ICoreWindowEventArgs; };
template <> struct default_interface<Windows::UI::Core::CoreWindowFlyout>{ using type = Windows::UI::Core::ICoreWindowFlyout; };
template <> struct default_interface<Windows::UI::Core::CoreWindowPopupShowingEventArgs>{ using type = Windows::UI::Core::ICoreWindowPopupShowingEventArgs; };
template <> struct default_interface<Windows::UI::Core::CoreWindowResizeManager>{ using type = Windows::UI::Core::ICoreWindowResizeManager; };
template <> struct default_interface<Windows::UI::Core::IdleDispatchedHandlerArgs>{ using type = Windows::UI::Core::IIdleDispatchedHandlerArgs; };
template <> struct default_interface<Windows::UI::Core::InputEnabledEventArgs>{ using type = Windows::UI::Core::IInputEnabledEventArgs; };
template <> struct default_interface<Windows::UI::Core::KeyEventArgs>{ using type = Windows::UI::Core::IKeyEventArgs; };
template <> struct default_interface<Windows::UI::Core::PointerEventArgs>{ using type = Windows::UI::Core::IPointerEventArgs; };
template <> struct default_interface<Windows::UI::Core::SystemNavigationManager>{ using type = Windows::UI::Core::ISystemNavigationManager; };
template <> struct default_interface<Windows::UI::Core::TouchHitTestingEventArgs>{ using type = Windows::UI::Core::ITouchHitTestingEventArgs; };
template <> struct default_interface<Windows::UI::Core::VisibilityChangedEventArgs>{ using type = Windows::UI::Core::IVisibilityChangedEventArgs; };
template <> struct default_interface<Windows::UI::Core::WindowActivatedEventArgs>{ using type = Windows::UI::Core::IWindowActivatedEventArgs; };
template <> struct default_interface<Windows::UI::Core::WindowSizeChangedEventArgs>{ using type = Windows::UI::Core::IWindowSizeChangedEventArgs; };

template <typename D>
struct consume_Windows_UI_Core_IAcceleratorKeyEventArgs
{
    Windows::UI::Core::CoreAcceleratorKeyEventType EventType() const;
    Windows::System::VirtualKey VirtualKey() const;
    Windows::UI::Core::CorePhysicalKeyStatus KeyStatus() const;
};
template <> struct consume<Windows::UI::Core::IAcceleratorKeyEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IAcceleratorKeyEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_IAcceleratorKeyEventArgs2
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::UI::Core::IAcceleratorKeyEventArgs2> { template <typename D> using type = consume_Windows_UI_Core_IAcceleratorKeyEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Core_IAutomationProviderRequestedEventArgs
{
    Windows::Foundation::IInspectable AutomationProvider() const;
    void AutomationProvider(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::UI::Core::IAutomationProviderRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IAutomationProviderRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_IBackRequestedEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::UI::Core::IBackRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IBackRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICharacterReceivedEventArgs
{
    uint32_t KeyCode() const;
    Windows::UI::Core::CorePhysicalKeyStatus KeyStatus() const;
};
template <> struct consume<Windows::UI::Core::ICharacterReceivedEventArgs> { template <typename D> using type = consume_Windows_UI_Core_ICharacterReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs
{
    Windows::Foundation::Point PointerPosition() const;
    Windows::Foundation::Rect SearchBounds() const;
    Windows::Foundation::Rect ClosestInteractiveBounds() const;
    void ClosestInteractiveBounds(Windows::Foundation::Rect const& value) const;
};
template <> struct consume<Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreAcceleratorKeys
{
    event_token AcceleratorKeyActivated(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreDispatcher, Windows::UI::Core::AcceleratorKeyEventArgs> const& handler) const;
    using AcceleratorKeyActivated_revoker = event_revoker<Windows::UI::Core::ICoreAcceleratorKeys>;
    AcceleratorKeyActivated_revoker AcceleratorKeyActivated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreDispatcher, Windows::UI::Core::AcceleratorKeyEventArgs> const& handler) const;
    void AcceleratorKeyActivated(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICoreAcceleratorKeys> { template <typename D> using type = consume_Windows_UI_Core_ICoreAcceleratorKeys<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested
{
    event_token ClosestInteractiveBoundsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreComponentInputSource, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const;
    using ClosestInteractiveBoundsRequested_revoker = event_revoker<Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>;
    ClosestInteractiveBoundsRequested_revoker ClosestInteractiveBoundsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreComponentInputSource, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const;
    void ClosestInteractiveBoundsRequested(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICoreClosestInteractiveBoundsRequested> { template <typename D> using type = consume_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreComponentFocusable
{
    bool HasFocus() const;
    event_token GotFocus(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
    using GotFocus_revoker = event_revoker<Windows::UI::Core::ICoreComponentFocusable>;
    GotFocus_revoker GotFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
    void GotFocus(event_token const& cookie) const;
    event_token LostFocus(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
    using LostFocus_revoker = event_revoker<Windows::UI::Core::ICoreComponentFocusable>;
    LostFocus_revoker LostFocus(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
    void LostFocus(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICoreComponentFocusable> { template <typename D> using type = consume_Windows_UI_Core_ICoreComponentFocusable<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreCursor
{
    uint32_t Id() const;
    Windows::UI::Core::CoreCursorType Type() const;
};
template <> struct consume<Windows::UI::Core::ICoreCursor> { template <typename D> using type = consume_Windows_UI_Core_ICoreCursor<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreCursorFactory
{
    Windows::UI::Core::CoreCursor CreateCursor(Windows::UI::Core::CoreCursorType const& type, uint32_t id) const;
};
template <> struct consume<Windows::UI::Core::ICoreCursorFactory> { template <typename D> using type = consume_Windows_UI_Core_ICoreCursorFactory<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreDispatcher
{
    bool HasThreadAccess() const;
    void ProcessEvents(Windows::UI::Core::CoreProcessEventsOption const& options) const;
    Windows::Foundation::IAsyncAction RunAsync(Windows::UI::Core::CoreDispatcherPriority const& priority, Windows::UI::Core::DispatchedHandler const& agileCallback) const;
    Windows::Foundation::IAsyncAction RunIdleAsync(Windows::UI::Core::IdleDispatchedHandler const& agileCallback) const;
};
template <> struct consume<Windows::UI::Core::ICoreDispatcher> { template <typename D> using type = consume_Windows_UI_Core_ICoreDispatcher<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreDispatcher2
{
    Windows::Foundation::IAsyncOperation<bool> TryRunAsync(Windows::UI::Core::CoreDispatcherPriority const& priority, Windows::UI::Core::DispatchedHandler const& agileCallback) const;
    Windows::Foundation::IAsyncOperation<bool> TryRunIdleAsync(Windows::UI::Core::IdleDispatchedHandler const& agileCallback) const;
};
template <> struct consume<Windows::UI::Core::ICoreDispatcher2> { template <typename D> using type = consume_Windows_UI_Core_ICoreDispatcher2<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreDispatcherWithTaskPriority
{
    Windows::UI::Core::CoreDispatcherPriority CurrentPriority() const;
    void CurrentPriority(Windows::UI::Core::CoreDispatcherPriority const& value) const;
    bool ShouldYield() const;
    bool ShouldYield(Windows::UI::Core::CoreDispatcherPriority const& priority) const;
    void StopProcessEvents() const;
};
template <> struct consume<Windows::UI::Core::ICoreDispatcherWithTaskPriority> { template <typename D> using type = consume_Windows_UI_Core_ICoreDispatcherWithTaskPriority<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreInputSourceBase
{
    Windows::UI::Core::CoreDispatcher Dispatcher() const;
    bool IsInputEnabled() const;
    void IsInputEnabled(bool value) const;
    event_token InputEnabled(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::InputEnabledEventArgs> const& handler) const;
    using InputEnabled_revoker = event_revoker<Windows::UI::Core::ICoreInputSourceBase>;
    InputEnabled_revoker InputEnabled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::InputEnabledEventArgs> const& handler) const;
    void InputEnabled(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICoreInputSourceBase> { template <typename D> using type = consume_Windows_UI_Core_ICoreInputSourceBase<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreKeyboardInputSource
{
    Windows::UI::Core::CoreVirtualKeyStates GetCurrentKeyState(Windows::System::VirtualKey const& virtualKey) const;
    event_token CharacterReceived(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const;
    using CharacterReceived_revoker = event_revoker<Windows::UI::Core::ICoreKeyboardInputSource>;
    CharacterReceived_revoker CharacterReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const;
    void CharacterReceived(event_token const& cookie) const;
    event_token KeyDown(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const& handler) const;
    using KeyDown_revoker = event_revoker<Windows::UI::Core::ICoreKeyboardInputSource>;
    KeyDown_revoker KeyDown(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const& handler) const;
    void KeyDown(event_token const& cookie) const;
    event_token KeyUp(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const& handler) const;
    using KeyUp_revoker = event_revoker<Windows::UI::Core::ICoreKeyboardInputSource>;
    KeyUp_revoker KeyUp(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::KeyEventArgs> const& handler) const;
    void KeyUp(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICoreKeyboardInputSource> { template <typename D> using type = consume_Windows_UI_Core_ICoreKeyboardInputSource<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreKeyboardInputSource2
{
    hstring GetCurrentKeyEventDeviceId() const;
};
template <> struct consume<Windows::UI::Core::ICoreKeyboardInputSource2> { template <typename D> using type = consume_Windows_UI_Core_ICoreKeyboardInputSource2<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICorePointerInputSource
{
    void ReleasePointerCapture() const;
    void SetPointerCapture() const;
    bool HasCapture() const;
    Windows::Foundation::Point PointerPosition() const;
    Windows::UI::Core::CoreCursor PointerCursor() const;
    void PointerCursor(Windows::UI::Core::CoreCursor const& value) const;
    event_token PointerCaptureLost(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerCaptureLost_revoker = event_revoker<Windows::UI::Core::ICorePointerInputSource>;
    PointerCaptureLost_revoker PointerCaptureLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerCaptureLost(event_token const& cookie) const;
    event_token PointerEntered(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerEntered_revoker = event_revoker<Windows::UI::Core::ICorePointerInputSource>;
    PointerEntered_revoker PointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerEntered(event_token const& cookie) const;
    event_token PointerExited(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerExited_revoker = event_revoker<Windows::UI::Core::ICorePointerInputSource>;
    PointerExited_revoker PointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerExited(event_token const& cookie) const;
    event_token PointerMoved(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerMoved_revoker = event_revoker<Windows::UI::Core::ICorePointerInputSource>;
    PointerMoved_revoker PointerMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerMoved(event_token const& cookie) const;
    event_token PointerPressed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerPressed_revoker = event_revoker<Windows::UI::Core::ICorePointerInputSource>;
    PointerPressed_revoker PointerPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerPressed(event_token const& cookie) const;
    event_token PointerReleased(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerReleased_revoker = event_revoker<Windows::UI::Core::ICorePointerInputSource>;
    PointerReleased_revoker PointerReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerReleased(event_token const& cookie) const;
    event_token PointerWheelChanged(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerWheelChanged_revoker = event_revoker<Windows::UI::Core::ICorePointerInputSource>;
    PointerWheelChanged_revoker PointerWheelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerWheelChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICorePointerInputSource> { template <typename D> using type = consume_Windows_UI_Core_ICorePointerInputSource<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICorePointerRedirector
{
    event_token PointerRoutedAway(Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerRoutedAway_revoker = event_revoker<Windows::UI::Core::ICorePointerRedirector>;
    PointerRoutedAway_revoker PointerRoutedAway(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerRoutedAway(event_token const& cookie) const;
    event_token PointerRoutedTo(Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerRoutedTo_revoker = event_revoker<Windows::UI::Core::ICorePointerRedirector>;
    PointerRoutedTo_revoker PointerRoutedTo(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerRoutedTo(event_token const& cookie) const;
    event_token PointerRoutedReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerRoutedReleased_revoker = event_revoker<Windows::UI::Core::ICorePointerRedirector>;
    PointerRoutedReleased_revoker PointerRoutedReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::ICorePointerRedirector, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerRoutedReleased(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICorePointerRedirector> { template <typename D> using type = consume_Windows_UI_Core_ICorePointerRedirector<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreTouchHitTesting
{
    event_token TouchHitTesting(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const;
    using TouchHitTesting_revoker = event_revoker<Windows::UI::Core::ICoreTouchHitTesting>;
    TouchHitTesting_revoker TouchHitTesting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const;
    void TouchHitTesting(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICoreTouchHitTesting> { template <typename D> using type = consume_Windows_UI_Core_ICoreTouchHitTesting<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindow
{
    Windows::Foundation::IInspectable AutomationHostProvider() const;
    Windows::Foundation::Rect Bounds() const;
    Windows::Foundation::Collections::IPropertySet CustomProperties() const;
    Windows::UI::Core::CoreDispatcher Dispatcher() const;
    Windows::UI::Core::CoreWindowFlowDirection FlowDirection() const;
    void FlowDirection(Windows::UI::Core::CoreWindowFlowDirection const& value) const;
    bool IsInputEnabled() const;
    void IsInputEnabled(bool value) const;
    Windows::UI::Core::CoreCursor PointerCursor() const;
    void PointerCursor(Windows::UI::Core::CoreCursor const& value) const;
    Windows::Foundation::Point PointerPosition() const;
    bool Visible() const;
    void Activate() const;
    void Close() const;
    Windows::UI::Core::CoreVirtualKeyStates GetAsyncKeyState(Windows::System::VirtualKey const& virtualKey) const;
    Windows::UI::Core::CoreVirtualKeyStates GetKeyState(Windows::System::VirtualKey const& virtualKey) const;
    void ReleasePointerCapture() const;
    void SetPointerCapture() const;
    event_token Activated(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowActivatedEventArgs> const& handler) const;
    using Activated_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    Activated_revoker Activated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowActivatedEventArgs> const& handler) const;
    void Activated(event_token const& cookie) const;
    event_token AutomationProviderRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::AutomationProviderRequestedEventArgs> const& handler) const;
    using AutomationProviderRequested_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    AutomationProviderRequested_revoker AutomationProviderRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::AutomationProviderRequestedEventArgs> const& handler) const;
    void AutomationProviderRequested(event_token const& cookie) const;
    event_token CharacterReceived(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const;
    using CharacterReceived_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    CharacterReceived_revoker CharacterReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CharacterReceivedEventArgs> const& handler) const;
    void CharacterReceived(event_token const& cookie) const;
    event_token Closed(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
    using Closed_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowEventArgs> const& handler) const;
    void Closed(event_token const& cookie) const;
    event_token InputEnabled(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::InputEnabledEventArgs> const& handler) const;
    using InputEnabled_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    InputEnabled_revoker InputEnabled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::InputEnabledEventArgs> const& handler) const;
    void InputEnabled(event_token const& cookie) const;
    event_token KeyDown(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const& handler) const;
    using KeyDown_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    KeyDown_revoker KeyDown(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const& handler) const;
    void KeyDown(event_token const& cookie) const;
    event_token KeyUp(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const& handler) const;
    using KeyUp_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    KeyUp_revoker KeyUp(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::KeyEventArgs> const& handler) const;
    void KeyUp(event_token const& cookie) const;
    event_token PointerCaptureLost(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerCaptureLost_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    PointerCaptureLost_revoker PointerCaptureLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerCaptureLost(event_token const& cookie) const;
    event_token PointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerEntered_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    PointerEntered_revoker PointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerEntered(event_token const& cookie) const;
    event_token PointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerExited_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    PointerExited_revoker PointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerExited(event_token const& cookie) const;
    event_token PointerMoved(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerMoved_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    PointerMoved_revoker PointerMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerMoved(event_token const& cookie) const;
    event_token PointerPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerPressed_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    PointerPressed_revoker PointerPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerPressed(event_token const& cookie) const;
    event_token PointerReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerReleased_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    PointerReleased_revoker PointerReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerReleased(event_token const& cookie) const;
    event_token TouchHitTesting(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const;
    using TouchHitTesting_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    TouchHitTesting_revoker TouchHitTesting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::TouchHitTestingEventArgs> const& handler) const;
    void TouchHitTesting(event_token const& cookie) const;
    event_token PointerWheelChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    using PointerWheelChanged_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    PointerWheelChanged_revoker PointerWheelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::PointerEventArgs> const& handler) const;
    void PointerWheelChanged(event_token const& cookie) const;
    event_token SizeChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowSizeChangedEventArgs> const& handler) const;
    using SizeChanged_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    SizeChanged_revoker SizeChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::WindowSizeChangedEventArgs> const& handler) const;
    void SizeChanged(event_token const& cookie) const;
    event_token VisibilityChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::VisibilityChangedEventArgs> const& handler) const;
    using VisibilityChanged_revoker = event_revoker<Windows::UI::Core::ICoreWindow>;
    VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::VisibilityChangedEventArgs> const& handler) const;
    void VisibilityChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICoreWindow> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindow<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindow2
{
    void PointerPosition(Windows::Foundation::Point const& value) const;
};
template <> struct consume<Windows::UI::Core::ICoreWindow2> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindow2<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindow3
{
    event_token ClosestInteractiveBoundsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const;
    using ClosestInteractiveBoundsRequested_revoker = event_revoker<Windows::UI::Core::ICoreWindow3>;
    ClosestInteractiveBoundsRequested_revoker ClosestInteractiveBoundsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs> const& handler) const;
    void ClosestInteractiveBoundsRequested(event_token const& cookie) const;
    hstring GetCurrentKeyEventDeviceId() const;
};
template <> struct consume<Windows::UI::Core::ICoreWindow3> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindow3<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindow4
{
    event_token ResizeStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const& handler) const;
    using ResizeStarted_revoker = event_revoker<Windows::UI::Core::ICoreWindow4>;
    ResizeStarted_revoker ResizeStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const& handler) const;
    void ResizeStarted(event_token const& cookie) const;
    event_token ResizeCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const& handler) const;
    using ResizeCompleted_revoker = event_revoker<Windows::UI::Core::ICoreWindow4>;
    ResizeCompleted_revoker ResizeCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::Foundation::IInspectable> const& handler) const;
    void ResizeCompleted(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::Core::ICoreWindow4> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindow4<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowDialog
{
    event_token Showing(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const;
    using Showing_revoker = event_revoker<Windows::UI::Core::ICoreWindowDialog>;
    Showing_revoker Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const;
    void Showing(event_token const& cookie) const;
    Windows::Foundation::Size MaxSize() const;
    Windows::Foundation::Size MinSize() const;
    hstring Title() const;
    void Title(param::hstring const& value) const;
    int32_t IsInteractionDelayed() const;
    void IsInteractionDelayed(int32_t value) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> Commands() const;
    uint32_t DefaultCommandIndex() const;
    void DefaultCommandIndex(uint32_t value) const;
    uint32_t CancelCommandIndex() const;
    void CancelCommandIndex(uint32_t value) const;
    Windows::UI::Popups::UICommandInvokedHandler BackButtonCommand() const;
    void BackButtonCommand(Windows::UI::Popups::UICommandInvokedHandler const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> ShowAsync() const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowDialog> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowDialog<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowDialogFactory
{
    Windows::UI::Core::CoreWindowDialog CreateWithTitle(param::hstring const& title) const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowDialogFactory> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowDialogFactory<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowEventArgs> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowFlyout
{
    event_token Showing(Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const;
    using Showing_revoker = event_revoker<Windows::UI::Core::ICoreWindowFlyout>;
    Showing_revoker Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Core::CoreWindow, Windows::UI::Core::CoreWindowPopupShowingEventArgs> const& handler) const;
    void Showing(event_token const& cookie) const;
    Windows::Foundation::Size MaxSize() const;
    Windows::Foundation::Size MinSize() const;
    hstring Title() const;
    void Title(param::hstring const& value) const;
    int32_t IsInteractionDelayed() const;
    void IsInteractionDelayed(int32_t value) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> Commands() const;
    uint32_t DefaultCommandIndex() const;
    void DefaultCommandIndex(uint32_t value) const;
    Windows::UI::Popups::UICommandInvokedHandler BackButtonCommand() const;
    void BackButtonCommand(Windows::UI::Popups::UICommandInvokedHandler const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> ShowAsync() const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowFlyout> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowFlyout<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowFlyoutFactory
{
    Windows::UI::Core::CoreWindowFlyout Create(Windows::Foundation::Point const& position) const;
    Windows::UI::Core::CoreWindowFlyout CreateWithTitle(Windows::Foundation::Point const& position, param::hstring const& title) const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowFlyoutFactory> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowFlyoutFactory<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowPopupShowingEventArgs
{
    void SetDesiredSize(Windows::Foundation::Size const& value) const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowPopupShowingEventArgs> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowPopupShowingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowResizeManager
{
    void NotifyLayoutCompleted() const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowResizeManager> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowResizeManager<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowResizeManagerLayoutCapability
{
    void ShouldWaitForLayoutCompletion(bool value) const;
    bool ShouldWaitForLayoutCompletion() const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowResizeManagerLayoutCapability<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowResizeManagerStatics
{
    Windows::UI::Core::CoreWindowResizeManager GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowResizeManagerStatics> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowResizeManagerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Core_ICoreWindowStatic
{
    Windows::UI::Core::CoreWindow GetForCurrentThread() const;
};
template <> struct consume<Windows::UI::Core::ICoreWindowStatic> { template <typename D> using type = consume_Windows_UI_Core_ICoreWindowStatic<D>; };

template <typename D>
struct consume_Windows_UI_Core_IIdleDispatchedHandlerArgs
{
    bool IsDispatcherIdle() const;
};
template <> struct consume<Windows::UI::Core::IIdleDispatchedHandlerArgs> { template <typename D> using type = consume_Windows_UI_Core_IIdleDispatchedHandlerArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_IInitializeWithCoreWindow
{
    void Initialize(Windows::UI::Core::CoreWindow const& window) const;
};
template <> struct consume<Windows::UI::Core::IInitializeWithCoreWindow> { template <typename D> using type = consume_Windows_UI_Core_IInitializeWithCoreWindow<D>; };

template <typename D>
struct consume_Windows_UI_Core_IInputEnabledEventArgs
{
    bool InputEnabled() const;
};
template <> struct consume<Windows::UI::Core::IInputEnabledEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IInputEnabledEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_IKeyEventArgs
{
    Windows::System::VirtualKey VirtualKey() const;
    Windows::UI::Core::CorePhysicalKeyStatus KeyStatus() const;
};
template <> struct consume<Windows::UI::Core::IKeyEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IKeyEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_IKeyEventArgs2
{
    hstring DeviceId() const;
};
template <> struct consume<Windows::UI::Core::IKeyEventArgs2> { template <typename D> using type = consume_Windows_UI_Core_IKeyEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Core_IPointerEventArgs
{
    Windows::UI::Input::PointerPoint CurrentPoint() const;
    Windows::System::VirtualKeyModifiers KeyModifiers() const;
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> GetIntermediatePoints() const;
};
template <> struct consume<Windows::UI::Core::IPointerEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IPointerEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_ISystemNavigationManager
{
    event_token BackRequested(Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs> const& handler) const;
    using BackRequested_revoker = event_revoker<Windows::UI::Core::ISystemNavigationManager>;
    BackRequested_revoker BackRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs> const& handler) const;
    void BackRequested(event_token const& token) const;
};
template <> struct consume<Windows::UI::Core::ISystemNavigationManager> { template <typename D> using type = consume_Windows_UI_Core_ISystemNavigationManager<D>; };

template <typename D>
struct consume_Windows_UI_Core_ISystemNavigationManager2
{
    Windows::UI::Core::AppViewBackButtonVisibility AppViewBackButtonVisibility() const;
    void AppViewBackButtonVisibility(Windows::UI::Core::AppViewBackButtonVisibility const& value) const;
};
template <> struct consume<Windows::UI::Core::ISystemNavigationManager2> { template <typename D> using type = consume_Windows_UI_Core_ISystemNavigationManager2<D>; };

template <typename D>
struct consume_Windows_UI_Core_ISystemNavigationManagerStatics
{
    Windows::UI::Core::SystemNavigationManager GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Core::ISystemNavigationManagerStatics> { template <typename D> using type = consume_Windows_UI_Core_ISystemNavigationManagerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Core_ITouchHitTestingEventArgs
{
    Windows::UI::Core::CoreProximityEvaluation ProximityEvaluation() const;
    void ProximityEvaluation(Windows::UI::Core::CoreProximityEvaluation const& value) const;
    Windows::Foundation::Point Point() const;
    Windows::Foundation::Rect BoundingBox() const;
    Windows::UI::Core::CoreProximityEvaluation EvaluateProximity(Windows::Foundation::Rect const& controlBoundingBox) const;
    Windows::UI::Core::CoreProximityEvaluation EvaluateProximity(array_view<Windows::Foundation::Point const> controlVertices) const;
};
template <> struct consume<Windows::UI::Core::ITouchHitTestingEventArgs> { template <typename D> using type = consume_Windows_UI_Core_ITouchHitTestingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_IVisibilityChangedEventArgs
{
    bool Visible() const;
};
template <> struct consume<Windows::UI::Core::IVisibilityChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IVisibilityChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_IWindowActivatedEventArgs
{
    Windows::UI::Core::CoreWindowActivationState WindowActivationState() const;
};
template <> struct consume<Windows::UI::Core::IWindowActivatedEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IWindowActivatedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Core_IWindowSizeChangedEventArgs
{
    Windows::Foundation::Size Size() const;
};
template <> struct consume<Windows::UI::Core::IWindowSizeChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Core_IWindowSizeChangedEventArgs<D>; };

template <> struct abi<Windows::UI::Core::IAcceleratorKeyEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EventType(abi_t<Windows::UI::Core::CoreAcceleratorKeyEventType>* value) = 0;
    virtual HRESULT __stdcall get_VirtualKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall get_KeyStatus(abi_t<Windows::UI::Core::CorePhysicalKeyStatus>* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IAcceleratorKeyEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IAutomationProviderRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AutomationProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AutomationProvider(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IBackRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Core::ICharacterReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyCode(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_KeyStatus(abi_t<Windows::UI::Core::CorePhysicalKeyStatus>* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerPosition(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_SearchBounds(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_ClosestInteractiveBounds(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall put_ClosestInteractiveBounds(abi_t<Windows::Foundation::Rect> value) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreAcceleratorKeys>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_AcceleratorKeyActivated(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_AcceleratorKeyActivated(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreClosestInteractiveBoundsRequested>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ClosestInteractiveBoundsRequested(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_ClosestInteractiveBoundsRequested(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreComponentFocusable>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HasFocus(bool* value) = 0;
    virtual HRESULT __stdcall add_GotFocus(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_GotFocus(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_LostFocus(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_LostFocus(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreCursor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Type(abi_t<Windows::UI::Core::CoreCursorType>* value) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreCursorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCursor(abi_t<Windows::UI::Core::CoreCursorType> type, uint32_t id, ::IUnknown** cursor) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreDispatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HasThreadAccess(bool* value) = 0;
    virtual HRESULT __stdcall ProcessEvents(abi_t<Windows::UI::Core::CoreProcessEventsOption> options) = 0;
    virtual HRESULT __stdcall RunAsync(abi_t<Windows::UI::Core::CoreDispatcherPriority> priority, ::IUnknown* agileCallback, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall RunIdleAsync(::IUnknown* agileCallback, ::IUnknown** asyncAction) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreDispatcher2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryRunAsync(abi_t<Windows::UI::Core::CoreDispatcherPriority> priority, ::IUnknown* agileCallback, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall TryRunIdleAsync(::IUnknown* agileCallback, ::IUnknown** asyncOperation) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreDispatcherWithTaskPriority>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentPriority(abi_t<Windows::UI::Core::CoreDispatcherPriority>* value) = 0;
    virtual HRESULT __stdcall put_CurrentPriority(abi_t<Windows::UI::Core::CoreDispatcherPriority> value) = 0;
    virtual HRESULT __stdcall ShouldYield(bool* value) = 0;
    virtual HRESULT __stdcall ShouldYieldToPriority(abi_t<Windows::UI::Core::CoreDispatcherPriority> priority, bool* value) = 0;
    virtual HRESULT __stdcall StopProcessEvents() = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreInputSourceBase>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Dispatcher(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsInputEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsInputEnabled(bool value) = 0;
    virtual HRESULT __stdcall add_InputEnabled(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_InputEnabled(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreKeyboardInputSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentKeyState(abi_t<Windows::System::VirtualKey> virtualKey, abi_t<Windows::UI::Core::CoreVirtualKeyStates>* KeyState) = 0;
    virtual HRESULT __stdcall add_CharacterReceived(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_CharacterReceived(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_KeyDown(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_KeyDown(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_KeyUp(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_KeyUp(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreKeyboardInputSource2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetCurrentKeyEventDeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Core::ICorePointerInputSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReleasePointerCapture() = 0;
    virtual HRESULT __stdcall SetPointerCapture() = 0;
    virtual HRESULT __stdcall get_HasCapture(bool* value) = 0;
    virtual HRESULT __stdcall get_PointerPosition(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_PointerCursor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PointerCursor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall add_PointerCaptureLost(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerCaptureLost(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerEntered(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerEntered(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerExited(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerExited(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerMoved(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerMoved(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerReleased(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerReleased(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerWheelChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerWheelChanged(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICorePointerRedirector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_PointerRoutedAway(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerRoutedAway(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerRoutedTo(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerRoutedTo(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerRoutedReleased(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerRoutedReleased(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreTouchHitTesting>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_TouchHitTesting(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_TouchHitTesting(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindow>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AutomationHostProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Bounds(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_CustomProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Dispatcher(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FlowDirection(abi_t<Windows::UI::Core::CoreWindowFlowDirection>* value) = 0;
    virtual HRESULT __stdcall put_FlowDirection(abi_t<Windows::UI::Core::CoreWindowFlowDirection> value) = 0;
    virtual HRESULT __stdcall get_IsInputEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsInputEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_PointerCursor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PointerCursor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PointerPosition(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
    virtual HRESULT __stdcall Activate() = 0;
    virtual HRESULT __stdcall Close() = 0;
    virtual HRESULT __stdcall GetAsyncKeyState(abi_t<Windows::System::VirtualKey> virtualKey, abi_t<Windows::UI::Core::CoreVirtualKeyStates>* KeyState) = 0;
    virtual HRESULT __stdcall GetKeyState(abi_t<Windows::System::VirtualKey> virtualKey, abi_t<Windows::UI::Core::CoreVirtualKeyStates>* KeyState) = 0;
    virtual HRESULT __stdcall ReleasePointerCapture() = 0;
    virtual HRESULT __stdcall SetPointerCapture() = 0;
    virtual HRESULT __stdcall add_Activated(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_Activated(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_AutomationProviderRequested(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_AutomationProviderRequested(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_CharacterReceived(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_CharacterReceived(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_Closed(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_Closed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_InputEnabled(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_InputEnabled(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_KeyDown(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_KeyDown(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_KeyUp(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_KeyUp(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerCaptureLost(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerCaptureLost(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerEntered(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerEntered(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerExited(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerExited(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerMoved(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerMoved(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerPressed(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerPressed(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerReleased(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerReleased(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_TouchHitTesting(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_TouchHitTesting(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_PointerWheelChanged(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_PointerWheelChanged(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_SizeChanged(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_SizeChanged(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_VisibilityChanged(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_VisibilityChanged(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindow2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_PointerPosition(abi_t<Windows::Foundation::Point> value) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindow3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ClosestInteractiveBoundsRequested(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_ClosestInteractiveBoundsRequested(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall GetCurrentKeyEventDeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindow4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ResizeStarted(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_ResizeStarted(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall add_ResizeCompleted(::IUnknown* handler, abi_t<event_token>* pCookie) = 0;
    virtual HRESULT __stdcall remove_ResizeCompleted(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowDialog>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Showing(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_Showing(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall get_MaxSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_MinSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsInteractionDelayed(int32_t* value) = 0;
    virtual HRESULT __stdcall put_IsInteractionDelayed(int32_t value) = 0;
    virtual HRESULT __stdcall get_Commands(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DefaultCommandIndex(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DefaultCommandIndex(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CancelCommandIndex(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_CancelCommandIndex(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BackButtonCommand(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_BackButtonCommand(::IUnknown* value) = 0;
    virtual HRESULT __stdcall ShowAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowDialogFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithTitle(HSTRING title, ::IUnknown** coreWindowDialog) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall put_Handled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowFlyout>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Showing(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_Showing(abi_t<event_token> cookie) = 0;
    virtual HRESULT __stdcall get_MaxSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_MinSize(abi_t<Windows::Foundation::Size>* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsInteractionDelayed(int32_t* value) = 0;
    virtual HRESULT __stdcall put_IsInteractionDelayed(int32_t value) = 0;
    virtual HRESULT __stdcall get_Commands(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DefaultCommandIndex(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_DefaultCommandIndex(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BackButtonCommand(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_BackButtonCommand(::IUnknown* value) = 0;
    virtual HRESULT __stdcall ShowAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowFlyoutFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Foundation::Point> position, ::IUnknown** coreWindowFlyout) = 0;
    virtual HRESULT __stdcall CreateWithTitle(abi_t<Windows::Foundation::Point> position, HSTRING title, ::IUnknown** coreWindowFlyout) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowPopupShowingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetDesiredSize(abi_t<Windows::Foundation::Size> value) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowResizeManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall NotifyLayoutCompleted() = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ShouldWaitForLayoutCompletion(bool value) = 0;
    virtual HRESULT __stdcall get_ShouldWaitForLayoutCompletion(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowResizeManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** CoreWindowResizeManager) = 0;
};};

template <> struct abi<Windows::UI::Core::ICoreWindowStatic>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentThread(::IUnknown** ppWindow) = 0;
};};

template <> struct abi<Windows::UI::Core::IIdleDispatchedHandlerArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsDispatcherIdle(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IInitializeWithCoreWindow>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Initialize(::IUnknown* window) = 0;
};};

template <> struct abi<Windows::UI::Core::IInputEnabledEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InputEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IKeyEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VirtualKey(abi_t<Windows::System::VirtualKey>* value) = 0;
    virtual HRESULT __stdcall get_KeyStatus(abi_t<Windows::UI::Core::CorePhysicalKeyStatus>* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IKeyEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IPointerEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentPoint(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyModifiers(abi_t<Windows::System::VirtualKeyModifiers>* value) = 0;
    virtual HRESULT __stdcall GetIntermediatePoints(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Core::ISystemNavigationManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_BackRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BackRequested(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::UI::Core::ISystemNavigationManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppViewBackButtonVisibility(abi_t<Windows::UI::Core::AppViewBackButtonVisibility>* value) = 0;
    virtual HRESULT __stdcall put_AppViewBackButtonVisibility(abi_t<Windows::UI::Core::AppViewBackButtonVisibility> value) = 0;
};};

template <> struct abi<Windows::UI::Core::ISystemNavigationManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** loader) = 0;
};};

template <> struct abi<Windows::UI::Core::ITouchHitTestingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProximityEvaluation(abi_t<Windows::UI::Core::CoreProximityEvaluation>* value) = 0;
    virtual HRESULT __stdcall put_ProximityEvaluation(abi_t<Windows::UI::Core::CoreProximityEvaluation> value) = 0;
    virtual HRESULT __stdcall get_Point(abi_t<Windows::Foundation::Point>* value) = 0;
    virtual HRESULT __stdcall get_BoundingBox(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall EvaluateProximityToRect(abi_t<Windows::Foundation::Rect> controlBoundingBox, abi_t<Windows::UI::Core::CoreProximityEvaluation>* proximityEvaluation) = 0;
    virtual HRESULT __stdcall EvaluateProximityToPolygon(uint32_t __controlVerticesSize, abi_t<Windows::Foundation::Point>* controlVertices, abi_t<Windows::UI::Core::CoreProximityEvaluation>* proximityEvaluation) = 0;
};};

template <> struct abi<Windows::UI::Core::IVisibilityChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IWindowActivatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WindowActivationState(abi_t<Windows::UI::Core::CoreWindowActivationState>* value) = 0;
};};

template <> struct abi<Windows::UI::Core::IWindowSizeChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Size>* value) = 0;
};};

template <> struct abi<Windows::UI::Core::DispatchedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke() = 0;
};};

template <> struct abi<Windows::UI::Core::IdleDispatchedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* e) = 0;
};};

}
