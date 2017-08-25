// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct AppDisplayInfo;
struct EnteredBackgroundEventArgs;
struct LeavingBackgroundEventArgs;
struct SuspendingEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation {

struct BackgroundActivatedEventArgs;
struct IActivatedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct IGetActivationFactory;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct CoreDispatcher;
struct CoreWindow;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core {

struct IAppListEntry;
struct ICoreApplication;
struct ICoreApplication2;
struct ICoreApplicationExit;
struct ICoreApplicationUnhandledError;
struct ICoreApplicationUseCount;
struct ICoreApplicationView;
struct ICoreApplicationView2;
struct ICoreApplicationView3;
struct ICoreApplicationView5;
struct ICoreApplicationViewTitleBar;
struct ICoreImmersiveApplication;
struct ICoreImmersiveApplication2;
struct ICoreImmersiveApplication3;
struct IFrameworkView;
struct IFrameworkViewSource;
struct IHostedViewClosingEventArgs;
struct IUnhandledError;
struct IUnhandledErrorDetectedEventArgs;
struct AppListEntry;
struct CoreApplication;
struct CoreApplicationView;
struct CoreApplicationViewTitleBar;
struct HostedViewClosingEventArgs;
struct UnhandledError;
struct UnhandledErrorDetectedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Core::IAppListEntry>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplication>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplication2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationExit>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationUseCount>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationView5>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreImmersiveApplication>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::IFrameworkView>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::IFrameworkViewSource>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::IUnhandledError>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Core::AppListEntry>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Core::CoreApplication>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Core::CoreApplicationView>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Core::HostedViewClosingEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Core::UnhandledError>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Core::IAppListEntry>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.IAppListEntry" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplication>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplication" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplication2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplication2" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationExit>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationExit" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationUnhandledError" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationUseCount>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationUseCount" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationView>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationView" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationView2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationView2" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationView3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationView3" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationView5>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationView5" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreApplicationViewTitleBar" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreImmersiveApplication>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreImmersiveApplication" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreImmersiveApplication2" }; };
template <> struct name<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.ICoreImmersiveApplication3" }; };
template <> struct name<Windows::ApplicationModel::Core::IFrameworkView>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.IFrameworkView" }; };
template <> struct name<Windows::ApplicationModel::Core::IFrameworkViewSource>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.IFrameworkViewSource" }; };
template <> struct name<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.IHostedViewClosingEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Core::IUnhandledError>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.IUnhandledError" }; };
template <> struct name<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.IUnhandledErrorDetectedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Core::AppListEntry>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.AppListEntry" }; };
template <> struct name<Windows::ApplicationModel::Core::CoreApplication>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.CoreApplication" }; };
template <> struct name<Windows::ApplicationModel::Core::CoreApplicationView>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.CoreApplicationView" }; };
template <> struct name<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.CoreApplicationViewTitleBar" }; };
template <> struct name<Windows::ApplicationModel::Core::HostedViewClosingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.HostedViewClosingEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Core::UnhandledError>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.UnhandledError" }; };
template <> struct name<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Core.UnhandledErrorDetectedEventArgs" }; };
template <> struct guid<Windows::ApplicationModel::Core::IAppListEntry>{ static constexpr GUID value{ 0xEF00F07F,0x2108,0x490A,{ 0x87,0x7A,0x8A,0x9F,0x17,0xC2,0x5F,0xAD } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplication>{ static constexpr GUID value{ 0x0AACF7A4,0x5E1D,0x49DF,{ 0x80,0x34,0xFB,0x6A,0x68,0xBC,0x5E,0xD1 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplication2>{ static constexpr GUID value{ 0x998681FB,0x1AB6,0x4B7F,{ 0xBE,0x4A,0x9A,0x06,0x45,0x22,0x4C,0x04 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplicationExit>{ static constexpr GUID value{ 0xCF86461D,0x261E,0x4B72,{ 0x9A,0xCD,0x44,0xED,0x2A,0xCE,0x6A,0x29 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>{ static constexpr GUID value{ 0xF0E24AB0,0xDD09,0x42E1,{ 0xB0,0xBC,0xE0,0xE1,0x31,0xF7,0x8D,0x7E } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplicationUseCount>{ static constexpr GUID value{ 0x518DC408,0xC077,0x475B,{ 0x80,0x9E,0x0B,0xC0,0xC5,0x7E,0x4B,0x74 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplicationView>{ static constexpr GUID value{ 0x638BB2DB,0x451D,0x4661,{ 0xB0,0x99,0x41,0x4F,0x34,0xFF,0xB9,0xF1 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplicationView2>{ static constexpr GUID value{ 0x68EB7ADF,0x917F,0x48EB,{ 0x9A,0xEB,0x7D,0xE5,0x3E,0x08,0x6A,0xB1 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplicationView3>{ static constexpr GUID value{ 0x07EBE1B3,0xA4CF,0x4550,{ 0xAB,0x70,0xB0,0x7E,0x85,0x33,0x0B,0xC8 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplicationView5>{ static constexpr GUID value{ 0x2BC095A8,0x8EF0,0x446D,{ 0x9E,0x60,0x3A,0x3E,0x04,0x28,0xC6,0x71 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>{ static constexpr GUID value{ 0x006D35E3,0xE1F1,0x431B,{ 0x95,0x08,0x29,0xB9,0x69,0x26,0xAC,0x53 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreImmersiveApplication>{ static constexpr GUID value{ 0x1ADA0E3E,0xE4A2,0x4123,{ 0xB4,0x51,0xDC,0x96,0xBF,0x80,0x04,0x19 } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>{ static constexpr GUID value{ 0x828E1E36,0xE9E3,0x4CFC,{ 0x9B,0x66,0x48,0xB7,0x8E,0xA9,0xBB,0x2C } }; };
template <> struct guid<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>{ static constexpr GUID value{ 0x34A05B2F,0xEE0D,0x41E5,{ 0x83,0x14,0xCF,0x10,0xC9,0x1B,0xF0,0xAF } }; };
template <> struct guid<Windows::ApplicationModel::Core::IFrameworkView>{ static constexpr GUID value{ 0xFAAB5CD0,0x8924,0x45AC,{ 0xAD,0x0F,0xA0,0x8F,0xAE,0x5D,0x03,0x24 } }; };
template <> struct guid<Windows::ApplicationModel::Core::IFrameworkViewSource>{ static constexpr GUID value{ 0xCD770614,0x65C4,0x426C,{ 0x94,0x94,0x34,0xFC,0x43,0x55,0x48,0x62 } }; };
template <> struct guid<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>{ static constexpr GUID value{ 0xD238943C,0xB24E,0x4790,{ 0xAC,0xB5,0x3E,0x42,0x43,0xC4,0xFF,0x87 } }; };
template <> struct guid<Windows::ApplicationModel::Core::IUnhandledError>{ static constexpr GUID value{ 0x9459B726,0x53B5,0x4686,{ 0x9E,0xAF,0xFA,0x81,0x62,0xDC,0x39,0x80 } }; };
template <> struct guid<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>{ static constexpr GUID value{ 0x679AB78B,0xB336,0x4822,{ 0xAC,0x40,0x0D,0x75,0x0F,0x0B,0x7A,0x2B } }; };
template <> struct default_interface<Windows::ApplicationModel::Core::AppListEntry>{ using type = Windows::ApplicationModel::Core::IAppListEntry; };
template <> struct default_interface<Windows::ApplicationModel::Core::CoreApplicationView>{ using type = Windows::ApplicationModel::Core::ICoreApplicationView; };
template <> struct default_interface<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>{ using type = Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar; };
template <> struct default_interface<Windows::ApplicationModel::Core::HostedViewClosingEventArgs>{ using type = Windows::ApplicationModel::Core::IHostedViewClosingEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Core::UnhandledError>{ using type = Windows::ApplicationModel::Core::IUnhandledError; };
template <> struct default_interface<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>{ using type = Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_IAppListEntry
{
    Windows::ApplicationModel::AppDisplayInfo DisplayInfo() const;
    Windows::Foundation::IAsyncOperation<bool> LaunchAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Core::IAppListEntry> { template <typename D> using type = consume_Windows_ApplicationModel_Core_IAppListEntry<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplication
{
    hstring Id() const;
    event_token Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const;
    using Suspending_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplication>;
    Suspending_revoker Suspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const;
    void Suspending(event_token const& token) const;
    event_token Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using Resuming_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplication>;
    Resuming_revoker Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void Resuming(event_token const& token) const;
    Windows::Foundation::Collections::IPropertySet Properties() const;
    Windows::ApplicationModel::Core::CoreApplicationView GetCurrentView() const;
    void Run(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const;
    void RunWithActivationFactories(Windows::Foundation::IGetActivationFactory const& activationFactoryCallback) const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplication> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplication<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplication2
{
    event_token BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
    using BackgroundActivated_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplication2>;
    BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const;
    void BackgroundActivated(event_token const& token) const;
    event_token LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const;
    using LeavingBackground_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplication2>;
    LeavingBackground_revoker LeavingBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const;
    void LeavingBackground(event_token const& token) const;
    event_token EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const;
    using EnteredBackground_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplication2>;
    EnteredBackground_revoker EnteredBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const;
    void EnteredBackground(event_token const& token) const;
    void EnablePrelaunch(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplication2> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplication2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplicationExit
{
    void Exit() const;
    event_token Exiting(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using Exiting_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplicationExit>;
    Exiting_revoker Exiting(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void Exiting(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationExit> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError
{
    event_token UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const;
    using UnhandledErrorDetected_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>;
    UnhandledErrorDetected_revoker UnhandledErrorDetected(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const;
    void UnhandledErrorDetected(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount
{
    void IncrementApplicationUseCount() const;
    void DecrementApplicationUseCount() const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationUseCount> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplicationView
{
    Windows::UI::Core::CoreWindow CoreWindow() const;
    event_token Activated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const;
    using Activated_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplicationView>;
    Activated_revoker Activated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const;
    void Activated(event_token const& token) const;
    bool IsMain() const;
    bool IsHosted() const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplicationView2
{
    Windows::UI::Core::CoreDispatcher Dispatcher() const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView2> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplicationView3
{
    bool IsComponent() const;
    Windows::ApplicationModel::Core::CoreApplicationViewTitleBar TitleBar() const;
    event_token HostedViewClosing(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const;
    using HostedViewClosing_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplicationView3>;
    HostedViewClosing_revoker HostedViewClosing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const;
    void HostedViewClosing(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView3> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplicationView5
{
    Windows::Foundation::Collections::IPropertySet Properties() const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationView5> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationView5<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar
{
    void ExtendViewIntoTitleBar(bool value) const;
    bool ExtendViewIntoTitleBar() const;
    double SystemOverlayLeftInset() const;
    double SystemOverlayRightInset() const;
    double Height() const;
    event_token LayoutMetricsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
    using LayoutMetricsChanged_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>;
    LayoutMetricsChanged_revoker LayoutMetricsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
    void LayoutMetricsChanged(event_token const& token) const;
    bool IsVisible() const;
    event_token IsVisibleChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
    using IsVisibleChanged_revoker = event_revoker<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>;
    IsVisibleChanged_revoker IsVisibleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const;
    void IsVisibleChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView> Views() const;
    Windows::ApplicationModel::Core::CoreApplicationView CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint) const;
    Windows::ApplicationModel::Core::CoreApplicationView MainView() const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreImmersiveApplication> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication2
{
    Windows::ApplicationModel::Core::CoreApplicationView CreateNewView() const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreImmersiveApplication2> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication3
{
    Windows::ApplicationModel::Core::CoreApplicationView CreateNewView(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const;
};
template <> struct consume<Windows::ApplicationModel::Core::ICoreImmersiveApplication3> { template <typename D> using type = consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_IFrameworkView
{
    void Initialize(Windows::ApplicationModel::Core::CoreApplicationView const& applicationView) const;
    void SetWindow(Windows::UI::Core::CoreWindow const& window) const;
    void Load(param::hstring const& entryPoint) const;
    void Run() const;
    void Uninitialize() const;
};
template <> struct consume<Windows::ApplicationModel::Core::IFrameworkView> { template <typename D> using type = consume_Windows_ApplicationModel_Core_IFrameworkView<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_IFrameworkViewSource
{
    Windows::ApplicationModel::Core::IFrameworkView CreateView() const;
};
template <> struct consume<Windows::ApplicationModel::Core::IFrameworkViewSource> { template <typename D> using type = consume_Windows_ApplicationModel_Core_IFrameworkViewSource<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_IHostedViewClosingEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Core_IHostedViewClosingEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_IUnhandledError
{
    bool Handled() const;
    void Propagate() const;
};
template <> struct consume<Windows::ApplicationModel::Core::IUnhandledError> { template <typename D> using type = consume_Windows_ApplicationModel_Core_IUnhandledError<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Core_IUnhandledErrorDetectedEventArgs
{
    Windows::ApplicationModel::Core::UnhandledError UnhandledError() const;
};
template <> struct consume<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Core_IUnhandledErrorDetectedEventArgs<D>; };

template <> struct abi<Windows::ApplicationModel::Core::IAppListEntry>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayInfo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall LaunchAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplication>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall add_Suspending(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Suspending(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Resuming(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Resuming(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCurrentView(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Run(::IUnknown* viewSource) = 0;
    virtual HRESULT __stdcall RunWithActivationFactories(::IUnknown* activationFactoryCallback) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplication2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_BackgroundActivated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BackgroundActivated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_LeavingBackground(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LeavingBackground(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_EnteredBackground(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnteredBackground(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall EnablePrelaunch(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationExit>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Exit() = 0;
    virtual HRESULT __stdcall add_Exiting(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Exiting(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_UnhandledErrorDetected(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_UnhandledErrorDetected(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationUseCount>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IncrementApplicationUseCount() = 0;
    virtual HRESULT __stdcall DecrementApplicationUseCount() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CoreWindow(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_Activated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Activated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_IsMain(bool* value) = 0;
    virtual HRESULT __stdcall get_IsHosted(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Dispatcher(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsComponent(bool* value) = 0;
    virtual HRESULT __stdcall get_TitleBar(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_HostedViewClosing(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_HostedViewClosing(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationView5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_ExtendViewIntoTitleBar(bool value) = 0;
    virtual HRESULT __stdcall get_ExtendViewIntoTitleBar(bool* value) = 0;
    virtual HRESULT __stdcall get_SystemOverlayLeftInset(double* value) = 0;
    virtual HRESULT __stdcall get_SystemOverlayRightInset(double* value) = 0;
    virtual HRESULT __stdcall get_Height(double* value) = 0;
    virtual HRESULT __stdcall add_LayoutMetricsChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LayoutMetricsChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_IsVisible(bool* value) = 0;
    virtual HRESULT __stdcall add_IsVisibleChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_IsVisibleChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreImmersiveApplication>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Views(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateNewView(HSTRING runtimeType, HSTRING entryPoint, ::IUnknown** view) = 0;
    virtual HRESULT __stdcall get_MainView(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreImmersiveApplication2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateNewViewFromMainView(::IUnknown** view) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::ICoreImmersiveApplication3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateNewViewWithViewSource(::IUnknown* viewSource, ::IUnknown** view) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::IFrameworkView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Initialize(::IUnknown* applicationView) = 0;
    virtual HRESULT __stdcall SetWindow(::IUnknown* window) = 0;
    virtual HRESULT __stdcall Load(HSTRING entryPoint) = 0;
    virtual HRESULT __stdcall Run() = 0;
    virtual HRESULT __stdcall Uninitialize() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::IFrameworkViewSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateView(::IUnknown** viewProvider) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::IUnhandledError>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) = 0;
    virtual HRESULT __stdcall Propagate() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UnhandledError(::IUnknown** value) = 0;
};};

}
