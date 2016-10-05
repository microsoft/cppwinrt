// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::ViewManagement {

struct IAccessibilitySettings;
struct IActivationViewSwitcher;
struct IApplicationView;
struct IApplicationView2;
struct IApplicationView3;
struct IApplicationViewConsolidatedEventArgs;
struct IApplicationViewFullscreenStatics;
struct IApplicationViewInteropStatics;
struct IApplicationViewScaling;
struct IApplicationViewScalingStatics;
struct IApplicationViewStatics;
struct IApplicationViewStatics2;
struct IApplicationViewStatics3;
struct IApplicationViewSwitcherStatics;
struct IApplicationViewSwitcherStatics2;
struct IApplicationViewTitleBar;
struct IApplicationViewTransferContext;
struct IApplicationViewTransferContextStatics;
struct IInputPane;
struct IInputPane2;
struct IInputPaneControl;
struct IInputPaneStatics;
struct IInputPaneVisibilityEventArgs;
struct IProjectionManagerStatics;
struct IProjectionManagerStatics2;
struct IStatusBar;
struct IStatusBarProgressIndicator;
struct IStatusBarStatics;
struct IUISettings;
struct IUISettings2;
struct IUISettings3;
struct IUIViewSettings;
struct IUIViewSettingsStatics;
struct AccessibilitySettings;
struct ActivationViewSwitcher;
struct ApplicationView;
struct ApplicationViewConsolidatedEventArgs;
struct ApplicationViewScaling;
struct ApplicationViewTitleBar;
struct ApplicationViewTransferContext;
struct InputPane;
struct InputPaneVisibilityEventArgs;
struct StatusBar;
struct StatusBarProgressIndicator;
struct UISettings;
struct UIViewSettings;

}

namespace Windows::UI::ViewManagement {

struct IAccessibilitySettings;
struct IActivationViewSwitcher;
struct IApplicationView;
struct IApplicationView2;
struct IApplicationView3;
struct IApplicationViewConsolidatedEventArgs;
struct IApplicationViewFullscreenStatics;
struct IApplicationViewInteropStatics;
struct IApplicationViewScaling;
struct IApplicationViewScalingStatics;
struct IApplicationViewStatics;
struct IApplicationViewStatics2;
struct IApplicationViewStatics3;
struct IApplicationViewSwitcherStatics;
struct IApplicationViewSwitcherStatics2;
struct IApplicationViewTitleBar;
struct IApplicationViewTransferContext;
struct IApplicationViewTransferContextStatics;
struct IInputPane;
struct IInputPane2;
struct IInputPaneControl;
struct IInputPaneStatics;
struct IInputPaneVisibilityEventArgs;
struct IProjectionManagerStatics;
struct IProjectionManagerStatics2;
struct IStatusBar;
struct IStatusBarProgressIndicator;
struct IStatusBarStatics;
struct IUISettings;
struct IUISettings2;
struct IUISettings3;
struct IUIViewSettings;
struct IUIViewSettingsStatics;
struct AccessibilitySettings;
struct ActivationViewSwitcher;
struct ApplicationView;
struct ApplicationViewConsolidatedEventArgs;
struct ApplicationViewScaling;
struct ApplicationViewSwitcher;
struct ApplicationViewTitleBar;
struct ApplicationViewTransferContext;
struct InputPane;
struct InputPaneVisibilityEventArgs;
struct ProjectionManager;
struct StatusBar;
struct StatusBarProgressIndicator;
struct UISettings;
struct UIViewSettings;

}

namespace Windows::UI::ViewManagement {

enum class ApplicationViewBoundsMode
{
    UseVisible = 0,
    UseCoreWindow = 1,
};

enum class ApplicationViewOrientation
{
    Landscape = 0,
    Portrait = 1,
};

enum class ApplicationViewState
{
    FullScreenLandscape = 0,
    Filled = 1,
    Snapped = 2,
    FullScreenPortrait = 3,
};

enum class ApplicationViewSwitchingOptions : unsigned
{
    Default = 0x0,
    SkipAnimation = 0x1,
    ConsolidateViews = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(ApplicationViewSwitchingOptions)

enum class ApplicationViewWindowingMode
{
    Auto = 0,
    PreferredLaunchViewSize = 1,
    FullScreen = 2,
};

enum class FullScreenSystemOverlayMode
{
    Standard = 0,
    Minimal = 1,
};

enum class HandPreference
{
    LeftHanded = 0,
    RightHanded = 1,
};

enum class UIColorType
{
    Background = 0,
    Foreground = 1,
    AccentDark3 = 2,
    AccentDark2 = 3,
    AccentDark1 = 4,
    Accent = 5,
    AccentLight1 = 6,
    AccentLight2 = 7,
    AccentLight3 = 8,
    Complement = 9,
};

enum class UIElementType
{
    ActiveCaption = 0,
    Background = 1,
    ButtonFace = 2,
    ButtonText = 3,
    CaptionText = 4,
    GrayText = 5,
    Highlight = 6,
    HighlightText = 7,
    Hotlight = 8,
    InactiveCaption = 9,
    InactiveCaptionText = 10,
    Window = 11,
    WindowText = 12,
};

enum class UserInteractionMode
{
    Mouse = 0,
    Touch = 1,
};

enum class ViewSizePreference
{
    Default = 0,
    UseLess = 1,
    UseHalf = 2,
    UseMore = 3,
    UseMinimum = 4,
    UseNone = 5,
};

}

}
