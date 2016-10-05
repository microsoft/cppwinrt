// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Core.0.h"
#include "Windows.ApplicationModel.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.UI.Core.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.ApplicationModel.1.h"
#include "Windows.ApplicationModel.Activation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Core {

struct __declspec(uuid("ef00f07f-2108-490a-877a-8a9f17c25fad")) __declspec(novtable) IAppListEntry : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayInfo(Windows::ApplicationModel::IAppDisplayInfo ** value) = 0;
    virtual HRESULT __stdcall abi_LaunchAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("0aacf7a4-5e1d-49df-8034-fb6a68bc5ed1")) __declspec(novtable) ICoreApplication : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall add_Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Suspending(event_token token) = 0;
    virtual HRESULT __stdcall add_Resuming(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Resuming(event_token token) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall abi_GetCurrentView(Windows::ApplicationModel::Core::ICoreApplicationView ** value) = 0;
    virtual HRESULT __stdcall abi_Run(Windows::ApplicationModel::Core::IFrameworkViewSource * viewSource) = 0;
    virtual HRESULT __stdcall abi_RunWithActivationFactories(Windows::Foundation::IGetActivationFactory * activationFactoryCallback) = 0;
};

struct __declspec(uuid("998681fb-1ab6-4b7f-be4a-9a0645224c04")) __declspec(novtable) ICoreApplication2 : Windows::IInspectable
{
    virtual HRESULT __stdcall add_BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_BackgroundActivated(event_token token) = 0;
    virtual HRESULT __stdcall add_LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LeavingBackground(event_token token) = 0;
    virtual HRESULT __stdcall add_EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_EnteredBackground(event_token token) = 0;
    virtual HRESULT __stdcall abi_EnablePrelaunch(bool value) = 0;
};

struct __declspec(uuid("cf86461d-261e-4b72-9acd-44ed2ace6a29")) __declspec(novtable) ICoreApplicationExit : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Exit() = 0;
    virtual HRESULT __stdcall add_Exiting(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Exiting(event_token token) = 0;
};

struct __declspec(uuid("f0e24ab0-dd09-42e1-b0bc-e0e131f78d7e")) __declspec(novtable) ICoreApplicationUnhandledError : Windows::IInspectable
{
    virtual HRESULT __stdcall add_UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_UnhandledErrorDetected(event_token token) = 0;
};

struct __declspec(uuid("518dc408-c077-475b-809e-0bc0c57e4b74")) __declspec(novtable) ICoreApplicationUseCount : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IncrementApplicationUseCount() = 0;
    virtual HRESULT __stdcall abi_DecrementApplicationUseCount() = 0;
};

struct __declspec(uuid("638bb2db-451d-4661-b099-414f34ffb9f1")) __declspec(novtable) ICoreApplicationView : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CoreWindow(Windows::UI::Core::ICoreWindow ** value) = 0;
    virtual HRESULT __stdcall add_Activated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Activated(event_token token) = 0;
    virtual HRESULT __stdcall get_IsMain(bool * value) = 0;
    virtual HRESULT __stdcall get_IsHosted(bool * value) = 0;
};

struct __declspec(uuid("68eb7adf-917f-48eb-9aeb-7de53e086ab1")) __declspec(novtable) ICoreApplicationView2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Dispatcher(Windows::UI::Core::ICoreDispatcher ** value) = 0;
};

struct __declspec(uuid("07ebe1b3-a4cf-4550-ab70-b07e85330bc8")) __declspec(novtable) ICoreApplicationView3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsComponent(bool * value) = 0;
    virtual HRESULT __stdcall get_TitleBar(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar ** value) = 0;
    virtual HRESULT __stdcall add_HostedViewClosing(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_HostedViewClosing(event_token token) = 0;
};

struct __declspec(uuid("006d35e3-e1f1-431b-9508-29b96926ac53")) __declspec(novtable) ICoreApplicationViewTitleBar : Windows::IInspectable
{
    virtual HRESULT __stdcall put_ExtendViewIntoTitleBar(bool value) = 0;
    virtual HRESULT __stdcall get_ExtendViewIntoTitleBar(bool * value) = 0;
    virtual HRESULT __stdcall get_SystemOverlayLeftInset(double * value) = 0;
    virtual HRESULT __stdcall get_SystemOverlayRightInset(double * value) = 0;
    virtual HRESULT __stdcall get_Height(double * value) = 0;
    virtual HRESULT __stdcall add_LayoutMetricsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_LayoutMetricsChanged(event_token token) = 0;
    virtual HRESULT __stdcall get_IsVisible(bool * value) = 0;
    virtual HRESULT __stdcall add_IsVisibleChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_IsVisibleChanged(event_token token) = 0;
};

struct __declspec(uuid("1ada0e3e-e4a2-4123-b451-dc96bf800419")) __declspec(novtable) ICoreImmersiveApplication : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Views(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView> ** value) = 0;
    virtual HRESULT __stdcall abi_CreateNewView(hstring runtimeType, hstring entryPoint, Windows::ApplicationModel::Core::ICoreApplicationView ** view) = 0;
    virtual HRESULT __stdcall get_MainView(Windows::ApplicationModel::Core::ICoreApplicationView ** value) = 0;
};

struct __declspec(uuid("828e1e36-e9e3-4cfc-9b66-48b78ea9bb2c")) __declspec(novtable) ICoreImmersiveApplication2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateNewViewFromMainView(Windows::ApplicationModel::Core::ICoreApplicationView ** view) = 0;
};

struct __declspec(uuid("34a05b2f-ee0d-41e5-8314-cf10c91bf0af")) __declspec(novtable) ICoreImmersiveApplication3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateNewViewWithViewSource(Windows::ApplicationModel::Core::IFrameworkViewSource * viewSource, Windows::ApplicationModel::Core::ICoreApplicationView ** view) = 0;
};

struct __declspec(uuid("faab5cd0-8924-45ac-ad0f-a08fae5d0324")) __declspec(novtable) IFrameworkView : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Initialize(Windows::ApplicationModel::Core::ICoreApplicationView * applicationView) = 0;
    virtual HRESULT __stdcall abi_SetWindow(Windows::UI::Core::ICoreWindow * window) = 0;
    virtual HRESULT __stdcall abi_Load(hstring entryPoint) = 0;
    virtual HRESULT __stdcall abi_Run() = 0;
    virtual HRESULT __stdcall abi_Uninitialize() = 0;
};

struct __declspec(uuid("cd770614-65c4-426c-9494-34fc43554862")) __declspec(novtable) IFrameworkViewSource : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateView(Windows::ApplicationModel::Core::IFrameworkView ** viewProvider) = 0;
};

struct __declspec(uuid("d238943c-b24e-4790-acb5-3e4243c4ff87")) __declspec(novtable) IHostedViewClosingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** result) = 0;
};

struct __declspec(uuid("9459b726-53b5-4686-9eaf-fa8162dc3980")) __declspec(novtable) IUnhandledError : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool * value) = 0;
    virtual HRESULT __stdcall abi_Propagate() = 0;
};

struct __declspec(uuid("679ab78b-b336-4822-ac40-0d750f0b7a2b")) __declspec(novtable) IUnhandledErrorDetectedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UnhandledError(Windows::ApplicationModel::Core::IUnhandledError ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Core::AppListEntry> { using default_interface = Windows::ApplicationModel::Core::IAppListEntry; };
template <> struct traits<Windows::ApplicationModel::Core::CoreApplicationView> { using default_interface = Windows::ApplicationModel::Core::ICoreApplicationView; };
template <> struct traits<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar> { using default_interface = Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar; };
template <> struct traits<Windows::ApplicationModel::Core::HostedViewClosingEventArgs> { using default_interface = Windows::ApplicationModel::Core::IHostedViewClosingEventArgs; };
template <> struct traits<Windows::ApplicationModel::Core::UnhandledError> { using default_interface = Windows::ApplicationModel::Core::IUnhandledError; };
template <> struct traits<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> { using default_interface = Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs; };

}

namespace Windows::ApplicationModel::Core {

template <typename T> struct impl_IAppListEntry;
template <typename T> struct impl_ICoreApplication;
template <typename T> struct impl_ICoreApplication2;
template <typename T> struct impl_ICoreApplicationExit;
template <typename T> struct impl_ICoreApplicationUnhandledError;
template <typename T> struct impl_ICoreApplicationUseCount;
template <typename T> struct impl_ICoreApplicationView;
template <typename T> struct impl_ICoreApplicationView2;
template <typename T> struct impl_ICoreApplicationView3;
template <typename T> struct impl_ICoreApplicationViewTitleBar;
template <typename T> struct impl_ICoreImmersiveApplication;
template <typename T> struct impl_ICoreImmersiveApplication2;
template <typename T> struct impl_ICoreImmersiveApplication3;
template <typename T> struct impl_IFrameworkView;
template <typename T> struct impl_IFrameworkViewSource;
template <typename T> struct impl_IHostedViewClosingEventArgs;
template <typename T> struct impl_IUnhandledError;
template <typename T> struct impl_IUnhandledErrorDetectedEventArgs;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Core::IAppListEntry>
{
    using abi = ABI::Windows::ApplicationModel::Core::IAppListEntry;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_IAppListEntry<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreApplication>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreApplication;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreApplication<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreApplication2>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreApplication2;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreApplication2<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreApplicationExit>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreApplicationExit;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreApplicationExit<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreApplicationUnhandledError<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreApplicationUseCount>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreApplicationUseCount;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreApplicationUseCount<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreApplicationView>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreApplicationView;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreApplicationView<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreApplicationView2>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreApplicationView2;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreApplicationView2<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreApplicationView3>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreApplicationView3;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreApplicationView3<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreApplicationViewTitleBar<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreImmersiveApplication>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreImmersiveApplication;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreImmersiveApplication<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreImmersiveApplication2;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreImmersiveApplication2<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
{
    using abi = ABI::Windows::ApplicationModel::Core::ICoreImmersiveApplication3;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_ICoreImmersiveApplication3<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::IFrameworkView>
{
    using abi = ABI::Windows::ApplicationModel::Core::IFrameworkView;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_IFrameworkView<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::IFrameworkViewSource>
{
    using abi = ABI::Windows::ApplicationModel::Core::IFrameworkViewSource;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_IFrameworkViewSource<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Core::IHostedViewClosingEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_IHostedViewClosingEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::IUnhandledError>
{
    using abi = ABI::Windows::ApplicationModel::Core::IUnhandledError;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_IUnhandledError<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Core::impl_IUnhandledErrorDetectedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Core::AppListEntry>
{
    using abi = ABI::Windows::ApplicationModel::Core::AppListEntry;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Core.AppListEntry"; }
};

template <> struct traits<Windows::ApplicationModel::Core::CoreApplication>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Core.CoreApplication"; }
};

template <> struct traits<Windows::ApplicationModel::Core::CoreApplicationView>
{
    using abi = ABI::Windows::ApplicationModel::Core::CoreApplicationView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Core.CoreApplicationView"; }
};

template <> struct traits<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>
{
    using abi = ABI::Windows::ApplicationModel::Core::CoreApplicationViewTitleBar;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Core.CoreApplicationViewTitleBar"; }
};

template <> struct traits<Windows::ApplicationModel::Core::HostedViewClosingEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Core::HostedViewClosingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Core.HostedViewClosingEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Core::UnhandledError>
{
    using abi = ABI::Windows::ApplicationModel::Core::UnhandledError;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Core.UnhandledError"; }
};

template <> struct traits<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs"; }
};

}

}
