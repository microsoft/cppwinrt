// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Display.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->get_IsSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsOverrideActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->get_IsOverrideActive(&value));
    return value;
}

template <typename D> double consume_Windows_Graphics_Display_IBrightnessOverride<D>::BrightnessLevel() const
{
    double level{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->get_BrightnessLevel(&level));
    return level;
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::SetBrightnessLevel(double brightnessLevel, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->SetBrightnessLevel(brightnessLevel, get_abi(options)));
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::SetBrightnessScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->SetBrightnessScenario(get_abi(scenario), get_abi(options)));
}

template <typename D> double consume_Windows_Graphics_Display_IBrightnessOverride<D>::GetLevelForScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario) const
{
    double brightnessLevel{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->GetLevelForScenario(get_abi(scenario), &brightnessLevel));
    return brightnessLevel;
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::StartOverride() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->StartOverride());
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::StopOverride() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->StopOverride());
}

template <typename D> event_token consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->add_IsSupportedChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IBrightnessOverride> consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IBrightnessOverride>(this, &abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_IsSupportedChanged, IsSupportedChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsSupportedChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->remove_IsSupportedChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsOverrideActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->add_IsOverrideActiveChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IBrightnessOverride> consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsOverrideActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IBrightnessOverride>(this, &abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_IsOverrideActiveChanged, IsOverrideActiveChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsOverrideActiveChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->remove_IsOverrideActiveChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IBrightnessOverride<D>::BrightnessLevelChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->add_BrightnessLevelChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IBrightnessOverride> consume_Windows_Graphics_Display_IBrightnessOverride<D>::BrightnessLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IBrightnessOverride>(this, &abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_BrightnessLevelChanged, BrightnessLevelChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::BrightnessLevelChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->remove_BrightnessLevelChanged(get_abi(token)));
}

template <typename D> Windows::Graphics::Display::BrightnessOverride consume_Windows_Graphics_Display_IBrightnessOverrideStatics<D>::GetDefaultForSystem() const
{
    Windows::Graphics::Display::BrightnessOverride value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideStatics)->GetDefaultForSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::BrightnessOverride consume_Windows_Graphics_Display_IBrightnessOverrideStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Display::BrightnessOverride value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Display_IBrightnessOverrideStatics<D>::SaveForSystemAsync(Windows::Graphics::Display::BrightnessOverride const& value) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideStatics)->SaveForSystemAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayInformation<D>::CurrentOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_CurrentOrientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayInformation<D>::NativeOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_NativeOrientation(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformation<D>::OrientationChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->add_OrientationChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformation> consume_Windows_Graphics_Display_IDisplayInformation<D>::OrientationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformation>(this, &abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_OrientationChanged, OrientationChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformation<D>::OrientationChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->remove_OrientationChanged(get_abi(token)));
}

template <typename D> Windows::Graphics::Display::ResolutionScale consume_Windows_Graphics_Display_IDisplayInformation<D>::ResolutionScale() const
{
    Windows::Graphics::Display::ResolutionScale value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_ResolutionScale(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IDisplayInformation<D>::LogicalDpi() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_LogicalDpi(&value));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IDisplayInformation<D>::RawDpiX() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_RawDpiX(&value));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IDisplayInformation<D>::RawDpiY() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_RawDpiY(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformation<D>::DpiChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->add_DpiChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformation> consume_Windows_Graphics_Display_IDisplayInformation<D>::DpiChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformation>(this, &abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_DpiChanged, DpiChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformation<D>::DpiChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->remove_DpiChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Graphics_Display_IDisplayInformation<D>::StereoEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_StereoEnabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformation<D>::StereoEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->add_StereoEnabledChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformation> consume_Windows_Graphics_Display_IDisplayInformation<D>::StereoEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformation>(this, &abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_StereoEnabledChanged, StereoEnabledChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformation<D>::StereoEnabledChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->remove_StereoEnabledChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Graphics_Display_IDisplayInformation<D>::GetColorProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->GetColorProfileAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformation<D>::ColorProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->add_ColorProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformation> consume_Windows_Graphics_Display_IDisplayInformation<D>::ColorProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformation>(this, &abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_ColorProfileChanged, ColorProfileChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformation<D>::ColorProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->remove_ColorProfileChanged(get_abi(token)));
}

template <typename D> double consume_Windows_Graphics_Display_IDisplayInformation2<D>::RawPixelsPerViewPixel() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation2)->get_RawPixelsPerViewPixel(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Graphics_Display_IDisplayInformation3<D>::DiagonalSizeInInches() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation3)->get_DiagonalSizeInInches(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Display_IDisplayInformation4<D>::ScreenWidthInRawPixels() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation4)->get_ScreenWidthInRawPixels(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Display_IDisplayInformation4<D>::ScreenHeightInRawPixels() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation4)->get_ScreenHeightInRawPixels(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayInformation consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Display::DisplayInformation current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->GetForCurrentView(put_abi(current)));
    return current;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::AutoRotationPreferences() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->get_AutoRotationPreferences(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->put_AutoRotationPreferences(get_abi(value)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->add_DisplayContentsInvalidated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformationStatics> consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::DisplayContentsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformationStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayInformationStatics>::remove_DisplayContentsInvalidated, DisplayContentsInvalidated(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::DisplayContentsInvalidated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->remove_DisplayContentsInvalidated(get_abi(token)));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::CurrentOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_CurrentOrientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::NativeOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_NativeOrientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::AutoRotationPreferences() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_AutoRotationPreferences(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->put_AutoRotationPreferences(get_abi(value)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_OrientationChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::OrientationChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_OrientationChanged, OrientationChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::OrientationChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_OrientationChanged(get_abi(token)));
}

template <typename D> Windows::Graphics::Display::ResolutionScale consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::ResolutionScale() const
{
    Windows::Graphics::Display::ResolutionScale value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_ResolutionScale(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::LogicalDpi() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_LogicalDpi(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_LogicalDpiChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::LogicalDpiChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_LogicalDpiChanged, LogicalDpiChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::LogicalDpiChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_LogicalDpiChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::StereoEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_StereoEnabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_StereoEnabledChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::StereoEnabledChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_StereoEnabledChanged, StereoEnabledChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::StereoEnabledChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_StereoEnabledChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::GetColorProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->GetColorProfileAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_ColorProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::ColorProfileChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_ColorProfileChanged, ColorProfileChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::ColorProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_ColorProfileChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_DisplayContentsInvalidated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::DisplayContentsInvalidated(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_DisplayContentsInvalidated, DisplayContentsInvalidated(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::DisplayContentsInvalidated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_DisplayContentsInvalidated(get_abi(token)));
}

template <> struct delegate<Windows::Graphics::Display::DisplayPropertiesEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Graphics::Display::DisplayPropertiesEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Graphics::Display::DisplayPropertiesEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IBrightnessOverride> : produce_base<D, Windows::Graphics::Display::IBrightnessOverride>
{
    HRESULT __stdcall get_IsSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverrideActive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOverrideActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BrightnessLevel(double* level) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *level = detach_abi(this->shim().BrightnessLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetBrightnessLevel(double brightnessLevel, abi_t<Windows::Graphics::Display::DisplayBrightnessOverrideOptions> options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBrightnessLevel(brightnessLevel, *reinterpret_cast<Windows::Graphics::Display::DisplayBrightnessOverrideOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetBrightnessScenario(abi_t<Windows::Graphics::Display::DisplayBrightnessScenario> scenario, abi_t<Windows::Graphics::Display::DisplayBrightnessOverrideOptions> options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBrightnessScenario(*reinterpret_cast<Windows::Graphics::Display::DisplayBrightnessScenario const*>(&scenario), *reinterpret_cast<Windows::Graphics::Display::DisplayBrightnessOverrideOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLevelForScenario(abi_t<Windows::Graphics::Display::DisplayBrightnessScenario> scenario, double* brightnessLevel) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *brightnessLevel = detach_abi(this->shim().GetLevelForScenario(*reinterpret_cast<Windows::Graphics::Display::DisplayBrightnessScenario const*>(&scenario)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartOverride() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartOverride();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopOverride() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopOverride();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsSupportedChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().IsSupportedChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsSupportedChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSupportedChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsOverrideActiveChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().IsOverrideActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsOverrideActiveChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOverrideActiveChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BrightnessLevelChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BrightnessLevelChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BrightnessLevelChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BrightnessLevelChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IBrightnessOverrideStatics> : produce_base<D, Windows::Graphics::Display::IBrightnessOverrideStatics>
{
    HRESULT __stdcall GetDefaultForSystem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefaultForSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall SaveForSystemAsync(::IUnknown* value, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SaveForSystemAsync(*reinterpret_cast<Windows::Graphics::Display::BrightnessOverride const*>(&value)));
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
struct produce<D, Windows::Graphics::Display::IDisplayInformation> : produce_base<D, Windows::Graphics::Display::IDisplayInformation>
{
    HRESULT __stdcall get_CurrentOrientation(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NativeOrientation(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NativeOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OrientationChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().OrientationChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OrientationChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OrientationChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionScale(abi_t<Windows::Graphics::Display::ResolutionScale>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolutionScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalDpi(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LogicalDpi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawDpiX(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawDpiX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RawDpiY(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawDpiY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DpiChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DpiChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DpiChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StereoEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StereoEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StereoEnabledChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StereoEnabledChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StereoEnabledChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StereoEnabledChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetColorProfileAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetColorProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ColorProfileChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ColorProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ColorProfileChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation2> : produce_base<D, Windows::Graphics::Display::IDisplayInformation2>
{
    HRESULT __stdcall get_RawPixelsPerViewPixel(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RawPixelsPerViewPixel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation3> : produce_base<D, Windows::Graphics::Display::IDisplayInformation3>
{
    HRESULT __stdcall get_DiagonalSizeInInches(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiagonalSizeInInches());
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
struct produce<D, Windows::Graphics::Display::IDisplayInformation4> : produce_base<D, Windows::Graphics::Display::IDisplayInformation4>
{
    HRESULT __stdcall get_ScreenWidthInRawPixels(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScreenWidthInRawPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScreenHeightInRawPixels(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ScreenHeightInRawPixels());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformationStatics> : produce_base<D, Windows::Graphics::Display::IDisplayInformationStatics>
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

    HRESULT __stdcall get_AutoRotationPreferences(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoRotationPreferences());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRotationPreferences(abi_t<Windows::Graphics::Display::DisplayOrientations> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoRotationPreferences(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DisplayContentsInvalidated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DisplayContentsInvalidated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DisplayContentsInvalidated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayContentsInvalidated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayPropertiesStatics> : produce_base<D, Windows::Graphics::Display::IDisplayPropertiesStatics>
{
    HRESULT __stdcall get_CurrentOrientation(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CurrentOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NativeOrientation(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NativeOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoRotationPreferences(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoRotationPreferences());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRotationPreferences(abi_t<Windows::Graphics::Display::DisplayOrientations> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoRotationPreferences(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OrientationChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().OrientationChanged(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OrientationChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OrientationChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionScale(abi_t<Windows::Graphics::Display::ResolutionScale>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResolutionScale());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalDpi(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LogicalDpi());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LogicalDpiChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LogicalDpiChanged(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LogicalDpiChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogicalDpiChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StereoEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StereoEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StereoEnabledChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StereoEnabledChanged(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StereoEnabledChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StereoEnabledChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetColorProfileAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetColorProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ColorProfileChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ColorProfileChanged(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ColorProfileChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DisplayContentsInvalidated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DisplayContentsInvalidated(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DisplayContentsInvalidated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayContentsInvalidated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Display {

inline Windows::Graphics::Display::BrightnessOverride BrightnessOverride::GetDefaultForSystem()
{
    return get_activation_factory<BrightnessOverride, Windows::Graphics::Display::IBrightnessOverrideStatics>().GetDefaultForSystem();
}

inline Windows::Graphics::Display::BrightnessOverride BrightnessOverride::GetForCurrentView()
{
    return get_activation_factory<BrightnessOverride, Windows::Graphics::Display::IBrightnessOverrideStatics>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncOperation<bool> BrightnessOverride::SaveForSystemAsync(Windows::Graphics::Display::BrightnessOverride const& value)
{
    return get_activation_factory<BrightnessOverride, Windows::Graphics::Display::IBrightnessOverrideStatics>().SaveForSystemAsync(value);
}

inline Windows::Graphics::Display::DisplayInformation DisplayInformation::GetForCurrentView()
{
    return get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().GetForCurrentView();
}

inline Windows::Graphics::Display::DisplayOrientations DisplayInformation::AutoRotationPreferences()
{
    return get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().AutoRotationPreferences();
}

inline void DisplayInformation::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value)
{
    get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().AutoRotationPreferences(value);
}

inline event_token DisplayInformation::DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().DisplayContentsInvalidated(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayInformationStatics> DisplayInformation::DisplayContentsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>();
    return { factory, &abi_t<Windows::Graphics::Display::IDisplayInformationStatics>::remove_DisplayContentsInvalidated, factory.DisplayContentsInvalidated(handler) };
}

inline void DisplayInformation::DisplayContentsInvalidated(event_token const& token)
{
    get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().DisplayContentsInvalidated(token);
}

inline Windows::Graphics::Display::DisplayOrientations DisplayProperties::CurrentOrientation()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().CurrentOrientation();
}

inline Windows::Graphics::Display::DisplayOrientations DisplayProperties::NativeOrientation()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().NativeOrientation();
}

inline Windows::Graphics::Display::DisplayOrientations DisplayProperties::AutoRotationPreferences()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().AutoRotationPreferences();
}

inline void DisplayProperties::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().AutoRotationPreferences(value);
}

inline event_token DisplayProperties::OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().OrientationChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::OrientationChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_OrientationChanged, factory.OrientationChanged(handler) };
}

inline void DisplayProperties::OrientationChanged(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().OrientationChanged(token);
}

inline Windows::Graphics::Display::ResolutionScale DisplayProperties::ResolutionScale()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().ResolutionScale();
}

inline float DisplayProperties::LogicalDpi()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().LogicalDpi();
}

inline event_token DisplayProperties::LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().LogicalDpiChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::LogicalDpiChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_LogicalDpiChanged, factory.LogicalDpiChanged(handler) };
}

inline void DisplayProperties::LogicalDpiChanged(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().LogicalDpiChanged(token);
}

inline bool DisplayProperties::StereoEnabled()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().StereoEnabled();
}

inline event_token DisplayProperties::StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().StereoEnabledChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::StereoEnabledChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_StereoEnabledChanged, factory.StereoEnabledChanged(handler) };
}

inline void DisplayProperties::StereoEnabledChanged(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().StereoEnabledChanged(token);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> DisplayProperties::GetColorProfileAsync()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().GetColorProfileAsync();
}

inline event_token DisplayProperties::ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().ColorProfileChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::ColorProfileChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_ColorProfileChanged, factory.ColorProfileChanged(handler) };
}

inline void DisplayProperties::ColorProfileChanged(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().ColorProfileChanged(token);
}

inline event_token DisplayProperties::DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().DisplayContentsInvalidated(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::DisplayContentsInvalidated(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_DisplayContentsInvalidated, factory.DisplayContentsInvalidated(handler) };
}

inline void DisplayProperties::DisplayContentsInvalidated(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().DisplayContentsInvalidated(token);
}

template <typename L> DisplayPropertiesEventHandler::DisplayPropertiesEventHandler(L handler) :
    DisplayPropertiesEventHandler(impl::make_delegate<DisplayPropertiesEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DisplayPropertiesEventHandler::DisplayPropertiesEventHandler(F* handler) :
    DisplayPropertiesEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> DisplayPropertiesEventHandler::DisplayPropertiesEventHandler(O* object, M method) :
    DisplayPropertiesEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void DisplayPropertiesEventHandler::operator()(Windows::Foundation::IInspectable const& sender) const
{
    check_hresult((*(abi_t<DisplayPropertiesEventHandler>**)this)->Invoke(get_abi(sender)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Display::IBrightnessOverride> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::IBrightnessOverride> {};

template<> struct hash<winrt::Windows::Graphics::Display::IBrightnessOverrideStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::IBrightnessOverrideStatics> {};

template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::IDisplayInformation> {};

template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::IDisplayInformation2> {};

template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformation3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::IDisplayInformation3> {};

template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformation4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::IDisplayInformation4> {};

template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::IDisplayInformationStatics> {};

template<> struct hash<winrt::Windows::Graphics::Display::IDisplayPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::IDisplayPropertiesStatics> {};

template<> struct hash<winrt::Windows::Graphics::Display::BrightnessOverride> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::BrightnessOverride> {};

template<> struct hash<winrt::Windows::Graphics::Display::DisplayInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::DisplayInformation> {};

template<> struct hash<winrt::Windows::Graphics::Display::DisplayProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Display::DisplayProperties> {};

}

WINRT_WARNING_POP
