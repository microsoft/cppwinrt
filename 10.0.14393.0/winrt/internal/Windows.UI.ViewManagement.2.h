// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.ViewManagement.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_463c606a_8c82_5a29_a2bd_040781f25348
#define WINRT_GENERIC_463c606a_8c82_5a29_a2bd_040781f25348
template <> struct __declspec(uuid("463c606a-8c82-5a29-a2bd-040781f25348")) __declspec(novtable) TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> : impl_TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_00c1f983_c836_565c_8bbf_7053055bdb4c
#define WINRT_GENERIC_00c1f983_c836_565c_8bbf_7053055bdb4c
template <> struct __declspec(uuid("00c1f983-c836-565c-8bbf-7053055bdb4c")) __declspec(novtable) TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::IInspectable> : impl_TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_ab8e5d11_b0c1_5a21_95ae_f16bf3a37624
#define WINRT_GENERIC_ab8e5d11_b0c1_5a21_95ae_f16bf3a37624
template <> struct __declspec(uuid("ab8e5d11-b0c1-5a21-95ae-f16bf3a37624")) __declspec(novtable) IReference<Windows::UI::Color> : impl_IReference<Windows::UI::Color> {};
#endif

#ifndef WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
#define WINRT_GENERIC_c50898f6_c536_5f47_8583_8b2c2438a13b
template <> struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b")) __declspec(novtable) EventHandler<Windows::IInspectable> : impl_EventHandler<Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
#define WINRT_GENERIC_2f2d6c29_5473_5f3e_92e7_96572bb990e2
template <> struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2")) __declspec(novtable) IReference<double> : impl_IReference<double> {};
#endif

#ifndef WINRT_GENERIC_b813d684_d953_5a8a_9b30_78b79fb9147b
#define WINRT_GENERIC_b813d684_d953_5a8a_9b30_78b79fb9147b
template <> struct __declspec(uuid("b813d684-d953-5a8a-9b30-78b79fb9147b")) __declspec(novtable) TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> : impl_TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> {};
#endif

#ifndef WINRT_GENERIC_f5917e6f_5abf_5e65_b5b4_1b9c8d94e788
#define WINRT_GENERIC_f5917e6f_5abf_5e65_b5b4_1b9c8d94e788
template <> struct __declspec(uuid("f5917e6f-5abf-5e65-b5b4-1b9c8d94e788")) __declspec(novtable) TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::IInspectable> : impl_TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_2dbdba9d_20da_519d_9078_09f835bc5bc7
#define WINRT_GENERIC_2dbdba9d_20da_519d_9078_09f835bc5bc7
template <> struct __declspec(uuid("2dbdba9d-20da-519d-9078-09f835bc5bc7")) __declspec(novtable) TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> : impl_TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_38254d6e_8596_5218_bb61_5d9db935aa02
#define WINRT_GENERIC_38254d6e_8596_5218_bb61_5d9db935aa02
template <> struct __declspec(uuid("38254d6e-8596-5218-bb61-5d9db935aa02")) __declspec(novtable) TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::IInspectable> : impl_TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace Windows::UI::ViewManagement {

template <typename D>
struct WINRT_EBO impl_IAccessibilitySettings
{
    bool HighContrast() const;
    hstring HighContrastScheme() const;
    event_token HighContrastChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::IInspectable> & handler) const;
    using HighContrastChanged_revoker = event_revoker<IAccessibilitySettings>;
    HighContrastChanged_revoker HighContrastChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::IInspectable> & handler) const;
    void HighContrastChanged(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_IActivationViewSwitcher
{
    Windows::Foundation::IAsyncAction ShowAsStandaloneAsync(int32_t viewId) const;
    Windows::Foundation::IAsyncAction ShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference) const;
    bool IsViewPresentedOnActivationVirtualDesktop(int32_t viewId) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationView
{
    Windows::UI::ViewManagement::ApplicationViewOrientation Orientation() const;
    bool AdjacentToLeftDisplayEdge() const;
    bool AdjacentToRightDisplayEdge() const;
    bool IsFullScreen() const;
    bool IsOnLockScreen() const;
    bool IsScreenCaptureEnabled() const;
    void IsScreenCaptureEnabled(bool value) const;
    void Title(hstring_ref value) const;
    hstring Title() const;
    int32_t Id() const;
    event_token Consolidated(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> & handler) const;
    using Consolidated_revoker = event_revoker<IApplicationView>;
    Consolidated_revoker Consolidated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> & handler) const;
    void Consolidated(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationView2
{
    bool SuppressSystemOverlays() const;
    void SuppressSystemOverlays(bool value) const;
    Windows::Foundation::Rect VisibleBounds() const;
    event_token VisibleBoundsChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::IInspectable> & handler) const;
    using VisibleBoundsChanged_revoker = event_revoker<IApplicationView2>;
    VisibleBoundsChanged_revoker VisibleBoundsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::IInspectable> & handler) const;
    void VisibleBoundsChanged(event_token token) const;
    bool SetDesiredBoundsMode(Windows::UI::ViewManagement::ApplicationViewBoundsMode boundsMode) const;
    Windows::UI::ViewManagement::ApplicationViewBoundsMode DesiredBoundsMode() const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationView3
{
    Windows::UI::ViewManagement::ApplicationViewTitleBar TitleBar() const;
    Windows::UI::ViewManagement::FullScreenSystemOverlayMode FullScreenSystemOverlayMode() const;
    void FullScreenSystemOverlayMode(Windows::UI::ViewManagement::FullScreenSystemOverlayMode value) const;
    bool IsFullScreenMode() const;
    bool TryEnterFullScreenMode() const;
    void ExitFullScreenMode() const;
    void ShowStandardSystemOverlays() const;
    bool TryResizeView(const Windows::Foundation::Size & value) const;
    void SetPreferredMinSize(const Windows::Foundation::Size & minSize) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewConsolidatedEventArgs
{
    bool IsUserInitiated() const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewFullscreenStatics
{
    bool TryUnsnapToFullscreen() const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewInteropStatics
{
    int32_t GetApplicationViewIdForWindow(const Windows::UI::Core::ICoreWindow & window) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewScaling
{
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewScalingStatics
{
    bool DisableLayoutScaling() const;
    bool TrySetDisableLayoutScaling(bool disableLayoutScaling) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewStatics
{
    Windows::UI::ViewManagement::ApplicationViewState Value() const;
    bool TryUnsnap() const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewStatics2
{
    Windows::UI::ViewManagement::ApplicationView GetForCurrentView() const;
    bool TerminateAppOnFinalViewClose() const;
    void TerminateAppOnFinalViewClose(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewStatics3
{
    Windows::UI::ViewManagement::ApplicationViewWindowingMode PreferredLaunchWindowingMode() const;
    void PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode value) const;
    Windows::Foundation::Size PreferredLaunchViewSize() const;
    void PreferredLaunchViewSize(const Windows::Foundation::Size & value) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewSwitcherStatics
{
    void DisableShowingMainViewOnActivation() const;
    Windows::Foundation::IAsyncOperation<bool> TryShowAsStandaloneAsync(int32_t viewId) const;
    Windows::Foundation::IAsyncOperation<bool> TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference) const;
    Windows::Foundation::IAsyncOperation<bool> TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference anchorSizePreference) const;
    Windows::Foundation::IAsyncAction SwitchAsync(int32_t viewId) const;
    Windows::Foundation::IAsyncAction SwitchAsync(int32_t toViewId, int32_t fromViewId) const;
    Windows::Foundation::IAsyncAction SwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options) const;
    Windows::Foundation::IAsyncOperation<bool> PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions options) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewSwitcherStatics2
{
    void DisableSystemViewActivationPolicy() const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewTitleBar
{
    void ForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ForegroundColor() const;
    void BackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> BackgroundColor() const;
    void ButtonForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonForegroundColor() const;
    void ButtonBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonBackgroundColor() const;
    void ButtonHoverForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonHoverForegroundColor() const;
    void ButtonHoverBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonHoverBackgroundColor() const;
    void ButtonPressedForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonPressedForegroundColor() const;
    void ButtonPressedBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonPressedBackgroundColor() const;
    void InactiveForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> InactiveForegroundColor() const;
    void InactiveBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> InactiveBackgroundColor() const;
    void ButtonInactiveForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonInactiveForegroundColor() const;
    void ButtonInactiveBackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ButtonInactiveBackgroundColor() const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewTransferContext
{
    int32_t ViewId() const;
    void ViewId(int32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IApplicationViewTransferContextStatics
{
    hstring DataPackageFormatId() const;
};

template <typename D>
struct WINRT_EBO impl_IInputPane
{
    event_token Showing(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> & handler) const;
    using Showing_revoker = event_revoker<IInputPane>;
    Showing_revoker Showing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> & handler) const;
    void Showing(event_token token) const;
    event_token Hiding(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> & handler) const;
    using Hiding_revoker = event_revoker<IInputPane>;
    Hiding_revoker Hiding(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> & handler) const;
    void Hiding(event_token token) const;
    Windows::Foundation::Rect OccludedRect() const;
};

template <typename D>
struct WINRT_EBO impl_IInputPane2
{
    bool TryShow() const;
    bool TryHide() const;
};

template <typename D>
struct WINRT_EBO impl_IInputPaneControl
{
    bool Visible() const;
    void Visible(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IInputPaneStatics
{
    Windows::UI::ViewManagement::InputPane GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_IInputPaneVisibilityEventArgs
{
    Windows::Foundation::Rect OccludedRect() const;
    void EnsuredFocusedElementInView(bool value) const;
    bool EnsuredFocusedElementInView() const;
};

template <typename D>
struct WINRT_EBO impl_IProjectionManagerStatics
{
    Windows::Foundation::IAsyncAction StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const;
    Windows::Foundation::IAsyncAction SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId) const;
    Windows::Foundation::IAsyncAction StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const;
    bool ProjectionDisplayAvailable() const;
    event_token ProjectionDisplayAvailableChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    using ProjectionDisplayAvailableChanged_revoker = event_revoker<IProjectionManagerStatics>;
    ProjectionDisplayAvailableChanged_revoker ProjectionDisplayAvailableChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const;
    void ProjectionDisplayAvailableChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IProjectionManagerStatics2
{
    Windows::Foundation::IAsyncAction StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, const Windows::Devices::Enumeration::DeviceInformation & displayDeviceInfo) const;
    Windows::Foundation::IAsyncOperation<bool> RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<bool> RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement prefferedPlacement) const;
    hstring GetDeviceSelector() const;
};

template <typename D>
struct WINRT_EBO impl_IStatusBar
{
    Windows::Foundation::IAsyncAction ShowAsync() const;
    Windows::Foundation::IAsyncAction HideAsync() const;
    double BackgroundOpacity() const;
    void BackgroundOpacity(double value) const;
    Windows::Foundation::IReference<Windows::UI::Color> ForegroundColor() const;
    void ForegroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::Foundation::IReference<Windows::UI::Color> BackgroundColor() const;
    void BackgroundColor(const Windows::Foundation::IReference<Windows::UI::Color> & value) const;
    Windows::UI::ViewManagement::StatusBarProgressIndicator ProgressIndicator() const;
    Windows::Foundation::Rect OccludedRect() const;
    event_token Showing(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::IInspectable> & eventHandler) const;
    using Showing_revoker = event_revoker<IStatusBar>;
    Showing_revoker Showing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::IInspectable> & eventHandler) const;
    void Showing(event_token token) const;
    event_token Hiding(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::IInspectable> & eventHandler) const;
    using Hiding_revoker = event_revoker<IStatusBar>;
    Hiding_revoker Hiding(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::IInspectable> & eventHandler) const;
    void Hiding(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IStatusBarProgressIndicator
{
    Windows::Foundation::IAsyncAction ShowAsync() const;
    Windows::Foundation::IAsyncAction HideAsync() const;
    hstring Text() const;
    void Text(hstring_ref value) const;
    Windows::Foundation::IReference<double> ProgressValue() const;
    void ProgressValue(const Windows::Foundation::IReference<double> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IStatusBarStatics
{
    Windows::UI::ViewManagement::StatusBar GetForCurrentView() const;
};

template <typename D>
struct WINRT_EBO impl_IUISettings
{
    Windows::UI::ViewManagement::HandPreference HandPreference() const;
    Windows::Foundation::Size CursorSize() const;
    Windows::Foundation::Size ScrollBarSize() const;
    Windows::Foundation::Size ScrollBarArrowSize() const;
    Windows::Foundation::Size ScrollBarThumbBoxSize() const;
    uint32_t MessageDuration() const;
    bool AnimationsEnabled() const;
    bool CaretBrowsingEnabled() const;
    uint32_t CaretBlinkRate() const;
    uint32_t CaretWidth() const;
    uint32_t DoubleClickTime() const;
    uint32_t MouseHoverTime() const;
    Windows::UI::Color UIElementColor(Windows::UI::ViewManagement::UIElementType desiredElement) const;
};

template <typename D>
struct WINRT_EBO impl_IUISettings2
{
    double TextScaleFactor() const;
    event_token TextScaleFactorChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> & handler) const;
    using TextScaleFactorChanged_revoker = event_revoker<IUISettings2>;
    TextScaleFactorChanged_revoker TextScaleFactorChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> & handler) const;
    void TextScaleFactorChanged(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_IUISettings3
{
    Windows::UI::Color GetColorValue(Windows::UI::ViewManagement::UIColorType desiredColor) const;
    event_token ColorValuesChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> & handler) const;
    using ColorValuesChanged_revoker = event_revoker<IUISettings3>;
    ColorValuesChanged_revoker ColorValuesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::IInspectable> & handler) const;
    void ColorValuesChanged(event_token cookie) const;
};

template <typename D>
struct WINRT_EBO impl_IUIViewSettings
{
    Windows::UI::ViewManagement::UserInteractionMode UserInteractionMode() const;
};

template <typename D>
struct WINRT_EBO impl_IUIViewSettingsStatics
{
    Windows::UI::ViewManagement::UIViewSettings GetForCurrentView() const;
};

struct IAccessibilitySettings :
    Windows::IInspectable,
    impl::consume<IAccessibilitySettings>
{
    IAccessibilitySettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAccessibilitySettings>(m_ptr); }
};

struct IActivationViewSwitcher :
    Windows::IInspectable,
    impl::consume<IActivationViewSwitcher>
{
    IActivationViewSwitcher(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IActivationViewSwitcher>(m_ptr); }
};

struct IApplicationView :
    Windows::IInspectable,
    impl::consume<IApplicationView>
{
    IApplicationView(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationView>(m_ptr); }
};

struct IApplicationView2 :
    Windows::IInspectable,
    impl::consume<IApplicationView2>
{
    IApplicationView2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationView2>(m_ptr); }
};

struct IApplicationView3 :
    Windows::IInspectable,
    impl::consume<IApplicationView3>
{
    IApplicationView3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationView3>(m_ptr); }
};

struct IApplicationViewConsolidatedEventArgs :
    Windows::IInspectable,
    impl::consume<IApplicationViewConsolidatedEventArgs>
{
    IApplicationViewConsolidatedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewConsolidatedEventArgs>(m_ptr); }
};

struct IApplicationViewFullscreenStatics :
    Windows::IInspectable,
    impl::consume<IApplicationViewFullscreenStatics>
{
    IApplicationViewFullscreenStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewFullscreenStatics>(m_ptr); }
};

struct IApplicationViewInteropStatics :
    Windows::IInspectable,
    impl::consume<IApplicationViewInteropStatics>
{
    IApplicationViewInteropStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewInteropStatics>(m_ptr); }
};

struct IApplicationViewScaling :
    Windows::IInspectable,
    impl::consume<IApplicationViewScaling>
{
    IApplicationViewScaling(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewScaling>(m_ptr); }
};

struct IApplicationViewScalingStatics :
    Windows::IInspectable,
    impl::consume<IApplicationViewScalingStatics>
{
    IApplicationViewScalingStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewScalingStatics>(m_ptr); }
};

struct IApplicationViewStatics :
    Windows::IInspectable,
    impl::consume<IApplicationViewStatics>
{
    IApplicationViewStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewStatics>(m_ptr); }
};

struct IApplicationViewStatics2 :
    Windows::IInspectable,
    impl::consume<IApplicationViewStatics2>
{
    IApplicationViewStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewStatics2>(m_ptr); }
};

struct IApplicationViewStatics3 :
    Windows::IInspectable,
    impl::consume<IApplicationViewStatics3>
{
    IApplicationViewStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewStatics3>(m_ptr); }
};

struct IApplicationViewSwitcherStatics :
    Windows::IInspectable,
    impl::consume<IApplicationViewSwitcherStatics>
{
    IApplicationViewSwitcherStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewSwitcherStatics>(m_ptr); }
};

struct IApplicationViewSwitcherStatics2 :
    Windows::IInspectable,
    impl::consume<IApplicationViewSwitcherStatics2>
{
    IApplicationViewSwitcherStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewSwitcherStatics2>(m_ptr); }
};

struct IApplicationViewTitleBar :
    Windows::IInspectable,
    impl::consume<IApplicationViewTitleBar>
{
    IApplicationViewTitleBar(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewTitleBar>(m_ptr); }
};

struct IApplicationViewTransferContext :
    Windows::IInspectable,
    impl::consume<IApplicationViewTransferContext>
{
    IApplicationViewTransferContext(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewTransferContext>(m_ptr); }
};

struct IApplicationViewTransferContextStatics :
    Windows::IInspectable,
    impl::consume<IApplicationViewTransferContextStatics>
{
    IApplicationViewTransferContextStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IApplicationViewTransferContextStatics>(m_ptr); }
};

struct IInputPane :
    Windows::IInspectable,
    impl::consume<IInputPane>
{
    IInputPane(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputPane>(m_ptr); }
};

struct IInputPane2 :
    Windows::IInspectable,
    impl::consume<IInputPane2>
{
    IInputPane2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputPane2>(m_ptr); }
};

struct IInputPaneControl :
    Windows::IInspectable,
    impl::consume<IInputPaneControl>
{
    IInputPaneControl(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputPaneControl>(m_ptr); }
};

struct IInputPaneStatics :
    Windows::IInspectable,
    impl::consume<IInputPaneStatics>
{
    IInputPaneStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputPaneStatics>(m_ptr); }
};

struct IInputPaneVisibilityEventArgs :
    Windows::IInspectable,
    impl::consume<IInputPaneVisibilityEventArgs>
{
    IInputPaneVisibilityEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInputPaneVisibilityEventArgs>(m_ptr); }
};

struct IProjectionManagerStatics :
    Windows::IInspectable,
    impl::consume<IProjectionManagerStatics>
{
    IProjectionManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProjectionManagerStatics>(m_ptr); }
};

struct IProjectionManagerStatics2 :
    Windows::IInspectable,
    impl::consume<IProjectionManagerStatics2>
{
    IProjectionManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProjectionManagerStatics2>(m_ptr); }
};

struct IStatusBar :
    Windows::IInspectable,
    impl::consume<IStatusBar>
{
    IStatusBar(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStatusBar>(m_ptr); }
};

struct IStatusBarProgressIndicator :
    Windows::IInspectable,
    impl::consume<IStatusBarProgressIndicator>
{
    IStatusBarProgressIndicator(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStatusBarProgressIndicator>(m_ptr); }
};

struct IStatusBarStatics :
    Windows::IInspectable,
    impl::consume<IStatusBarStatics>
{
    IStatusBarStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStatusBarStatics>(m_ptr); }
};

struct IUISettings :
    Windows::IInspectable,
    impl::consume<IUISettings>
{
    IUISettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUISettings>(m_ptr); }
};

struct IUISettings2 :
    Windows::IInspectable,
    impl::consume<IUISettings2>
{
    IUISettings2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUISettings2>(m_ptr); }
};

struct IUISettings3 :
    Windows::IInspectable,
    impl::consume<IUISettings3>
{
    IUISettings3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUISettings3>(m_ptr); }
};

struct IUIViewSettings :
    Windows::IInspectable,
    impl::consume<IUIViewSettings>
{
    IUIViewSettings(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUIViewSettings>(m_ptr); }
};

struct IUIViewSettingsStatics :
    Windows::IInspectable,
    impl::consume<IUIViewSettingsStatics>
{
    IUIViewSettingsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUIViewSettingsStatics>(m_ptr); }
};

}

}
