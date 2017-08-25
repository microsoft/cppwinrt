// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.ApplicationModel.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core {

struct WINRT_EBO AppListEntry :
    Windows::ApplicationModel::Core::IAppListEntry
{
    AppListEntry(std::nullptr_t) noexcept {}
};

struct CoreApplication
{
    CoreApplication() = delete;
    static hstring Id();
    static event_token Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler);
    using Suspending_revoker = factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication>;
    static Suspending_revoker Suspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler);
    static void Suspending(event_token const& token);
    static event_token Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using Resuming_revoker = factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication>;
    static Resuming_revoker Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void Resuming(event_token const& token);
    static Windows::Foundation::Collections::IPropertySet Properties();
    static Windows::ApplicationModel::Core::CoreApplicationView GetCurrentView();
    static void Run(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource);
    static void RunWithActivationFactories(Windows::Foundation::IGetActivationFactory const& activationFactoryCallback);
    static event_token BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler);
    using BackgroundActivated_revoker = factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication2>;
    static BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler);
    static void BackgroundActivated(event_token const& token);
    static event_token LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler);
    using LeavingBackground_revoker = factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication2>;
    static LeavingBackground_revoker LeavingBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler);
    static void LeavingBackground(event_token const& token);
    static event_token EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler);
    using EnteredBackground_revoker = factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication2>;
    static EnteredBackground_revoker EnteredBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler);
    static void EnteredBackground(event_token const& token);
    static void EnablePrelaunch(bool value);
    static void Exit();
    static event_token Exiting(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using Exiting_revoker = factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplicationExit>;
    static Exiting_revoker Exiting(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void Exiting(event_token const& token);
    static event_token UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler);
    using UnhandledErrorDetected_revoker = factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>;
    static UnhandledErrorDetected_revoker UnhandledErrorDetected(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler);
    static void UnhandledErrorDetected(event_token const& token);
    static void IncrementApplicationUseCount();
    static void DecrementApplicationUseCount();
    static Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView> Views();
    static Windows::ApplicationModel::Core::CoreApplicationView CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint);
    static Windows::ApplicationModel::Core::CoreApplicationView MainView();
    static Windows::ApplicationModel::Core::CoreApplicationView CreateNewView();
    static Windows::ApplicationModel::Core::CoreApplicationView CreateNewView(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource);
};

struct WINRT_EBO CoreApplicationView :
    Windows::ApplicationModel::Core::ICoreApplicationView,
    impl::require<CoreApplicationView, Windows::ApplicationModel::Core::ICoreApplicationView2, Windows::ApplicationModel::Core::ICoreApplicationView3, Windows::ApplicationModel::Core::ICoreApplicationView5>
{
    CoreApplicationView(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CoreApplicationViewTitleBar :
    Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar
{
    CoreApplicationViewTitleBar(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HostedViewClosingEventArgs :
    Windows::ApplicationModel::Core::IHostedViewClosingEventArgs
{
    HostedViewClosingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UnhandledError :
    Windows::ApplicationModel::Core::IUnhandledError
{
    UnhandledError(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UnhandledErrorDetectedEventArgs :
    Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs
{
    UnhandledErrorDetectedEventArgs(std::nullptr_t) noexcept {}
};

}
