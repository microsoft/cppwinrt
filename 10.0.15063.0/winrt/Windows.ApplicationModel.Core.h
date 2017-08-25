// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::AppDisplayInfo consume_Windows_ApplicationModel_Core_IAppListEntry<D>::DisplayInfo() const
{
    Windows::ApplicationModel::AppDisplayInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IAppListEntry)->get_DisplayInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Core_IAppListEntry<D>::LaunchAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IAppListEntry)->LaunchAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->get_Id(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->add_Suspending(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplication> consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Suspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplication>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Suspending, Suspending(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Suspending(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->remove_Suspending(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->add_Resuming(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplication> consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplication>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Resuming, Resuming(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Resuming(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->remove_Resuming(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView consume_Windows_ApplicationModel_Core_ICoreApplication<D>::GetCurrentView() const
{
    Windows::ApplicationModel::Core::CoreApplicationView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->GetCurrentView(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplication<D>::Run(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->Run(get_abi(viewSource)));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplication<D>::RunWithActivationFactories(Windows::Foundation::IGetActivationFactory const& activationFactoryCallback) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication)->RunWithActivationFactories(get_abi(activationFactoryCallback)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->add_BackgroundActivated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplication2> consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::BackgroundActivated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplication2>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_BackgroundActivated, BackgroundActivated(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::BackgroundActivated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->remove_BackgroundActivated(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->add_LeavingBackground(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplication2> consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::LeavingBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplication2>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_LeavingBackground, LeavingBackground(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::LeavingBackground(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->remove_LeavingBackground(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->add_EnteredBackground(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplication2> consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::EnteredBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplication2>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_EnteredBackground, EnteredBackground(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::EnteredBackground(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->remove_EnteredBackground(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplication2<D>::EnablePrelaunch(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplication2)->EnablePrelaunch(value));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>::Exit() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationExit)->Exit());
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>::Exiting(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationExit)->add_Exiting(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplicationExit> consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>::Exiting(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplicationExit>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplicationExit>::remove_Exiting, Exiting(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationExit<D>::Exiting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationExit)->remove_Exiting(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationUnhandledError)->add_UnhandledErrorDetected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>::remove_UnhandledErrorDetected, UnhandledErrorDetected(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationUnhandledError<D>::UnhandledErrorDetected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationUnhandledError)->remove_UnhandledErrorDetected(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount<D>::IncrementApplicationUseCount() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationUseCount)->IncrementApplicationUseCount());
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationUseCount<D>::DecrementApplicationUseCount() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationUseCount)->DecrementApplicationUseCount());
}

template <typename D> Windows::UI::Core::CoreWindow consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::CoreWindow() const
{
    Windows::UI::Core::CoreWindow value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->get_CoreWindow(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::Activated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->add_Activated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplicationView> consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::Activated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplicationView>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplicationView>::remove_Activated, Activated(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::Activated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->remove_Activated(get_abi(token)));
}

template <typename D> bool consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::IsMain() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->get_IsMain(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Core_ICoreApplicationView<D>::IsHosted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView)->get_IsHosted(&value));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher consume_Windows_ApplicationModel_Core_ICoreApplicationView2<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView2)->get_Dispatcher(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::IsComponent() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView3)->get_IsComponent(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationViewTitleBar consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::TitleBar() const
{
    Windows::ApplicationModel::Core::CoreApplicationViewTitleBar value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView3)->get_TitleBar(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::HostedViewClosing(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView3)->add_HostedViewClosing(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplicationView3> consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::HostedViewClosing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplicationView3>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplicationView3>::remove_HostedViewClosing, HostedViewClosing(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationView3<D>::HostedViewClosing(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView3)->remove_HostedViewClosing(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_ApplicationModel_Core_ICoreApplicationView5<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationView5)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::ExtendViewIntoTitleBar(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->put_ExtendViewIntoTitleBar(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::ExtendViewIntoTitleBar() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_ExtendViewIntoTitleBar(&value));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::SystemOverlayLeftInset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_SystemOverlayLeftInset(&value));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::SystemOverlayRightInset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_SystemOverlayRightInset(&value));
    return value;
}

template <typename D> double consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::Height() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_Height(&value));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->add_LayoutMetricsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>::remove_LayoutMetricsChanged, LayoutMetricsChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::LayoutMetricsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->remove_LayoutMetricsChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::IsVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->get_IsVisible(&value));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::IsVisibleChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->add_IsVisibleChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::IsVisibleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>(this, &abi_t<Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>::remove_IsVisibleChanged, IsVisibleChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Core_ICoreApplicationViewTitleBar<D>::IsVisibleChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar)->remove_IsVisibleChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView> consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication<D>::Views() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication)->get_Views(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication<D>::CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint) const
{
    Windows::ApplicationModel::Core::CoreApplicationView view{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication)->CreateNewView(get_abi(runtimeType), get_abi(entryPoint), put_abi(view)));
    return view;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication<D>::MainView() const
{
    Windows::ApplicationModel::Core::CoreApplicationView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication)->get_MainView(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication2<D>::CreateNewView() const
{
    Windows::ApplicationModel::Core::CoreApplicationView view{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication2)->CreateNewViewFromMainView(put_abi(view)));
    return view;
}

template <typename D> Windows::ApplicationModel::Core::CoreApplicationView consume_Windows_ApplicationModel_Core_ICoreImmersiveApplication3<D>::CreateNewView(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource) const
{
    Windows::ApplicationModel::Core::CoreApplicationView view{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::ICoreImmersiveApplication3)->CreateNewViewWithViewSource(get_abi(viewSource), put_abi(view)));
    return view;
}

template <typename D> void consume_Windows_ApplicationModel_Core_IFrameworkView<D>::Initialize(Windows::ApplicationModel::Core::CoreApplicationView const& applicationView) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->Initialize(get_abi(applicationView)));
}

template <typename D> void consume_Windows_ApplicationModel_Core_IFrameworkView<D>::SetWindow(Windows::UI::Core::CoreWindow const& window) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->SetWindow(get_abi(window)));
}

template <typename D> void consume_Windows_ApplicationModel_Core_IFrameworkView<D>::Load(param::hstring const& entryPoint) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->Load(get_abi(entryPoint)));
}

template <typename D> void consume_Windows_ApplicationModel_Core_IFrameworkView<D>::Run() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->Run());
}

template <typename D> void consume_Windows_ApplicationModel_Core_IFrameworkView<D>::Uninitialize() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IFrameworkView)->Uninitialize());
}

template <typename D> Windows::ApplicationModel::Core::IFrameworkView consume_Windows_ApplicationModel_Core_IFrameworkViewSource<D>::CreateView() const
{
    Windows::ApplicationModel::Core::IFrameworkView viewProvider{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IFrameworkViewSource)->CreateView(put_abi(viewProvider)));
    return viewProvider;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Core_IHostedViewClosingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IHostedViewClosingEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Core_IUnhandledError<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IUnhandledError)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Core_IUnhandledError<D>::Propagate() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IUnhandledError)->Propagate());
}

template <typename D> Windows::ApplicationModel::Core::UnhandledError consume_Windows_ApplicationModel_Core_IUnhandledErrorDetectedEventArgs<D>::UnhandledError() const
{
    Windows::ApplicationModel::Core::UnhandledError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs)->get_UnhandledError(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IAppListEntry> : produce_base<D, Windows::ApplicationModel::Core::IAppListEntry>
{
    HRESULT __stdcall get_DisplayInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LaunchAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().LaunchAsync());
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
struct produce<D, Windows::ApplicationModel::Core::ICoreApplication> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplication>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Suspending(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Suspending(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Suspending(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Suspending(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Resuming(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Resuming(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Resuming(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resuming(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentView(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Run(::IUnknown* viewSource) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Run(*reinterpret_cast<Windows::ApplicationModel::Core::IFrameworkViewSource const*>(&viewSource));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RunWithActivationFactories(::IUnknown* activationFactoryCallback) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RunWithActivationFactories(*reinterpret_cast<Windows::Foundation::IGetActivationFactory const*>(&activationFactoryCallback));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplication2> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplication2>
{
    HRESULT __stdcall add_BackgroundActivated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().BackgroundActivated(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BackgroundActivated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundActivated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LeavingBackground(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LeavingBackground(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LeavingBackground(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeavingBackground(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnteredBackground(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnteredBackground(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnteredBackground(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnteredBackground(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EnablePrelaunch(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnablePrelaunch(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationExit> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationExit>
{
    HRESULT __stdcall Exit() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exit();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Exiting(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Exiting(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Exiting(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Exiting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
{
    HRESULT __stdcall add_UnhandledErrorDetected(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().UnhandledErrorDetected(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UnhandledErrorDetected(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnhandledErrorDetected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationUseCount> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationUseCount>
{
    HRESULT __stdcall IncrementApplicationUseCount() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncrementApplicationUseCount();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DecrementApplicationUseCount() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecrementApplicationUseCount();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView>
{
    HRESULT __stdcall get_CoreWindow(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CoreWindow());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Activated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Activated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Activation::IActivatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMain(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMain());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHosted(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsHosted());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView2> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView2>
{
    HRESULT __stdcall get_Dispatcher(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Dispatcher());
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
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView3> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView3>
{
    HRESULT __stdcall get_IsComponent(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsComponent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall add_HostedViewClosing(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().HostedViewClosing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationView, Windows::ApplicationModel::Core::HostedViewClosingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HostedViewClosing(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HostedViewClosing(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationView5> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationView5>
{
    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
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
struct produce<D, Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> : produce_base<D, Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar>
{
    HRESULT __stdcall put_ExtendViewIntoTitleBar(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExtendViewIntoTitleBar(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendViewIntoTitleBar(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendViewIntoTitleBar());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemOverlayLeftInset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemOverlayLeftInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemOverlayRightInset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemOverlayRightInset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LayoutMetricsChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LayoutMetricsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LayoutMetricsChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LayoutMetricsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVisible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsVisibleChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().IsVisibleChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Core::CoreApplicationViewTitleBar, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsVisibleChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVisibleChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication> : produce_base<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication>
{
    HRESULT __stdcall get_Views(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Views());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateNewView(HSTRING runtimeType, HSTRING entryPoint, ::IUnknown** view) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *view = detach_abi(this->shim().CreateNewView(*reinterpret_cast<hstring const*>(&runtimeType), *reinterpret_cast<hstring const*>(&entryPoint)));
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MainView(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MainView());
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
struct produce<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication2> : produce_base<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication2>
{
    HRESULT __stdcall CreateNewViewFromMainView(::IUnknown** view) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *view = detach_abi(this->shim().CreateNewView());
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication3> : produce_base<D, Windows::ApplicationModel::Core::ICoreImmersiveApplication3>
{
    HRESULT __stdcall CreateNewViewWithViewSource(::IUnknown* viewSource, ::IUnknown** view) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *view = detach_abi(this->shim().CreateNewView(*reinterpret_cast<Windows::ApplicationModel::Core::IFrameworkViewSource const*>(&viewSource)));
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IFrameworkView> : produce_base<D, Windows::ApplicationModel::Core::IFrameworkView>
{
    HRESULT __stdcall Initialize(::IUnknown* applicationView) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Initialize(*reinterpret_cast<Windows::ApplicationModel::Core::CoreApplicationView const*>(&applicationView));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetWindow(::IUnknown* window) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetWindow(*reinterpret_cast<Windows::UI::Core::CoreWindow const*>(&window));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Load(HSTRING entryPoint) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Load(*reinterpret_cast<hstring const*>(&entryPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Run() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Run();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Uninitialize() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uninitialize();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IFrameworkViewSource> : produce_base<D, Windows::ApplicationModel::Core::IFrameworkViewSource>
{
    HRESULT __stdcall CreateView(::IUnknown** viewProvider) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *viewProvider = detach_abi(this->shim().CreateView());
            return S_OK;
        }
        catch (...)
        {
            *viewProvider = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IHostedViewClosingEventArgs> : produce_base<D, Windows::ApplicationModel::Core::IHostedViewClosingEventArgs>
{
    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IUnhandledError> : produce_base<D, Windows::ApplicationModel::Core::IUnhandledError>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Propagate() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Propagate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs> : produce_base<D, Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs>
{
    HRESULT __stdcall get_UnhandledError(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnhandledError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core {

inline hstring CoreApplication::Id()
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>().Id();
}

inline event_token CoreApplication::Suspending(Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler)
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>().Suspending(handler);
}

inline factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication> CoreApplication::Suspending(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::SuspendingEventArgs> const& handler)
{
    auto factory = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>();
    return { factory, &abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Suspending, factory.Suspending(handler) };
}

inline void CoreApplication::Suspending(event_token const& token)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>().Suspending(token);
}

inline event_token CoreApplication::Resuming(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>().Resuming(handler);
}

inline factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication> CoreApplication::Resuming(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>();
    return { factory, &abi_t<Windows::ApplicationModel::Core::ICoreApplication>::remove_Resuming, factory.Resuming(handler) };
}

inline void CoreApplication::Resuming(event_token const& token)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>().Resuming(token);
}

inline Windows::Foundation::Collections::IPropertySet CoreApplication::Properties()
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>().Properties();
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::GetCurrentView()
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>().GetCurrentView();
}

inline void CoreApplication::Run(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>().Run(viewSource);
}

inline void CoreApplication::RunWithActivationFactories(Windows::Foundation::IGetActivationFactory const& activationFactoryCallback)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication>().RunWithActivationFactories(activationFactoryCallback);
}

inline event_token CoreApplication::BackgroundActivated(Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler)
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>().BackgroundActivated(handler);
}

inline factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication2> CoreApplication::BackgroundActivated(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler)
{
    auto factory = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>();
    return { factory, &abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_BackgroundActivated, factory.BackgroundActivated(handler) };
}

inline void CoreApplication::BackgroundActivated(event_token const& token)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>().BackgroundActivated(token);
}

inline event_token CoreApplication::LeavingBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler)
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>().LeavingBackground(handler);
}

inline factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication2> CoreApplication::LeavingBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler)
{
    auto factory = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>();
    return { factory, &abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_LeavingBackground, factory.LeavingBackground(handler) };
}

inline void CoreApplication::LeavingBackground(event_token const& token)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>().LeavingBackground(token);
}

inline event_token CoreApplication::EnteredBackground(Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler)
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>().EnteredBackground(handler);
}

inline factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplication2> CoreApplication::EnteredBackground(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler)
{
    auto factory = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>();
    return { factory, &abi_t<Windows::ApplicationModel::Core::ICoreApplication2>::remove_EnteredBackground, factory.EnteredBackground(handler) };
}

inline void CoreApplication::EnteredBackground(event_token const& token)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>().EnteredBackground(token);
}

inline void CoreApplication::EnablePrelaunch(bool value)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplication2>().EnablePrelaunch(value);
}

inline void CoreApplication::Exit()
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationExit>().Exit();
}

inline event_token CoreApplication::Exiting(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationExit>().Exiting(handler);
}

inline factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplicationExit> CoreApplication::Exiting(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationExit>();
    return { factory, &abi_t<Windows::ApplicationModel::Core::ICoreApplicationExit>::remove_Exiting, factory.Exiting(handler) };
}

inline void CoreApplication::Exiting(event_token const& token)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationExit>().Exiting(token);
}

inline event_token CoreApplication::UnhandledErrorDetected(Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler)
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>().UnhandledErrorDetected(handler);
}

inline factory_event_revoker<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> CoreApplication::UnhandledErrorDetected(auto_revoke_t, Windows::Foundation::EventHandler<Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler)
{
    auto factory = get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>();
    return { factory, &abi_t<Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>::remove_UnhandledErrorDetected, factory.UnhandledErrorDetected(handler) };
}

inline void CoreApplication::UnhandledErrorDetected(event_token const& token)
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>().UnhandledErrorDetected(token);
}

inline void CoreApplication::IncrementApplicationUseCount()
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationUseCount>().IncrementApplicationUseCount();
}

inline void CoreApplication::DecrementApplicationUseCount()
{
    get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreApplicationUseCount>().DecrementApplicationUseCount();
}

inline Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::CoreApplicationView> CoreApplication::Views()
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreImmersiveApplication>().Views();
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint)
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreImmersiveApplication>().CreateNewView(runtimeType, entryPoint);
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::MainView()
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreImmersiveApplication>().MainView();
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::CreateNewView()
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreImmersiveApplication2>().CreateNewView();
}

inline Windows::ApplicationModel::Core::CoreApplicationView CoreApplication::CreateNewView(Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource)
{
    return get_activation_factory<CoreApplication, Windows::ApplicationModel::Core::ICoreImmersiveApplication3>().CreateNewView(viewSource);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Core::IAppListEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::IAppListEntry> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplication> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplication> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplication2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplication2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationExit> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplicationExit> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationUseCount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplicationUseCount> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplicationView> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationView2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplicationView2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationView3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplicationView3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationView5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplicationView5> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreImmersiveApplication> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreImmersiveApplication> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreImmersiveApplication2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreImmersiveApplication2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::ICoreImmersiveApplication3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::ICoreImmersiveApplication3> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::IFrameworkView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::IFrameworkView> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::IFrameworkViewSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::IFrameworkViewSource> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::IHostedViewClosingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::IHostedViewClosingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::IUnhandledError> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::IUnhandledError> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::AppListEntry> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::AppListEntry> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::CoreApplication> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::CoreApplication> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::CoreApplicationView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::CoreApplicationView> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::CoreApplicationViewTitleBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::CoreApplicationViewTitleBar> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::HostedViewClosingEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::HostedViewClosingEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::UnhandledError> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::UnhandledError> {};

template<> struct hash<winrt::Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> {};

}

WINRT_WARNING_POP
