// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.UI.ViewManagement.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_UI_ViewManagement_IAccessibilitySettings<D>::HighContrast() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IAccessibilitySettings)->get_HighContrast(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_ViewManagement_IAccessibilitySettings<D>::HighContrastScheme() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IAccessibilitySettings)->get_HighContrastScheme(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IAccessibilitySettings<D>::HighContrastChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IAccessibilitySettings)->add_HighContrastChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IAccessibilitySettings> consume_Windows_UI_ViewManagement_IAccessibilitySettings<D>::HighContrastChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IAccessibilitySettings>(this, &abi_t<Windows::UI::ViewManagement::IAccessibilitySettings>::remove_HighContrastChanged, HighContrastChanged(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IAccessibilitySettings<D>::HighContrastChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IAccessibilitySettings)->remove_HighContrastChanged(get_abi(cookie)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IActivationViewSwitcher<D>::ShowAsStandaloneAsync(int32_t viewId) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IActivationViewSwitcher)->ShowAsStandaloneAsync(viewId, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IActivationViewSwitcher<D>::ShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IActivationViewSwitcher)->ShowAsStandaloneWithSizePreferenceAsync(viewId, get_abi(sizePreference), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IActivationViewSwitcher<D>::IsViewPresentedOnActivationVirtualDesktop(int32_t viewId) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IActivationViewSwitcher)->IsViewPresentedOnActivationVirtualDesktop(viewId, &value));
    return value;
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewOrientation consume_Windows_UI_ViewManagement_IApplicationView<D>::Orientation() const
{
    Windows::UI::ViewManagement::ApplicationViewOrientation value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView<D>::AdjacentToLeftDisplayEdge() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->get_AdjacentToLeftDisplayEdge(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView<D>::AdjacentToRightDisplayEdge() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->get_AdjacentToRightDisplayEdge(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView<D>::IsFullScreen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->get_IsFullScreen(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView<D>::IsOnLockScreen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->get_IsOnLockScreen(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView<D>::IsScreenCaptureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->get_IsScreenCaptureEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationView<D>::IsScreenCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->put_IsScreenCaptureEnabled(value));
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationView<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_ViewManagement_IApplicationView<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->get_Title(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_ViewManagement_IApplicationView<D>::Id() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->get_Id(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IApplicationView<D>::Consolidated(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->add_Consolidated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IApplicationView> consume_Windows_UI_ViewManagement_IApplicationView<D>::Consolidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IApplicationView>(this, &abi_t<Windows::UI::ViewManagement::IApplicationView>::remove_Consolidated, Consolidated(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationView<D>::Consolidated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView)->remove_Consolidated(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView2<D>::SuppressSystemOverlays() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView2)->get_SuppressSystemOverlays(&value));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationView2<D>::SuppressSystemOverlays(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView2)->put_SuppressSystemOverlays(value));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_ViewManagement_IApplicationView2<D>::VisibleBounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView2)->get_VisibleBounds(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IApplicationView2<D>::VisibleBoundsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView2)->add_VisibleBoundsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IApplicationView2> consume_Windows_UI_ViewManagement_IApplicationView2<D>::VisibleBoundsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IApplicationView2>(this, &abi_t<Windows::UI::ViewManagement::IApplicationView2>::remove_VisibleBoundsChanged, VisibleBoundsChanged(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationView2<D>::VisibleBoundsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView2)->remove_VisibleBoundsChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView2<D>::SetDesiredBoundsMode(Windows::UI::ViewManagement::ApplicationViewBoundsMode const& boundsMode) const
{
    bool success{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView2)->SetDesiredBoundsMode(get_abi(boundsMode), &success));
    return success;
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewBoundsMode consume_Windows_UI_ViewManagement_IApplicationView2<D>::DesiredBoundsMode() const
{
    Windows::UI::ViewManagement::ApplicationViewBoundsMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView2)->get_DesiredBoundsMode(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewTitleBar consume_Windows_UI_ViewManagement_IApplicationView3<D>::TitleBar() const
{
    Windows::UI::ViewManagement::ApplicationViewTitleBar value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView3)->get_TitleBar(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::FullScreenSystemOverlayMode consume_Windows_UI_ViewManagement_IApplicationView3<D>::FullScreenSystemOverlayMode() const
{
    Windows::UI::ViewManagement::FullScreenSystemOverlayMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView3)->get_FullScreenSystemOverlayMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationView3<D>::FullScreenSystemOverlayMode(Windows::UI::ViewManagement::FullScreenSystemOverlayMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView3)->put_FullScreenSystemOverlayMode(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView3<D>::IsFullScreenMode() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView3)->get_IsFullScreenMode(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView3<D>::TryEnterFullScreenMode() const
{
    bool success{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView3)->TryEnterFullScreenMode(&success));
    return success;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationView3<D>::ExitFullScreenMode() const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView3)->ExitFullScreenMode());
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationView3<D>::ShowStandardSystemOverlays() const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView3)->ShowStandardSystemOverlays());
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView3<D>::TryResizeView(Windows::Foundation::Size const& value) const
{
    bool success{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView3)->TryResizeView(get_abi(value), &success));
    return success;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationView3<D>::SetPreferredMinSize(Windows::Foundation::Size const& minSize) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView3)->SetPreferredMinSize(get_abi(minSize)));
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewMode consume_Windows_UI_ViewManagement_IApplicationView4<D>::ViewMode() const
{
    Windows::UI::ViewManagement::ApplicationViewMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView4)->get_ViewMode(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationView4<D>::IsViewModeSupported(Windows::UI::ViewManagement::ApplicationViewMode const& viewMode) const
{
    bool isViewModeSupported{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView4)->IsViewModeSupported(get_abi(viewMode), &isViewModeSupported));
    return isViewModeSupported;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IApplicationView4<D>::TryEnterViewModeAsync(Windows::UI::ViewManagement::ApplicationViewMode const& viewMode) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView4)->TryEnterViewModeAsync(get_abi(viewMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IApplicationView4<D>::TryEnterViewModeAsync(Windows::UI::ViewManagement::ApplicationViewMode const& viewMode, Windows::UI::ViewManagement::ViewModePreferences const& viewModePreferences) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView4)->TryEnterViewModeWithPreferencesAsync(get_abi(viewMode), get_abi(viewModePreferences), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IApplicationView4<D>::TryConsolidateAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationView4)->TryConsolidateAsync(put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs<D>::IsUserInitiated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs)->get_IsUserInitiated(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs2<D>::IsAppInitiated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2)->get_IsAppInitiated(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationViewFullscreenStatics<D>::TryUnsnapToFullscreen() const
{
    bool success{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewFullscreenStatics)->TryUnsnapToFullscreen(&success));
    return success;
}

template <typename D> int32_t consume_Windows_UI_ViewManagement_IApplicationViewInteropStatics<D>::GetApplicationViewIdForWindow(Windows::UI::Core::ICoreWindow const& window) const
{
    int32_t id{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewInteropStatics)->GetApplicationViewIdForWindow(get_abi(window), &id));
    return id;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationViewScalingStatics<D>::DisableLayoutScaling() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewScalingStatics)->get_DisableLayoutScaling(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationViewScalingStatics<D>::TrySetDisableLayoutScaling(bool disableLayoutScaling) const
{
    bool success{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewScalingStatics)->TrySetDisableLayoutScaling(disableLayoutScaling, &success));
    return success;
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewState consume_Windows_UI_ViewManagement_IApplicationViewStatics<D>::Value() const
{
    Windows::UI::ViewManagement::ApplicationViewState value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewStatics)->get_Value(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationViewStatics<D>::TryUnsnap() const
{
    bool success{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewStatics)->TryUnsnap(&success));
    return success;
}

template <typename D> Windows::UI::ViewManagement::ApplicationView consume_Windows_UI_ViewManagement_IApplicationViewStatics2<D>::GetForCurrentView() const
{
    Windows::UI::ViewManagement::ApplicationView current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewStatics2)->GetForCurrentView(put_abi(current)));
    return current;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IApplicationViewStatics2<D>::TerminateAppOnFinalViewClose() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewStatics2)->get_TerminateAppOnFinalViewClose(&value));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewStatics2<D>::TerminateAppOnFinalViewClose(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewStatics2)->put_TerminateAppOnFinalViewClose(value));
}

template <typename D> Windows::UI::ViewManagement::ApplicationViewWindowingMode consume_Windows_UI_ViewManagement_IApplicationViewStatics3<D>::PreferredLaunchWindowingMode() const
{
    Windows::UI::ViewManagement::ApplicationViewWindowingMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewStatics3)->get_PreferredLaunchWindowingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewStatics3<D>::PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewStatics3)->put_PreferredLaunchWindowingMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_ViewManagement_IApplicationViewStatics3<D>::PreferredLaunchViewSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewStatics3)->get_PreferredLaunchViewSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewStatics3<D>::PreferredLaunchViewSize(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewStatics3)->put_PreferredLaunchViewSize(get_abi(value)));
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>::DisableShowingMainViewOnActivation() const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics)->DisableShowingMainViewOnActivation());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>::TryShowAsStandaloneAsync(int32_t viewId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics)->TryShowAsStandaloneAsync(viewId, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>::TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics)->TryShowAsStandaloneWithSizePreferenceAsync(viewId, get_abi(sizePreference), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>::TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference const& anchorSizePreference) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics)->TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(viewId, get_abi(sizePreference), anchorViewId, get_abi(anchorSizePreference), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>::SwitchAsync(int32_t viewId) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics)->SwitchAsync(viewId, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>::SwitchAsync(int32_t toViewId, int32_t fromViewId) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics)->SwitchFromViewAsync(toViewId, fromViewId, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>::SwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics)->SwitchFromViewWithOptionsAsync(toViewId, fromViewId, get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics<D>::PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics)->PrepareForCustomAnimatedSwitchAsync(toViewId, fromViewId, get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics2<D>::DisableSystemViewActivationPolicy() const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2)->DisableSystemViewActivationPolicy());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics3<D>::TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3)->TryShowAsViewModeAsync(viewId, get_abi(viewMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics3<D>::TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode, Windows::UI::ViewManagement::ViewModePreferences const& viewModePreferences) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3)->TryShowAsViewModeWithPreferencesAsync(viewId, get_abi(viewMode), get_abi(viewModePreferences), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ForegroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_ForegroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_ForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::BackgroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::BackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonForegroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_ButtonForegroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_ButtonForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonBackgroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_ButtonBackgroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_ButtonBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonHoverForegroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_ButtonHoverForegroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonHoverForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_ButtonHoverForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonHoverBackgroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_ButtonHoverBackgroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonHoverBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_ButtonHoverBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonPressedForegroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_ButtonPressedForegroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonPressedForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_ButtonPressedForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonPressedBackgroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_ButtonPressedBackgroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonPressedBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_ButtonPressedBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::InactiveForegroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_InactiveForegroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::InactiveForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_InactiveForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::InactiveBackgroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_InactiveBackgroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::InactiveBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_InactiveBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonInactiveForegroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_ButtonInactiveForegroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonInactiveForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_ButtonInactiveForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonInactiveBackgroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->put_ButtonInactiveBackgroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IApplicationViewTitleBar<D>::ButtonInactiveBackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTitleBar)->get_ButtonInactiveBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_ViewManagement_IApplicationViewTransferContext<D>::ViewId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTransferContext)->get_ViewId(&value));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IApplicationViewTransferContext<D>::ViewId(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTransferContext)->put_ViewId(value));
}

template <typename D> hstring consume_Windows_UI_ViewManagement_IApplicationViewTransferContextStatics<D>::DataPackageFormatId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IApplicationViewTransferContextStatics)->get_DataPackageFormatId(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IInputPane<D>::Showing(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPane)->add_Showing(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IInputPane> consume_Windows_UI_ViewManagement_IInputPane<D>::Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IInputPane>(this, &abi_t<Windows::UI::ViewManagement::IInputPane>::remove_Showing, Showing(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IInputPane<D>::Showing(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPane)->remove_Showing(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IInputPane<D>::Hiding(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPane)->add_Hiding(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IInputPane> consume_Windows_UI_ViewManagement_IInputPane<D>::Hiding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IInputPane>(this, &abi_t<Windows::UI::ViewManagement::IInputPane>::remove_Hiding, Hiding(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IInputPane<D>::Hiding(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPane)->remove_Hiding(get_abi(token)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_ViewManagement_IInputPane<D>::OccludedRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPane)->get_OccludedRect(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IInputPane2<D>::TryShow() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPane2)->TryShow(&result));
    return result;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IInputPane2<D>::TryHide() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPane2)->TryHide(&result));
    return result;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IInputPaneControl<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPaneControl)->get_Visible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IInputPaneControl<D>::Visible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPaneControl)->put_Visible(value));
}

template <typename D> Windows::UI::ViewManagement::InputPane consume_Windows_UI_ViewManagement_IInputPaneStatics<D>::GetForCurrentView() const
{
    Windows::UI::ViewManagement::InputPane inputPane{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPaneStatics)->GetForCurrentView(put_abi(inputPane)));
    return inputPane;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs<D>::OccludedRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs)->get_OccludedRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs<D>::EnsuredFocusedElementInView(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs)->put_EnsuredFocusedElementInView(value));
}

template <typename D> bool consume_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs<D>::EnsuredFocusedElementInView() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs)->get_EnsuredFocusedElementInView(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IProjectionManagerStatics<D>::StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics)->StartProjectingAsync(projectionViewId, anchorViewId, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IProjectionManagerStatics<D>::SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics)->SwapDisplaysForViewsAsync(projectionViewId, anchorViewId, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IProjectionManagerStatics<D>::StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics)->StopProjectingAsync(projectionViewId, anchorViewId, put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IProjectionManagerStatics<D>::ProjectionDisplayAvailable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics)->get_ProjectionDisplayAvailable(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IProjectionManagerStatics<D>::ProjectionDisplayAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics)->add_ProjectionDisplayAvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IProjectionManagerStatics> consume_Windows_UI_ViewManagement_IProjectionManagerStatics<D>::ProjectionDisplayAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IProjectionManagerStatics>(this, &abi_t<Windows::UI::ViewManagement::IProjectionManagerStatics>::remove_ProjectionDisplayAvailableChanged, ProjectionDisplayAvailableChanged(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IProjectionManagerStatics<D>::ProjectionDisplayAvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics)->remove_ProjectionDisplayAvailableChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IProjectionManagerStatics2<D>::StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Devices::Enumeration::DeviceInformation const& displayDeviceInfo) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics2)->StartProjectingWithDeviceInfoAsync(projectionViewId, anchorViewId, get_abi(displayDeviceInfo), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IProjectionManagerStatics2<D>::RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics2)->RequestStartProjectingAsync(projectionViewId, anchorViewId, get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_ViewManagement_IProjectionManagerStatics2<D>::RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& prefferedPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics2)->RequestStartProjectingWithPlacementAsync(projectionViewId, anchorViewId, get_abi(selection), get_abi(prefferedPlacement), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_UI_ViewManagement_IProjectionManagerStatics2<D>::GetDeviceSelector() const
{
    hstring selector{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IProjectionManagerStatics2)->GetDeviceSelector(put_abi(selector)));
    return selector;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IStatusBar<D>::ShowAsync() const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->ShowAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IStatusBar<D>::HideAsync() const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->HideAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> double consume_Windows_UI_ViewManagement_IStatusBar<D>::BackgroundOpacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->get_BackgroundOpacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IStatusBar<D>::BackgroundOpacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->put_BackgroundOpacity(value));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IStatusBar<D>::ForegroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->get_ForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IStatusBar<D>::ForegroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->put_ForegroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Color> consume_Windows_UI_ViewManagement_IStatusBar<D>::BackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::Color> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IStatusBar<D>::BackgroundColor(optional<Windows::UI::Color> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::ViewManagement::StatusBarProgressIndicator consume_Windows_UI_ViewManagement_IStatusBar<D>::ProgressIndicator() const
{
    Windows::UI::ViewManagement::StatusBarProgressIndicator value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->get_ProgressIndicator(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_ViewManagement_IStatusBar<D>::OccludedRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->get_OccludedRect(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IStatusBar<D>::Showing(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->add_Showing(get_abi(eventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IStatusBar> consume_Windows_UI_ViewManagement_IStatusBar<D>::Showing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IStatusBar>(this, &abi_t<Windows::UI::ViewManagement::IStatusBar>::remove_Showing, Showing(eventHandler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IStatusBar<D>::Showing(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->remove_Showing(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IStatusBar<D>::Hiding(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->add_Hiding(get_abi(eventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IStatusBar> consume_Windows_UI_ViewManagement_IStatusBar<D>::Hiding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IStatusBar>(this, &abi_t<Windows::UI::ViewManagement::IStatusBar>::remove_Hiding, Hiding(eventHandler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IStatusBar<D>::Hiding(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBar)->remove_Hiding(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator<D>::ShowAsync() const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBarProgressIndicator)->ShowAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator<D>::HideAsync() const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBarProgressIndicator)->HideAsync(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBarProgressIndicator)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBarProgressIndicator)->put_Text(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator<D>::ProgressValue() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBarProgressIndicator)->get_ProgressValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IStatusBarProgressIndicator<D>::ProgressValue(optional<double> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBarProgressIndicator)->put_ProgressValue(get_abi(value)));
}

template <typename D> Windows::UI::ViewManagement::StatusBar consume_Windows_UI_ViewManagement_IStatusBarStatics<D>::GetForCurrentView() const
{
    Windows::UI::ViewManagement::StatusBar value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IStatusBarStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::HandPreference consume_Windows_UI_ViewManagement_IUISettings<D>::HandPreference() const
{
    Windows::UI::ViewManagement::HandPreference value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_HandPreference(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_ViewManagement_IUISettings<D>::CursorSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_CursorSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_ViewManagement_IUISettings<D>::ScrollBarSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_ScrollBarSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_ViewManagement_IUISettings<D>::ScrollBarArrowSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_ScrollBarArrowSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_ViewManagement_IUISettings<D>::ScrollBarThumbBoxSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_ScrollBarThumbBoxSize(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_ViewManagement_IUISettings<D>::MessageDuration() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_MessageDuration(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IUISettings<D>::AnimationsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_AnimationsEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_IUISettings<D>::CaretBrowsingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_CaretBrowsingEnabled(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_ViewManagement_IUISettings<D>::CaretBlinkRate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_CaretBlinkRate(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_ViewManagement_IUISettings<D>::CaretWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_CaretWidth(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_ViewManagement_IUISettings<D>::DoubleClickTime() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_DoubleClickTime(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_ViewManagement_IUISettings<D>::MouseHoverTime() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->get_MouseHoverTime(&value));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_ViewManagement_IUISettings<D>::UIElementColor(Windows::UI::ViewManagement::UIElementType const& desiredElement) const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings)->UIElementColor(get_abi(desiredElement), put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_ViewManagement_IUISettings2<D>::TextScaleFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings2)->get_TextScaleFactor(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IUISettings2<D>::TextScaleFactorChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings2)->add_TextScaleFactorChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IUISettings2> consume_Windows_UI_ViewManagement_IUISettings2<D>::TextScaleFactorChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IUISettings2>(this, &abi_t<Windows::UI::ViewManagement::IUISettings2>::remove_TextScaleFactorChanged, TextScaleFactorChanged(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IUISettings2<D>::TextScaleFactorChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings2)->remove_TextScaleFactorChanged(get_abi(cookie)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_ViewManagement_IUISettings3<D>::GetColorValue(Windows::UI::ViewManagement::UIColorType const& desiredColor) const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings3)->GetColorValue(get_abi(desiredColor), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IUISettings3<D>::ColorValuesChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings3)->add_ColorValuesChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IUISettings3> consume_Windows_UI_ViewManagement_IUISettings3<D>::ColorValuesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IUISettings3>(this, &abi_t<Windows::UI::ViewManagement::IUISettings3>::remove_ColorValuesChanged, ColorValuesChanged(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IUISettings3<D>::ColorValuesChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings3)->remove_ColorValuesChanged(get_abi(cookie)));
}

template <typename D> bool consume_Windows_UI_ViewManagement_IUISettings4<D>::AdvancedEffectsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings4)->get_AdvancedEffectsEnabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_IUISettings4<D>::AdvancedEffectsEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings4)->add_AdvancedEffectsEnabledChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::IUISettings4> consume_Windows_UI_ViewManagement_IUISettings4<D>::AdvancedEffectsEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::IUISettings4>(this, &abi_t<Windows::UI::ViewManagement::IUISettings4>::remove_AdvancedEffectsEnabledChanged, AdvancedEffectsEnabledChanged(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_IUISettings4<D>::AdvancedEffectsEnabledChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUISettings4)->remove_AdvancedEffectsEnabledChanged(get_abi(cookie)));
}

template <typename D> Windows::UI::ViewManagement::UserInteractionMode consume_Windows_UI_ViewManagement_IUIViewSettings<D>::UserInteractionMode() const
{
    Windows::UI::ViewManagement::UserInteractionMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUIViewSettings)->get_UserInteractionMode(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::UIViewSettings consume_Windows_UI_ViewManagement_IUIViewSettingsStatics<D>::GetForCurrentView() const
{
    Windows::UI::ViewManagement::UIViewSettings current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IUIViewSettingsStatics)->GetForCurrentView(put_abi(current)));
    return current;
}

template <typename D> Windows::UI::ViewManagement::ViewSizePreference consume_Windows_UI_ViewManagement_IViewModePreferences<D>::ViewSizePreference() const
{
    Windows::UI::ViewManagement::ViewSizePreference value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IViewModePreferences)->get_ViewSizePreference(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IViewModePreferences<D>::ViewSizePreference(Windows::UI::ViewManagement::ViewSizePreference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IViewModePreferences)->put_ViewSizePreference(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_ViewManagement_IViewModePreferences<D>::CustomSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IViewModePreferences)->get_CustomSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_IViewModePreferences<D>::CustomSize(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IViewModePreferences)->put_CustomSize(get_abi(value)));
}

template <typename D> Windows::UI::ViewManagement::ViewModePreferences consume_Windows_UI_ViewManagement_IViewModePreferencesStatics<D>::CreateDefault(Windows::UI::ViewManagement::ApplicationViewMode const& mode) const
{
    Windows::UI::ViewManagement::ViewModePreferences result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::IViewModePreferencesStatics)->CreateDefault(get_abi(mode), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IAccessibilitySettings> : produce_base<D, Windows::UI::ViewManagement::IAccessibilitySettings>
{
    HRESULT __stdcall get_HighContrast(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HighContrast());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HighContrastScheme(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HighContrastScheme());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HighContrastChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().HighContrastChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::AccessibilitySettings, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HighContrastChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HighContrastChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IActivationViewSwitcher> : produce_base<D, Windows::UI::ViewManagement::IActivationViewSwitcher>
{
    HRESULT __stdcall ShowAsStandaloneAsync(int32_t viewId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ShowAsStandaloneAsync(viewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowAsStandaloneWithSizePreferenceAsync(int32_t viewId, abi_t<Windows::UI::ViewManagement::ViewSizePreference> sizePreference, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ShowAsStandaloneAsync(viewId, *reinterpret_cast<Windows::UI::ViewManagement::ViewSizePreference const*>(&sizePreference)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsViewPresentedOnActivationVirtualDesktop(int32_t viewId, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsViewPresentedOnActivationVirtualDesktop(viewId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationView> : produce_base<D, Windows::UI::ViewManagement::IApplicationView>
{
    HRESULT __stdcall get_Orientation(abi_t<Windows::UI::ViewManagement::ApplicationViewOrientation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdjacentToLeftDisplayEdge(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdjacentToLeftDisplayEdge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AdjacentToRightDisplayEdge(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdjacentToRightDisplayEdge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFullScreen(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFullScreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOnLockScreen(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOnLockScreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsScreenCaptureEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsScreenCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsScreenCaptureEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsScreenCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Consolidated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Consolidated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Consolidated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Consolidated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationView2> : produce_base<D, Windows::UI::ViewManagement::IApplicationView2>
{
    HRESULT __stdcall get_SuppressSystemOverlays(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuppressSystemOverlays());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuppressSystemOverlays(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuppressSystemOverlays(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisibleBounds(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VisibleBounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VisibleBoundsChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VisibleBoundsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::ApplicationView, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibleBoundsChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisibleBoundsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDesiredBoundsMode(abi_t<Windows::UI::ViewManagement::ApplicationViewBoundsMode> boundsMode, bool* success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *success = detach_abi(this->shim().SetDesiredBoundsMode(*reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewBoundsMode const*>(&boundsMode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredBoundsMode(abi_t<Windows::UI::ViewManagement::ApplicationViewBoundsMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DesiredBoundsMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationView3> : produce_base<D, Windows::UI::ViewManagement::IApplicationView3>
{
    HRESULT __stdcall get_TitleBar(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TitleBar());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FullScreenSystemOverlayMode(abi_t<Windows::UI::ViewManagement::FullScreenSystemOverlayMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FullScreenSystemOverlayMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FullScreenSystemOverlayMode(abi_t<Windows::UI::ViewManagement::FullScreenSystemOverlayMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FullScreenSystemOverlayMode(*reinterpret_cast<Windows::UI::ViewManagement::FullScreenSystemOverlayMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsFullScreenMode(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsFullScreenMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryEnterFullScreenMode(bool* success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *success = detach_abi(this->shim().TryEnterFullScreenMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ExitFullScreenMode() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitFullScreenMode();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowStandardSystemOverlays() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowStandardSystemOverlays();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryResizeView(abi_t<Windows::Foundation::Size> value, bool* success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *success = detach_abi(this->shim().TryResizeView(*reinterpret_cast<Windows::Foundation::Size const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPreferredMinSize(abi_t<Windows::Foundation::Size> minSize) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreferredMinSize(*reinterpret_cast<Windows::Foundation::Size const*>(&minSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationView4> : produce_base<D, Windows::UI::ViewManagement::IApplicationView4>
{
    HRESULT __stdcall get_ViewMode(abi_t<Windows::UI::ViewManagement::ApplicationViewMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsViewModeSupported(abi_t<Windows::UI::ViewManagement::ApplicationViewMode> viewMode, bool* isViewModeSupported) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isViewModeSupported = detach_abi(this->shim().IsViewModeSupported(*reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewMode const*>(&viewMode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryEnterViewModeAsync(abi_t<Windows::UI::ViewManagement::ApplicationViewMode> viewMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryEnterViewModeAsync(*reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewMode const*>(&viewMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryEnterViewModeWithPreferencesAsync(abi_t<Windows::UI::ViewManagement::ApplicationViewMode> viewMode, ::IUnknown* viewModePreferences, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryEnterViewModeAsync(*reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewMode const*>(&viewMode), *reinterpret_cast<Windows::UI::ViewManagement::ViewModePreferences const*>(&viewModePreferences)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryConsolidateAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryConsolidateAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs>
{
    HRESULT __stdcall get_IsUserInitiated(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsUserInitiated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>
{
    HRESULT __stdcall get_IsAppInitiated(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAppInitiated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewFullscreenStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>
{
    HRESULT __stdcall TryUnsnapToFullscreen(bool* success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *success = detach_abi(this->shim().TryUnsnapToFullscreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewInteropStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewInteropStatics>
{
    HRESULT __stdcall GetApplicationViewIdForWindow(::IUnknown* window, int32_t* id) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *id = detach_abi(this->shim().GetApplicationViewIdForWindow(*reinterpret_cast<Windows::UI::Core::ICoreWindow const*>(&window)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewScaling> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewScaling>
{};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewScalingStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewScalingStatics>
{
    HRESULT __stdcall get_DisableLayoutScaling(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisableLayoutScaling());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetDisableLayoutScaling(bool disableLayoutScaling, bool* success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *success = detach_abi(this->shim().TrySetDisableLayoutScaling(disableLayoutScaling));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewStatics>
{
    HRESULT __stdcall get_Value(abi_t<Windows::UI::ViewManagement::ApplicationViewState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryUnsnap(bool* success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *success = detach_abi(this->shim().TryUnsnap());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewStatics2> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewStatics2>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** current) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *current = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TerminateAppOnFinalViewClose(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TerminateAppOnFinalViewClose());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TerminateAppOnFinalViewClose(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TerminateAppOnFinalViewClose(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewStatics3> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewStatics3>
{
    HRESULT __stdcall get_PreferredLaunchWindowingMode(abi_t<Windows::UI::ViewManagement::ApplicationViewWindowingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredLaunchWindowingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredLaunchWindowingMode(abi_t<Windows::UI::ViewManagement::ApplicationViewWindowingMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredLaunchWindowingMode(*reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewWindowingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreferredLaunchViewSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PreferredLaunchViewSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PreferredLaunchViewSize(abi_t<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredLaunchViewSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>
{
    HRESULT __stdcall DisableShowingMainViewOnActivation() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableShowingMainViewOnActivation();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryShowAsStandaloneAsync(int32_t viewId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryShowAsStandaloneAsync(viewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryShowAsStandaloneWithSizePreferenceAsync(int32_t viewId, abi_t<Windows::UI::ViewManagement::ViewSizePreference> sizePreference, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryShowAsStandaloneAsync(viewId, *reinterpret_cast<Windows::UI::ViewManagement::ViewSizePreference const*>(&sizePreference)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(int32_t viewId, abi_t<Windows::UI::ViewManagement::ViewSizePreference> sizePreference, int32_t anchorViewId, abi_t<Windows::UI::ViewManagement::ViewSizePreference> anchorSizePreference, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryShowAsStandaloneAsync(viewId, *reinterpret_cast<Windows::UI::ViewManagement::ViewSizePreference const*>(&sizePreference), anchorViewId, *reinterpret_cast<Windows::UI::ViewManagement::ViewSizePreference const*>(&anchorSizePreference)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SwitchAsync(int32_t viewId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SwitchAsync(viewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SwitchFromViewAsync(int32_t toViewId, int32_t fromViewId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SwitchAsync(toViewId, fromViewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SwitchFromViewWithOptionsAsync(int32_t toViewId, int32_t fromViewId, abi_t<Windows::UI::ViewManagement::ApplicationViewSwitchingOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SwitchAsync(toViewId, fromViewId, *reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, abi_t<Windows::UI::ViewManagement::ApplicationViewSwitchingOptions> options, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareForCustomAnimatedSwitchAsync(toViewId, fromViewId, *reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>
{
    HRESULT __stdcall DisableSystemViewActivationPolicy() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableSystemViewActivationPolicy();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>
{
    HRESULT __stdcall TryShowAsViewModeAsync(int32_t viewId, abi_t<Windows::UI::ViewManagement::ApplicationViewMode> viewMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryShowAsViewModeAsync(viewId, *reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewMode const*>(&viewMode)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryShowAsViewModeWithPreferencesAsync(int32_t viewId, abi_t<Windows::UI::ViewManagement::ApplicationViewMode> viewMode, ::IUnknown* viewModePreferences, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryShowAsViewModeAsync(viewId, *reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewMode const*>(&viewMode), *reinterpret_cast<Windows::UI::ViewManagement::ViewModePreferences const*>(&viewModePreferences)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewTitleBar> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewTitleBar>
{
    HRESULT __stdcall put_ForegroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonForegroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonForegroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonForegroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ButtonForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonBackgroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonBackgroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonBackgroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ButtonBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonHoverForegroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonHoverForegroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonHoverForegroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ButtonHoverForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonHoverBackgroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonHoverBackgroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonHoverBackgroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ButtonHoverBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonPressedForegroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonPressedForegroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonPressedForegroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ButtonPressedForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonPressedBackgroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonPressedBackgroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonPressedBackgroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ButtonPressedBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InactiveForegroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InactiveForegroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InactiveForegroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InactiveForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InactiveBackgroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InactiveBackgroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InactiveBackgroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InactiveBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonInactiveForegroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonInactiveForegroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonInactiveForegroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ButtonInactiveForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ButtonInactiveBackgroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonInactiveBackgroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ButtonInactiveBackgroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ButtonInactiveBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewTransferContext> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewTransferContext>
{
    HRESULT __stdcall get_ViewId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewId(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IApplicationViewTransferContextStatics> : produce_base<D, Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>
{
    HRESULT __stdcall get_DataPackageFormatId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataPackageFormatId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPane> : produce_base<D, Windows::UI::ViewManagement::IInputPane>
{
    HRESULT __stdcall add_Showing(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Showing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Showing(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Showing(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Hiding(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Hiding(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::InputPane, Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Hiding(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hiding(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OccludedRect(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OccludedRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPane2> : produce_base<D, Windows::UI::ViewManagement::IInputPane2>
{
    HRESULT __stdcall TryShow(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryShow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryHide(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryHide());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPaneControl> : produce_base<D, Windows::UI::ViewManagement::IInputPaneControl>
{
    HRESULT __stdcall get_Visible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Visible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Visible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPaneStatics> : produce_base<D, Windows::UI::ViewManagement::IInputPaneStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** inputPane) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *inputPane = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *inputPane = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs> : produce_base<D, Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs>
{
    HRESULT __stdcall get_OccludedRect(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OccludedRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnsuredFocusedElementInView(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnsuredFocusedElementInView(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnsuredFocusedElementInView(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnsuredFocusedElementInView());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IProjectionManagerStatics> : produce_base<D, Windows::UI::ViewManagement::IProjectionManagerStatics>
{
    HRESULT __stdcall StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartProjectingAsync(projectionViewId, anchorViewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SwapDisplaysForViewsAsync(projectionViewId, anchorViewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StopProjectingAsync(projectionViewId, anchorViewId));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionDisplayAvailable(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProjectionDisplayAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProjectionDisplayAvailableChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ProjectionDisplayAvailableChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProjectionDisplayAvailableChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProjectionDisplayAvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IProjectionManagerStatics2> : produce_base<D, Windows::UI::ViewManagement::IProjectionManagerStatics2>
{
    HRESULT __stdcall StartProjectingWithDeviceInfoAsync(int32_t projectionViewId, int32_t anchorViewId, ::IUnknown* displayDeviceInfo, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartProjectingAsync(projectionViewId, anchorViewId, *reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&displayDeviceInfo)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestStartProjectingAsync(projectionViewId, anchorViewId, *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestStartProjectingWithPlacementAsync(int32_t projectionViewId, int32_t anchorViewId, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> prefferedPlacement, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestStartProjectingAsync(projectionViewId, anchorViewId, *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&prefferedPlacement)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* selector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selector = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *selector = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IStatusBar> : produce_base<D, Windows::UI::ViewManagement::IStatusBar>
{
    HRESULT __stdcall ShowAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ShowAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HideAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().HideAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundOpacity(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundOpacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundOpacity(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::Foundation::IReference<Windows::UI::Color> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProgressIndicator(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProgressIndicator());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OccludedRect(abi_t<Windows::Foundation::Rect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OccludedRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Showing(::IUnknown* eventHandler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Showing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Showing(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Showing(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Hiding(::IUnknown* eventHandler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Hiding(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::StatusBar, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Hiding(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hiding(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IStatusBarProgressIndicator> : produce_base<D, Windows::UI::ViewManagement::IStatusBarProgressIndicator>
{
    HRESULT __stdcall ShowAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ShowAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HideAsync(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().HideAsync());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProgressValue(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProgressValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProgressValue(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProgressValue(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IStatusBarStatics> : produce_base<D, Windows::UI::ViewManagement::IStatusBarStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUISettings> : produce_base<D, Windows::UI::ViewManagement::IUISettings>
{
    HRESULT __stdcall get_HandPreference(abi_t<Windows::UI::ViewManagement::HandPreference>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HandPreference());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CursorSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CursorSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollBarSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScrollBarSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollBarArrowSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScrollBarArrowSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollBarThumbBoxSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScrollBarThumbBoxSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageDuration(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AnimationsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnimationsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaretBrowsingEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaretBrowsingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaretBlinkRate(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaretBlinkRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaretWidth(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaretWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DoubleClickTime(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DoubleClickTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MouseHoverTime(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MouseHoverTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UIElementColor(abi_t<Windows::UI::ViewManagement::UIElementType> desiredElement, abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UIElementColor(*reinterpret_cast<Windows::UI::ViewManagement::UIElementType const*>(&desiredElement)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUISettings2> : produce_base<D, Windows::UI::ViewManagement::IUISettings2>
{
    HRESULT __stdcall get_TextScaleFactor(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextScaleFactor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TextScaleFactorChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().TextScaleFactorChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TextScaleFactorChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextScaleFactorChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUISettings3> : produce_base<D, Windows::UI::ViewManagement::IUISettings3>
{
    HRESULT __stdcall GetColorValue(abi_t<Windows::UI::ViewManagement::UIColorType> desiredColor, abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetColorValue(*reinterpret_cast<Windows::UI::ViewManagement::UIColorType const*>(&desiredColor)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ColorValuesChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().ColorValuesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ColorValuesChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorValuesChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUISettings4> : produce_base<D, Windows::UI::ViewManagement::IUISettings4>
{
    HRESULT __stdcall get_AdvancedEffectsEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvancedEffectsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AdvancedEffectsEnabledChanged(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().AdvancedEffectsEnabledChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::UISettings, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AdvancedEffectsEnabledChanged(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvancedEffectsEnabledChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUIViewSettings> : produce_base<D, Windows::UI::ViewManagement::IUIViewSettings>
{
    HRESULT __stdcall get_UserInteractionMode(abi_t<Windows::UI::ViewManagement::UserInteractionMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserInteractionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IUIViewSettingsStatics> : produce_base<D, Windows::UI::ViewManagement::IUIViewSettingsStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** current) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *current = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IViewModePreferences> : produce_base<D, Windows::UI::ViewManagement::IViewModePreferences>
{
    HRESULT __stdcall get_ViewSizePreference(abi_t<Windows::UI::ViewManagement::ViewSizePreference>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewSizePreference());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewSizePreference(abi_t<Windows::UI::ViewManagement::ViewSizePreference> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewSizePreference(*reinterpret_cast<Windows::UI::ViewManagement::ViewSizePreference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomSize(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CustomSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CustomSize(abi_t<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::IViewModePreferencesStatics> : produce_base<D, Windows::UI::ViewManagement::IViewModePreferencesStatics>
{
    HRESULT __stdcall CreateDefault(abi_t<Windows::UI::ViewManagement::ApplicationViewMode> mode, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDefault(*reinterpret_cast<Windows::UI::ViewManagement::ApplicationViewMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement {

inline AccessibilitySettings::AccessibilitySettings() :
    AccessibilitySettings(activate_instance<AccessibilitySettings>())
{}

inline bool ApplicationView::TryUnsnapToFullscreen()
{
    return get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewFullscreenStatics>().TryUnsnapToFullscreen();
}

inline int32_t ApplicationView::GetApplicationViewIdForWindow(Windows::UI::Core::ICoreWindow const& window)
{
    return get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewInteropStatics>().GetApplicationViewIdForWindow(window);
}

inline Windows::UI::ViewManagement::ApplicationViewState ApplicationView::Value()
{
    return get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewStatics>().Value();
}

inline bool ApplicationView::TryUnsnap()
{
    return get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewStatics>().TryUnsnap();
}

inline Windows::UI::ViewManagement::ApplicationView ApplicationView::GetForCurrentView()
{
    return get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewStatics2>().GetForCurrentView();
}

inline bool ApplicationView::TerminateAppOnFinalViewClose()
{
    return get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewStatics2>().TerminateAppOnFinalViewClose();
}

inline void ApplicationView::TerminateAppOnFinalViewClose(bool value)
{
    get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewStatics2>().TerminateAppOnFinalViewClose(value);
}

inline Windows::UI::ViewManagement::ApplicationViewWindowingMode ApplicationView::PreferredLaunchWindowingMode()
{
    return get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewStatics3>().PreferredLaunchWindowingMode();
}

inline void ApplicationView::PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode const& value)
{
    get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewStatics3>().PreferredLaunchWindowingMode(value);
}

inline Windows::Foundation::Size ApplicationView::PreferredLaunchViewSize()
{
    return get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewStatics3>().PreferredLaunchViewSize();
}

inline void ApplicationView::PreferredLaunchViewSize(Windows::Foundation::Size const& value)
{
    get_activation_factory<ApplicationView, Windows::UI::ViewManagement::IApplicationViewStatics3>().PreferredLaunchViewSize(value);
}

inline bool ApplicationViewScaling::DisableLayoutScaling()
{
    return get_activation_factory<ApplicationViewScaling, Windows::UI::ViewManagement::IApplicationViewScalingStatics>().DisableLayoutScaling();
}

inline bool ApplicationViewScaling::TrySetDisableLayoutScaling(bool disableLayoutScaling)
{
    return get_activation_factory<ApplicationViewScaling, Windows::UI::ViewManagement::IApplicationViewScalingStatics>().TrySetDisableLayoutScaling(disableLayoutScaling);
}

inline void ApplicationViewSwitcher::DisableShowingMainViewOnActivation()
{
    get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>().DisableShowingMainViewOnActivation();
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::TryShowAsStandaloneAsync(int32_t viewId)
{
    return get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>().TryShowAsStandaloneAsync(viewId);
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference)
{
    return get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>().TryShowAsStandaloneAsync(viewId, sizePreference);
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference const& anchorSizePreference)
{
    return get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>().TryShowAsStandaloneAsync(viewId, sizePreference, anchorViewId, anchorSizePreference);
}

inline Windows::Foundation::IAsyncAction ApplicationViewSwitcher::SwitchAsync(int32_t viewId)
{
    return get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>().SwitchAsync(viewId);
}

inline Windows::Foundation::IAsyncAction ApplicationViewSwitcher::SwitchAsync(int32_t toViewId, int32_t fromViewId)
{
    return get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>().SwitchAsync(toViewId, fromViewId);
}

inline Windows::Foundation::IAsyncAction ApplicationViewSwitcher::SwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options)
{
    return get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>().SwitchAsync(toViewId, fromViewId, options);
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options)
{
    return get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics>().PrepareForCustomAnimatedSwitchAsync(toViewId, fromViewId, options);
}

inline void ApplicationViewSwitcher::DisableSystemViewActivationPolicy()
{
    get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2>().DisableSystemViewActivationPolicy();
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode)
{
    return get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>().TryShowAsViewModeAsync(viewId, viewMode);
}

inline Windows::Foundation::IAsyncOperation<bool> ApplicationViewSwitcher::TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode, Windows::UI::ViewManagement::ViewModePreferences const& viewModePreferences)
{
    return get_activation_factory<ApplicationViewSwitcher, Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3>().TryShowAsViewModeAsync(viewId, viewMode, viewModePreferences);
}

inline ApplicationViewTransferContext::ApplicationViewTransferContext() :
    ApplicationViewTransferContext(activate_instance<ApplicationViewTransferContext>())
{}

inline hstring ApplicationViewTransferContext::DataPackageFormatId()
{
    return get_activation_factory<ApplicationViewTransferContext, Windows::UI::ViewManagement::IApplicationViewTransferContextStatics>().DataPackageFormatId();
}

inline Windows::UI::ViewManagement::InputPane InputPane::GetForCurrentView()
{
    return get_activation_factory<InputPane, Windows::UI::ViewManagement::IInputPaneStatics>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncAction ProjectionManager::StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId)
{
    return get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics>().StartProjectingAsync(projectionViewId, anchorViewId);
}

inline Windows::Foundation::IAsyncAction ProjectionManager::SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId)
{
    return get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics>().SwapDisplaysForViewsAsync(projectionViewId, anchorViewId);
}

inline Windows::Foundation::IAsyncAction ProjectionManager::StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId)
{
    return get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics>().StopProjectingAsync(projectionViewId, anchorViewId);
}

inline bool ProjectionManager::ProjectionDisplayAvailable()
{
    return get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics>().ProjectionDisplayAvailable();
}

inline event_token ProjectionManager::ProjectionDisplayAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics>().ProjectionDisplayAvailableChanged(handler);
}

inline factory_event_revoker<Windows::UI::ViewManagement::IProjectionManagerStatics> ProjectionManager::ProjectionDisplayAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics>();
    return { factory, &abi_t<Windows::UI::ViewManagement::IProjectionManagerStatics>::remove_ProjectionDisplayAvailableChanged, factory.ProjectionDisplayAvailableChanged(handler) };
}

inline void ProjectionManager::ProjectionDisplayAvailableChanged(event_token const& token)
{
    get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics>().ProjectionDisplayAvailableChanged(token);
}

inline Windows::Foundation::IAsyncAction ProjectionManager::StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Devices::Enumeration::DeviceInformation const& displayDeviceInfo)
{
    return get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics2>().StartProjectingAsync(projectionViewId, anchorViewId, displayDeviceInfo);
}

inline Windows::Foundation::IAsyncOperation<bool> ProjectionManager::RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection)
{
    return get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics2>().RequestStartProjectingAsync(projectionViewId, anchorViewId, selection);
}

inline Windows::Foundation::IAsyncOperation<bool> ProjectionManager::RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& prefferedPlacement)
{
    return get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics2>().RequestStartProjectingAsync(projectionViewId, anchorViewId, selection, prefferedPlacement);
}

inline hstring ProjectionManager::GetDeviceSelector()
{
    return get_activation_factory<ProjectionManager, Windows::UI::ViewManagement::IProjectionManagerStatics2>().GetDeviceSelector();
}

inline Windows::UI::ViewManagement::StatusBar StatusBar::GetForCurrentView()
{
    return get_activation_factory<StatusBar, Windows::UI::ViewManagement::IStatusBarStatics>().GetForCurrentView();
}

inline UISettings::UISettings() :
    UISettings(activate_instance<UISettings>())
{}

inline Windows::UI::ViewManagement::UIViewSettings UIViewSettings::GetForCurrentView()
{
    return get_activation_factory<UIViewSettings, Windows::UI::ViewManagement::IUIViewSettingsStatics>().GetForCurrentView();
}

inline Windows::UI::ViewManagement::ViewModePreferences ViewModePreferences::CreateDefault(Windows::UI::ViewManagement::ApplicationViewMode const& mode)
{
    return get_activation_factory<ViewModePreferences, Windows::UI::ViewManagement::IViewModePreferencesStatics>().CreateDefault(mode);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::ViewManagement::IAccessibilitySettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IAccessibilitySettings> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IActivationViewSwitcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IActivationViewSwitcher> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationView> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationView2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationView2> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationView3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationView3> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationView4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationView4> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewFullscreenStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewFullscreenStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewInteropStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewInteropStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewScaling> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewScaling> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewScalingStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewScalingStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewStatics2> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewStatics3> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewSwitcherStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewSwitcherStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewSwitcherStatics2> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewSwitcherStatics3> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewTitleBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewTitleBar> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewTransferContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewTransferContext> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IApplicationViewTransferContextStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IApplicationViewTransferContextStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IInputPane> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IInputPane> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IInputPane2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IInputPane2> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IInputPaneControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IInputPaneControl> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IInputPaneStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IInputPaneStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IProjectionManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IProjectionManagerStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IProjectionManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IProjectionManagerStatics2> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IStatusBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IStatusBar> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IStatusBarProgressIndicator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IStatusBarProgressIndicator> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IStatusBarStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IStatusBarStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IUISettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IUISettings> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IUISettings2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IUISettings2> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IUISettings3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IUISettings3> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IUISettings4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IUISettings4> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IUIViewSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IUIViewSettings> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IUIViewSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IUIViewSettingsStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IViewModePreferences> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IViewModePreferences> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::IViewModePreferencesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::IViewModePreferencesStatics> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::AccessibilitySettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::AccessibilitySettings> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::ActivationViewSwitcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::ActivationViewSwitcher> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::ApplicationView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::ApplicationView> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::ApplicationViewConsolidatedEventArgs> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::ApplicationViewScaling> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::ApplicationViewScaling> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::ApplicationViewSwitcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::ApplicationViewSwitcher> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::ApplicationViewTitleBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::ApplicationViewTitleBar> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::ApplicationViewTransferContext> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::ApplicationViewTransferContext> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::InputPane> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::InputPane> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::InputPaneVisibilityEventArgs> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::ProjectionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::ProjectionManager> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::StatusBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::StatusBar> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::StatusBarProgressIndicator> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::StatusBarProgressIndicator> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::UISettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::UISettings> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::UIViewSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::UIViewSettings> {};

template<> struct hash<winrt::Windows::UI::ViewManagement::ViewModePreferences> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ViewManagement::ViewModePreferences> {};

}

WINRT_WARNING_POP
