// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Graphics.Display.1.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Display {

struct [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] DisplayPropertiesEventHandler : Windows::Foundation::IUnknown
{
    DisplayPropertiesEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> DisplayPropertiesEventHandler(L lambda);
    template <typename F> DisplayPropertiesEventHandler(F* function);
    template <typename O, typename M> DisplayPropertiesEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender) const;
};

struct WINRT_EBO BrightnessOverride :
    Windows::Graphics::Display::IBrightnessOverride
{
    BrightnessOverride(std::nullptr_t) noexcept {}
    static Windows::Graphics::Display::BrightnessOverride GetDefaultForSystem();
    static Windows::Graphics::Display::BrightnessOverride GetForCurrentView();
    static Windows::Foundation::IAsyncOperation<bool> SaveForSystemAsync(Windows::Graphics::Display::BrightnessOverride const& value);
};

struct WINRT_EBO DisplayInformation :
    Windows::Graphics::Display::IDisplayInformation,
    impl::require<DisplayInformation, Windows::Graphics::Display::IDisplayInformation2, Windows::Graphics::Display::IDisplayInformation3, Windows::Graphics::Display::IDisplayInformation4>
{
    DisplayInformation(std::nullptr_t) noexcept {}
    static Windows::Graphics::Display::DisplayInformation GetForCurrentView();
    static Windows::Graphics::Display::DisplayOrientations AutoRotationPreferences();
    static void AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value);
    static event_token DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler);
    using DisplayContentsInvalidated_revoker = factory_event_revoker<Windows::Graphics::Display::IDisplayInformationStatics>;
    static DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler);
    static void DisplayContentsInvalidated(event_token const& token);
};

struct [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] DisplayProperties
{
    DisplayProperties() = delete;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static Windows::Graphics::Display::DisplayOrientations CurrentOrientation();
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static Windows::Graphics::Display::DisplayOrientations NativeOrientation();
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static Windows::Graphics::Display::DisplayOrientations AutoRotationPreferences();
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static void AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static event_token OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    using OrientationChanged_revoker = factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static void OrientationChanged(event_token const& token);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static Windows::Graphics::Display::ResolutionScale ResolutionScale();
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static float LogicalDpi();
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static event_token LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    using LogicalDpiChanged_revoker = factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static LogicalDpiChanged_revoker LogicalDpiChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static void LogicalDpiChanged(event_token const& token);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static bool StereoEnabled();
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static event_token StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    using StereoEnabledChanged_revoker = factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static StereoEnabledChanged_revoker StereoEnabledChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static void StereoEnabledChanged(event_token const& token);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> GetColorProfileAsync();
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static event_token ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    using ColorProfileChanged_revoker = factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static ColorProfileChanged_revoker ColorProfileChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static void ColorProfileChanged(event_token const& token);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static event_token DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    using DisplayContentsInvalidated_revoker = factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler);
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] static void DisplayContentsInvalidated(event_token const& token);
};

}
