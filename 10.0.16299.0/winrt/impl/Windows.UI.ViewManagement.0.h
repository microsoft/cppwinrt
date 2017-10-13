// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct DeviceInformation;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct ICoreWindow;

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

enum class Placement;

}

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement {

enum class ApplicationViewBoundsMode : int32_t
{
    UseVisible = 0,
    UseCoreWindow = 1,
};

enum class ApplicationViewMode : int32_t
{
    Default = 0,
    CompactOverlay = 1,
};

enum class ApplicationViewOrientation : int32_t
{
    Landscape = 0,
    Portrait = 1,
};

enum class [[deprecated("ApplicationViewState may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")]] ApplicationViewState : int32_t
{
    FullScreenLandscape = 0,
    Filled = 1,
    Snapped = 2,
    FullScreenPortrait = 3,
};

enum class ApplicationViewSwitchingOptions : uint32_t
{
    Default = 0x0,
    SkipAnimation = 0x1,
    ConsolidateViews = 0x2,
};

enum class ApplicationViewWindowingMode : int32_t
{
    Auto = 0,
    PreferredLaunchViewSize = 1,
    FullScreen = 2,
};

enum class FullScreenSystemOverlayMode : int32_t
{
    Standard = 0,
    Minimal = 1,
};

enum class HandPreference : int32_t
{
    LeftHanded = 0,
    RightHanded = 1,
};

enum class UIColorType : int32_t
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

enum class UIElementType : int32_t
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
    AccentColor = 1000,
    TextHigh = 1001,
    TextMedium = 1002,
    TextLow = 1003,
    TextContrastWithHigh = 1004,
    NonTextHigh = 1005,
    NonTextMediumHigh = 1006,
    NonTextMedium = 1007,
    NonTextMediumLow = 1008,
    NonTextLow = 1009,
    PageBackground = 1010,
    PopupBackground = 1011,
    OverlayOutsidePopup = 1012,
};

enum class UserInteractionMode : int32_t
{
    Mouse = 0,
    Touch = 1,
};

enum class ViewSizePreference : int32_t
{
    Default = 0,
    UseLess = 1,
    UseHalf = 2,
    UseMore = 3,
    UseMinimum = 4,
    UseNone = 5,
    Custom = 6,
};

struct IAccessibilitySettings;
struct IActivationViewSwitcher;
struct IApplicationView;
struct IApplicationView2;
struct IApplicationView3;
struct IApplicationView4;
struct IApplicationViewConsolidatedEventArgs;
struct IApplicationViewConsolidatedEventArgs2;
struct IApplicationViewFullscreenStatics;
struct IApplicationViewInteropStatics;
struct IApplicationViewScaling;
struct IApplicationViewScalingStatics;
struct IApplicationViewStatics;
struct IApplicationViewStatics2;
struct IApplicationViewStatics3;
struct IApplicationViewSwitcherStatics;
struct IApplicationViewSwitcherStatics2;
struct IApplicationViewSwitcherStatics3;
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
struct IUISettings4;
struct IUIViewSettings;
struct IUIViewSettingsStatics;
struct IViewModePreferences;
struct IViewModePreferencesStatics;
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
struct ViewModePreferences;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::UI::ViewManagement::ApplicationViewSwitchingOptions> : std::true_type {};
template <> struct category<Windows::UI::ViewManagement::IAccessibilitySettings>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IActivationViewSwitcher>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationView>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationView2>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationView3>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationView4>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewInteropStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewScaling>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewScalingStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewTitleBar>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewTransferContext>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IInputPane>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IInputPane2>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IInputPaneControl>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IInputPaneStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IProjectionManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IProjectionManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IStatusBar>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IStatusBarProgressIndicator>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IStatusBarStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IUISettings>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IUISettings2>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IUISettings3>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IUISettings4>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IUIViewSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IUIViewSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IViewModePreferences>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::IViewModePreferencesStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::AccessibilitySettings>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ActivationViewSwitcher>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationView>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewScaling>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewSwitcher>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewTitleBar>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewTransferContext>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::InputPane>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::InputPaneVisibilityEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ProjectionManager>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::StatusBar>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::StatusBarProgressIndicator>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::UISettings>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::UIViewSettings>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ViewModePreferences>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewBoundsMode>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewMode>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewOrientation>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewState>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewSwitchingOptions>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::ApplicationViewWindowingMode>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::FullScreenSystemOverlayMode>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::HandPreference>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::UIColorType>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::UIElementType>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::UserInteractionMode>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::ViewSizePreference>{ using type = enum_category; };
template <> struct name<Windows::UI::ViewManagement::IAccessibilitySettings>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IAccessibilitySettings" }; };
template <> struct name<Windows::UI::ViewManagement::IActivationViewSwitcher>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IActivationViewSwitcher" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationView>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationView2>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView2" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationView3>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView3" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationView4>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationView4" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs2" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewFullscreenStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewInteropStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewInteropStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewScaling>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewScaling" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewScalingStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewScalingStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewStatics2>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewStatics2" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewStatics3>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewStatics3" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewTitleBar>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewTitleBar" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewTransferContext>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewTransferContext" }; };
template <> struct name<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IApplicationViewTransferContextStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IInputPane>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPane" }; };
template <> struct name<Windows::UI::ViewManagement::IInputPane2>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPane2" }; };
template <> struct name<Windows::UI::ViewManagement::IInputPaneControl>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPaneControl" }; };
template <> struct name<Windows::UI::ViewManagement::IInputPaneStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPaneStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs" }; };
template <> struct name<Windows::UI::ViewManagement::IProjectionManagerStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IProjectionManagerStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IProjectionManagerStatics2>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IProjectionManagerStatics2" }; };
template <> struct name<Windows::UI::ViewManagement::IStatusBar>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IStatusBar" }; };
template <> struct name<Windows::UI::ViewManagement::IStatusBarProgressIndicator>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IStatusBarProgressIndicator" }; };
template <> struct name<Windows::UI::ViewManagement::IStatusBarStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IStatusBarStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IUISettings>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings" }; };
template <> struct name<Windows::UI::ViewManagement::IUISettings2>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings2" }; };
template <> struct name<Windows::UI::ViewManagement::IUISettings3>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings3" }; };
template <> struct name<Windows::UI::ViewManagement::IUISettings4>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IUISettings4" }; };
template <> struct name<Windows::UI::ViewManagement::IUIViewSettings>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IUIViewSettings" }; };
template <> struct name<Windows::UI::ViewManagement::IUIViewSettingsStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IUIViewSettingsStatics" }; };
template <> struct name<Windows::UI::ViewManagement::IViewModePreferences>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IViewModePreferences" }; };
template <> struct name<Windows::UI::ViewManagement::IViewModePreferencesStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.IViewModePreferencesStatics" }; };
template <> struct name<Windows::UI::ViewManagement::AccessibilitySettings>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.AccessibilitySettings" }; };
template <> struct name<Windows::UI::ViewManagement::ActivationViewSwitcher>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ActivationViewSwitcher" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationView>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationView" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewScaling>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewScaling" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewSwitcher>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewSwitcher" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewTitleBar>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewTitleBar" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewTransferContext>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewTransferContext" }; };
template <> struct name<Windows::UI::ViewManagement::InputPane>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.InputPane" }; };
template <> struct name<Windows::UI::ViewManagement::InputPaneVisibilityEventArgs>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.InputPaneVisibilityEventArgs" }; };
template <> struct name<Windows::UI::ViewManagement::ProjectionManager>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ProjectionManager" }; };
template <> struct name<Windows::UI::ViewManagement::StatusBar>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.StatusBar" }; };
template <> struct name<Windows::UI::ViewManagement::StatusBarProgressIndicator>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.StatusBarProgressIndicator" }; };
template <> struct name<Windows::UI::ViewManagement::UISettings>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.UISettings" }; };
template <> struct name<Windows::UI::ViewManagement::UIViewSettings>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.UIViewSettings" }; };
template <> struct name<Windows::UI::ViewManagement::ViewModePreferences>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ViewModePreferences" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewBoundsMode>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewBoundsMode" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewMode>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewMode" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewOrientation>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewOrientation" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewState>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewState" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewSwitchingOptions>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewSwitchingOptions" }; };
template <> struct name<Windows::UI::ViewManagement::ApplicationViewWindowingMode>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ApplicationViewWindowingMode" }; };
template <> struct name<Windows::UI::ViewManagement::FullScreenSystemOverlayMode>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.FullScreenSystemOverlayMode" }; };
template <> struct name<Windows::UI::ViewManagement::HandPreference>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.HandPreference" }; };
template <> struct name<Windows::UI::ViewManagement::UIColorType>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.UIColorType" }; };
template <> struct name<Windows::UI::ViewManagement::UIElementType>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.UIElementType" }; };
template <> struct name<Windows::UI::ViewManagement::UserInteractionMode>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.UserInteractionMode" }; };
template <> struct name<Windows::UI::ViewManagement::ViewSizePreference>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.ViewSizePreference" }; };
template <> struct guid<Windows::UI::ViewManagement::IAccessibilitySettings>{ static constexpr GUID value{ 0xFE0E8147,0xC4C0,0x4562,{ 0xB9,0x62,0x13,0x27,0xB5,0x2A,0xD5,0xB9 } }; };
template <> struct guid<Windows::UI::ViewManagement::IActivationViewSwitcher>{ static constexpr GUID value{ 0xDCA71BB6,0x7350,0x492B,{ 0xAA,0xC7,0xC8,0xA1,0x3D,0x72,0x24,0xAD } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationView>{ static constexpr GUID value{ 0xD222D519,0x4361,0x451E,{ 0x96,0xC4,0x60,0xF4,0xF9,0x74,0x2D,0xB0 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationView2>{ static constexpr GUID value{ 0xE876B196,0xA545,0x40DC,{ 0xB5,0x94,0x45,0x0C,0xBA,0x68,0xCC,0x00 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationView3>{ static constexpr GUID value{ 0x903C9CE5,0x793A,0x4FDF,{ 0xA2,0xB2,0xAF,0x1A,0xC2,0x1E,0x31,0x08 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationView4>{ static constexpr GUID value{ 0x15E5CBEC,0x9E0F,0x46B5,{ 0xBC,0x3F,0x9B,0xF6,0x53,0xE7,0x4B,0x5E } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>{ static constexpr GUID value{ 0x514449EC,0x7EA2,0x4DE7,{ 0xA6,0xA6,0x7D,0xFB,0xAA,0xEB,0xB6,0xFB } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>{ static constexpr GUID value{ 0x1C199ECC,0x6DC1,0x40F4,{ 0xAF,0xEE,0x07,0xD9,0xEA,0x29,0x64,0x30 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>{ static constexpr GUID value{ 0xBC792EBD,0x64FE,0x4B65,{ 0xA0,0xC0,0x90,0x1C,0xE2,0xB6,0x86,0x36 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewInteropStatics>{ static constexpr GUID value{ 0xC446FB5D,0x4793,0x4896,{ 0xA8,0xE2,0xBE,0x57,0xA8,0xBB,0x0F,0x50 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewScaling>{ static constexpr GUID value{ 0x1D0DDC23,0x23F3,0x4B2D,{ 0x84,0xFE,0x74,0xBF,0x37,0xB4,0x8B,0x66 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewScalingStatics>{ static constexpr GUID value{ 0xB08FECF0,0xB946,0x45C8,{ 0xA5,0xE3,0x71,0xF5,0xAA,0x78,0xF8,0x61 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewStatics>{ static constexpr GUID value{ 0x010A6306,0xC433,0x44E5,{ 0xA9,0xF2,0xBD,0x84,0xD4,0x03,0x0A,0x95 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewStatics2>{ static constexpr GUID value{ 0xAF338AE5,0xCF64,0x423C,{ 0x85,0xE5,0xF3,0xE7,0x24,0x48,0xFB,0x23 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewStatics3>{ static constexpr GUID value{ 0xA28D7594,0x8C41,0x4E13,{ 0x97,0x19,0x51,0x64,0x79,0x6F,0xE4,0xC7 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>{ static constexpr GUID value{ 0x975F2F1E,0xE656,0x4C5E,{ 0xA0,0xA1,0x71,0x7C,0x6F,0xFA,0x7D,0x64 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>{ static constexpr GUID value{ 0x60E995CD,0x4FC2,0x48C4,{ 0xB8,0xE3,0x39,0x5F,0x2B,0x9F,0x0F,0xC1 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>{ static constexpr GUID value{ 0x92059420,0x80A7,0x486D,{ 0xB2,0x1F,0xC7,0xA4,0xA2,0x42,0xA3,0x83 } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewTitleBar>{ static constexpr GUID value{ 0x00924AC0,0x932B,0x4A6B,{ 0x9C,0x4B,0xDC,0x38,0xC8,0x24,0x78,0xCE } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewTransferContext>{ static constexpr GUID value{ 0x8574BC63,0x3C17,0x408E,{ 0x94,0x08,0x8A,0x1A,0x9E,0xA8,0x1B,0xFA } }; };
template <> struct guid<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>{ static constexpr GUID value{ 0x15A89D92,0xDD79,0x4B0B,{ 0xBC,0x47,0xD5,0xF1,0x95,0xF1,0x46,0x61 } }; };
template <> struct guid<Windows::UI::ViewManagement::IInputPane>{ static constexpr GUID value{ 0x640ADA70,0x06F3,0x4C87,{ 0xA6,0x78,0x98,0x29,0xC9,0x12,0x7C,0x28 } }; };
template <> struct guid<Windows::UI::ViewManagement::IInputPane2>{ static constexpr GUID value{ 0x8A6B3F26,0x7090,0x4793,{ 0x94,0x4C,0xC3,0xF2,0xCD,0xE2,0x62,0x76 } }; };
template <> struct guid<Windows::UI::ViewManagement::IInputPaneControl>{ static constexpr GUID value{ 0x088BB24F,0x962F,0x489D,{ 0xAA,0x6E,0xC6,0xBE,0x1A,0x0A,0x6E,0x52 } }; };
template <> struct guid<Windows::UI::ViewManagement::IInputPaneStatics>{ static constexpr GUID value{ 0x95F4AF3A,0xEF47,0x424A,{ 0x97,0x41,0xFD,0x28,0x15,0xEB,0xA2,0xBD } }; };
template <> struct guid<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>{ static constexpr GUID value{ 0xD243E016,0xD907,0x4FCC,{ 0xBB,0x8D,0xF7,0x7B,0xAA,0x50,0x28,0xF1 } }; };
template <> struct guid<Windows::UI::ViewManagement::IProjectionManagerStatics>{ static constexpr GUID value{ 0xB65F913D,0xE2F0,0x4FFD,{ 0xBA,0x95,0x34,0x24,0x16,0x47,0xE4,0x5C } }; };
template <> struct guid<Windows::UI::ViewManagement::IProjectionManagerStatics2>{ static constexpr GUID value{ 0xF33D2F43,0x2749,0x4CDE,{ 0xB9,0x77,0xC0,0xC4,0x1E,0x74,0x15,0xD1 } }; };
template <> struct guid<Windows::UI::ViewManagement::IStatusBar>{ static constexpr GUID value{ 0x0FFCC5BF,0x98D0,0x4864,{ 0xB1,0xE8,0xB3,0xF4,0x02,0x0B,0xE8,0xB4 } }; };
template <> struct guid<Windows::UI::ViewManagement::IStatusBarProgressIndicator>{ static constexpr GUID value{ 0x76CB2670,0xA3D7,0x49CF,{ 0x82,0x00,0x4F,0x3E,0xED,0xCA,0x27,0xBB } }; };
template <> struct guid<Windows::UI::ViewManagement::IStatusBarStatics>{ static constexpr GUID value{ 0x8B463FDF,0x422F,0x4561,{ 0x88,0x06,0xFB,0x12,0x89,0xCA,0xDF,0xB7 } }; };
template <> struct guid<Windows::UI::ViewManagement::IUISettings>{ static constexpr GUID value{ 0x85361600,0x1C63,0x4627,{ 0xBC,0xB1,0x3A,0x89,0xE0,0xBC,0x9C,0x55 } }; };
template <> struct guid<Windows::UI::ViewManagement::IUISettings2>{ static constexpr GUID value{ 0xBAD82401,0x2721,0x44F9,{ 0xBB,0x91,0x2B,0xB2,0x28,0xBE,0x44,0x2F } }; };
template <> struct guid<Windows::UI::ViewManagement::IUISettings3>{ static constexpr GUID value{ 0x03021BE4,0x5254,0x4781,{ 0x81,0x94,0x51,0x68,0xF7,0xD0,0x6D,0x7B } }; };
template <> struct guid<Windows::UI::ViewManagement::IUISettings4>{ static constexpr GUID value{ 0x52BB3002,0x919B,0x4D6B,{ 0x9B,0x78,0x8D,0xD6,0x6F,0xF4,0xB9,0x3B } }; };
template <> struct guid<Windows::UI::ViewManagement::IUIViewSettings>{ static constexpr GUID value{ 0xC63657F6,0x8850,0x470D,{ 0x88,0xF8,0x45,0x5E,0x16,0xEA,0x2C,0x26 } }; };
template <> struct guid<Windows::UI::ViewManagement::IUIViewSettingsStatics>{ static constexpr GUID value{ 0x595C97A5,0xF8F6,0x41CF,{ 0xB0,0xFB,0xAA,0xCD,0xB8,0x1F,0xD5,0xF6 } }; };
template <> struct guid<Windows::UI::ViewManagement::IViewModePreferences>{ static constexpr GUID value{ 0x878FCD3A,0x0B99,0x42C9,{ 0x84,0xD0,0xD3,0xF1,0xD4,0x03,0x55,0x4B } }; };
template <> struct guid<Windows::UI::ViewManagement::IViewModePreferencesStatics>{ static constexpr GUID value{ 0x69B60A65,0x5DE5,0x40D8,{ 0x83,0x06,0x38,0x33,0xDF,0x7A,0x22,0x74 } }; };
template <> struct default_interface<Windows::UI::ViewManagement::AccessibilitySettings>{ using type = Windows::UI::ViewManagement::IAccessibilitySettings; };
template <> struct default_interface<Windows::UI::ViewManagement::ActivationViewSwitcher>{ using type = Windows::UI::ViewManagement::IActivationViewSwitcher; };
template <> struct default_interface<Windows::UI::ViewManagement::ApplicationView>{ using type = Windows::UI::ViewManagement::IApplicationView; };
template <> struct default_interface<Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs>{ using type = Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs; };
template <> struct default_interface<Windows::UI::ViewManagement::ApplicationViewScaling>{ using type = Windows::UI::ViewManagement::IApplicationViewScaling; };
template <> struct default_interface<Windows::UI::ViewManagement::ApplicationViewTitleBar>{ using type = Windows::UI::ViewManagement::IApplicationViewTitleBar; };
template <> struct default_interface<Windows::UI::ViewManagement::ApplicationViewTransferContext>{ using type = Windows::UI::ViewManagement::IApplicationViewTransferContext; };
template <> struct default_interface<Windows::UI::ViewManagement::InputPane>{ using type = Windows::UI::ViewManagement::IInputPane; };
template <> struct default_interface<Windows::UI::ViewManagement::InputPaneVisibilityEventArgs>{ using type = Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs; };
template <> struct default_interface<Windows::UI::ViewManagement::StatusBar>{ using type = Windows::UI::ViewManagement::IStatusBar; };
template <> struct default_interface<Windows::UI::ViewManagement::StatusBarProgressIndicator>{ using type = Windows::UI::ViewManagement::IStatusBarProgressIndicator; };
template <> struct default_interface<Windows::UI::ViewManagement::UISettings>{ using type = Windows::UI::ViewManagement::IUISettings; };
template <> struct default_interface<Windows::UI::ViewManagement::UIViewSettings>{ using type = Windows::UI::ViewManagement::IUIViewSettings; };
template <> struct default_interface<Windows::UI::ViewManagement::ViewModePreferences>{ using type = Windows::UI::ViewManagement::IViewModePreferences; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IAccessibilitySettings
{
    bool HighContrast() const noexcept;
    hstring HighContrastScheme() const noexcept;
    event_token HighContrastChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::Foundation::IInspectable> const& handler) const;
    using HighContrastChanged_revoker = event_revoker<Windows::UI::ViewManagement::IAccessibilitySettings>;
    HighContrastChanged_revoker HighContrastChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::Foundation::IInspectable> const& handler) const;
    void HighContrastChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::ViewManagement::IAccessibilitySettings> { template <typename D> using type = consume_Windows_UI_ViewManagement_IAccessibilitySettings<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IActivationViewSwitcher
{
    Windows::Foundation::IAsyncAction ShowAsStandaloneAsync(int32_t viewId) const;
    Windows::Foundation::IAsyncAction ShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference) const;
    bool IsViewPresentedOnActivationVirtualDesktop(int32_t viewId) const;
};
template <> struct consume<Windows::UI::ViewManagement::IActivationViewSwitcher> { template <typename D> using type = consume_Windows_UI_ViewManagement_IActivationViewSwitcher<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationView
{
    Windows::UI::ViewManagement::ApplicationViewOrientation Orientation() const noexcept;
    bool AdjacentToLeftDisplayEdge() const noexcept;
    bool AdjacentToRightDisplayEdge() const noexcept;
    [[deprecated("To check full screen mode, use IsFullScreenMode. To check if the view is adjacent to both edges, use AdjacentToLeftDisplayEdge and AdjacentToRightDisplayEdge. For more info, see MSDN.")]] bool IsFullScreen() const noexcept;
    bool IsOnLockScreen() const noexcept;
    bool IsScreenCaptureEnabled() const noexcept;
    void IsScreenCaptureEnabled(bool value) const noexcept;
    void Title(param::hstring const& value) const noexcept;
    hstring Title() const noexcept;
    int32_t Id() const noexcept;
    event_token Consolidated(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> const& handler) const;
    using Consolidated_revoker = event_revoker<Windows::UI::ViewManagement::IApplicationView>;
    Consolidated_revoker Consolidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> const& handler) const;
    void Consolidated(event_token const& token) const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationView> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationView2
{
    [[deprecated("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")]] bool SuppressSystemOverlays() const noexcept;
    [[deprecated("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")]] void SuppressSystemOverlays(bool value) const noexcept;
    Windows::Foundation::Rect VisibleBounds() const noexcept;
    event_token VisibleBoundsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::Foundation::IInspectable> const& handler) const;
    using VisibleBoundsChanged_revoker = event_revoker<Windows::UI::ViewManagement::IApplicationView2>;
    VisibleBoundsChanged_revoker VisibleBoundsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::Foundation::IInspectable> const& handler) const;
    void VisibleBoundsChanged(event_token const& token) const;
    bool SetDesiredBoundsMode(Windows::UI::ViewManagement::ApplicationViewBoundsMode const& boundsMode) const;
    Windows::UI::ViewManagement::ApplicationViewBoundsMode DesiredBoundsMode() const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationView2> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView2<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationView3
{
    Windows::UI::ViewManagement::ApplicationViewTitleBar TitleBar() const noexcept;
    Windows::UI::ViewManagement::FullScreenSystemOverlayMode FullScreenSystemOverlayMode() const noexcept;
    void FullScreenSystemOverlayMode(Windows::UI::ViewManagement::FullScreenSystemOverlayMode const& value) const noexcept;
    bool IsFullScreenMode() const noexcept;
    bool TryEnterFullScreenMode() const;
    void ExitFullScreenMode() const;
    void ShowStandardSystemOverlays() const;
    bool TryResizeView(Windows::Foundation::Size const& value) const;
    void SetPreferredMinSize(Windows::Foundation::Size const& minSize) const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationView3> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView3<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationView4
{
    Windows::UI::ViewManagement::ApplicationViewMode ViewMode() const noexcept;
    bool IsViewModeSupported(Windows::UI::ViewManagement::ApplicationViewMode const& viewMode) const;
    Windows::Foundation::IAsyncOperation<bool> TryEnterViewModeAsync(Windows::UI::ViewManagement::ApplicationViewMode const& viewMode) const;
    Windows::Foundation::IAsyncOperation<bool> TryEnterViewModeAsync(Windows::UI::ViewManagement::ApplicationViewMode const& viewMode, Windows::UI::ViewManagement::ViewModePreferences const& viewModePreferences) const;
    Windows::Foundation::IAsyncOperation<bool> TryConsolidateAsync() const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationView4> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationView4<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs
{
    bool IsUserInitiated() const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs2
{
    bool IsAppInitiated() const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewFullscreenStatics
{
    [[deprecated("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")]] bool TryUnsnapToFullscreen() const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewFullscreenStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewInteropStatics
{
    int32_t GetApplicationViewIdForWindow(Windows::UI::Core::ICoreWindow const& window) const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewInteropStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewInteropStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewScaling
{
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewScaling> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewScaling<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewScalingStatics
{
    bool DisableLayoutScaling() const noexcept;
    bool TrySetDisableLayoutScaling(bool disableLayoutScaling) const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewScalingStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewScalingStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewStatics
{
    [[deprecated("Value may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")]] Windows::UI::ViewManagement::ApplicationViewState Value() const noexcept;
    [[deprecated("TryUnsnap may be altered or unavailable for releases after Windows 8.1. Apps can be continuously resized, but cannot be snapped, starting in Windows 8.1.")]] bool TryUnsnap() const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewStatics2
{
    Windows::UI::ViewManagement::ApplicationView GetForCurrentView() const;
    bool TerminateAppOnFinalViewClose() const noexcept;
    void TerminateAppOnFinalViewClose(bool value) const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewStatics2> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewStatics2<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewStatics3
{
    Windows::UI::ViewManagement::ApplicationViewWindowingMode PreferredLaunchWindowingMode() const noexcept;
    void PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode const& value) const noexcept;
    Windows::Foundation::Size PreferredLaunchViewSize() const noexcept;
    void PreferredLaunchViewSize(Windows::Foundation::Size const& value) const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewStatics3> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewStatics3<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics
{
    void DisableShowingMainViewOnActivation() const;
    Windows::Foundation::IAsyncOperation<bool> TryShowAsStandaloneAsync(int32_t viewId) const;
    Windows::Foundation::IAsyncOperation<bool> TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference) const;
    Windows::Foundation::IAsyncOperation<bool> TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference const& anchorSizePreference) const;
    Windows::Foundation::IAsyncAction SwitchAsync(int32_t viewId) const;
    Windows::Foundation::IAsyncAction SwitchAsync(int32_t toViewId, int32_t fromViewId) const;
    Windows::Foundation::IAsyncAction SwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options) const;
    Windows::Foundation::IAsyncOperation<bool> PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options) const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics2
{
    void DisableSystemViewActivationPolicy() const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics2<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics3
{
    Windows::Foundation::IAsyncOperation<bool> TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode) const;
    Windows::Foundation::IAsyncOperation<bool> TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode, Windows::UI::ViewManagement::ViewModePreferences const& viewModePreferences) const;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics3<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewTitleBar
{
    void ForegroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ForegroundColor() const noexcept;
    void BackgroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> BackgroundColor() const noexcept;
    void ButtonForegroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonForegroundColor() const noexcept;
    void ButtonBackgroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonBackgroundColor() const noexcept;
    void ButtonHoverForegroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonHoverForegroundColor() const noexcept;
    void ButtonHoverBackgroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonHoverBackgroundColor() const noexcept;
    void ButtonPressedForegroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonPressedForegroundColor() const noexcept;
    void ButtonPressedBackgroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonPressedBackgroundColor() const noexcept;
    void InactiveForegroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> InactiveForegroundColor() const noexcept;
    void InactiveBackgroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> InactiveBackgroundColor() const noexcept;
    void ButtonInactiveForegroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonInactiveForegroundColor() const noexcept;
    void ButtonInactiveBackgroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonInactiveBackgroundColor() const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewTitleBar> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewTransferContext
{
    int32_t ViewId() const noexcept;
    void ViewId(int32_t value) const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewTransferContext> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewTransferContext<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IApplicationViewTransferContextStatics
{
    hstring DataPackageFormatId() const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IApplicationViewTransferContextStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IInputPane
{
    event_token Showing(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const;
    using Showing_revoker = event_revoker<Windows::UI::ViewManagement::IInputPane>;
    Showing_revoker Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const;
    void Showing(event_token const& token) const;
    event_token Hiding(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const;
    using Hiding_revoker = event_revoker<Windows::UI::ViewManagement::IInputPane>;
    Hiding_revoker Hiding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const;
    void Hiding(event_token const& token) const;
    Windows::Foundation::Rect OccludedRect() const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IInputPane> { template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPane<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IInputPane2
{
    bool TryShow() const;
    bool TryHide() const;
};
template <> struct consume<Windows::UI::ViewManagement::IInputPane2> { template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPane2<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IInputPaneControl
{
    bool Visible() const noexcept;
    void Visible(bool value) const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IInputPaneControl> { template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPaneControl<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IInputPaneStatics
{
    Windows::UI::ViewManagement::InputPane GetForCurrentView() const;
};
template <> struct consume<Windows::UI::ViewManagement::IInputPaneStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPaneStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs
{
    Windows::Foundation::Rect OccludedRect() const noexcept;
    void EnsuredFocusedElementInView(bool value) const noexcept;
    bool EnsuredFocusedElementInView() const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs> { template <typename D> using type = consume_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IProjectionManagerStatics
{
    Windows::Foundation::IAsyncAction StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const;
    Windows::Foundation::IAsyncAction SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId) const;
    Windows::Foundation::IAsyncAction StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const;
    bool ProjectionDisplayAvailable() const noexcept;
    event_token ProjectionDisplayAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using ProjectionDisplayAvailableChanged_revoker = event_revoker<Windows::UI::ViewManagement::IProjectionManagerStatics>;
    ProjectionDisplayAvailableChanged_revoker ProjectionDisplayAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void ProjectionDisplayAvailableChanged(event_token const& token) const;
};
template <> struct consume<Windows::UI::ViewManagement::IProjectionManagerStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IProjectionManagerStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IProjectionManagerStatics2
{
    Windows::Foundation::IAsyncAction StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Devices::Enumeration::DeviceInformation const& displayDeviceInfo) const;
    Windows::Foundation::IAsyncOperation<bool> RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<bool> RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& prefferedPlacement) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::UI::ViewManagement::IProjectionManagerStatics2> { template <typename D> using type = consume_Windows_UI_ViewManagement_IProjectionManagerStatics2<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IStatusBar
{
    Windows::Foundation::IAsyncAction ShowAsync() const;
    Windows::Foundation::IAsyncAction HideAsync() const;
    double BackgroundOpacity() const noexcept;
    void BackgroundOpacity(double value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> ForegroundColor() const noexcept;
    void ForegroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::Foundation::IReference<Windows::UI::Color> BackgroundColor() const noexcept;
    void BackgroundColor(optional<Windows::UI::Color> const& value) const noexcept;
    Windows::UI::ViewManagement::StatusBarProgressIndicator ProgressIndicator() const noexcept;
    Windows::Foundation::Rect OccludedRect() const noexcept;
    event_token Showing(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const;
    using Showing_revoker = event_revoker<Windows::UI::ViewManagement::IStatusBar>;
    Showing_revoker Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const;
    void Showing(event_token const& token) const;
    event_token Hiding(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const;
    using Hiding_revoker = event_revoker<Windows::UI::ViewManagement::IStatusBar>;
    Hiding_revoker Hiding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const;
    void Hiding(event_token const& token) const;
};
template <> struct consume<Windows::UI::ViewManagement::IStatusBar> { template <typename D> using type = consume_Windows_UI_ViewManagement_IStatusBar<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator
{
    Windows::Foundation::IAsyncAction ShowAsync() const;
    Windows::Foundation::IAsyncAction HideAsync() const;
    hstring Text() const noexcept;
    void Text(param::hstring const& value) const noexcept;
    Windows::Foundation::IReference<double> ProgressValue() const noexcept;
    void ProgressValue(optional<double> const& value) const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IStatusBarProgressIndicator> { template <typename D> using type = consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IStatusBarStatics
{
    Windows::UI::ViewManagement::StatusBar GetForCurrentView() const;
};
template <> struct consume<Windows::UI::ViewManagement::IStatusBarStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IStatusBarStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IUISettings
{
    Windows::UI::ViewManagement::HandPreference HandPreference() const noexcept;
    Windows::Foundation::Size CursorSize() const noexcept;
    Windows::Foundation::Size ScrollBarSize() const noexcept;
    Windows::Foundation::Size ScrollBarArrowSize() const noexcept;
    Windows::Foundation::Size ScrollBarThumbBoxSize() const noexcept;
    uint32_t MessageDuration() const noexcept;
    bool AnimationsEnabled() const noexcept;
    bool CaretBrowsingEnabled() const noexcept;
    uint32_t CaretBlinkRate() const noexcept;
    uint32_t CaretWidth() const noexcept;
    uint32_t DoubleClickTime() const noexcept;
    uint32_t MouseHoverTime() const noexcept;
    Windows::UI::Color UIElementColor(Windows::UI::ViewManagement::UIElementType const& desiredElement) const;
};
template <> struct consume<Windows::UI::ViewManagement::IUISettings> { template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IUISettings2
{
    double TextScaleFactor() const noexcept;
    event_token TextScaleFactorChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
    using TextScaleFactorChanged_revoker = event_revoker<Windows::UI::ViewManagement::IUISettings2>;
    TextScaleFactorChanged_revoker TextScaleFactorChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
    void TextScaleFactorChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::ViewManagement::IUISettings2> { template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings2<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IUISettings3
{
    Windows::UI::Color GetColorValue(Windows::UI::ViewManagement::UIColorType const& desiredColor) const;
    event_token ColorValuesChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
    using ColorValuesChanged_revoker = event_revoker<Windows::UI::ViewManagement::IUISettings3>;
    ColorValuesChanged_revoker ColorValuesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
    void ColorValuesChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::ViewManagement::IUISettings3> { template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings3<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IUISettings4
{
    bool AdvancedEffectsEnabled() const noexcept;
    event_token AdvancedEffectsEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
    using AdvancedEffectsEnabledChanged_revoker = event_revoker<Windows::UI::ViewManagement::IUISettings4>;
    AdvancedEffectsEnabledChanged_revoker AdvancedEffectsEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const;
    void AdvancedEffectsEnabledChanged(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::ViewManagement::IUISettings4> { template <typename D> using type = consume_Windows_UI_ViewManagement_IUISettings4<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IUIViewSettings
{
    Windows::UI::ViewManagement::UserInteractionMode UserInteractionMode() const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IUIViewSettings> { template <typename D> using type = consume_Windows_UI_ViewManagement_IUIViewSettings<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IUIViewSettingsStatics
{
    Windows::UI::ViewManagement::UIViewSettings GetForCurrentView() const;
};
template <> struct consume<Windows::UI::ViewManagement::IUIViewSettingsStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IUIViewSettingsStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IViewModePreferences
{
    Windows::UI::ViewManagement::ViewSizePreference ViewSizePreference() const noexcept;
    void ViewSizePreference(Windows::UI::ViewManagement::ViewSizePreference const& value) const noexcept;
    Windows::Foundation::Size CustomSize() const noexcept;
    void CustomSize(Windows::Foundation::Size const& value) const noexcept;
};
template <> struct consume<Windows::UI::ViewManagement::IViewModePreferences> { template <typename D> using type = consume_Windows_UI_ViewManagement_IViewModePreferences<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_IViewModePreferencesStatics
{
    Windows::UI::ViewManagement::ViewModePreferences CreateDefault(Windows::UI::ViewManagement::ApplicationViewMode const& mode) const;
};
template <> struct consume<Windows::UI::ViewManagement::IViewModePreferencesStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_IViewModePreferencesStatics<D>; };

template <> struct abi<Windows::UI::ViewManagement::IAccessibilitySettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HighContrast(bool* value) = 0;
    virtual HRESULT __stdcall get_HighContrastScheme(HSTRING* value) = 0;
    virtual HRESULT __stdcall add_HighContrastChanged(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_HighContrastChanged(event_token cookie) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IActivationViewSwitcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowAsStandaloneAsync(int32_t viewId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowAsStandaloneWithSizePreferenceAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall IsViewPresentedOnActivationVirtualDesktop(int32_t viewId, bool* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Orientation(Windows::UI::ViewManagement::ApplicationViewOrientation* value) = 0;
    virtual HRESULT __stdcall get_AdjacentToLeftDisplayEdge(bool* value) = 0;
    virtual HRESULT __stdcall get_AdjacentToRightDisplayEdge(bool* value) = 0;
    virtual HRESULT __stdcall get_IsFullScreen(bool* value) = 0;
    virtual HRESULT __stdcall get_IsOnLockScreen(bool* value) = 0;
    virtual HRESULT __stdcall get_IsScreenCaptureEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsScreenCaptureEnabled(bool value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Id(int32_t* value) = 0;
    virtual HRESULT __stdcall add_Consolidated(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Consolidated(event_token token) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationView2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SuppressSystemOverlays(bool* value) = 0;
    virtual HRESULT __stdcall put_SuppressSystemOverlays(bool value) = 0;
    virtual HRESULT __stdcall get_VisibleBounds(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall add_VisibleBoundsChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_VisibleBoundsChanged(event_token token) = 0;
    virtual HRESULT __stdcall SetDesiredBoundsMode(Windows::UI::ViewManagement::ApplicationViewBoundsMode boundsMode, bool* success) = 0;
    virtual HRESULT __stdcall get_DesiredBoundsMode(Windows::UI::ViewManagement::ApplicationViewBoundsMode* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationView3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TitleBar(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FullScreenSystemOverlayMode(Windows::UI::ViewManagement::FullScreenSystemOverlayMode* value) = 0;
    virtual HRESULT __stdcall put_FullScreenSystemOverlayMode(Windows::UI::ViewManagement::FullScreenSystemOverlayMode value) = 0;
    virtual HRESULT __stdcall get_IsFullScreenMode(bool* value) = 0;
    virtual HRESULT __stdcall TryEnterFullScreenMode(bool* success) = 0;
    virtual HRESULT __stdcall ExitFullScreenMode() = 0;
    virtual HRESULT __stdcall ShowStandardSystemOverlays() = 0;
    virtual HRESULT __stdcall TryResizeView(Windows::Foundation::Size value, bool* success) = 0;
    virtual HRESULT __stdcall SetPreferredMinSize(Windows::Foundation::Size minSize) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationView4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViewMode(Windows::UI::ViewManagement::ApplicationViewMode* value) = 0;
    virtual HRESULT __stdcall IsViewModeSupported(Windows::UI::ViewManagement::ApplicationViewMode viewMode, bool* isViewModeSupported) = 0;
    virtual HRESULT __stdcall TryEnterViewModeAsync(Windows::UI::ViewManagement::ApplicationViewMode viewMode, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryEnterViewModeWithPreferencesAsync(Windows::UI::ViewManagement::ApplicationViewMode viewMode, ::IUnknown* viewModePreferences, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryConsolidateAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsUserInitiated(bool* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAppInitiated(bool* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryUnsnapToFullscreen(bool* success) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewInteropStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetApplicationViewIdForWindow(::IUnknown* window, int32_t* id) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewScaling>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewScalingStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisableLayoutScaling(bool* value) = 0;
    virtual HRESULT __stdcall TrySetDisableLayoutScaling(bool disableLayoutScaling, bool* success) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Value(Windows::UI::ViewManagement::ApplicationViewState* value) = 0;
    virtual HRESULT __stdcall TryUnsnap(bool* success) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** current) = 0;
    virtual HRESULT __stdcall get_TerminateAppOnFinalViewClose(bool* value) = 0;
    virtual HRESULT __stdcall put_TerminateAppOnFinalViewClose(bool value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode* value) = 0;
    virtual HRESULT __stdcall put_PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode value) = 0;
    virtual HRESULT __stdcall get_PreferredLaunchViewSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall put_PreferredLaunchViewSize(Windows::Foundation::Size value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DisableShowingMainViewOnActivation() = 0;
    virtual HRESULT __stdcall TryShowAsStandaloneAsync(int32_t viewId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryShowAsStandaloneWithSizePreferenceAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference anchorSizePreference, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SwitchAsync(int32_t viewId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SwitchFromViewAsync(int32_t toViewId, int32_t fromViewId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SwitchFromViewWithOptionsAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DisableSystemViewActivationPolicy() = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode viewMode, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryShowAsViewModeWithPreferencesAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode viewMode, ::IUnknown* viewModePreferences, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewTitleBar>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ForegroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ForegroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ButtonForegroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ButtonForegroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ButtonBackgroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ButtonBackgroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ButtonHoverForegroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ButtonHoverForegroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ButtonHoverBackgroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ButtonHoverBackgroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ButtonPressedForegroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ButtonPressedForegroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ButtonPressedBackgroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ButtonPressedBackgroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_InactiveForegroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_InactiveForegroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_InactiveBackgroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_InactiveBackgroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ButtonInactiveForegroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ButtonInactiveForegroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ButtonInactiveBackgroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ButtonInactiveBackgroundColor(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewTransferContext>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViewId(int32_t* value) = 0;
    virtual HRESULT __stdcall put_ViewId(int32_t value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataPackageFormatId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IInputPane>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Showing(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Showing(event_token token) = 0;
    virtual HRESULT __stdcall add_Hiding(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Hiding(event_token token) = 0;
    virtual HRESULT __stdcall get_OccludedRect(Windows::Foundation::Rect* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IInputPane2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryShow(bool* result) = 0;
    virtual HRESULT __stdcall TryHide(bool* result) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IInputPaneControl>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Visible(bool* value) = 0;
    virtual HRESULT __stdcall put_Visible(bool value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IInputPaneStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** inputPane) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OccludedRect(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall put_EnsuredFocusedElementInView(bool value) = 0;
    virtual HRESULT __stdcall get_EnsuredFocusedElementInView(bool* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IProjectionManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_ProjectionDisplayAvailable(bool* value) = 0;
    virtual HRESULT __stdcall add_ProjectionDisplayAvailableChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_ProjectionDisplayAvailableChanged(event_token token) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IProjectionManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartProjectingWithDeviceInfoAsync(int32_t projectionViewId, int32_t anchorViewId, ::IUnknown* displayDeviceInfo, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect selection, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestStartProjectingWithPlacementAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement prefferedPlacement, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* selector) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IStatusBar>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall HideAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall get_BackgroundOpacity(double* value) = 0;
    virtual HRESULT __stdcall put_BackgroundOpacity(double value) = 0;
    virtual HRESULT __stdcall get_ForegroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ForegroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ProgressIndicator(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OccludedRect(Windows::Foundation::Rect* value) = 0;
    virtual HRESULT __stdcall add_Showing(::IUnknown* eventHandler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Showing(event_token token) = 0;
    virtual HRESULT __stdcall add_Hiding(::IUnknown* eventHandler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Hiding(event_token token) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IStatusBarProgressIndicator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall HideAsync(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Text(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ProgressValue(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ProgressValue(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IStatusBarStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IUISettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HandPreference(Windows::UI::ViewManagement::HandPreference* value) = 0;
    virtual HRESULT __stdcall get_CursorSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_ScrollBarSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_ScrollBarArrowSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_ScrollBarThumbBoxSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall get_MessageDuration(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_AnimationsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_CaretBrowsingEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_CaretBlinkRate(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_CaretWidth(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_DoubleClickTime(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MouseHoverTime(uint32_t* value) = 0;
    virtual HRESULT __stdcall UIElementColor(Windows::UI::ViewManagement::UIElementType desiredElement, struct_of<4>* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IUISettings2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextScaleFactor(double* value) = 0;
    virtual HRESULT __stdcall add_TextScaleFactorChanged(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_TextScaleFactorChanged(event_token cookie) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IUISettings3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetColorValue(Windows::UI::ViewManagement::UIColorType desiredColor, struct_of<4>* value) = 0;
    virtual HRESULT __stdcall add_ColorValuesChanged(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_ColorValuesChanged(event_token cookie) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IUISettings4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AdvancedEffectsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall add_AdvancedEffectsEnabledChanged(::IUnknown* handler, event_token* cookie) = 0;
    virtual HRESULT __stdcall remove_AdvancedEffectsEnabledChanged(event_token cookie) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IUIViewSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UserInteractionMode(Windows::UI::ViewManagement::UserInteractionMode* value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IUIViewSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** current) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IViewModePreferences>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViewSizePreference(Windows::UI::ViewManagement::ViewSizePreference* value) = 0;
    virtual HRESULT __stdcall put_ViewSizePreference(Windows::UI::ViewManagement::ViewSizePreference value) = 0;
    virtual HRESULT __stdcall get_CustomSize(Windows::Foundation::Size* value) = 0;
    virtual HRESULT __stdcall put_CustomSize(Windows::Foundation::Size value) = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::IViewModePreferencesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateDefault(Windows::UI::ViewManagement::ApplicationViewMode mode, ::IUnknown** result) = 0;
};};

}
