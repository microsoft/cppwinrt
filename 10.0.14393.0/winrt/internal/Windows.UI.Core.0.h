// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Core {

struct CorePhysicalKeyStatus;
struct CoreProximityEvaluation;

}

namespace Windows::UI::Core {

using CorePhysicalKeyStatus = ABI::Windows::UI::Core::CorePhysicalKeyStatus;
using CoreProximityEvaluation = ABI::Windows::UI::Core::CoreProximityEvaluation;

}

namespace ABI::Windows::UI::Core {

struct DispatchedHandler;
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
struct IdleDispatchedHandler;
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

}

namespace Windows::UI::Core {

struct DispatchedHandler;
struct IdleDispatchedHandler;
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

}

namespace Windows::UI::Core {

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

}

}
