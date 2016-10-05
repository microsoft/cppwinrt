// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Graphics.Display.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Graphics::Display {

template <typename H> struct impl_DisplayPropertiesEventHandler : implements<impl_DisplayPropertiesEventHandler<H>, abi<DisplayPropertiesEventHandler>>, H
{
    impl_DisplayPropertiesEventHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::IInspectable> sender) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::IInspectable *>(&sender));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Graphics::Display {

struct WINRT_EBO DisplayInformation :
    Windows::Graphics::Display::IDisplayInformation,
    impl::require<DisplayInformation, Windows::Graphics::Display::IDisplayInformation2, Windows::Graphics::Display::IDisplayInformation3, Windows::Graphics::Display::IDisplayInformation4>
{
    DisplayInformation(std::nullptr_t) noexcept {}
    static Windows::Graphics::Display::DisplayInformation GetForCurrentView();
    static Windows::Graphics::Display::DisplayOrientations AutoRotationPreferences();
    static void AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value);
    static event_token DisplayContentsInvalidated(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler);
    using DisplayContentsInvalidated_revoker = factory_event_revoker<IDisplayInformationStatics>;
    static DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::IInspectable> & handler);
    static void DisplayContentsInvalidated(event_token token);
};

struct DisplayProperties
{
    DisplayProperties() = delete;
    static Windows::Graphics::Display::DisplayOrientations CurrentOrientation();
    static Windows::Graphics::Display::DisplayOrientations NativeOrientation();
    static Windows::Graphics::Display::DisplayOrientations AutoRotationPreferences();
    static void AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value);
    static event_token OrientationChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    using OrientationChanged_revoker = factory_event_revoker<IDisplayPropertiesStatics>;
    static OrientationChanged_revoker OrientationChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    static void OrientationChanged(event_token token);
    static Windows::Graphics::Display::ResolutionScale ResolutionScale();
    static float LogicalDpi();
    static event_token LogicalDpiChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    using LogicalDpiChanged_revoker = factory_event_revoker<IDisplayPropertiesStatics>;
    static LogicalDpiChanged_revoker LogicalDpiChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    static void LogicalDpiChanged(event_token token);
    static bool StereoEnabled();
    static event_token StereoEnabledChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    using StereoEnabledChanged_revoker = factory_event_revoker<IDisplayPropertiesStatics>;
    static StereoEnabledChanged_revoker StereoEnabledChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    static void StereoEnabledChanged(event_token token);
    static Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> GetColorProfileAsync();
    static event_token ColorProfileChanged(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    using ColorProfileChanged_revoker = factory_event_revoker<IDisplayPropertiesStatics>;
    static ColorProfileChanged_revoker ColorProfileChanged(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    static void ColorProfileChanged(event_token token);
    static event_token DisplayContentsInvalidated(const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    using DisplayContentsInvalidated_revoker = factory_event_revoker<IDisplayPropertiesStatics>;
    static DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, const Windows::Graphics::Display::DisplayPropertiesEventHandler & handler);
    static void DisplayContentsInvalidated(event_token token);
};

}

}
