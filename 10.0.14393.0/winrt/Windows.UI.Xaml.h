// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.UI.Xaml.Controls.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.3.h"
#include "internal/Windows.UI.Core.3.h"
#include "internal/Windows.UI.Xaml.Interop.3.h"
#include "internal/Windows.UI.Xaml.Media.Imaging.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.DataTransfer.3.h"
#include "internal/Windows.ApplicationModel.DataTransfer.DragDrop.3.h"
#include "internal/Windows.UI.Xaml.Media.3.h"
#include "internal/Windows.UI.Xaml.Input.3.h"
#include "internal/Windows.UI.Xaml.Automation.Peers.3.h"
#include "internal/Windows.UI.Xaml.Media.Media3D.3.h"
#include "internal/Windows.UI.Input.3.h"
#include "internal/Windows.UI.Xaml.Controls.Primitives.3.h"
#include "internal/Windows.UI.Xaml.Media.Animation.3.h"
#include "internal/Windows.UI.Xaml.Data.3.h"
#include "internal/Windows.ApplicationModel.Activation.3.h"
#include "internal/Windows.UI.Xaml.3.h"
#include "Windows.UI.h"
#include "Windows.ApplicationModel.Core.h"
#include "Windows.Foundation.Collections.h"
#include "internal/Windows.UI.Xaml.4.h"
#include "internal/Windows.UI.Xaml.5.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml {

template <typename L> ApplicationInitializationCallback::ApplicationInitializationCallback(L lambda) :
    ApplicationInitializationCallback(impl::make_delegate<impl_ApplicationInitializationCallback<L>, ApplicationInitializationCallback>(std::forward<L>(lambda)))
{}

template <typename F> ApplicationInitializationCallback::ApplicationInitializationCallback(F * function) :
    ApplicationInitializationCallback([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ApplicationInitializationCallback::ApplicationInitializationCallback(O * object, M method) :
    ApplicationInitializationCallback([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ApplicationInitializationCallback::operator()(const Windows::UI::Xaml::ApplicationInitializationCallbackParams & p) const
{
    check_hresult((*this)->abi_Invoke(get(p)));
}

template <typename L> BindingFailedEventHandler::BindingFailedEventHandler(L lambda) :
    BindingFailedEventHandler(impl::make_delegate<impl_BindingFailedEventHandler<L>, BindingFailedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> BindingFailedEventHandler::BindingFailedEventHandler(F * function) :
    BindingFailedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> BindingFailedEventHandler::BindingFailedEventHandler(O * object, M method) :
    BindingFailedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void BindingFailedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::BindingFailedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> CreateDefaultValueCallback::CreateDefaultValueCallback(L lambda) :
    CreateDefaultValueCallback(impl::make_delegate<impl_CreateDefaultValueCallback<L>, CreateDefaultValueCallback>(std::forward<L>(lambda)))
{}

template <typename F> CreateDefaultValueCallback::CreateDefaultValueCallback(F * function) :
    CreateDefaultValueCallback([=](auto && ... args) { return function(args ...); })
{}

template <typename O, typename M> CreateDefaultValueCallback::CreateDefaultValueCallback(O * object, M method) :
    CreateDefaultValueCallback([=](auto && ... args) { return ((*object).*(method))(args ...); })
{}

inline Windows::IInspectable CreateDefaultValueCallback::operator()() const
{
    Windows::IInspectable value;
    check_hresult((*this)->abi_Invoke(put(value)));
    return value;
}

template <typename L> DependencyPropertyChangedCallback::DependencyPropertyChangedCallback(L lambda) :
    DependencyPropertyChangedCallback(impl::make_delegate<impl_DependencyPropertyChangedCallback<L>, DependencyPropertyChangedCallback>(std::forward<L>(lambda)))
{}

template <typename F> DependencyPropertyChangedCallback::DependencyPropertyChangedCallback(F * function) :
    DependencyPropertyChangedCallback([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DependencyPropertyChangedCallback::DependencyPropertyChangedCallback(O * object, M method) :
    DependencyPropertyChangedCallback([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DependencyPropertyChangedCallback::operator()(const Windows::UI::Xaml::DependencyObject & sender, const Windows::UI::Xaml::DependencyProperty & dp) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(dp)));
}

template <typename L> DependencyPropertyChangedEventHandler::DependencyPropertyChangedEventHandler(L lambda) :
    DependencyPropertyChangedEventHandler(impl::make_delegate<impl_DependencyPropertyChangedEventHandler<L>, DependencyPropertyChangedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DependencyPropertyChangedEventHandler::DependencyPropertyChangedEventHandler(F * function) :
    DependencyPropertyChangedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DependencyPropertyChangedEventHandler::DependencyPropertyChangedEventHandler(O * object, M method) :
    DependencyPropertyChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DependencyPropertyChangedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::DependencyPropertyChangedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> DragEventHandler::DragEventHandler(L lambda) :
    DragEventHandler(impl::make_delegate<impl_DragEventHandler<L>, DragEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DragEventHandler::DragEventHandler(F * function) :
    DragEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DragEventHandler::DragEventHandler(O * object, M method) :
    DragEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DragEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::DragEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(L lambda) :
    EnteredBackgroundEventHandler(impl::make_delegate<impl_EnteredBackgroundEventHandler<L>, EnteredBackgroundEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(F * function) :
    EnteredBackgroundEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> EnteredBackgroundEventHandler::EnteredBackgroundEventHandler(O * object, M method) :
    EnteredBackgroundEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void EnteredBackgroundEventHandler::operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::EnteredBackgroundEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> ExceptionRoutedEventHandler::ExceptionRoutedEventHandler(L lambda) :
    ExceptionRoutedEventHandler(impl::make_delegate<impl_ExceptionRoutedEventHandler<L>, ExceptionRoutedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ExceptionRoutedEventHandler::ExceptionRoutedEventHandler(F * function) :
    ExceptionRoutedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ExceptionRoutedEventHandler::ExceptionRoutedEventHandler(O * object, M method) :
    ExceptionRoutedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ExceptionRoutedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::ExceptionRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(L lambda) :
    LeavingBackgroundEventHandler(impl::make_delegate<impl_LeavingBackgroundEventHandler<L>, LeavingBackgroundEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(F * function) :
    LeavingBackgroundEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> LeavingBackgroundEventHandler::LeavingBackgroundEventHandler(O * object, M method) :
    LeavingBackgroundEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void LeavingBackgroundEventHandler::operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::LeavingBackgroundEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> PropertyChangedCallback::PropertyChangedCallback(L lambda) :
    PropertyChangedCallback(impl::make_delegate<impl_PropertyChangedCallback<L>, PropertyChangedCallback>(std::forward<L>(lambda)))
{}

template <typename F> PropertyChangedCallback::PropertyChangedCallback(F * function) :
    PropertyChangedCallback([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> PropertyChangedCallback::PropertyChangedCallback(O * object, M method) :
    PropertyChangedCallback([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void PropertyChangedCallback::operator()(const Windows::UI::Xaml::DependencyObject & d, const Windows::UI::Xaml::DependencyPropertyChangedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(d), get(e)));
}

template <typename L> RoutedEventHandler::RoutedEventHandler(L lambda) :
    RoutedEventHandler(impl::make_delegate<impl_RoutedEventHandler<L>, RoutedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> RoutedEventHandler::RoutedEventHandler(F * function) :
    RoutedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> RoutedEventHandler::RoutedEventHandler(O * object, M method) :
    RoutedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void RoutedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::RoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> SizeChangedEventHandler::SizeChangedEventHandler(L lambda) :
    SizeChangedEventHandler(impl::make_delegate<impl_SizeChangedEventHandler<L>, SizeChangedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> SizeChangedEventHandler::SizeChangedEventHandler(F * function) :
    SizeChangedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> SizeChangedEventHandler::SizeChangedEventHandler(O * object, M method) :
    SizeChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void SizeChangedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::SizeChangedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> SuspendingEventHandler::SuspendingEventHandler(L lambda) :
    SuspendingEventHandler(impl::make_delegate<impl_SuspendingEventHandler<L>, SuspendingEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> SuspendingEventHandler::SuspendingEventHandler(F * function) :
    SuspendingEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> SuspendingEventHandler::SuspendingEventHandler(O * object, M method) :
    SuspendingEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void SuspendingEventHandler::operator()(const Windows::IInspectable & sender, const Windows::ApplicationModel::SuspendingEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> UnhandledExceptionEventHandler::UnhandledExceptionEventHandler(L lambda) :
    UnhandledExceptionEventHandler(impl::make_delegate<impl_UnhandledExceptionEventHandler<L>, UnhandledExceptionEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> UnhandledExceptionEventHandler::UnhandledExceptionEventHandler(F * function) :
    UnhandledExceptionEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> UnhandledExceptionEventHandler::UnhandledExceptionEventHandler(O * object, M method) :
    UnhandledExceptionEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void UnhandledExceptionEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::UnhandledExceptionEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> VisualStateChangedEventHandler::VisualStateChangedEventHandler(L lambda) :
    VisualStateChangedEventHandler(impl::make_delegate<impl_VisualStateChangedEventHandler<L>, VisualStateChangedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> VisualStateChangedEventHandler::VisualStateChangedEventHandler(F * function) :
    VisualStateChangedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> VisualStateChangedEventHandler::VisualStateChangedEventHandler(O * object, M method) :
    VisualStateChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void VisualStateChangedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::VisualStateChangedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> WindowActivatedEventHandler::WindowActivatedEventHandler(L lambda) :
    WindowActivatedEventHandler(impl::make_delegate<impl_WindowActivatedEventHandler<L>, WindowActivatedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> WindowActivatedEventHandler::WindowActivatedEventHandler(F * function) :
    WindowActivatedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> WindowActivatedEventHandler::WindowActivatedEventHandler(O * object, M method) :
    WindowActivatedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void WindowActivatedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Core::WindowActivatedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> WindowClosedEventHandler::WindowClosedEventHandler(L lambda) :
    WindowClosedEventHandler(impl::make_delegate<impl_WindowClosedEventHandler<L>, WindowClosedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> WindowClosedEventHandler::WindowClosedEventHandler(F * function) :
    WindowClosedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> WindowClosedEventHandler::WindowClosedEventHandler(O * object, M method) :
    WindowClosedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void WindowClosedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Core::CoreWindowEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> WindowSizeChangedEventHandler::WindowSizeChangedEventHandler(L lambda) :
    WindowSizeChangedEventHandler(impl::make_delegate<impl_WindowSizeChangedEventHandler<L>, WindowSizeChangedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> WindowSizeChangedEventHandler::WindowSizeChangedEventHandler(F * function) :
    WindowSizeChangedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> WindowSizeChangedEventHandler::WindowSizeChangedEventHandler(O * object, M method) :
    WindowSizeChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void WindowSizeChangedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Core::WindowSizeChangedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> WindowVisibilityChangedEventHandler::WindowVisibilityChangedEventHandler(L lambda) :
    WindowVisibilityChangedEventHandler(impl::make_delegate<impl_WindowVisibilityChangedEventHandler<L>, WindowVisibilityChangedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> WindowVisibilityChangedEventHandler::WindowVisibilityChangedEventHandler(F * function) :
    WindowVisibilityChangedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> WindowVisibilityChangedEventHandler::WindowVisibilityChangedEventHandler(O * object, M method) :
    WindowVisibilityChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void WindowVisibilityChangedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Core::VisibilityChangedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::IAdaptiveTrigger> : produce_base<D, Windows::UI::Xaml::IAdaptiveTrigger>
{
    HRESULT __stdcall get_MinWindowWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinWindowWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinWindowWidth(double value) noexcept override
    {
        try
        {
            this->shim().MinWindowWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinWindowHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinWindowHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinWindowHeight(double value) noexcept override
    {
        try
        {
            this->shim().MinWindowHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IAdaptiveTriggerFactory> : produce_base<D, Windows::UI::Xaml::IAdaptiveTriggerFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IAdaptiveTrigger> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IAdaptiveTriggerStatics> : produce_base<D, Windows::UI::Xaml::IAdaptiveTriggerStatics>
{
    HRESULT __stdcall get_MinWindowWidthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinWindowWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinWindowHeightProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinWindowHeightProperty());
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
struct produce<D, Windows::UI::Xaml::IApplication> : produce_base<D, Windows::UI::Xaml::IApplication>
{
    HRESULT __stdcall get_Resources(abi_arg_out<Windows::UI::Xaml::IResourceDictionary> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Resources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Resources(abi_arg_in<Windows::UI::Xaml::IResourceDictionary> value) noexcept override
    {
        try
        {
            this->shim().Resources(*reinterpret_cast<const Windows::UI::Xaml::ResourceDictionary *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DebugSettings(abi_arg_out<Windows::UI::Xaml::IDebugSettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DebugSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedTheme(Windows::UI::Xaml::ApplicationTheme * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedTheme());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestedTheme(Windows::UI::Xaml::ApplicationTheme value) noexcept override
    {
        try
        {
            this->shim().RequestedTheme(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_UnhandledException(abi_arg_in<Windows::UI::Xaml::UnhandledExceptionEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().UnhandledException(*reinterpret_cast<const Windows::UI::Xaml::UnhandledExceptionEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_UnhandledException(event_token token) noexcept override
    {
        try
        {
            this->shim().UnhandledException(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Suspending(abi_arg_in<Windows::UI::Xaml::SuspendingEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Suspending(*reinterpret_cast<const Windows::UI::Xaml::SuspendingEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Suspending(event_token token) noexcept override
    {
        try
        {
            this->shim().Suspending(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Resuming(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Resuming(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Resuming(event_token token) noexcept override
    {
        try
        {
            this->shim().Resuming(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Exit() noexcept override
    {
        try
        {
            this->shim().Exit();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplication2> : produce_base<D, Windows::UI::Xaml::IApplication2>
{
    HRESULT __stdcall get_FocusVisualKind(Windows::UI::Xaml::FocusVisualKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualKind(Windows::UI::Xaml::FocusVisualKind value) noexcept override
    {
        try
        {
            this->shim().FocusVisualKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequiresPointerMode(Windows::UI::Xaml::ApplicationRequiresPointerMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequiresPointerMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequiresPointerMode(Windows::UI::Xaml::ApplicationRequiresPointerMode value) noexcept override
    {
        try
        {
            this->shim().RequiresPointerMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LeavingBackground(abi_arg_in<Windows::UI::Xaml::LeavingBackgroundEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LeavingBackground(*reinterpret_cast<const Windows::UI::Xaml::LeavingBackgroundEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LeavingBackground(event_token token) noexcept override
    {
        try
        {
            this->shim().LeavingBackground(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnteredBackground(abi_arg_in<Windows::UI::Xaml::EnteredBackgroundEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().EnteredBackground(*reinterpret_cast<const Windows::UI::Xaml::EnteredBackgroundEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnteredBackground(event_token token) noexcept override
    {
        try
        {
            this->shim().EnteredBackground(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationFactory> : produce_base<D, Windows::UI::Xaml::IApplicationFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IApplication> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationInitializationCallbackParams> : produce_base<D, Windows::UI::Xaml::IApplicationInitializationCallbackParams>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationOverrides> : produce_base<D, Windows::UI::Xaml::IApplicationOverrides>
{
    HRESULT __stdcall abi_OnActivated(abi_arg_in<Windows::ApplicationModel::Activation::IActivatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnActivated(*reinterpret_cast<const Windows::ApplicationModel::Activation::IActivatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnLaunched(abi_arg_in<Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnLaunched(*reinterpret_cast<const Windows::ApplicationModel::Activation::LaunchActivatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnFileActivated(abi_arg_in<Windows::ApplicationModel::Activation::IFileActivatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnFileActivated(*reinterpret_cast<const Windows::ApplicationModel::Activation::FileActivatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnSearchActivated(abi_arg_in<Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnSearchActivated(*reinterpret_cast<const Windows::ApplicationModel::Activation::SearchActivatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnShareTargetActivated(abi_arg_in<Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnShareTargetActivated(*reinterpret_cast<const Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnFileOpenPickerActivated(abi_arg_in<Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnFileOpenPickerActivated(*reinterpret_cast<const Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnFileSavePickerActivated(abi_arg_in<Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnFileSavePickerActivated(*reinterpret_cast<const Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnCachedFileUpdaterActivated(abi_arg_in<Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnCachedFileUpdaterActivated(*reinterpret_cast<const Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnWindowCreated(abi_arg_in<Windows::UI::Xaml::IWindowCreatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnWindowCreated(*reinterpret_cast<const Windows::UI::Xaml::WindowCreatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationOverrides2> : produce_base<D, Windows::UI::Xaml::IApplicationOverrides2>
{
    HRESULT __stdcall abi_OnBackgroundActivated(abi_arg_in<Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> args) noexcept override
    {
        try
        {
            this->shim().OnBackgroundActivated(*reinterpret_cast<const Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs *>(&args));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IApplicationStatics> : produce_base<D, Windows::UI::Xaml::IApplicationStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::UI::Xaml::IApplication> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start(abi_arg_in<Windows::UI::Xaml::ApplicationInitializationCallback> callback) noexcept override
    {
        try
        {
            this->shim().Start(*reinterpret_cast<const Windows::UI::Xaml::ApplicationInitializationCallback *>(&callback));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadComponent(abi_arg_in<Windows::IInspectable> component, abi_arg_in<Windows::Foundation::IUriRuntimeClass> resourceLocator) noexcept override
    {
        try
        {
            this->shim().LoadComponent(*reinterpret_cast<const Windows::IInspectable *>(&component), *reinterpret_cast<const Windows::Foundation::Uri *>(&resourceLocator));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadComponentWithResourceLocation(abi_arg_in<Windows::IInspectable> component, abi_arg_in<Windows::Foundation::IUriRuntimeClass> resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation componentResourceLocation) noexcept override
    {
        try
        {
            this->shim().LoadComponent(*reinterpret_cast<const Windows::IInspectable *>(&component), *reinterpret_cast<const Windows::Foundation::Uri *>(&resourceLocator), componentResourceLocation);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IBindingFailedEventArgs> : produce_base<D, Windows::UI::Xaml::IBindingFailedEventArgs>
{
    HRESULT __stdcall get_Message(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
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
struct produce<D, Windows::UI::Xaml::ICornerRadiusHelper> : produce_base<D, Windows::UI::Xaml::ICornerRadiusHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ICornerRadiusHelperStatics> : produce_base<D, Windows::UI::Xaml::ICornerRadiusHelperStatics>
{
    HRESULT __stdcall abi_FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft, abi_arg_out<Windows::UI::Xaml::CornerRadius> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromRadii(topLeft, topRight, bottomRight, bottomLeft));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromUniformRadius(double uniformRadius, abi_arg_out<Windows::UI::Xaml::CornerRadius> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromUniformRadius(uniformRadius));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataContextChangedEventArgs> : produce_base<D, Windows::UI::Xaml::IDataContextChangedEventArgs>
{
    HRESULT __stdcall get_NewValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplate> : produce_base<D, Windows::UI::Xaml::IDataTemplate>
{
    HRESULT __stdcall abi_LoadContent(abi_arg_out<Windows::UI::Xaml::IDependencyObject> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().LoadContent());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateExtension> : produce_base<D, Windows::UI::Xaml::IDataTemplateExtension>
{
    HRESULT __stdcall abi_ResetTemplate() noexcept override
    {
        try
        {
            this->shim().ResetTemplate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessBinding(uint32_t phase, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ProcessBinding(phase));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProcessBindings(abi_arg_in<Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs> arg, int32_t * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ProcessBindings(*reinterpret_cast<const Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs *>(&arg)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateFactory> : produce_base<D, Windows::UI::Xaml::IDataTemplateFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IDataTemplate> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateKey> : produce_base<D, Windows::UI::Xaml::IDataTemplateKey>
{
    HRESULT __stdcall get_DataType(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataType(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().DataType(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateKeyFactory> : produce_base<D, Windows::UI::Xaml::IDataTemplateKeyFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IDataTemplateKey> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithType(abi_arg_in<Windows::IInspectable> dataType, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IDataTemplateKey> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithType(*reinterpret_cast<const Windows::IInspectable *>(&dataType), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDataTemplateStatics2> : produce_base<D, Windows::UI::Xaml::IDataTemplateStatics2>
{
    HRESULT __stdcall get_ExtensionInstanceProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtensionInstanceProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetExtensionInstance(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> element, abi_arg_out<Windows::UI::Xaml::IDataTemplateExtension> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetExtensionInstance(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetExtensionInstance(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> element, abi_arg_in<Windows::UI::Xaml::IDataTemplateExtension> value) noexcept override
    {
        try
        {
            this->shim().SetExtensionInstance(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&element), *reinterpret_cast<const Windows::UI::Xaml::IDataTemplateExtension *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDebugSettings> : produce_base<D, Windows::UI::Xaml::IDebugSettings>
{
    HRESULT __stdcall get_EnableFrameRateCounter(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableFrameRateCounter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableFrameRateCounter(bool value) noexcept override
    {
        try
        {
            this->shim().EnableFrameRateCounter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsBindingTracingEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsBindingTracingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsBindingTracingEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsBindingTracingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverdrawHeatMapEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOverdrawHeatMapEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsOverdrawHeatMapEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsOverdrawHeatMapEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_BindingFailed(abi_arg_in<Windows::UI::Xaml::BindingFailedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().BindingFailed(*reinterpret_cast<const Windows::UI::Xaml::BindingFailedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_BindingFailed(event_token token) noexcept override
    {
        try
        {
            this->shim().BindingFailed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDebugSettings2> : produce_base<D, Windows::UI::Xaml::IDebugSettings2>
{
    HRESULT __stdcall get_EnableRedrawRegions(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnableRedrawRegions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnableRedrawRegions(bool value) noexcept override
    {
        try
        {
            this->shim().EnableRedrawRegions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDebugSettings3> : produce_base<D, Windows::UI::Xaml::IDebugSettings3>
{
    HRESULT __stdcall get_IsTextPerformanceVisualizationEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTextPerformanceVisualizationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsTextPerformanceVisualizationEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsTextPerformanceVisualizationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyObject> : produce_base<D, Windows::UI::Xaml::IDependencyObject>
{
    HRESULT __stdcall abi_GetValue(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetValue(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetValue(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp, abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().SetValue(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp), *reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearValue(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp) noexcept override
    {
        try
        {
            this->shim().ClearValue(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadLocalValue(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ReadLocalValue(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAnimationBaseValue(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAnimationBaseValue(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(abi_arg_out<Windows::UI::Core::ICoreDispatcher> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Dispatcher());
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
struct produce<D, Windows::UI::Xaml::IDependencyObject2> : produce_base<D, Windows::UI::Xaml::IDependencyObject2>
{
    HRESULT __stdcall abi_RegisterPropertyChangedCallback(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp, abi_arg_in<Windows::UI::Xaml::DependencyPropertyChangedCallback> callback, int64_t * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().RegisterPropertyChangedCallback(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp), *reinterpret_cast<const Windows::UI::Xaml::DependencyPropertyChangedCallback *>(&callback)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnregisterPropertyChangedCallback(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp, int64_t token) noexcept override
    {
        try
        {
            this->shim().UnregisterPropertyChangedCallback(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp), token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyObjectCollectionFactory> : produce_base<D, Windows::UI::Xaml::IDependencyObjectCollectionFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::Foundation::Collections::IObservableVector<Windows::UI::Xaml::DependencyObject>> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyObjectFactory> : produce_base<D, Windows::UI::Xaml::IDependencyObjectFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IDependencyObject> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyProperty> : produce_base<D, Windows::UI::Xaml::IDependencyProperty>
{
    HRESULT __stdcall abi_GetMetadata(abi_arg_in<Windows::UI::Xaml::Interop::TypeName> forType, abi_arg_out<Windows::UI::Xaml::IPropertyMetadata> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetMetadata(*reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&forType)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDependencyPropertyChangedEventArgs> : produce_base<D, Windows::UI::Xaml::IDependencyPropertyChangedEventArgs>
{
    HRESULT __stdcall get_Property(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewValue());
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
struct produce<D, Windows::UI::Xaml::IDependencyPropertyStatics> : produce_base<D, Windows::UI::Xaml::IDependencyPropertyStatics>
{
    HRESULT __stdcall get_UnsetValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UnsetValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Register(abi_arg_in<hstring> name, abi_arg_in<Windows::UI::Xaml::Interop::TypeName> propertyType, abi_arg_in<Windows::UI::Xaml::Interop::TypeName> ownerType, abi_arg_in<Windows::UI::Xaml::IPropertyMetadata> typeMetadata, abi_arg_out<Windows::UI::Xaml::IDependencyProperty> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Register(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&propertyType), *reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&ownerType), *reinterpret_cast<const Windows::UI::Xaml::PropertyMetadata *>(&typeMetadata)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RegisterAttached(abi_arg_in<hstring> name, abi_arg_in<Windows::UI::Xaml::Interop::TypeName> propertyType, abi_arg_in<Windows::UI::Xaml::Interop::TypeName> ownerType, abi_arg_in<Windows::UI::Xaml::IPropertyMetadata> defaultMetadata, abi_arg_out<Windows::UI::Xaml::IDependencyProperty> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().RegisterAttached(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&propertyType), *reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&ownerType), *reinterpret_cast<const Windows::UI::Xaml::PropertyMetadata *>(&defaultMetadata)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDispatcherTimer> : produce_base<D, Windows::UI::Xaml::IDispatcherTimer>
{
    HRESULT __stdcall get_Interval(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Interval(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().Interval(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Tick(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Tick(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Tick(event_token token) noexcept override
    {
        try
        {
            this->shim().Tick(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDispatcherTimerFactory> : produce_base<D, Windows::UI::Xaml::IDispatcherTimerFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IDispatcherTimer> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragEventArgs> : produce_base<D, Windows::UI::Xaml::IDragEventArgs>
{
    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(abi_arg_in<Windows::ApplicationModel::DataTransfer::IDataPackage> value) noexcept override
    {
        try
        {
            this->shim().Data(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DataPackage *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPosition(abi_arg_in<Windows::UI::Xaml::IUIElement> relativeTo, abi_arg_out<Windows::Foundation::Point> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetPosition(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&relativeTo)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragEventArgs2> : produce_base<D, Windows::UI::Xaml::IDragEventArgs2>
{
    HRESULT __stdcall get_DataView(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackageView> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragUIOverride(abi_arg_out<Windows::UI::Xaml::IDragUIOverride> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragUIOverride());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Modifiers(Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Modifiers());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AcceptedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AcceptedOperation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AcceptedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) noexcept override
    {
        try
        {
            this->shim().AcceptedOperation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::UI::Xaml::IDragOperationDeferral> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragEventArgs3> : produce_base<D, Windows::UI::Xaml::IDragEventArgs3>
{
    HRESULT __stdcall get_AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowedOperations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragOperationDeferral> : produce_base<D, Windows::UI::Xaml::IDragOperationDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragStartingEventArgs> : produce_base<D, Windows::UI::Xaml::IDragStartingEventArgs>
{
    HRESULT __stdcall get_Cancel(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cancel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Cancel(bool value) noexcept override
    {
        try
        {
            this->shim().Cancel(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragUI(abi_arg_out<Windows::UI::Xaml::IDragUI> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragUI());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::UI::Xaml::IDragOperationDeferral> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPosition(abi_arg_in<Windows::UI::Xaml::IUIElement> relativeTo, abi_arg_out<Windows::Foundation::Point> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetPosition(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&relativeTo)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragStartingEventArgs2> : produce_base<D, Windows::UI::Xaml::IDragStartingEventArgs2>
{
    HRESULT __stdcall get_AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowedOperations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) noexcept override
    {
        try
        {
            this->shim().AllowedOperations(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragUI> : produce_base<D, Windows::UI::Xaml::IDragUI>
{
    HRESULT __stdcall abi_SetContentFromBitmapImage(abi_arg_in<Windows::UI::Xaml::Media::Imaging::IBitmapImage> bitmapImage) noexcept override
    {
        try
        {
            this->shim().SetContentFromBitmapImage(*reinterpret_cast<const Windows::UI::Xaml::Media::Imaging::BitmapImage *>(&bitmapImage));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContentFromBitmapImageWithAnchorPoint(abi_arg_in<Windows::UI::Xaml::Media::Imaging::IBitmapImage> bitmapImage, abi_arg_in<Windows::Foundation::Point> anchorPoint) noexcept override
    {
        try
        {
            this->shim().SetContentFromBitmapImage(*reinterpret_cast<const Windows::UI::Xaml::Media::Imaging::BitmapImage *>(&bitmapImage), *reinterpret_cast<const Windows::Foundation::Point *>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContentFromSoftwareBitmap(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> softwareBitmap) noexcept override
    {
        try
        {
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&softwareBitmap));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContentFromSoftwareBitmapWithAnchorPoint(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> softwareBitmap, abi_arg_in<Windows::Foundation::Point> anchorPoint) noexcept override
    {
        try
        {
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&softwareBitmap), *reinterpret_cast<const Windows::Foundation::Point *>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContentFromDataPackage() noexcept override
    {
        try
        {
            this->shim().SetContentFromDataPackage();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDragUIOverride> : produce_base<D, Windows::UI::Xaml::IDragUIOverride>
{
    HRESULT __stdcall get_Caption(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Caption());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Caption(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Caption(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsContentVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsContentVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsContentVisible(bool value) noexcept override
    {
        try
        {
            this->shim().IsContentVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCaptionVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCaptionVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsCaptionVisible(bool value) noexcept override
    {
        try
        {
            this->shim().IsCaptionVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsGlyphVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsGlyphVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsGlyphVisible(bool value) noexcept override
    {
        try
        {
            this->shim().IsGlyphVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContentFromBitmapImage(abi_arg_in<Windows::UI::Xaml::Media::Imaging::IBitmapImage> bitmapImage) noexcept override
    {
        try
        {
            this->shim().SetContentFromBitmapImage(*reinterpret_cast<const Windows::UI::Xaml::Media::Imaging::BitmapImage *>(&bitmapImage));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContentFromBitmapImageWithAnchorPoint(abi_arg_in<Windows::UI::Xaml::Media::Imaging::IBitmapImage> bitmapImage, abi_arg_in<Windows::Foundation::Point> anchorPoint) noexcept override
    {
        try
        {
            this->shim().SetContentFromBitmapImage(*reinterpret_cast<const Windows::UI::Xaml::Media::Imaging::BitmapImage *>(&bitmapImage), *reinterpret_cast<const Windows::Foundation::Point *>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContentFromSoftwareBitmap(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> softwareBitmap) noexcept override
    {
        try
        {
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&softwareBitmap));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContentFromSoftwareBitmapWithAnchorPoint(abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> softwareBitmap, abi_arg_in<Windows::Foundation::Point> anchorPoint) noexcept override
    {
        try
        {
            this->shim().SetContentFromSoftwareBitmap(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&softwareBitmap), *reinterpret_cast<const Windows::Foundation::Point *>(&anchorPoint));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDropCompletedEventArgs> : produce_base<D, Windows::UI::Xaml::IDropCompletedEventArgs>
{
    HRESULT __stdcall get_DropResult(Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropResult());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDurationHelper> : produce_base<D, Windows::UI::Xaml::IDurationHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IDurationHelperStatics> : produce_base<D, Windows::UI::Xaml::IDurationHelperStatics>
{
    HRESULT __stdcall get_Automatic(abi_arg_out<Windows::UI::Xaml::Duration> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Automatic());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Forever(abi_arg_out<Windows::UI::Xaml::Duration> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Forever());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Compare(abi_arg_in<Windows::UI::Xaml::Duration> duration1, abi_arg_in<Windows::UI::Xaml::Duration> duration2, int32_t * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Compare(*reinterpret_cast<const Windows::UI::Xaml::Duration *>(&duration1), *reinterpret_cast<const Windows::UI::Xaml::Duration *>(&duration2)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromTimeSpan(abi_arg_in<Windows::Foundation::TimeSpan> timeSpan, abi_arg_out<Windows::UI::Xaml::Duration> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromTimeSpan(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&timeSpan)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHasTimeSpan(abi_arg_in<Windows::UI::Xaml::Duration> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetHasTimeSpan(*reinterpret_cast<const Windows::UI::Xaml::Duration *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Add(abi_arg_in<Windows::UI::Xaml::Duration> target, abi_arg_in<Windows::UI::Xaml::Duration> duration, abi_arg_out<Windows::UI::Xaml::Duration> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Add(*reinterpret_cast<const Windows::UI::Xaml::Duration *>(&target), *reinterpret_cast<const Windows::UI::Xaml::Duration *>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Equals(abi_arg_in<Windows::UI::Xaml::Duration> target, abi_arg_in<Windows::UI::Xaml::Duration> value, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Equals(*reinterpret_cast<const Windows::UI::Xaml::Duration *>(&target), *reinterpret_cast<const Windows::UI::Xaml::Duration *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Subtract(abi_arg_in<Windows::UI::Xaml::Duration> target, abi_arg_in<Windows::UI::Xaml::Duration> duration, abi_arg_out<Windows::UI::Xaml::Duration> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Subtract(*reinterpret_cast<const Windows::UI::Xaml::Duration *>(&target), *reinterpret_cast<const Windows::UI::Xaml::Duration *>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IElementSoundPlayer> : produce_base<D, Windows::UI::Xaml::IElementSoundPlayer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IElementSoundPlayerStatics> : produce_base<D, Windows::UI::Xaml::IElementSoundPlayerStatics>
{
    HRESULT __stdcall get_Volume(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Volume());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Volume(double value) noexcept override
    {
        try
        {
            this->shim().Volume(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::UI::Xaml::ElementSoundPlayerState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_State(Windows::UI::Xaml::ElementSoundPlayerState value) noexcept override
    {
        try
        {
            this->shim().State(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Play(Windows::UI::Xaml::ElementSoundKind sound) noexcept override
    {
        try
        {
            this->shim().Play(sound);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IEventTrigger> : produce_base<D, Windows::UI::Xaml::IEventTrigger>
{
    HRESULT __stdcall get_RoutedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoutedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoutedEvent(abi_arg_in<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            this->shim().RoutedEvent(*reinterpret_cast<const Windows::UI::Xaml::RoutedEvent *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Actions(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerAction>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Actions());
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
struct produce<D, Windows::UI::Xaml::IExceptionRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::IExceptionRoutedEventArgs>
{
    HRESULT __stdcall get_ErrorMessage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorMessage());
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
struct produce<D, Windows::UI::Xaml::IExceptionRoutedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::IExceptionRoutedEventArgsFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElement> : produce_base<D, Windows::UI::Xaml::IFrameworkElement>
{
    HRESULT __stdcall get_Triggers(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::TriggerBase>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Triggers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Resources(abi_arg_out<Windows::UI::Xaml::IResourceDictionary> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Resources());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Resources(abi_arg_in<Windows::UI::Xaml::IResourceDictionary> value) noexcept override
    {
        try
        {
            this->shim().Resources(*reinterpret_cast<const Windows::UI::Xaml::ResourceDictionary *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Tag(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Language(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActualWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActualWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActualHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActualHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Width(double value) noexcept override
    {
        try
        {
            this->shim().Width(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Height(double value) noexcept override
    {
        try
        {
            this->shim().Height(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinWidth(double value) noexcept override
    {
        try
        {
            this->shim().MinWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxWidth(double value) noexcept override
    {
        try
        {
            this->shim().MaxWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MinHeight(double value) noexcept override
    {
        try
        {
            this->shim().MinHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxHeight(double value) noexcept override
    {
        try
        {
            this->shim().MaxHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignment(Windows::UI::Xaml::HorizontalAlignment * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalAlignment(Windows::UI::Xaml::HorizontalAlignment value) noexcept override
    {
        try
        {
            this->shim().HorizontalAlignment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignment(Windows::UI::Xaml::VerticalAlignment * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalAlignment(Windows::UI::Xaml::VerticalAlignment value) noexcept override
    {
        try
        {
            this->shim().VerticalAlignment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Margin(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Margin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Margin(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().Margin(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Name(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Name(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BaseUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BaseUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataContext(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataContext());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataContext(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().DataContext(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Style(abi_arg_out<Windows::UI::Xaml::IStyle> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Style());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Style(abi_arg_in<Windows::UI::Xaml::IStyle> value) noexcept override
    {
        try
        {
            this->shim().Style(*reinterpret_cast<const Windows::UI::Xaml::Style *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parent(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowDirection(Windows::UI::Xaml::FlowDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlowDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FlowDirection(Windows::UI::Xaml::FlowDirection value) noexcept override
    {
        try
        {
            this->shim().FlowDirection(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Loaded(abi_arg_in<Windows::UI::Xaml::RoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Loaded(*reinterpret_cast<const Windows::UI::Xaml::RoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Loaded(event_token token) noexcept override
    {
        try
        {
            this->shim().Loaded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Unloaded(abi_arg_in<Windows::UI::Xaml::RoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Unloaded(*reinterpret_cast<const Windows::UI::Xaml::RoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Unloaded(event_token token) noexcept override
    {
        try
        {
            this->shim().Unloaded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SizeChanged(abi_arg_in<Windows::UI::Xaml::SizeChangedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SizeChanged(*reinterpret_cast<const Windows::UI::Xaml::SizeChangedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SizeChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().SizeChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LayoutUpdated(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LayoutUpdated(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LayoutUpdated(event_token token) noexcept override
    {
        try
        {
            this->shim().LayoutUpdated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindName(abi_arg_in<hstring> name, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FindName(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetBinding(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp, abi_arg_in<Windows::UI::Xaml::Data::IBindingBase> binding) noexcept override
    {
        try
        {
            this->shim().SetBinding(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp), *reinterpret_cast<const Windows::UI::Xaml::Data::BindingBase *>(&binding));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElement2> : produce_base<D, Windows::UI::Xaml::IFrameworkElement2>
{
    HRESULT __stdcall get_RequestedTheme(Windows::UI::Xaml::ElementTheme * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedTheme());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestedTheme(Windows::UI::Xaml::ElementTheme value) noexcept override
    {
        try
        {
            this->shim().RequestedTheme(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DataContextChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DataContextChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataContextChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().DataContextChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBindingExpression(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> dp, abi_arg_out<Windows::UI::Xaml::Data::IBindingExpression> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetBindingExpression(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&dp)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElement3> : produce_base<D, Windows::UI::Xaml::IFrameworkElement3>
{
    HRESULT __stdcall add_Loading(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Loading(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Loading(event_token token) noexcept override
    {
        try
        {
            this->shim().Loading(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElement4> : produce_base<D, Windows::UI::Xaml::IFrameworkElement4>
{
    HRESULT __stdcall get_AllowFocusOnInteraction(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowFocusOnInteraction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowFocusOnInteraction(bool value) noexcept override
    {
        try
        {
            this->shim().AllowFocusOnInteraction(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualMargin(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualMargin(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().FocusVisualMargin(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualSecondaryThickness(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualSecondaryThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualSecondaryThickness(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().FocusVisualSecondaryThickness(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualPrimaryThickness(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualPrimaryThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualPrimaryThickness(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().FocusVisualPrimaryThickness(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualSecondaryBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualSecondaryBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualSecondaryBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().FocusVisualSecondaryBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualPrimaryBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualPrimaryBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FocusVisualPrimaryBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().FocusVisualPrimaryBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowFocusWhenDisabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowFocusWhenDisabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowFocusWhenDisabled(bool value) noexcept override
    {
        try
        {
            this->shim().AllowFocusWhenDisabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementFactory> : produce_base<D, Windows::UI::Xaml::IFrameworkElementFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IFrameworkElement> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementOverrides> : produce_base<D, Windows::UI::Xaml::IFrameworkElementOverrides>
{
    HRESULT __stdcall abi_MeasureOverride(abi_arg_in<Windows::Foundation::Size> availableSize, abi_arg_out<Windows::Foundation::Size> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MeasureOverride(*reinterpret_cast<const Windows::Foundation::Size *>(&availableSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ArrangeOverride(abi_arg_in<Windows::Foundation::Size> finalSize, abi_arg_out<Windows::Foundation::Size> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ArrangeOverride(*reinterpret_cast<const Windows::Foundation::Size *>(&finalSize)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnApplyTemplate() noexcept override
    {
        try
        {
            this->shim().OnApplyTemplate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementOverrides2> : produce_base<D, Windows::UI::Xaml::IFrameworkElementOverrides2>
{
    HRESULT __stdcall abi_GoToElementStateCore(abi_arg_in<hstring> stateName, bool useTransitions, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GoToElementStateCore(*reinterpret_cast<const hstring *>(&stateName), useTransitions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkElementStatics> : produce_base<D, Windows::UI::Xaml::IFrameworkElementStatics>
{
    HRESULT __stdcall get_TagProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TagProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LanguageProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActualWidthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActualWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActualHeightProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActualHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WidthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeightProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinWidthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxWidthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinHeightProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHeightProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignmentProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignmentProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MarginProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MarginProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NameProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NameProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataContextProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataContextProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StyleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowDirectionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlowDirectionProperty());
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
struct produce<D, Windows::UI::Xaml::IFrameworkElementStatics2> : produce_base<D, Windows::UI::Xaml::IFrameworkElementStatics2>
{
    HRESULT __stdcall get_RequestedThemeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedThemeProperty());
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
struct produce<D, Windows::UI::Xaml::IFrameworkElementStatics4> : produce_base<D, Windows::UI::Xaml::IFrameworkElementStatics4>
{
    HRESULT __stdcall get_AllowFocusOnInteractionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowFocusOnInteractionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualMarginProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualMarginProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualSecondaryThicknessProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualSecondaryThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualPrimaryThicknessProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualPrimaryThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualSecondaryBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualSecondaryBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusVisualPrimaryBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusVisualPrimaryBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowFocusWhenDisabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowFocusWhenDisabledProperty());
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
struct produce<D, Windows::UI::Xaml::IFrameworkTemplate> : produce_base<D, Windows::UI::Xaml::IFrameworkTemplate>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkTemplateFactory> : produce_base<D, Windows::UI::Xaml::IFrameworkTemplateFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IFrameworkTemplate> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkView> : produce_base<D, Windows::UI::Xaml::IFrameworkView>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IFrameworkViewSource> : produce_base<D, Windows::UI::Xaml::IFrameworkViewSource>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IGridLengthHelper> : produce_base<D, Windows::UI::Xaml::IGridLengthHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IGridLengthHelperStatics> : produce_base<D, Windows::UI::Xaml::IGridLengthHelperStatics>
{
    HRESULT __stdcall get_Auto(abi_arg_out<Windows::UI::Xaml::GridLength> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Auto());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromPixels(double pixels, abi_arg_out<Windows::UI::Xaml::GridLength> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromPixels(pixels));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromValueAndType(double value, Windows::UI::Xaml::GridUnitType type, abi_arg_out<Windows::UI::Xaml::GridLength> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromValueAndType(value, type));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsAbsolute(abi_arg_in<Windows::UI::Xaml::GridLength> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsAbsolute(*reinterpret_cast<const Windows::UI::Xaml::GridLength *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsAuto(abi_arg_in<Windows::UI::Xaml::GridLength> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsAuto(*reinterpret_cast<const Windows::UI::Xaml::GridLength *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsStar(abi_arg_in<Windows::UI::Xaml::GridLength> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsStar(*reinterpret_cast<const Windows::UI::Xaml::GridLength *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Equals(abi_arg_in<Windows::UI::Xaml::GridLength> target, abi_arg_in<Windows::UI::Xaml::GridLength> value, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Equals(*reinterpret_cast<const Windows::UI::Xaml::GridLength *>(&target), *reinterpret_cast<const Windows::UI::Xaml::GridLength *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IMediaFailedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::IMediaFailedRoutedEventArgs>
{
    HRESULT __stdcall get_ErrorTrace(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorTrace());
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
struct produce<D, Windows::UI::Xaml::IPointHelper> : produce_base<D, Windows::UI::Xaml::IPointHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPointHelperStatics> : produce_base<D, Windows::UI::Xaml::IPointHelperStatics>
{
    HRESULT __stdcall abi_FromCoordinates(float x, float y, abi_arg_out<Windows::Foundation::Point> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromCoordinates(x, y));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPropertyMetadata> : produce_base<D, Windows::UI::Xaml::IPropertyMetadata>
{
    HRESULT __stdcall get_DefaultValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CreateDefaultValueCallback(abi_arg_out<Windows::UI::Xaml::CreateDefaultValueCallback> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateDefaultValueCallback());
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
struct produce<D, Windows::UI::Xaml::IPropertyMetadataFactory> : produce_base<D, Windows::UI::Xaml::IPropertyMetadataFactory>
{
    HRESULT __stdcall abi_CreateInstanceWithDefaultValue(abi_arg_in<Windows::IInspectable> defaultValue, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IPropertyMetadata> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithDefaultValue(*reinterpret_cast<const Windows::IInspectable *>(&defaultValue), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateInstanceWithDefaultValueAndCallback(abi_arg_in<Windows::IInspectable> defaultValue, abi_arg_in<Windows::UI::Xaml::PropertyChangedCallback> propertyChangedCallback, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IPropertyMetadata> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithDefaultValueAndCallback(*reinterpret_cast<const Windows::IInspectable *>(&defaultValue), *reinterpret_cast<const Windows::UI::Xaml::PropertyChangedCallback *>(&propertyChangedCallback), *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPropertyMetadataStatics> : produce_base<D, Windows::UI::Xaml::IPropertyMetadataStatics>
{
    HRESULT __stdcall abi_CreateWithDefaultValue(abi_arg_in<Windows::IInspectable> defaultValue, abi_arg_out<Windows::UI::Xaml::IPropertyMetadata> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Create(*reinterpret_cast<const Windows::IInspectable *>(&defaultValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithDefaultValueAndCallback(abi_arg_in<Windows::IInspectable> defaultValue, abi_arg_in<Windows::UI::Xaml::PropertyChangedCallback> propertyChangedCallback, abi_arg_out<Windows::UI::Xaml::IPropertyMetadata> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Create(*reinterpret_cast<const Windows::IInspectable *>(&defaultValue), *reinterpret_cast<const Windows::UI::Xaml::PropertyChangedCallback *>(&propertyChangedCallback)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithFactory(abi_arg_in<Windows::UI::Xaml::CreateDefaultValueCallback> createDefaultValueCallback, abi_arg_out<Windows::UI::Xaml::IPropertyMetadata> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Create(*reinterpret_cast<const Windows::UI::Xaml::CreateDefaultValueCallback *>(&createDefaultValueCallback)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithFactoryAndCallback(abi_arg_in<Windows::UI::Xaml::CreateDefaultValueCallback> createDefaultValueCallback, abi_arg_in<Windows::UI::Xaml::PropertyChangedCallback> propertyChangedCallback, abi_arg_out<Windows::UI::Xaml::IPropertyMetadata> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Create(*reinterpret_cast<const Windows::UI::Xaml::CreateDefaultValueCallback *>(&createDefaultValueCallback), *reinterpret_cast<const Windows::UI::Xaml::PropertyChangedCallback *>(&propertyChangedCallback)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IPropertyPath> : produce_base<D, Windows::UI::Xaml::IPropertyPath>
{
    HRESULT __stdcall get_Path(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
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
struct produce<D, Windows::UI::Xaml::IPropertyPathFactory> : produce_base<D, Windows::UI::Xaml::IPropertyPathFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<hstring> path, abi_arg_out<Windows::UI::Xaml::IPropertyPath> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const hstring *>(&path)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IRectHelper> : produce_base<D, Windows::UI::Xaml::IRectHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IRectHelperStatics> : produce_base<D, Windows::UI::Xaml::IRectHelperStatics>
{
    HRESULT __stdcall get_Empty(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Empty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromCoordinatesAndDimensions(float x, float y, float width, float height, abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromCoordinatesAndDimensions(x, y, width, height));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromPoints(abi_arg_in<Windows::Foundation::Point> point1, abi_arg_in<Windows::Foundation::Point> point2, abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromPoints(*reinterpret_cast<const Windows::Foundation::Point *>(&point1), *reinterpret_cast<const Windows::Foundation::Point *>(&point2)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromLocationAndSize(abi_arg_in<Windows::Foundation::Point> location, abi_arg_in<Windows::Foundation::Size> size, abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromLocationAndSize(*reinterpret_cast<const Windows::Foundation::Point *>(&location), *reinterpret_cast<const Windows::Foundation::Size *>(&size)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsEmpty(abi_arg_in<Windows::Foundation::Rect> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsEmpty(*reinterpret_cast<const Windows::Foundation::Rect *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBottom(abi_arg_in<Windows::Foundation::Rect> target, float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetBottom(*reinterpret_cast<const Windows::Foundation::Rect *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLeft(abi_arg_in<Windows::Foundation::Rect> target, float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetLeft(*reinterpret_cast<const Windows::Foundation::Rect *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRight(abi_arg_in<Windows::Foundation::Rect> target, float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetRight(*reinterpret_cast<const Windows::Foundation::Rect *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTop(abi_arg_in<Windows::Foundation::Rect> target, float * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetTop(*reinterpret_cast<const Windows::Foundation::Rect *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Contains(abi_arg_in<Windows::Foundation::Rect> target, abi_arg_in<Windows::Foundation::Point> point, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Contains(*reinterpret_cast<const Windows::Foundation::Rect *>(&target), *reinterpret_cast<const Windows::Foundation::Point *>(&point)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Equals(abi_arg_in<Windows::Foundation::Rect> target, abi_arg_in<Windows::Foundation::Rect> value, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Equals(*reinterpret_cast<const Windows::Foundation::Rect *>(&target), *reinterpret_cast<const Windows::Foundation::Rect *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Intersect(abi_arg_in<Windows::Foundation::Rect> target, abi_arg_in<Windows::Foundation::Rect> rect, abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Intersect(*reinterpret_cast<const Windows::Foundation::Rect *>(&target), *reinterpret_cast<const Windows::Foundation::Rect *>(&rect)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnionWithPoint(abi_arg_in<Windows::Foundation::Rect> target, abi_arg_in<Windows::Foundation::Point> point, abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Union(*reinterpret_cast<const Windows::Foundation::Rect *>(&target), *reinterpret_cast<const Windows::Foundation::Point *>(&point)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnionWithRect(abi_arg_in<Windows::Foundation::Rect> target, abi_arg_in<Windows::Foundation::Rect> rect, abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Union(*reinterpret_cast<const Windows::Foundation::Rect *>(&target), *reinterpret_cast<const Windows::Foundation::Rect *>(&rect)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IResourceDictionary> : produce_base<D, Windows::UI::Xaml::IResourceDictionary>
{
    HRESULT __stdcall get_Source(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Source(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MergedDictionaries(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::ResourceDictionary>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MergedDictionaries());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThemeDictionaries(abi_arg_out<Windows::Foundation::Collections::IMap<Windows::IInspectable, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ThemeDictionaries());
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
struct produce<D, Windows::UI::Xaml::IResourceDictionaryFactory> : produce_base<D, Windows::UI::Xaml::IResourceDictionaryFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IResourceDictionary> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IRoutedEvent> : produce_base<D, Windows::UI::Xaml::IRoutedEvent>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::IRoutedEventArgs>
{
    HRESULT __stdcall get_OriginalSource(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OriginalSource());
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
struct produce<D, Windows::UI::Xaml::IRoutedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::IRoutedEventArgsFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IRoutedEventArgs> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetter> : produce_base<D, Windows::UI::Xaml::ISetter>
{
    HRESULT __stdcall get_Property(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Property(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            this->shim().Property(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetter2> : produce_base<D, Windows::UI::Xaml::ISetter2>
{
    HRESULT __stdcall get_Target(abi_arg_out<Windows::UI::Xaml::ITargetPropertyPath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Target(abi_arg_in<Windows::UI::Xaml::ITargetPropertyPath> value) noexcept override
    {
        try
        {
            this->shim().Target(*reinterpret_cast<const Windows::UI::Xaml::TargetPropertyPath *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetterBase> : produce_base<D, Windows::UI::Xaml::ISetterBase>
{
    HRESULT __stdcall get_IsSealed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSealed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetterBaseCollection> : produce_base<D, Windows::UI::Xaml::ISetterBaseCollection>
{
    HRESULT __stdcall get_IsSealed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSealed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetterBaseFactory> : produce_base<D, Windows::UI::Xaml::ISetterBaseFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISetterFactory> : produce_base<D, Windows::UI::Xaml::ISetterFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> targetProperty, abi_arg_in<Windows::IInspectable> value, abi_arg_out<Windows::UI::Xaml::ISetter> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&targetProperty), *reinterpret_cast<const Windows::IInspectable *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISizeChangedEventArgs> : produce_base<D, Windows::UI::Xaml::ISizeChangedEventArgs>
{
    HRESULT __stdcall get_PreviousSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreviousSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISizeHelper> : produce_base<D, Windows::UI::Xaml::ISizeHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ISizeHelperStatics> : produce_base<D, Windows::UI::Xaml::ISizeHelperStatics>
{
    HRESULT __stdcall get_Empty(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Empty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromDimensions(float width, float height, abi_arg_out<Windows::Foundation::Size> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromDimensions(width, height));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsEmpty(abi_arg_in<Windows::Foundation::Size> target, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetIsEmpty(*reinterpret_cast<const Windows::Foundation::Size *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Equals(abi_arg_in<Windows::Foundation::Size> target, abi_arg_in<Windows::Foundation::Size> value, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().Equals(*reinterpret_cast<const Windows::Foundation::Size *>(&target), *reinterpret_cast<const Windows::Foundation::Size *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTrigger> : produce_base<D, Windows::UI::Xaml::IStateTrigger>
{
    HRESULT __stdcall get_IsActive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsActive(bool value) noexcept override
    {
        try
        {
            this->shim().IsActive(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTriggerBase> : produce_base<D, Windows::UI::Xaml::IStateTriggerBase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTriggerBaseFactory> : produce_base<D, Windows::UI::Xaml::IStateTriggerBaseFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IStateTriggerBase> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTriggerBaseProtected> : produce_base<D, Windows::UI::Xaml::IStateTriggerBaseProtected>
{
    HRESULT __stdcall abi_SetActive(bool IsActive) noexcept override
    {
        try
        {
            this->shim().SetActive(IsActive);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStateTriggerStatics> : produce_base<D, Windows::UI::Xaml::IStateTriggerStatics>
{
    HRESULT __stdcall get_IsActiveProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsActiveProperty());
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
struct produce<D, Windows::UI::Xaml::IStyle> : produce_base<D, Windows::UI::Xaml::IStyle>
{
    HRESULT __stdcall get_IsSealed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSealed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Setters(abi_arg_out<Windows::UI::Xaml::ISetterBaseCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Setters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetType(abi_arg_out<Windows::UI::Xaml::Interop::TypeName> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetType(abi_arg_in<Windows::UI::Xaml::Interop::TypeName> value) noexcept override
    {
        try
        {
            this->shim().TargetType(*reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BasedOn(abi_arg_out<Windows::UI::Xaml::IStyle> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BasedOn());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BasedOn(abi_arg_in<Windows::UI::Xaml::IStyle> value) noexcept override
    {
        try
        {
            this->shim().BasedOn(*reinterpret_cast<const Windows::UI::Xaml::Style *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Seal() noexcept override
    {
        try
        {
            this->shim().Seal();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IStyleFactory> : produce_base<D, Windows::UI::Xaml::IStyleFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::UI::Xaml::Interop::TypeName> targetType, abi_arg_out<Windows::UI::Xaml::IStyle> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::UI::Xaml::Interop::TypeName *>(&targetType)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITargetPropertyPath> : produce_base<D, Windows::UI::Xaml::ITargetPropertyPath>
{
    HRESULT __stdcall get_Path(abi_arg_out<Windows::UI::Xaml::IPropertyPath> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Path(abi_arg_in<Windows::UI::Xaml::IPropertyPath> value) noexcept override
    {
        try
        {
            this->shim().Path(*reinterpret_cast<const Windows::UI::Xaml::PropertyPath *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Target(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Target(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Target(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITargetPropertyPathFactory> : produce_base<D, Windows::UI::Xaml::ITargetPropertyPathFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::UI::Xaml::IDependencyProperty> targetProperty, abi_arg_out<Windows::UI::Xaml::ITargetPropertyPath> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::UI::Xaml::DependencyProperty *>(&targetProperty)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IThicknessHelper> : produce_base<D, Windows::UI::Xaml::IThicknessHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IThicknessHelperStatics> : produce_base<D, Windows::UI::Xaml::IThicknessHelperStatics>
{
    HRESULT __stdcall abi_FromLengths(double left, double top, double right, double bottom, abi_arg_out<Windows::UI::Xaml::Thickness> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromLengths(left, top, right, bottom));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromUniformLength(double uniformLength, abi_arg_out<Windows::UI::Xaml::Thickness> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromUniformLength(uniformLength));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITriggerAction> : produce_base<D, Windows::UI::Xaml::ITriggerAction>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITriggerActionFactory> : produce_base<D, Windows::UI::Xaml::ITriggerActionFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITriggerBase> : produce_base<D, Windows::UI::Xaml::ITriggerBase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::ITriggerBaseFactory> : produce_base<D, Windows::UI::Xaml::ITriggerBaseFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement> : produce_base<D, Windows::UI::Xaml::IUIElement>
{
    HRESULT __stdcall get_DesiredSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowDrop(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowDrop());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowDrop(bool value) noexcept override
    {
        try
        {
            this->shim().AllowDrop(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Opacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Opacity(double value) noexcept override
    {
        try
        {
            this->shim().Opacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Clip(abi_arg_out<Windows::UI::Xaml::Media::IRectangleGeometry> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Clip());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Clip(abi_arg_in<Windows::UI::Xaml::Media::IRectangleGeometry> value) noexcept override
    {
        try
        {
            this->shim().Clip(*reinterpret_cast<const Windows::UI::Xaml::Media::RectangleGeometry *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RenderTransform(abi_arg_out<Windows::UI::Xaml::Media::ITransform> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RenderTransform());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RenderTransform(abi_arg_in<Windows::UI::Xaml::Media::ITransform> value) noexcept override
    {
        try
        {
            this->shim().RenderTransform(*reinterpret_cast<const Windows::UI::Xaml::Media::Transform *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Projection(abi_arg_out<Windows::UI::Xaml::Media::IProjection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Projection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Projection(abi_arg_in<Windows::UI::Xaml::Media::IProjection> value) noexcept override
    {
        try
        {
            this->shim().Projection(*reinterpret_cast<const Windows::UI::Xaml::Media::Projection *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RenderTransformOrigin(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RenderTransformOrigin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RenderTransformOrigin(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().RenderTransformOrigin(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHitTestVisible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsHitTestVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsHitTestVisible(bool value) noexcept override
    {
        try
        {
            this->shim().IsHitTestVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visibility(Windows::UI::Xaml::Visibility * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Visibility());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Visibility(Windows::UI::Xaml::Visibility value) noexcept override
    {
        try
        {
            this->shim().Visibility(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RenderSize(abi_arg_out<Windows::Foundation::Size> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RenderSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UseLayoutRounding(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UseLayoutRounding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UseLayoutRounding(bool value) noexcept override
    {
        try
        {
            this->shim().UseLayoutRounding(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Transitions(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Transitions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Transitions(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition>> value) noexcept override
    {
        try
        {
            this->shim().Transitions(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::TransitionCollection *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CacheMode(abi_arg_out<Windows::UI::Xaml::Media::ICacheMode> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CacheMode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CacheMode(abi_arg_in<Windows::UI::Xaml::Media::ICacheMode> value) noexcept override
    {
        try
        {
            this->shim().CacheMode(*reinterpret_cast<const Windows::UI::Xaml::Media::CacheMode *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTapEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTapEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsTapEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsTapEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDoubleTapEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDoubleTapEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDoubleTapEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsDoubleTapEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRightTapEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRightTapEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsRightTapEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsRightTapEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHoldingEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsHoldingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsHoldingEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsHoldingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationMode(Windows::UI::Xaml::Input::ManipulationModes * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManipulationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ManipulationMode(Windows::UI::Xaml::Input::ManipulationModes value) noexcept override
    {
        try
        {
            this->shim().ManipulationMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCaptures(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Input::Pointer>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerCaptures());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyUp(abi_arg_in<Windows::UI::Xaml::Input::KeyEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().KeyUp(*reinterpret_cast<const Windows::UI::Xaml::Input::KeyEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyUp(event_token token) noexcept override
    {
        try
        {
            this->shim().KeyUp(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_KeyDown(abi_arg_in<Windows::UI::Xaml::Input::KeyEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().KeyDown(*reinterpret_cast<const Windows::UI::Xaml::Input::KeyEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_KeyDown(event_token token) noexcept override
    {
        try
        {
            this->shim().KeyDown(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GotFocus(abi_arg_in<Windows::UI::Xaml::RoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().GotFocus(*reinterpret_cast<const Windows::UI::Xaml::RoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GotFocus(event_token token) noexcept override
    {
        try
        {
            this->shim().GotFocus(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LostFocus(abi_arg_in<Windows::UI::Xaml::RoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().LostFocus(*reinterpret_cast<const Windows::UI::Xaml::RoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LostFocus(event_token token) noexcept override
    {
        try
        {
            this->shim().LostFocus(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DragEnter(abi_arg_in<Windows::UI::Xaml::DragEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DragEnter(*reinterpret_cast<const Windows::UI::Xaml::DragEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DragEnter(event_token token) noexcept override
    {
        try
        {
            this->shim().DragEnter(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DragLeave(abi_arg_in<Windows::UI::Xaml::DragEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DragLeave(*reinterpret_cast<const Windows::UI::Xaml::DragEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DragLeave(event_token token) noexcept override
    {
        try
        {
            this->shim().DragLeave(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DragOver(abi_arg_in<Windows::UI::Xaml::DragEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DragOver(*reinterpret_cast<const Windows::UI::Xaml::DragEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DragOver(event_token token) noexcept override
    {
        try
        {
            this->shim().DragOver(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Drop(abi_arg_in<Windows::UI::Xaml::DragEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Drop(*reinterpret_cast<const Windows::UI::Xaml::DragEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Drop(event_token token) noexcept override
    {
        try
        {
            this->shim().Drop(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressed(abi_arg_in<Windows::UI::Xaml::Input::PointerEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PointerPressed(*reinterpret_cast<const Windows::UI::Xaml::Input::PointerEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressed(event_token token) noexcept override
    {
        try
        {
            this->shim().PointerPressed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoved(abi_arg_in<Windows::UI::Xaml::Input::PointerEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PointerMoved(*reinterpret_cast<const Windows::UI::Xaml::Input::PointerEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoved(event_token token) noexcept override
    {
        try
        {
            this->shim().PointerMoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleased(abi_arg_in<Windows::UI::Xaml::Input::PointerEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PointerReleased(*reinterpret_cast<const Windows::UI::Xaml::Input::PointerEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleased(event_token token) noexcept override
    {
        try
        {
            this->shim().PointerReleased(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerEntered(abi_arg_in<Windows::UI::Xaml::Input::PointerEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PointerEntered(*reinterpret_cast<const Windows::UI::Xaml::Input::PointerEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntered(event_token token) noexcept override
    {
        try
        {
            this->shim().PointerEntered(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExited(abi_arg_in<Windows::UI::Xaml::Input::PointerEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PointerExited(*reinterpret_cast<const Windows::UI::Xaml::Input::PointerEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExited(event_token token) noexcept override
    {
        try
        {
            this->shim().PointerExited(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerCaptureLost(abi_arg_in<Windows::UI::Xaml::Input::PointerEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PointerCaptureLost(*reinterpret_cast<const Windows::UI::Xaml::Input::PointerEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerCaptureLost(event_token token) noexcept override
    {
        try
        {
            this->shim().PointerCaptureLost(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerCanceled(abi_arg_in<Windows::UI::Xaml::Input::PointerEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PointerCanceled(*reinterpret_cast<const Windows::UI::Xaml::Input::PointerEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerCanceled(event_token token) noexcept override
    {
        try
        {
            this->shim().PointerCanceled(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PointerWheelChanged(abi_arg_in<Windows::UI::Xaml::Input::PointerEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PointerWheelChanged(*reinterpret_cast<const Windows::UI::Xaml::Input::PointerEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerWheelChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PointerWheelChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Tapped(abi_arg_in<Windows::UI::Xaml::Input::TappedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Tapped(*reinterpret_cast<const Windows::UI::Xaml::Input::TappedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Tapped(event_token token) noexcept override
    {
        try
        {
            this->shim().Tapped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DoubleTapped(abi_arg_in<Windows::UI::Xaml::Input::DoubleTappedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DoubleTapped(*reinterpret_cast<const Windows::UI::Xaml::Input::DoubleTappedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DoubleTapped(event_token token) noexcept override
    {
        try
        {
            this->shim().DoubleTapped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Holding(abi_arg_in<Windows::UI::Xaml::Input::HoldingEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Holding(*reinterpret_cast<const Windows::UI::Xaml::Input::HoldingEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Holding(event_token token) noexcept override
    {
        try
        {
            this->shim().Holding(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RightTapped(abi_arg_in<Windows::UI::Xaml::Input::RightTappedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RightTapped(*reinterpret_cast<const Windows::UI::Xaml::Input::RightTappedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RightTapped(event_token token) noexcept override
    {
        try
        {
            this->shim().RightTapped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationStarting(abi_arg_in<Windows::UI::Xaml::Input::ManipulationStartingEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ManipulationStarting(*reinterpret_cast<const Windows::UI::Xaml::Input::ManipulationStartingEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationStarting(event_token token) noexcept override
    {
        try
        {
            this->shim().ManipulationStarting(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationInertiaStarting(abi_arg_in<Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ManipulationInertiaStarting(*reinterpret_cast<const Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationInertiaStarting(event_token token) noexcept override
    {
        try
        {
            this->shim().ManipulationInertiaStarting(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationStarted(abi_arg_in<Windows::UI::Xaml::Input::ManipulationStartedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ManipulationStarted(*reinterpret_cast<const Windows::UI::Xaml::Input::ManipulationStartedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationStarted(event_token token) noexcept override
    {
        try
        {
            this->shim().ManipulationStarted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationDelta(abi_arg_in<Windows::UI::Xaml::Input::ManipulationDeltaEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ManipulationDelta(*reinterpret_cast<const Windows::UI::Xaml::Input::ManipulationDeltaEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationDelta(event_token token) noexcept override
    {
        try
        {
            this->shim().ManipulationDelta(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCompleted(abi_arg_in<Windows::UI::Xaml::Input::ManipulationCompletedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ManipulationCompleted(*reinterpret_cast<const Windows::UI::Xaml::Input::ManipulationCompletedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().ManipulationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Measure(abi_arg_in<Windows::Foundation::Size> availableSize) noexcept override
    {
        try
        {
            this->shim().Measure(*reinterpret_cast<const Windows::Foundation::Size *>(&availableSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Arrange(abi_arg_in<Windows::Foundation::Rect> finalRect) noexcept override
    {
        try
        {
            this->shim().Arrange(*reinterpret_cast<const Windows::Foundation::Rect *>(&finalRect));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CapturePointer(abi_arg_in<Windows::UI::Xaml::Input::IPointer> value, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CapturePointer(*reinterpret_cast<const Windows::UI::Xaml::Input::Pointer *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReleasePointerCapture(abi_arg_in<Windows::UI::Xaml::Input::IPointer> value) noexcept override
    {
        try
        {
            this->shim().ReleasePointerCapture(*reinterpret_cast<const Windows::UI::Xaml::Input::Pointer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReleasePointerCaptures() noexcept override
    {
        try
        {
            this->shim().ReleasePointerCaptures();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddHandler(abi_arg_in<Windows::UI::Xaml::IRoutedEvent> routedEvent, abi_arg_in<Windows::IInspectable> handler, bool handledEventsToo) noexcept override
    {
        try
        {
            this->shim().AddHandler(*reinterpret_cast<const Windows::UI::Xaml::RoutedEvent *>(&routedEvent), *reinterpret_cast<const Windows::IInspectable *>(&handler), handledEventsToo);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveHandler(abi_arg_in<Windows::UI::Xaml::IRoutedEvent> routedEvent, abi_arg_in<Windows::IInspectable> handler) noexcept override
    {
        try
        {
            this->shim().RemoveHandler(*reinterpret_cast<const Windows::UI::Xaml::RoutedEvent *>(&routedEvent), *reinterpret_cast<const Windows::IInspectable *>(&handler));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TransformToVisual(abi_arg_in<Windows::UI::Xaml::IUIElement> visual, abi_arg_out<Windows::UI::Xaml::Media::IGeneralTransform> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TransformToVisual(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&visual)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InvalidateMeasure() noexcept override
    {
        try
        {
            this->shim().InvalidateMeasure();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InvalidateArrange() noexcept override
    {
        try
        {
            this->shim().InvalidateArrange();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateLayout() noexcept override
    {
        try
        {
            this->shim().UpdateLayout();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement2> : produce_base<D, Windows::UI::Xaml::IUIElement2>
{
    HRESULT __stdcall get_CompositeMode(Windows::UI::Xaml::Media::ElementCompositeMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompositeMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompositeMode(Windows::UI::Xaml::Media::ElementCompositeMode value) noexcept override
    {
        try
        {
            this->shim().CompositeMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CancelDirectManipulations(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CancelDirectManipulations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement3> : produce_base<D, Windows::UI::Xaml::IUIElement3>
{
    HRESULT __stdcall get_Transform3D(abi_arg_out<Windows::UI::Xaml::Media::Media3D::ITransform3D> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Transform3D());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Transform3D(abi_arg_in<Windows::UI::Xaml::Media::Media3D::ITransform3D> value) noexcept override
    {
        try
        {
            this->shim().Transform3D(*reinterpret_cast<const Windows::UI::Xaml::Media::Media3D::Transform3D *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanDrag(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanDrag());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanDrag(bool value) noexcept override
    {
        try
        {
            this->shim().CanDrag(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DragStarting(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DragStarting(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DragStarting(event_token token) noexcept override
    {
        try
        {
            this->shim().DragStarting(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DropCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DropCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DropCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().DropCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartDragAsync(abi_arg_in<Windows::UI::Input::IPointerPoint> pointerPoint, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().StartDragAsync(*reinterpret_cast<const Windows::UI::Input::PointerPoint *>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElement4> : produce_base<D, Windows::UI::Xaml::IUIElement4>
{
    HRESULT __stdcall get_ContextFlyout(abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContextFlyout());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContextFlyout(abi_arg_in<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> value) noexcept override
    {
        try
        {
            this->shim().ContextFlyout(*reinterpret_cast<const Windows::UI::Xaml::Controls::Primitives::FlyoutBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvoked(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitDisplayModeOnAccessKeyInvoked());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitDisplayModeOnAccessKeyInvoked(bool value) noexcept override
    {
        try
        {
            this->shim().ExitDisplayModeOnAccessKeyInvoked(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAccessKeyScope(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAccessKeyScope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsAccessKeyScope(bool value) noexcept override
    {
        try
        {
            this->shim().IsAccessKeyScope(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyScopeOwner(abi_arg_out<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessKeyScopeOwner());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccessKeyScopeOwner(abi_arg_in<Windows::UI::Xaml::IDependencyObject> value) noexcept override
    {
        try
        {
            this->shim().AccessKeyScopeOwner(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKey(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessKey());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccessKey(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AccessKey(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContextRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ContextRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContextRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().ContextRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContextCanceled(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ContextCanceled(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContextCanceled(event_token token) noexcept override
    {
        try
        {
            this->shim().ContextCanceled(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccessKeyDisplayRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AccessKeyDisplayRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessKeyDisplayRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().AccessKeyDisplayRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccessKeyDisplayDismissed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AccessKeyDisplayDismissed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessKeyDisplayDismissed(event_token token) noexcept override
    {
        try
        {
            this->shim().AccessKeyDisplayDismissed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccessKeyInvoked(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AccessKeyInvoked(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessKeyInvoked(event_token token) noexcept override
    {
        try
        {
            this->shim().AccessKeyInvoked(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementFactory> : produce_base<D, Windows::UI::Xaml::IUIElementFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementOverrides> : produce_base<D, Windows::UI::Xaml::IUIElementOverrides>
{
    HRESULT __stdcall abi_OnCreateAutomationPeer(abi_arg_out<Windows::UI::Xaml::Automation::Peers::IAutomationPeer> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().OnCreateAutomationPeer());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnDisconnectVisualChildren() noexcept override
    {
        try
        {
            this->shim().OnDisconnectVisualChildren();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindSubElementsForTouchTargeting(abi_arg_in<Windows::Foundation::Point> point, abi_arg_in<Windows::Foundation::Rect> boundingRect, abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FindSubElementsForTouchTargeting(*reinterpret_cast<const Windows::Foundation::Point *>(&point), *reinterpret_cast<const Windows::Foundation::Rect *>(&boundingRect)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics> : produce_base<D, Windows::UI::Xaml::IUIElementStatics>
{
    HRESULT __stdcall get_KeyDownEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyDownEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyUpEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyUpEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerEnteredEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerEnteredEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerPressedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerPressedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerMovedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerMovedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerReleasedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerReleasedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerExitedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerExitedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCaptureLostEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerCaptureLostEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCanceledEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerCanceledEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerWheelChangedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerWheelChangedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TappedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TappedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DoubleTappedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DoubleTappedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HoldingEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HoldingEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightTappedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RightTappedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationStartingEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManipulationStartingEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationInertiaStartingEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManipulationInertiaStartingEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationStartedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManipulationStartedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationDeltaEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManipulationDeltaEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationCompletedEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManipulationCompletedEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragEnterEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragEnterEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragLeaveEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragLeaveEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragOverEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragOverEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropEvent(abi_arg_out<Windows::UI::Xaml::IRoutedEvent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropEvent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowDropProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowDropProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpacityProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClipProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClipProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RenderTransformProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RenderTransformProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProjectionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RenderTransformOriginProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RenderTransformOriginProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHitTestVisibleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsHitTestVisibleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisibilityProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VisibilityProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UseLayoutRoundingProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UseLayoutRoundingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransitionsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransitionsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CacheModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CacheModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsTapEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsTapEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDoubleTapEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDoubleTapEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRightTapEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRightTapEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsHoldingEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsHoldingEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ManipulationModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ManipulationModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerCapturesProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerCapturesProperty());
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
struct produce<D, Windows::UI::Xaml::IUIElementStatics2> : produce_base<D, Windows::UI::Xaml::IUIElementStatics2>
{
    HRESULT __stdcall get_CompositeModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompositeModeProperty());
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
struct produce<D, Windows::UI::Xaml::IUIElementStatics3> : produce_base<D, Windows::UI::Xaml::IUIElementStatics3>
{
    HRESULT __stdcall get_Transform3DProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Transform3DProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanDragProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanDragProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryStartDirectManipulation(abi_arg_in<Windows::UI::Xaml::Input::IPointer> value, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryStartDirectManipulation(*reinterpret_cast<const Windows::UI::Xaml::Input::Pointer *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IUIElementStatics4> : produce_base<D, Windows::UI::Xaml::IUIElementStatics4>
{
    HRESULT __stdcall get_ContextFlyoutProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContextFlyoutProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvokedProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExitDisplayModeOnAccessKeyInvokedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAccessKeyScopeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAccessKeyScopeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyScopeOwnerProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessKeyScopeOwnerProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccessKeyProperty());
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
struct produce<D, Windows::UI::Xaml::IUnhandledExceptionEventArgs> : produce_base<D, Windows::UI::Xaml::IUnhandledExceptionEventArgs>
{
    HRESULT __stdcall get_Exception(HRESULT * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Exception());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Handled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept override
    {
        try
        {
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualState> : produce_base<D, Windows::UI::Xaml::IVisualState>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Storyboard(abi_arg_out<Windows::UI::Xaml::Media::Animation::IStoryboard> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Storyboard());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Storyboard(abi_arg_in<Windows::UI::Xaml::Media::Animation::IStoryboard> value) noexcept override
    {
        try
        {
            this->shim().Storyboard(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::Storyboard *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualState2> : produce_base<D, Windows::UI::Xaml::IVisualState2>
{
    HRESULT __stdcall get_Setters(abi_arg_out<Windows::UI::Xaml::ISetterBaseCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Setters());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StateTriggers(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::StateTriggerBase>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StateTriggers());
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
struct produce<D, Windows::UI::Xaml::IVisualStateChangedEventArgs> : produce_base<D, Windows::UI::Xaml::IVisualStateChangedEventArgs>
{
    HRESULT __stdcall get_OldState(abi_arg_out<Windows::UI::Xaml::IVisualState> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldState());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OldState(abi_arg_in<Windows::UI::Xaml::IVisualState> value) noexcept override
    {
        try
        {
            this->shim().OldState(*reinterpret_cast<const Windows::UI::Xaml::VisualState *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewState(abi_arg_out<Windows::UI::Xaml::IVisualState> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewState());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NewState(abi_arg_in<Windows::UI::Xaml::IVisualState> value) noexcept override
    {
        try
        {
            this->shim().NewState(*reinterpret_cast<const Windows::UI::Xaml::VisualState *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Control(abi_arg_out<Windows::UI::Xaml::Controls::IControl> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Control(abi_arg_in<Windows::UI::Xaml::Controls::IControl> value) noexcept override
    {
        try
        {
            this->shim().Control(*reinterpret_cast<const Windows::UI::Xaml::Controls::Control *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateGroup> : produce_base<D, Windows::UI::Xaml::IVisualStateGroup>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Transitions(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualTransition>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Transitions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_States(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualState>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().States());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentState(abi_arg_out<Windows::UI::Xaml::IVisualState> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentState());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentStateChanged(abi_arg_in<Windows::UI::Xaml::VisualStateChangedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CurrentStateChanged(*reinterpret_cast<const Windows::UI::Xaml::VisualStateChangedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentStateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CurrentStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CurrentStateChanging(abi_arg_in<Windows::UI::Xaml::VisualStateChangedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CurrentStateChanging(*reinterpret_cast<const Windows::UI::Xaml::VisualStateChangedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CurrentStateChanging(event_token token) noexcept override
    {
        try
        {
            this->shim().CurrentStateChanging(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManager> : produce_base<D, Windows::UI::Xaml::IVisualStateManager>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManagerFactory> : produce_base<D, Windows::UI::Xaml::IVisualStateManagerFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IVisualStateManager> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManagerOverrides> : produce_base<D, Windows::UI::Xaml::IVisualStateManagerOverrides>
{
    HRESULT __stdcall abi_GoToStateCore(abi_arg_in<Windows::UI::Xaml::Controls::IControl> control, abi_arg_in<Windows::UI::Xaml::IFrameworkElement> templateRoot, abi_arg_in<hstring> stateName, abi_arg_in<Windows::UI::Xaml::IVisualStateGroup> group, abi_arg_in<Windows::UI::Xaml::IVisualState> state, bool useTransitions, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GoToStateCore(*reinterpret_cast<const Windows::UI::Xaml::Controls::Control *>(&control), *reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&templateRoot), *reinterpret_cast<const hstring *>(&stateName), *reinterpret_cast<const Windows::UI::Xaml::VisualStateGroup *>(&group), *reinterpret_cast<const Windows::UI::Xaml::VisualState *>(&state), useTransitions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManagerProtected> : produce_base<D, Windows::UI::Xaml::IVisualStateManagerProtected>
{
    HRESULT __stdcall abi_RaiseCurrentStateChanging(abi_arg_in<Windows::UI::Xaml::IVisualStateGroup> stateGroup, abi_arg_in<Windows::UI::Xaml::IVisualState> oldState, abi_arg_in<Windows::UI::Xaml::IVisualState> newState, abi_arg_in<Windows::UI::Xaml::Controls::IControl> control) noexcept override
    {
        try
        {
            this->shim().RaiseCurrentStateChanging(*reinterpret_cast<const Windows::UI::Xaml::VisualStateGroup *>(&stateGroup), *reinterpret_cast<const Windows::UI::Xaml::VisualState *>(&oldState), *reinterpret_cast<const Windows::UI::Xaml::VisualState *>(&newState), *reinterpret_cast<const Windows::UI::Xaml::Controls::Control *>(&control));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RaiseCurrentStateChanged(abi_arg_in<Windows::UI::Xaml::IVisualStateGroup> stateGroup, abi_arg_in<Windows::UI::Xaml::IVisualState> oldState, abi_arg_in<Windows::UI::Xaml::IVisualState> newState, abi_arg_in<Windows::UI::Xaml::Controls::IControl> control) noexcept override
    {
        try
        {
            this->shim().RaiseCurrentStateChanged(*reinterpret_cast<const Windows::UI::Xaml::VisualStateGroup *>(&stateGroup), *reinterpret_cast<const Windows::UI::Xaml::VisualState *>(&oldState), *reinterpret_cast<const Windows::UI::Xaml::VisualState *>(&newState), *reinterpret_cast<const Windows::UI::Xaml::Controls::Control *>(&control));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualStateManagerStatics> : produce_base<D, Windows::UI::Xaml::IVisualStateManagerStatics>
{
    HRESULT __stdcall abi_GetVisualStateGroups(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> obj, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetVisualStateGroups(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&obj)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVisualStateManagerProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CustomVisualStateManagerProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCustomVisualStateManager(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> obj, abi_arg_out<Windows::UI::Xaml::IVisualStateManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCustomVisualStateManager(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&obj)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetCustomVisualStateManager(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> obj, abi_arg_in<Windows::UI::Xaml::IVisualStateManager> value) noexcept override
    {
        try
        {
            this->shim().SetCustomVisualStateManager(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&obj), *reinterpret_cast<const Windows::UI::Xaml::VisualStateManager *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GoToState(abi_arg_in<Windows::UI::Xaml::Controls::IControl> control, abi_arg_in<hstring> stateName, bool useTransitions, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GoToState(*reinterpret_cast<const Windows::UI::Xaml::Controls::Control *>(&control), *reinterpret_cast<const hstring *>(&stateName), useTransitions));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualTransition> : produce_base<D, Windows::UI::Xaml::IVisualTransition>
{
    HRESULT __stdcall get_GeneratedDuration(abi_arg_out<Windows::UI::Xaml::Duration> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GeneratedDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GeneratedDuration(abi_arg_in<Windows::UI::Xaml::Duration> value) noexcept override
    {
        try
        {
            this->shim().GeneratedDuration(*reinterpret_cast<const Windows::UI::Xaml::Duration *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GeneratedEasingFunction(abi_arg_out<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GeneratedEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GeneratedEasingFunction(abi_arg_in<Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> value) noexcept override
    {
        try
        {
            this->shim().GeneratedEasingFunction(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::EasingFunctionBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().To(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().From(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Storyboard(abi_arg_out<Windows::UI::Xaml::Media::Animation::IStoryboard> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Storyboard());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Storyboard(abi_arg_in<Windows::UI::Xaml::Media::Animation::IStoryboard> value) noexcept override
    {
        try
        {
            this->shim().Storyboard(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::Storyboard *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IVisualTransitionFactory> : produce_base<D, Windows::UI::Xaml::IVisualTransitionFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::IVisualTransition> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(*reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
            return S_OK;
        }
        catch (...)
        {
            *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IWindow> : produce_base<D, Windows::UI::Xaml::IWindow>
{
    HRESULT __stdcall get_Bounds(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Visible(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Content(abi_arg_in<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            this->shim().Content(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CoreWindow(abi_arg_out<Windows::UI::Core::ICoreWindow> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CoreWindow());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(abi_arg_out<Windows::UI::Core::ICoreDispatcher> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Dispatcher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Activated(abi_arg_in<Windows::UI::Xaml::WindowActivatedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Activated(*reinterpret_cast<const Windows::UI::Xaml::WindowActivatedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Activated(event_token token) noexcept override
    {
        try
        {
            this->shim().Activated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(abi_arg_in<Windows::UI::Xaml::WindowClosedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Closed(*reinterpret_cast<const Windows::UI::Xaml::WindowClosedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept override
    {
        try
        {
            this->shim().Closed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SizeChanged(abi_arg_in<Windows::UI::Xaml::WindowSizeChangedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SizeChanged(*reinterpret_cast<const Windows::UI::Xaml::WindowSizeChangedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SizeChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().SizeChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VisibilityChanged(abi_arg_in<Windows::UI::Xaml::WindowVisibilityChangedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().VisibilityChanged(*reinterpret_cast<const Windows::UI::Xaml::WindowVisibilityChangedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisibilityChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().VisibilityChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Activate() noexcept override
    {
        try
        {
            this->shim().Activate();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Close() noexcept override
    {
        try
        {
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IWindow2> : produce_base<D, Windows::UI::Xaml::IWindow2>
{
    HRESULT __stdcall abi_SetTitleBar(abi_arg_in<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            this->shim().SetTitleBar(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::IWindowCreatedEventArgs> : produce_base<D, Windows::UI::Xaml::IWindowCreatedEventArgs>
{
    HRESULT __stdcall get_Window(abi_arg_out<Windows::UI::Xaml::IWindow> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Window());
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
struct produce<D, Windows::UI::Xaml::IWindowStatics> : produce_base<D, Windows::UI::Xaml::IWindowStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::UI::Xaml::IWindow> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Current());
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

namespace Windows::UI::Xaml {

template <typename D> void impl_IDataTemplateExtension<D>::ResetTemplate() const
{
    check_hresult(static_cast<const IDataTemplateExtension &>(static_cast<const D &>(*this))->abi_ResetTemplate());
}

template <typename D> bool impl_IDataTemplateExtension<D>::ProcessBinding(uint32_t phase) const
{
    bool returnValue {};
    check_hresult(static_cast<const IDataTemplateExtension &>(static_cast<const D &>(*this))->abi_ProcessBinding(phase, &returnValue));
    return returnValue;
}

template <typename D> int32_t impl_IDataTemplateExtension<D>::ProcessBindings(const Windows::UI::Xaml::Controls::ContainerContentChangingEventArgs & arg) const
{
    int32_t returnValue {};
    check_hresult(static_cast<const IDataTemplateExtension &>(static_cast<const D &>(*this))->abi_ProcessBindings(get(arg), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_IDataTemplate<D>::LoadContent() const
{
    Windows::UI::Xaml::DependencyObject returnValue { nullptr };
    check_hresult(static_cast<const IDataTemplate &>(static_cast<const D &>(*this))->abi_LoadContent(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DataTemplate impl_IDataTemplateFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::DataTemplate instance { nullptr };
    check_hresult(static_cast<const IDataTemplateFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDataTemplateStatics2<D>::ExtensionInstanceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDataTemplateStatics2 &>(static_cast<const D &>(*this))->get_ExtensionInstanceProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::IDataTemplateExtension impl_IDataTemplateStatics2<D>::GetExtensionInstance(const Windows::UI::Xaml::FrameworkElement & element) const
{
    Windows::UI::Xaml::IDataTemplateExtension value;
    check_hresult(static_cast<const IDataTemplateStatics2 &>(static_cast<const D &>(*this))->abi_GetExtensionInstance(get(element), put(value)));
    return value;
}

template <typename D> void impl_IDataTemplateStatics2<D>::SetExtensionInstance(const Windows::UI::Xaml::FrameworkElement & element, const Windows::UI::Xaml::IDataTemplateExtension & value) const
{
    check_hresult(static_cast<const IDataTemplateStatics2 &>(static_cast<const D &>(*this))->abi_SetExtensionInstance(get(element), get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IDispatcherTimer<D>::Interval() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IDispatcherTimer &>(static_cast<const D &>(*this))->get_Interval(put(value)));
    return value;
}

template <typename D> void impl_IDispatcherTimer<D>::Interval(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IDispatcherTimer &>(static_cast<const D &>(*this))->put_Interval(get(value)));
}

template <typename D> bool impl_IDispatcherTimer<D>::IsEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDispatcherTimer &>(static_cast<const D &>(*this))->get_IsEnabled(&value));
    return value;
}

template <typename D> event_token impl_IDispatcherTimer<D>::Tick(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IDispatcherTimer &>(static_cast<const D &>(*this))->add_Tick(get(value), &token));
    return token;
}

template <typename D> event_revoker<IDispatcherTimer> impl_IDispatcherTimer<D>::Tick(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IDispatcherTimer>(this, &ABI::Windows::UI::Xaml::IDispatcherTimer::remove_Tick, Tick(value));
}

template <typename D> void impl_IDispatcherTimer<D>::Tick(event_token token) const
{
    check_hresult(static_cast<const IDispatcherTimer &>(static_cast<const D &>(*this))->remove_Tick(token));
}

template <typename D> void impl_IDispatcherTimer<D>::Start() const
{
    check_hresult(static_cast<const IDispatcherTimer &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IDispatcherTimer<D>::Stop() const
{
    check_hresult(static_cast<const IDispatcherTimer &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> Windows::UI::Xaml::DispatcherTimer impl_IDispatcherTimerFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::DispatcherTimer instance { nullptr };
    check_hresult(static_cast<const IDispatcherTimerFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::CornerRadius impl_ICornerRadiusHelperStatics<D>::FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft) const
{
    Windows::UI::Xaml::CornerRadius returnValue {};
    check_hresult(static_cast<const ICornerRadiusHelperStatics &>(static_cast<const D &>(*this))->abi_FromRadii(topLeft, topRight, bottomRight, bottomLeft, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::CornerRadius impl_ICornerRadiusHelperStatics<D>::FromUniformRadius(double uniformRadius) const
{
    Windows::UI::Xaml::CornerRadius returnValue {};
    check_hresult(static_cast<const ICornerRadiusHelperStatics &>(static_cast<const D &>(*this))->abi_FromUniformRadius(uniformRadius, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Duration impl_IDurationHelperStatics<D>::Automatic() const
{
    Windows::UI::Xaml::Duration value {};
    check_hresult(static_cast<const IDurationHelperStatics &>(static_cast<const D &>(*this))->get_Automatic(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Duration impl_IDurationHelperStatics<D>::Forever() const
{
    Windows::UI::Xaml::Duration value {};
    check_hresult(static_cast<const IDurationHelperStatics &>(static_cast<const D &>(*this))->get_Forever(put(value)));
    return value;
}

template <typename D> int32_t impl_IDurationHelperStatics<D>::Compare(const Windows::UI::Xaml::Duration & duration1, const Windows::UI::Xaml::Duration & duration2) const
{
    int32_t returnValue {};
    check_hresult(static_cast<const IDurationHelperStatics &>(static_cast<const D &>(*this))->abi_Compare(get(duration1), get(duration2), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Duration impl_IDurationHelperStatics<D>::FromTimeSpan(const Windows::Foundation::TimeSpan & timeSpan) const
{
    Windows::UI::Xaml::Duration returnValue {};
    check_hresult(static_cast<const IDurationHelperStatics &>(static_cast<const D &>(*this))->abi_FromTimeSpan(get(timeSpan), put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IDurationHelperStatics<D>::GetHasTimeSpan(const Windows::UI::Xaml::Duration & target) const
{
    bool value {};
    check_hresult(static_cast<const IDurationHelperStatics &>(static_cast<const D &>(*this))->abi_GetHasTimeSpan(get(target), &value));
    return value;
}

template <typename D> Windows::UI::Xaml::Duration impl_IDurationHelperStatics<D>::Add(const Windows::UI::Xaml::Duration & target, const Windows::UI::Xaml::Duration & duration) const
{
    Windows::UI::Xaml::Duration returnValue {};
    check_hresult(static_cast<const IDurationHelperStatics &>(static_cast<const D &>(*this))->abi_Add(get(target), get(duration), put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IDurationHelperStatics<D>::Equals(const Windows::UI::Xaml::Duration & target, const Windows::UI::Xaml::Duration & value) const
{
    bool returnValue {};
    check_hresult(static_cast<const IDurationHelperStatics &>(static_cast<const D &>(*this))->abi_Equals(get(target), get(value), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Duration impl_IDurationHelperStatics<D>::Subtract(const Windows::UI::Xaml::Duration & target, const Windows::UI::Xaml::Duration & duration) const
{
    Windows::UI::Xaml::Duration returnValue {};
    check_hresult(static_cast<const IDurationHelperStatics &>(static_cast<const D &>(*this))->abi_Subtract(get(target), get(duration), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Thickness impl_IThicknessHelperStatics<D>::FromLengths(double left, double top, double right, double bottom) const
{
    Windows::UI::Xaml::Thickness returnValue {};
    check_hresult(static_cast<const IThicknessHelperStatics &>(static_cast<const D &>(*this))->abi_FromLengths(left, top, right, bottom, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Thickness impl_IThicknessHelperStatics<D>::FromUniformLength(double uniformLength) const
{
    Windows::UI::Xaml::Thickness returnValue {};
    check_hresult(static_cast<const IThicknessHelperStatics &>(static_cast<const D &>(*this))->abi_FromUniformLength(uniformLength, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::IInspectable impl_IDataContextChangedEventArgs<D>::NewValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDataContextChangedEventArgs &>(static_cast<const D &>(*this))->get_NewValue(put(value)));
    return value;
}

template <typename D> bool impl_IDataContextChangedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IDataContextChangedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IDataContextChangedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IDataContextChangedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::IInspectable impl_IDataTemplateKey<D>::DataType() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDataTemplateKey &>(static_cast<const D &>(*this))->get_DataType(put(value)));
    return value;
}

template <typename D> void impl_IDataTemplateKey<D>::DataType(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IDataTemplateKey &>(static_cast<const D &>(*this))->put_DataType(get(value)));
}

template <typename D> Windows::UI::Xaml::DataTemplateKey impl_IDataTemplateKeyFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::DataTemplateKey instance { nullptr };
    check_hresult(static_cast<const IDataTemplateKeyFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DataTemplateKey impl_IDataTemplateKeyFactory<D>::CreateInstanceWithType(const Windows::IInspectable & dataType, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::DataTemplateKey instance { nullptr };
    check_hresult(static_cast<const IDataTemplateKeyFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithType(get(dataType), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::IInspectable impl_IDependencyObject<D>::GetValue(const Windows::UI::Xaml::DependencyProperty & dp) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IDependencyObject &>(static_cast<const D &>(*this))->abi_GetValue(get(dp), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IDependencyObject<D>::SetValue(const Windows::UI::Xaml::DependencyProperty & dp, const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IDependencyObject &>(static_cast<const D &>(*this))->abi_SetValue(get(dp), get(value)));
}

template <typename D> void impl_IDependencyObject<D>::ClearValue(const Windows::UI::Xaml::DependencyProperty & dp) const
{
    check_hresult(static_cast<const IDependencyObject &>(static_cast<const D &>(*this))->abi_ClearValue(get(dp)));
}

template <typename D> Windows::IInspectable impl_IDependencyObject<D>::ReadLocalValue(const Windows::UI::Xaml::DependencyProperty & dp) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IDependencyObject &>(static_cast<const D &>(*this))->abi_ReadLocalValue(get(dp), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::IInspectable impl_IDependencyObject<D>::GetAnimationBaseValue(const Windows::UI::Xaml::DependencyProperty & dp) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IDependencyObject &>(static_cast<const D &>(*this))->abi_GetAnimationBaseValue(get(dp), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Core::CoreDispatcher impl_IDependencyObject<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value { nullptr };
    check_hresult(static_cast<const IDependencyObject &>(static_cast<const D &>(*this))->get_Dispatcher(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_IDependencyObjectFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::DependencyObject instance { nullptr };
    check_hresult(static_cast<const IDependencyObjectFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> int64_t impl_IDependencyObject2<D>::RegisterPropertyChangedCallback(const Windows::UI::Xaml::DependencyProperty & dp, const Windows::UI::Xaml::DependencyPropertyChangedCallback & callback) const
{
    int64_t returnValue {};
    check_hresult(static_cast<const IDependencyObject2 &>(static_cast<const D &>(*this))->abi_RegisterPropertyChangedCallback(get(dp), get(callback), &returnValue));
    return returnValue;
}

template <typename D> void impl_IDependencyObject2<D>::UnregisterPropertyChangedCallback(const Windows::UI::Xaml::DependencyProperty & dp, int64_t token) const
{
    check_hresult(static_cast<const IDependencyObject2 &>(static_cast<const D &>(*this))->abi_UnregisterPropertyChangedCallback(get(dp), token));
}

template <typename D> Windows::UI::Xaml::PropertyMetadata impl_IDependencyProperty<D>::GetMetadata(const Windows::UI::Xaml::Interop::TypeName & forType) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue { nullptr };
    check_hresult(static_cast<const IDependencyProperty &>(static_cast<const D &>(*this))->abi_GetMetadata(get(forType), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::IInspectable impl_IDependencyPropertyStatics<D>::UnsetValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDependencyPropertyStatics &>(static_cast<const D &>(*this))->get_UnsetValue(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDependencyPropertyStatics<D>::Register(hstring_ref name, const Windows::UI::Xaml::Interop::TypeName & propertyType, const Windows::UI::Xaml::Interop::TypeName & ownerType, const Windows::UI::Xaml::PropertyMetadata & typeMetadata) const
{
    Windows::UI::Xaml::DependencyProperty returnValue { nullptr };
    check_hresult(static_cast<const IDependencyPropertyStatics &>(static_cast<const D &>(*this))->abi_Register(get(name), get(propertyType), get(ownerType), get(typeMetadata), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDependencyPropertyStatics<D>::RegisterAttached(hstring_ref name, const Windows::UI::Xaml::Interop::TypeName & propertyType, const Windows::UI::Xaml::Interop::TypeName & ownerType, const Windows::UI::Xaml::PropertyMetadata & defaultMetadata) const
{
    Windows::UI::Xaml::DependencyProperty returnValue { nullptr };
    check_hresult(static_cast<const IDependencyPropertyStatics &>(static_cast<const D &>(*this))->abi_RegisterAttached(get(name), get(propertyType), get(ownerType), get(defaultMetadata), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IDependencyPropertyChangedEventArgs<D>::Property() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IDependencyPropertyChangedEventArgs &>(static_cast<const D &>(*this))->get_Property(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IDependencyPropertyChangedEventArgs<D>::OldValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDependencyPropertyChangedEventArgs &>(static_cast<const D &>(*this))->get_OldValue(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IDependencyPropertyChangedEventArgs<D>::NewValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IDependencyPropertyChangedEventArgs &>(static_cast<const D &>(*this))->get_NewValue(put(value)));
    return value;
}

template <typename D> void impl_IDragOperationDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IDragOperationDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> void impl_IDragUI<D>::SetContentFromBitmapImage(const Windows::UI::Xaml::Media::Imaging::BitmapImage & bitmapImage) const
{
    check_hresult(static_cast<const IDragUI &>(static_cast<const D &>(*this))->abi_SetContentFromBitmapImage(get(bitmapImage)));
}

template <typename D> void impl_IDragUI<D>::SetContentFromBitmapImage(const Windows::UI::Xaml::Media::Imaging::BitmapImage & bitmapImage, const Windows::Foundation::Point & anchorPoint) const
{
    check_hresult(static_cast<const IDragUI &>(static_cast<const D &>(*this))->abi_SetContentFromBitmapImageWithAnchorPoint(get(bitmapImage), get(anchorPoint)));
}

template <typename D> void impl_IDragUI<D>::SetContentFromSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap) const
{
    check_hresult(static_cast<const IDragUI &>(static_cast<const D &>(*this))->abi_SetContentFromSoftwareBitmap(get(softwareBitmap)));
}

template <typename D> void impl_IDragUI<D>::SetContentFromSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap, const Windows::Foundation::Point & anchorPoint) const
{
    check_hresult(static_cast<const IDragUI &>(static_cast<const D &>(*this))->abi_SetContentFromSoftwareBitmapWithAnchorPoint(get(softwareBitmap), get(anchorPoint)));
}

template <typename D> void impl_IDragUI<D>::SetContentFromDataPackage() const
{
    check_hresult(static_cast<const IDragUI &>(static_cast<const D &>(*this))->abi_SetContentFromDataPackage());
}

template <typename D> hstring impl_IDragUIOverride<D>::Caption() const
{
    hstring value;
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->get_Caption(put(value)));
    return value;
}

template <typename D> void impl_IDragUIOverride<D>::Caption(hstring_ref value) const
{
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->put_Caption(get(value)));
}

template <typename D> bool impl_IDragUIOverride<D>::IsContentVisible() const
{
    bool value {};
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->get_IsContentVisible(&value));
    return value;
}

template <typename D> void impl_IDragUIOverride<D>::IsContentVisible(bool value) const
{
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->put_IsContentVisible(value));
}

template <typename D> bool impl_IDragUIOverride<D>::IsCaptionVisible() const
{
    bool value {};
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->get_IsCaptionVisible(&value));
    return value;
}

template <typename D> void impl_IDragUIOverride<D>::IsCaptionVisible(bool value) const
{
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->put_IsCaptionVisible(value));
}

template <typename D> bool impl_IDragUIOverride<D>::IsGlyphVisible() const
{
    bool value {};
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->get_IsGlyphVisible(&value));
    return value;
}

template <typename D> void impl_IDragUIOverride<D>::IsGlyphVisible(bool value) const
{
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->put_IsGlyphVisible(value));
}

template <typename D> void impl_IDragUIOverride<D>::Clear() const
{
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> void impl_IDragUIOverride<D>::SetContentFromBitmapImage(const Windows::UI::Xaml::Media::Imaging::BitmapImage & bitmapImage) const
{
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->abi_SetContentFromBitmapImage(get(bitmapImage)));
}

template <typename D> void impl_IDragUIOverride<D>::SetContentFromBitmapImage(const Windows::UI::Xaml::Media::Imaging::BitmapImage & bitmapImage, const Windows::Foundation::Point & anchorPoint) const
{
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->abi_SetContentFromBitmapImageWithAnchorPoint(get(bitmapImage), get(anchorPoint)));
}

template <typename D> void impl_IDragUIOverride<D>::SetContentFromSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap) const
{
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->abi_SetContentFromSoftwareBitmap(get(softwareBitmap)));
}

template <typename D> void impl_IDragUIOverride<D>::SetContentFromSoftwareBitmap(const Windows::Graphics::Imaging::SoftwareBitmap & softwareBitmap, const Windows::Foundation::Point & anchorPoint) const
{
    check_hresult(static_cast<const IDragUIOverride &>(static_cast<const D &>(*this))->abi_SetContentFromSoftwareBitmapWithAnchorPoint(get(softwareBitmap), get(anchorPoint)));
}

template <typename D> double impl_IElementSoundPlayerStatics<D>::Volume() const
{
    double value {};
    check_hresult(static_cast<const IElementSoundPlayerStatics &>(static_cast<const D &>(*this))->get_Volume(&value));
    return value;
}

template <typename D> void impl_IElementSoundPlayerStatics<D>::Volume(double value) const
{
    check_hresult(static_cast<const IElementSoundPlayerStatics &>(static_cast<const D &>(*this))->put_Volume(value));
}

template <typename D> Windows::UI::Xaml::ElementSoundPlayerState impl_IElementSoundPlayerStatics<D>::State() const
{
    Windows::UI::Xaml::ElementSoundPlayerState value {};
    check_hresult(static_cast<const IElementSoundPlayerStatics &>(static_cast<const D &>(*this))->get_State(&value));
    return value;
}

template <typename D> void impl_IElementSoundPlayerStatics<D>::State(Windows::UI::Xaml::ElementSoundPlayerState value) const
{
    check_hresult(static_cast<const IElementSoundPlayerStatics &>(static_cast<const D &>(*this))->put_State(value));
}

template <typename D> void impl_IElementSoundPlayerStatics<D>::Play(Windows::UI::Xaml::ElementSoundKind sound) const
{
    check_hresult(static_cast<const IElementSoundPlayerStatics &>(static_cast<const D &>(*this))->abi_Play(sound));
}

template <typename D> Windows::IInspectable impl_IPropertyMetadata<D>::DefaultValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IPropertyMetadata &>(static_cast<const D &>(*this))->get_DefaultValue(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::CreateDefaultValueCallback impl_IPropertyMetadata<D>::CreateDefaultValueCallback() const
{
    Windows::UI::Xaml::CreateDefaultValueCallback value {};
    check_hresult(static_cast<const IPropertyMetadata &>(static_cast<const D &>(*this))->get_CreateDefaultValueCallback(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata impl_IPropertyMetadataStatics<D>::Create(const Windows::IInspectable & defaultValue) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue { nullptr };
    check_hresult(static_cast<const IPropertyMetadataStatics &>(static_cast<const D &>(*this))->abi_CreateWithDefaultValue(get(defaultValue), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata impl_IPropertyMetadataStatics<D>::Create(const Windows::IInspectable & defaultValue, const Windows::UI::Xaml::PropertyChangedCallback & propertyChangedCallback) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue { nullptr };
    check_hresult(static_cast<const IPropertyMetadataStatics &>(static_cast<const D &>(*this))->abi_CreateWithDefaultValueAndCallback(get(defaultValue), get(propertyChangedCallback), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata impl_IPropertyMetadataStatics<D>::Create(const Windows::UI::Xaml::CreateDefaultValueCallback & createDefaultValueCallback) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue { nullptr };
    check_hresult(static_cast<const IPropertyMetadataStatics &>(static_cast<const D &>(*this))->abi_CreateWithFactory(get(createDefaultValueCallback), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata impl_IPropertyMetadataStatics<D>::Create(const Windows::UI::Xaml::CreateDefaultValueCallback & createDefaultValueCallback, const Windows::UI::Xaml::PropertyChangedCallback & propertyChangedCallback) const
{
    Windows::UI::Xaml::PropertyMetadata returnValue { nullptr };
    check_hresult(static_cast<const IPropertyMetadataStatics &>(static_cast<const D &>(*this))->abi_CreateWithFactoryAndCallback(get(createDefaultValueCallback), get(propertyChangedCallback), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata impl_IPropertyMetadataFactory<D>::CreateInstanceWithDefaultValue(const Windows::IInspectable & defaultValue, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::PropertyMetadata instance { nullptr };
    check_hresult(static_cast<const IPropertyMetadataFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithDefaultValue(get(defaultValue), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::PropertyMetadata impl_IPropertyMetadataFactory<D>::CreateInstanceWithDefaultValueAndCallback(const Windows::IInspectable & defaultValue, const Windows::UI::Xaml::PropertyChangedCallback & propertyChangedCallback, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::PropertyMetadata instance { nullptr };
    check_hresult(static_cast<const IPropertyMetadataFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithDefaultValueAndCallback(get(defaultValue), get(propertyChangedCallback), get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::IInspectable impl_IRoutedEventArgs<D>::OriginalSource() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IRoutedEventArgs &>(static_cast<const D &>(*this))->get_OriginalSource(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEventArgs impl_IRoutedEventArgsFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::RoutedEventArgs instance { nullptr };
    check_hresult(static_cast<const IRoutedEventArgsFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_ISetterBaseCollection<D>::IsSealed() const
{
    bool value {};
    check_hresult(static_cast<const ISetterBaseCollection &>(static_cast<const D &>(*this))->get_IsSealed(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::PropertyPath impl_ITargetPropertyPath<D>::Path() const
{
    Windows::UI::Xaml::PropertyPath value { nullptr };
    check_hresult(static_cast<const ITargetPropertyPath &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> void impl_ITargetPropertyPath<D>::Path(const Windows::UI::Xaml::PropertyPath & value) const
{
    check_hresult(static_cast<const ITargetPropertyPath &>(static_cast<const D &>(*this))->put_Path(get(value)));
}

template <typename D> Windows::IInspectable impl_ITargetPropertyPath<D>::Target() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ITargetPropertyPath &>(static_cast<const D &>(*this))->get_Target(put(value)));
    return value;
}

template <typename D> void impl_ITargetPropertyPath<D>::Target(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const ITargetPropertyPath &>(static_cast<const D &>(*this))->put_Target(get(value)));
}

template <typename D> Windows::UI::Xaml::TargetPropertyPath impl_ITargetPropertyPathFactory<D>::CreateInstance(const Windows::UI::Xaml::DependencyProperty & targetProperty) const
{
    Windows::UI::Xaml::TargetPropertyPath instance { nullptr };
    check_hresult(static_cast<const ITargetPropertyPathFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(targetProperty), put(instance)));
    return instance;
}

template <typename D> HRESULT impl_IUnhandledExceptionEventArgs<D>::Exception() const
{
    HRESULT value {};
    check_hresult(static_cast<const IUnhandledExceptionEventArgs &>(static_cast<const D &>(*this))->get_Exception(&value));
    return value;
}

template <typename D> hstring impl_IUnhandledExceptionEventArgs<D>::Message() const
{
    hstring value;
    check_hresult(static_cast<const IUnhandledExceptionEventArgs &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> bool impl_IUnhandledExceptionEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IUnhandledExceptionEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IUnhandledExceptionEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IUnhandledExceptionEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::VisualState impl_IVisualStateChangedEventArgs<D>::OldState() const
{
    Windows::UI::Xaml::VisualState value { nullptr };
    check_hresult(static_cast<const IVisualStateChangedEventArgs &>(static_cast<const D &>(*this))->get_OldState(put(value)));
    return value;
}

template <typename D> void impl_IVisualStateChangedEventArgs<D>::OldState(const Windows::UI::Xaml::VisualState & value) const
{
    check_hresult(static_cast<const IVisualStateChangedEventArgs &>(static_cast<const D &>(*this))->put_OldState(get(value)));
}

template <typename D> Windows::UI::Xaml::VisualState impl_IVisualStateChangedEventArgs<D>::NewState() const
{
    Windows::UI::Xaml::VisualState value { nullptr };
    check_hresult(static_cast<const IVisualStateChangedEventArgs &>(static_cast<const D &>(*this))->get_NewState(put(value)));
    return value;
}

template <typename D> void impl_IVisualStateChangedEventArgs<D>::NewState(const Windows::UI::Xaml::VisualState & value) const
{
    check_hresult(static_cast<const IVisualStateChangedEventArgs &>(static_cast<const D &>(*this))->put_NewState(get(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Control impl_IVisualStateChangedEventArgs<D>::Control() const
{
    Windows::UI::Xaml::Controls::Control value { nullptr };
    check_hresult(static_cast<const IVisualStateChangedEventArgs &>(static_cast<const D &>(*this))->get_Control(put(value)));
    return value;
}

template <typename D> void impl_IVisualStateChangedEventArgs<D>::Control(const Windows::UI::Xaml::Controls::Control & value) const
{
    check_hresult(static_cast<const IVisualStateChangedEventArgs &>(static_cast<const D &>(*this))->put_Control(get(value)));
}

template <typename D> Windows::Foundation::Rect impl_IWindow<D>::Bounds() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->get_Bounds(put(value)));
    return value;
}

template <typename D> bool impl_IWindow<D>::Visible() const
{
    bool value {};
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->get_Visible(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement impl_IWindow<D>::Content() const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> void impl_IWindow<D>::Content(const Windows::UI::Xaml::UIElement & value) const
{
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->put_Content(get(value)));
}

template <typename D> Windows::UI::Core::CoreWindow impl_IWindow<D>::CoreWindow() const
{
    Windows::UI::Core::CoreWindow value { nullptr };
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->get_CoreWindow(put(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher impl_IWindow<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value { nullptr };
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->get_Dispatcher(put(value)));
    return value;
}

template <typename D> event_token impl_IWindow<D>::Activated(const Windows::UI::Xaml::WindowActivatedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->add_Activated(get(value), &token));
    return token;
}

template <typename D> event_revoker<IWindow> impl_IWindow<D>::Activated(auto_revoke_t, const Windows::UI::Xaml::WindowActivatedEventHandler & value) const
{
    return impl::make_event_revoker<D, IWindow>(this, &ABI::Windows::UI::Xaml::IWindow::remove_Activated, Activated(value));
}

template <typename D> void impl_IWindow<D>::Activated(event_token token) const
{
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->remove_Activated(token));
}

template <typename D> event_token impl_IWindow<D>::Closed(const Windows::UI::Xaml::WindowClosedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->add_Closed(get(value), &token));
    return token;
}

template <typename D> event_revoker<IWindow> impl_IWindow<D>::Closed(auto_revoke_t, const Windows::UI::Xaml::WindowClosedEventHandler & value) const
{
    return impl::make_event_revoker<D, IWindow>(this, &ABI::Windows::UI::Xaml::IWindow::remove_Closed, Closed(value));
}

template <typename D> void impl_IWindow<D>::Closed(event_token token) const
{
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->remove_Closed(token));
}

template <typename D> event_token impl_IWindow<D>::SizeChanged(const Windows::UI::Xaml::WindowSizeChangedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->add_SizeChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IWindow> impl_IWindow<D>::SizeChanged(auto_revoke_t, const Windows::UI::Xaml::WindowSizeChangedEventHandler & value) const
{
    return impl::make_event_revoker<D, IWindow>(this, &ABI::Windows::UI::Xaml::IWindow::remove_SizeChanged, SizeChanged(value));
}

template <typename D> void impl_IWindow<D>::SizeChanged(event_token token) const
{
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->remove_SizeChanged(token));
}

template <typename D> event_token impl_IWindow<D>::VisibilityChanged(const Windows::UI::Xaml::WindowVisibilityChangedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->add_VisibilityChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IWindow> impl_IWindow<D>::VisibilityChanged(auto_revoke_t, const Windows::UI::Xaml::WindowVisibilityChangedEventHandler & value) const
{
    return impl::make_event_revoker<D, IWindow>(this, &ABI::Windows::UI::Xaml::IWindow::remove_VisibilityChanged, VisibilityChanged(value));
}

template <typename D> void impl_IWindow<D>::VisibilityChanged(event_token token) const
{
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->remove_VisibilityChanged(token));
}

template <typename D> void impl_IWindow<D>::Activate() const
{
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->abi_Activate());
}

template <typename D> void impl_IWindow<D>::Close() const
{
    check_hresult(static_cast<const IWindow &>(static_cast<const D &>(*this))->abi_Close());
}

template <typename D> Windows::UI::Xaml::Window impl_IWindowStatics<D>::Current() const
{
    Windows::UI::Xaml::Window value { nullptr };
    check_hresult(static_cast<const IWindowStatics &>(static_cast<const D &>(*this))->get_Current(put(value)));
    return value;
}

template <typename D> void impl_IWindow2<D>::SetTitleBar(const Windows::UI::Xaml::UIElement & value) const
{
    check_hresult(static_cast<const IWindow2 &>(static_cast<const D &>(*this))->abi_SetTitleBar(get(value)));
}

template <typename D> Windows::UI::Xaml::Window impl_IWindowCreatedEventArgs<D>::Window() const
{
    Windows::UI::Xaml::Window value { nullptr };
    check_hresult(static_cast<const IWindowCreatedEventArgs &>(static_cast<const D &>(*this))->get_Window(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyObjectCollection impl_IDependencyObjectCollectionFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::DependencyObjectCollection instance { nullptr };
    check_hresult(static_cast<const IDependencyObjectCollectionFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_IDragEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IDragEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IDragEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IDragEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackage impl_IDragEventArgs<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackage value { nullptr };
    check_hresult(static_cast<const IDragEventArgs &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> void impl_IDragEventArgs<D>::Data(const Windows::ApplicationModel::DataTransfer::DataPackage & value) const
{
    check_hresult(static_cast<const IDragEventArgs &>(static_cast<const D &>(*this))->put_Data(get(value)));
}

template <typename D> Windows::Foundation::Point impl_IDragEventArgs<D>::GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const
{
    Windows::Foundation::Point returnValue {};
    check_hresult(static_cast<const IDragEventArgs &>(static_cast<const D &>(*this))->abi_GetPosition(get(relativeTo), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView impl_IDragEventArgs2<D>::DataView() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value { nullptr };
    check_hresult(static_cast<const IDragEventArgs2 &>(static_cast<const D &>(*this))->get_DataView(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DragUIOverride impl_IDragEventArgs2<D>::DragUIOverride() const
{
    Windows::UI::Xaml::DragUIOverride value { nullptr };
    check_hresult(static_cast<const IDragEventArgs2 &>(static_cast<const D &>(*this))->get_DragUIOverride(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers impl_IDragEventArgs2<D>::Modifiers() const
{
    Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers value {};
    check_hresult(static_cast<const IDragEventArgs2 &>(static_cast<const D &>(*this))->get_Modifiers(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation impl_IDragEventArgs2<D>::AcceptedOperation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value {};
    check_hresult(static_cast<const IDragEventArgs2 &>(static_cast<const D &>(*this))->get_AcceptedOperation(&value));
    return value;
}

template <typename D> void impl_IDragEventArgs2<D>::AcceptedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) const
{
    check_hresult(static_cast<const IDragEventArgs2 &>(static_cast<const D &>(*this))->put_AcceptedOperation(value));
}

template <typename D> Windows::UI::Xaml::DragOperationDeferral impl_IDragEventArgs2<D>::GetDeferral() const
{
    Windows::UI::Xaml::DragOperationDeferral returnValue { nullptr };
    check_hresult(static_cast<const IDragEventArgs2 &>(static_cast<const D &>(*this))->abi_GetDeferral(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation impl_IDragEventArgs3<D>::AllowedOperations() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value {};
    check_hresult(static_cast<const IDragEventArgs3 &>(static_cast<const D &>(*this))->get_AllowedOperations(&value));
    return value;
}

template <typename D> bool impl_IDragStartingEventArgs<D>::Cancel() const
{
    bool value {};
    check_hresult(static_cast<const IDragStartingEventArgs &>(static_cast<const D &>(*this))->get_Cancel(&value));
    return value;
}

template <typename D> void impl_IDragStartingEventArgs<D>::Cancel(bool value) const
{
    check_hresult(static_cast<const IDragStartingEventArgs &>(static_cast<const D &>(*this))->put_Cancel(value));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackage impl_IDragStartingEventArgs<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackage value { nullptr };
    check_hresult(static_cast<const IDragStartingEventArgs &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DragUI impl_IDragStartingEventArgs<D>::DragUI() const
{
    Windows::UI::Xaml::DragUI value { nullptr };
    check_hresult(static_cast<const IDragStartingEventArgs &>(static_cast<const D &>(*this))->get_DragUI(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DragOperationDeferral impl_IDragStartingEventArgs<D>::GetDeferral() const
{
    Windows::UI::Xaml::DragOperationDeferral returnValue { nullptr };
    check_hresult(static_cast<const IDragStartingEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Point impl_IDragStartingEventArgs<D>::GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const
{
    Windows::Foundation::Point returnValue {};
    check_hresult(static_cast<const IDragStartingEventArgs &>(static_cast<const D &>(*this))->abi_GetPosition(get(relativeTo), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation impl_IDragStartingEventArgs2<D>::AllowedOperations() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value {};
    check_hresult(static_cast<const IDragStartingEventArgs2 &>(static_cast<const D &>(*this))->get_AllowedOperations(&value));
    return value;
}

template <typename D> void impl_IDragStartingEventArgs2<D>::AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) const
{
    check_hresult(static_cast<const IDragStartingEventArgs2 &>(static_cast<const D &>(*this))->put_AllowedOperations(value));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation impl_IDropCompletedEventArgs<D>::DropResult() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value {};
    check_hresult(static_cast<const IDropCompletedEventArgs &>(static_cast<const D &>(*this))->get_DropResult(&value));
    return value;
}

template <typename D> hstring impl_IExceptionRoutedEventArgs<D>::ErrorMessage() const
{
    hstring value;
    check_hresult(static_cast<const IExceptionRoutedEventArgs &>(static_cast<const D &>(*this))->get_ErrorMessage(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FrameworkTemplate impl_IFrameworkTemplateFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::FrameworkTemplate instance { nullptr };
    check_hresult(static_cast<const IFrameworkTemplateFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> hstring impl_IPropertyPath<D>::Path() const
{
    hstring value;
    check_hresult(static_cast<const IPropertyPath &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::PropertyPath impl_IPropertyPathFactory<D>::CreateInstance(hstring_ref path) const
{
    Windows::UI::Xaml::PropertyPath instance { nullptr };
    check_hresult(static_cast<const IPropertyPathFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(path), put(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Uri impl_IResourceDictionary<D>::Source() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IResourceDictionary &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> void impl_IResourceDictionary<D>::Source(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IResourceDictionary &>(static_cast<const D &>(*this))->put_Source(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::ResourceDictionary> impl_IResourceDictionary<D>::MergedDictionaries() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::ResourceDictionary> value;
    check_hresult(static_cast<const IResourceDictionary &>(static_cast<const D &>(*this))->get_MergedDictionaries(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<Windows::IInspectable, Windows::IInspectable> impl_IResourceDictionary<D>::ThemeDictionaries() const
{
    Windows::Foundation::Collections::IMap<Windows::IInspectable, Windows::IInspectable> value;
    check_hresult(static_cast<const IResourceDictionary &>(static_cast<const D &>(*this))->get_ThemeDictionaries(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::ResourceDictionary impl_IResourceDictionaryFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::ResourceDictionary instance { nullptr };
    check_hresult(static_cast<const IResourceDictionaryFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_ISetterBase<D>::IsSealed() const
{
    bool value {};
    check_hresult(static_cast<const ISetterBase &>(static_cast<const D &>(*this))->get_IsSealed(&value));
    return value;
}

template <typename D> Windows::Foundation::Size impl_ISizeChangedEventArgs<D>::PreviousSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const ISizeChangedEventArgs &>(static_cast<const D &>(*this))->get_PreviousSize(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Size impl_ISizeChangedEventArgs<D>::NewSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const ISizeChangedEventArgs &>(static_cast<const D &>(*this))->get_NewSize(put(value)));
    return value;
}

template <typename D> void impl_IStateTriggerBaseProtected<D>::SetActive(bool IsActive) const
{
    check_hresult(static_cast<const IStateTriggerBaseProtected &>(static_cast<const D &>(*this))->abi_SetActive(IsActive));
}

template <typename D> Windows::UI::Xaml::StateTriggerBase impl_IStateTriggerBaseFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::StateTriggerBase instance { nullptr };
    check_hresult(static_cast<const IStateTriggerBaseFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_IStyle<D>::IsSealed() const
{
    bool value {};
    check_hresult(static_cast<const IStyle &>(static_cast<const D &>(*this))->get_IsSealed(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::SetterBaseCollection impl_IStyle<D>::Setters() const
{
    Windows::UI::Xaml::SetterBaseCollection value { nullptr };
    check_hresult(static_cast<const IStyle &>(static_cast<const D &>(*this))->get_Setters(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::TypeName impl_IStyle<D>::TargetType() const
{
    Windows::UI::Xaml::Interop::TypeName value {};
    check_hresult(static_cast<const IStyle &>(static_cast<const D &>(*this))->get_TargetType(put(value)));
    return value;
}

template <typename D> void impl_IStyle<D>::TargetType(const Windows::UI::Xaml::Interop::TypeName & value) const
{
    check_hresult(static_cast<const IStyle &>(static_cast<const D &>(*this))->put_TargetType(get(value)));
}

template <typename D> Windows::UI::Xaml::Style impl_IStyle<D>::BasedOn() const
{
    Windows::UI::Xaml::Style value { nullptr };
    check_hresult(static_cast<const IStyle &>(static_cast<const D &>(*this))->get_BasedOn(put(value)));
    return value;
}

template <typename D> void impl_IStyle<D>::BasedOn(const Windows::UI::Xaml::Style & value) const
{
    check_hresult(static_cast<const IStyle &>(static_cast<const D &>(*this))->put_BasedOn(get(value)));
}

template <typename D> void impl_IStyle<D>::Seal() const
{
    check_hresult(static_cast<const IStyle &>(static_cast<const D &>(*this))->abi_Seal());
}

template <typename D> Windows::UI::Xaml::Style impl_IStyleFactory<D>::CreateInstance(const Windows::UI::Xaml::Interop::TypeName & targetType) const
{
    Windows::UI::Xaml::Style instance { nullptr };
    check_hresult(static_cast<const IStyleFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(targetType), put(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Size impl_IUIElement<D>::DesiredSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_DesiredSize(put(value)));
    return value;
}

template <typename D> bool impl_IUIElement<D>::AllowDrop() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_AllowDrop(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::AllowDrop(bool value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_AllowDrop(value));
}

template <typename D> double impl_IUIElement<D>::Opacity() const
{
    double value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_Opacity(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::Opacity(double value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_Opacity(value));
}

template <typename D> Windows::UI::Xaml::Media::RectangleGeometry impl_IUIElement<D>::Clip() const
{
    Windows::UI::Xaml::Media::RectangleGeometry value { nullptr };
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_Clip(put(value)));
    return value;
}

template <typename D> void impl_IUIElement<D>::Clip(const Windows::UI::Xaml::Media::RectangleGeometry & value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_Clip(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Transform impl_IUIElement<D>::RenderTransform() const
{
    Windows::UI::Xaml::Media::Transform value { nullptr };
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_RenderTransform(put(value)));
    return value;
}

template <typename D> void impl_IUIElement<D>::RenderTransform(const Windows::UI::Xaml::Media::Transform & value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_RenderTransform(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Projection impl_IUIElement<D>::Projection() const
{
    Windows::UI::Xaml::Media::Projection value { nullptr };
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_Projection(put(value)));
    return value;
}

template <typename D> void impl_IUIElement<D>::Projection(const Windows::UI::Xaml::Media::Projection & value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_Projection(get(value)));
}

template <typename D> Windows::Foundation::Point impl_IUIElement<D>::RenderTransformOrigin() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_RenderTransformOrigin(put(value)));
    return value;
}

template <typename D> void impl_IUIElement<D>::RenderTransformOrigin(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_RenderTransformOrigin(get(value)));
}

template <typename D> bool impl_IUIElement<D>::IsHitTestVisible() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_IsHitTestVisible(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::IsHitTestVisible(bool value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_IsHitTestVisible(value));
}

template <typename D> Windows::UI::Xaml::Visibility impl_IUIElement<D>::Visibility() const
{
    Windows::UI::Xaml::Visibility value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_Visibility(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::Visibility(Windows::UI::Xaml::Visibility value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_Visibility(value));
}

template <typename D> Windows::Foundation::Size impl_IUIElement<D>::RenderSize() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_RenderSize(put(value)));
    return value;
}

template <typename D> bool impl_IUIElement<D>::UseLayoutRounding() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_UseLayoutRounding(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::UseLayoutRounding(bool value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_UseLayoutRounding(value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::TransitionCollection impl_IUIElement<D>::Transitions() const
{
    Windows::UI::Xaml::Media::Animation::TransitionCollection value { nullptr };
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_Transitions(put(value)));
    return value;
}

template <typename D> void impl_IUIElement<D>::Transitions(const Windows::UI::Xaml::Media::Animation::TransitionCollection & value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_Transitions(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::CacheMode impl_IUIElement<D>::CacheMode() const
{
    Windows::UI::Xaml::Media::CacheMode value { nullptr };
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_CacheMode(put(value)));
    return value;
}

template <typename D> void impl_IUIElement<D>::CacheMode(const Windows::UI::Xaml::Media::CacheMode & value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_CacheMode(get(value)));
}

template <typename D> bool impl_IUIElement<D>::IsTapEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_IsTapEnabled(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::IsTapEnabled(bool value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_IsTapEnabled(value));
}

template <typename D> bool impl_IUIElement<D>::IsDoubleTapEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_IsDoubleTapEnabled(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::IsDoubleTapEnabled(bool value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_IsDoubleTapEnabled(value));
}

template <typename D> bool impl_IUIElement<D>::IsRightTapEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_IsRightTapEnabled(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::IsRightTapEnabled(bool value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_IsRightTapEnabled(value));
}

template <typename D> bool impl_IUIElement<D>::IsHoldingEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_IsHoldingEnabled(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::IsHoldingEnabled(bool value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_IsHoldingEnabled(value));
}

template <typename D> Windows::UI::Xaml::Input::ManipulationModes impl_IUIElement<D>::ManipulationMode() const
{
    Windows::UI::Xaml::Input::ManipulationModes value {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_ManipulationMode(&value));
    return value;
}

template <typename D> void impl_IUIElement<D>::ManipulationMode(Windows::UI::Xaml::Input::ManipulationModes value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->put_ManipulationMode(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Input::Pointer> impl_IUIElement<D>::PointerCaptures() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Input::Pointer> value;
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->get_PointerCaptures(put(value)));
    return value;
}

template <typename D> event_token impl_IUIElement<D>::KeyUp(const Windows::UI::Xaml::Input::KeyEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_KeyUp(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::KeyUp(auto_revoke_t, const Windows::UI::Xaml::Input::KeyEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_KeyUp, KeyUp(value));
}

template <typename D> void impl_IUIElement<D>::KeyUp(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_KeyUp(token));
}

template <typename D> event_token impl_IUIElement<D>::KeyDown(const Windows::UI::Xaml::Input::KeyEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_KeyDown(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::KeyDown(auto_revoke_t, const Windows::UI::Xaml::Input::KeyEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_KeyDown, KeyDown(value));
}

template <typename D> void impl_IUIElement<D>::KeyDown(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_KeyDown(token));
}

template <typename D> event_token impl_IUIElement<D>::GotFocus(const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_GotFocus(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::GotFocus(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_GotFocus, GotFocus(value));
}

template <typename D> void impl_IUIElement<D>::GotFocus(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_GotFocus(token));
}

template <typename D> event_token impl_IUIElement<D>::LostFocus(const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_LostFocus(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::LostFocus(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_LostFocus, LostFocus(value));
}

template <typename D> void impl_IUIElement<D>::LostFocus(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_LostFocus(token));
}

template <typename D> event_token impl_IUIElement<D>::DragEnter(const Windows::UI::Xaml::DragEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_DragEnter(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::DragEnter(auto_revoke_t, const Windows::UI::Xaml::DragEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_DragEnter, DragEnter(value));
}

template <typename D> void impl_IUIElement<D>::DragEnter(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_DragEnter(token));
}

template <typename D> event_token impl_IUIElement<D>::DragLeave(const Windows::UI::Xaml::DragEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_DragLeave(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::DragLeave(auto_revoke_t, const Windows::UI::Xaml::DragEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_DragLeave, DragLeave(value));
}

template <typename D> void impl_IUIElement<D>::DragLeave(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_DragLeave(token));
}

template <typename D> event_token impl_IUIElement<D>::DragOver(const Windows::UI::Xaml::DragEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_DragOver(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::DragOver(auto_revoke_t, const Windows::UI::Xaml::DragEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_DragOver, DragOver(value));
}

template <typename D> void impl_IUIElement<D>::DragOver(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_DragOver(token));
}

template <typename D> event_token impl_IUIElement<D>::Drop(const Windows::UI::Xaml::DragEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_Drop(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::Drop(auto_revoke_t, const Windows::UI::Xaml::DragEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_Drop, Drop(value));
}

template <typename D> void impl_IUIElement<D>::Drop(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_Drop(token));
}

template <typename D> event_token impl_IUIElement<D>::PointerPressed(const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_PointerPressed(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::PointerPressed(auto_revoke_t, const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_PointerPressed, PointerPressed(value));
}

template <typename D> void impl_IUIElement<D>::PointerPressed(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_PointerPressed(token));
}

template <typename D> event_token impl_IUIElement<D>::PointerMoved(const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_PointerMoved(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::PointerMoved(auto_revoke_t, const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_PointerMoved, PointerMoved(value));
}

template <typename D> void impl_IUIElement<D>::PointerMoved(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_PointerMoved(token));
}

template <typename D> event_token impl_IUIElement<D>::PointerReleased(const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_PointerReleased(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::PointerReleased(auto_revoke_t, const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_PointerReleased, PointerReleased(value));
}

template <typename D> void impl_IUIElement<D>::PointerReleased(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_PointerReleased(token));
}

template <typename D> event_token impl_IUIElement<D>::PointerEntered(const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_PointerEntered(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::PointerEntered(auto_revoke_t, const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_PointerEntered, PointerEntered(value));
}

template <typename D> void impl_IUIElement<D>::PointerEntered(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_PointerEntered(token));
}

template <typename D> event_token impl_IUIElement<D>::PointerExited(const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_PointerExited(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::PointerExited(auto_revoke_t, const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_PointerExited, PointerExited(value));
}

template <typename D> void impl_IUIElement<D>::PointerExited(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_PointerExited(token));
}

template <typename D> event_token impl_IUIElement<D>::PointerCaptureLost(const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_PointerCaptureLost(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::PointerCaptureLost(auto_revoke_t, const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_PointerCaptureLost, PointerCaptureLost(value));
}

template <typename D> void impl_IUIElement<D>::PointerCaptureLost(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_PointerCaptureLost(token));
}

template <typename D> event_token impl_IUIElement<D>::PointerCanceled(const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_PointerCanceled(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::PointerCanceled(auto_revoke_t, const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_PointerCanceled, PointerCanceled(value));
}

template <typename D> void impl_IUIElement<D>::PointerCanceled(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_PointerCanceled(token));
}

template <typename D> event_token impl_IUIElement<D>::PointerWheelChanged(const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_PointerWheelChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::PointerWheelChanged(auto_revoke_t, const Windows::UI::Xaml::Input::PointerEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_PointerWheelChanged, PointerWheelChanged(value));
}

template <typename D> void impl_IUIElement<D>::PointerWheelChanged(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_PointerWheelChanged(token));
}

template <typename D> event_token impl_IUIElement<D>::Tapped(const Windows::UI::Xaml::Input::TappedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_Tapped(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::Tapped(auto_revoke_t, const Windows::UI::Xaml::Input::TappedEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_Tapped, Tapped(value));
}

template <typename D> void impl_IUIElement<D>::Tapped(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_Tapped(token));
}

template <typename D> event_token impl_IUIElement<D>::DoubleTapped(const Windows::UI::Xaml::Input::DoubleTappedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_DoubleTapped(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::DoubleTapped(auto_revoke_t, const Windows::UI::Xaml::Input::DoubleTappedEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_DoubleTapped, DoubleTapped(value));
}

template <typename D> void impl_IUIElement<D>::DoubleTapped(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_DoubleTapped(token));
}

template <typename D> event_token impl_IUIElement<D>::Holding(const Windows::UI::Xaml::Input::HoldingEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_Holding(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::Holding(auto_revoke_t, const Windows::UI::Xaml::Input::HoldingEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_Holding, Holding(value));
}

template <typename D> void impl_IUIElement<D>::Holding(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_Holding(token));
}

template <typename D> event_token impl_IUIElement<D>::RightTapped(const Windows::UI::Xaml::Input::RightTappedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_RightTapped(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::RightTapped(auto_revoke_t, const Windows::UI::Xaml::Input::RightTappedEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_RightTapped, RightTapped(value));
}

template <typename D> void impl_IUIElement<D>::RightTapped(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_RightTapped(token));
}

template <typename D> event_token impl_IUIElement<D>::ManipulationStarting(const Windows::UI::Xaml::Input::ManipulationStartingEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_ManipulationStarting(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::ManipulationStarting(auto_revoke_t, const Windows::UI::Xaml::Input::ManipulationStartingEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_ManipulationStarting, ManipulationStarting(value));
}

template <typename D> void impl_IUIElement<D>::ManipulationStarting(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_ManipulationStarting(token));
}

template <typename D> event_token impl_IUIElement<D>::ManipulationInertiaStarting(const Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_ManipulationInertiaStarting(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::ManipulationInertiaStarting(auto_revoke_t, const Windows::UI::Xaml::Input::ManipulationInertiaStartingEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_ManipulationInertiaStarting, ManipulationInertiaStarting(value));
}

template <typename D> void impl_IUIElement<D>::ManipulationInertiaStarting(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_ManipulationInertiaStarting(token));
}

template <typename D> event_token impl_IUIElement<D>::ManipulationStarted(const Windows::UI::Xaml::Input::ManipulationStartedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_ManipulationStarted(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::ManipulationStarted(auto_revoke_t, const Windows::UI::Xaml::Input::ManipulationStartedEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_ManipulationStarted, ManipulationStarted(value));
}

template <typename D> void impl_IUIElement<D>::ManipulationStarted(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_ManipulationStarted(token));
}

template <typename D> event_token impl_IUIElement<D>::ManipulationDelta(const Windows::UI::Xaml::Input::ManipulationDeltaEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_ManipulationDelta(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::ManipulationDelta(auto_revoke_t, const Windows::UI::Xaml::Input::ManipulationDeltaEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_ManipulationDelta, ManipulationDelta(value));
}

template <typename D> void impl_IUIElement<D>::ManipulationDelta(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_ManipulationDelta(token));
}

template <typename D> event_token impl_IUIElement<D>::ManipulationCompleted(const Windows::UI::Xaml::Input::ManipulationCompletedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->add_ManipulationCompleted(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement> impl_IUIElement<D>::ManipulationCompleted(auto_revoke_t, const Windows::UI::Xaml::Input::ManipulationCompletedEventHandler & value) const
{
    return impl::make_event_revoker<D, IUIElement>(this, &ABI::Windows::UI::Xaml::IUIElement::remove_ManipulationCompleted, ManipulationCompleted(value));
}

template <typename D> void impl_IUIElement<D>::ManipulationCompleted(event_token token) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->remove_ManipulationCompleted(token));
}

template <typename D> void impl_IUIElement<D>::Measure(const Windows::Foundation::Size & availableSize) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_Measure(get(availableSize)));
}

template <typename D> void impl_IUIElement<D>::Arrange(const Windows::Foundation::Rect & finalRect) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_Arrange(get(finalRect)));
}

template <typename D> bool impl_IUIElement<D>::CapturePointer(const Windows::UI::Xaml::Input::Pointer & value) const
{
    bool returnValue {};
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_CapturePointer(get(value), &returnValue));
    return returnValue;
}

template <typename D> void impl_IUIElement<D>::ReleasePointerCapture(const Windows::UI::Xaml::Input::Pointer & value) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_ReleasePointerCapture(get(value)));
}

template <typename D> void impl_IUIElement<D>::ReleasePointerCaptures() const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_ReleasePointerCaptures());
}

template <typename D> void impl_IUIElement<D>::AddHandler(const Windows::UI::Xaml::RoutedEvent & routedEvent, const Windows::IInspectable & handler, bool handledEventsToo) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_AddHandler(get(routedEvent), get(handler), handledEventsToo));
}

template <typename D> void impl_IUIElement<D>::RemoveHandler(const Windows::UI::Xaml::RoutedEvent & routedEvent, const Windows::IInspectable & handler) const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_RemoveHandler(get(routedEvent), get(handler)));
}

template <typename D> Windows::UI::Xaml::Media::GeneralTransform impl_IUIElement<D>::TransformToVisual(const Windows::UI::Xaml::UIElement & visual) const
{
    Windows::UI::Xaml::Media::GeneralTransform returnValue { nullptr };
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_TransformToVisual(get(visual), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IUIElement<D>::InvalidateMeasure() const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_InvalidateMeasure());
}

template <typename D> void impl_IUIElement<D>::InvalidateArrange() const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_InvalidateArrange());
}

template <typename D> void impl_IUIElement<D>::UpdateLayout() const
{
    check_hresult(static_cast<const IUIElement &>(static_cast<const D &>(*this))->abi_UpdateLayout());
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer impl_IUIElementOverrides<D>::OnCreateAutomationPeer() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue { nullptr };
    check_hresult(static_cast<const IUIElementOverrides &>(static_cast<const D &>(*this))->abi_OnCreateAutomationPeer(put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IUIElementOverrides<D>::OnDisconnectVisualChildren() const
{
    check_hresult(static_cast<const IUIElementOverrides &>(static_cast<const D &>(*this))->abi_OnDisconnectVisualChildren());
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> impl_IUIElementOverrides<D>::FindSubElementsForTouchTargeting(const Windows::Foundation::Point & point, const Windows::Foundation::Rect & boundingRect) const
{
    Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>> returnValue;
    check_hresult(static_cast<const IUIElementOverrides &>(static_cast<const D &>(*this))->abi_FindSubElementsForTouchTargeting(get(point), get(boundingRect), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::KeyDownEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_KeyDownEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::KeyUpEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_KeyUpEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::PointerEnteredEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_PointerEnteredEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::PointerPressedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_PointerPressedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::PointerMovedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_PointerMovedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::PointerReleasedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_PointerReleasedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::PointerExitedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_PointerExitedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::PointerCaptureLostEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_PointerCaptureLostEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::PointerCanceledEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_PointerCanceledEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::PointerWheelChangedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_PointerWheelChangedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::TappedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_TappedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::DoubleTappedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_DoubleTappedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::HoldingEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_HoldingEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::RightTappedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_RightTappedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::ManipulationStartingEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_ManipulationStartingEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::ManipulationInertiaStartingEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_ManipulationInertiaStartingEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::ManipulationStartedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_ManipulationStartedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::ManipulationDeltaEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_ManipulationDeltaEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::ManipulationCompletedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_ManipulationCompletedEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::DragEnterEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_DragEnterEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::DragLeaveEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_DragLeaveEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::DragOverEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_DragOverEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IUIElementStatics<D>::DropEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_DropEvent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::AllowDropProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_AllowDropProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::OpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_OpacityProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::ClipProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_ClipProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::RenderTransformProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_RenderTransformProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::ProjectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_ProjectionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::RenderTransformOriginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_RenderTransformOriginProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::IsHitTestVisibleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_IsHitTestVisibleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::VisibilityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_VisibilityProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::UseLayoutRoundingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_UseLayoutRoundingProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::TransitionsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_TransitionsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::CacheModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_CacheModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::IsTapEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_IsTapEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::IsDoubleTapEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_IsDoubleTapEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::IsRightTapEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_IsRightTapEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::IsHoldingEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_IsHoldingEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::ManipulationModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_ManipulationModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics<D>::PointerCapturesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics &>(static_cast<const D &>(*this))->get_PointerCapturesProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::ElementCompositeMode impl_IUIElement2<D>::CompositeMode() const
{
    Windows::UI::Xaml::Media::ElementCompositeMode value {};
    check_hresult(static_cast<const IUIElement2 &>(static_cast<const D &>(*this))->get_CompositeMode(&value));
    return value;
}

template <typename D> void impl_IUIElement2<D>::CompositeMode(Windows::UI::Xaml::Media::ElementCompositeMode value) const
{
    check_hresult(static_cast<const IUIElement2 &>(static_cast<const D &>(*this))->put_CompositeMode(value));
}

template <typename D> bool impl_IUIElement2<D>::CancelDirectManipulations() const
{
    bool returnValue {};
    check_hresult(static_cast<const IUIElement2 &>(static_cast<const D &>(*this))->abi_CancelDirectManipulations(&returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics2<D>::CompositeModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics2 &>(static_cast<const D &>(*this))->get_CompositeModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Transform3D impl_IUIElement3<D>::Transform3D() const
{
    Windows::UI::Xaml::Media::Media3D::Transform3D value { nullptr };
    check_hresult(static_cast<const IUIElement3 &>(static_cast<const D &>(*this))->get_Transform3D(put(value)));
    return value;
}

template <typename D> void impl_IUIElement3<D>::Transform3D(const Windows::UI::Xaml::Media::Media3D::Transform3D & value) const
{
    check_hresult(static_cast<const IUIElement3 &>(static_cast<const D &>(*this))->put_Transform3D(get(value)));
}

template <typename D> bool impl_IUIElement3<D>::CanDrag() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement3 &>(static_cast<const D &>(*this))->get_CanDrag(&value));
    return value;
}

template <typename D> void impl_IUIElement3<D>::CanDrag(bool value) const
{
    check_hresult(static_cast<const IUIElement3 &>(static_cast<const D &>(*this))->put_CanDrag(value));
}

template <typename D> event_token impl_IUIElement3<D>::DragStarting(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement3 &>(static_cast<const D &>(*this))->add_DragStarting(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement3> impl_IUIElement3<D>::DragStarting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DragStartingEventArgs> & value) const
{
    return impl::make_event_revoker<D, IUIElement3>(this, &ABI::Windows::UI::Xaml::IUIElement3::remove_DragStarting, DragStarting(value));
}

template <typename D> void impl_IUIElement3<D>::DragStarting(event_token token) const
{
    check_hresult(static_cast<const IUIElement3 &>(static_cast<const D &>(*this))->remove_DragStarting(token));
}

template <typename D> event_token impl_IUIElement3<D>::DropCompleted(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement3 &>(static_cast<const D &>(*this))->add_DropCompleted(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement3> impl_IUIElement3<D>::DropCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DropCompletedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IUIElement3>(this, &ABI::Windows::UI::Xaml::IUIElement3::remove_DropCompleted, DropCompleted(value));
}

template <typename D> void impl_IUIElement3<D>::DropCompleted(event_token token) const
{
    check_hresult(static_cast<const IUIElement3 &>(static_cast<const D &>(*this))->remove_DropCompleted(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> impl_IUIElement3<D>::StartDragAsync(const Windows::UI::Input::PointerPoint & pointerPoint) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::DataTransfer::DataPackageOperation> returnValue;
    check_hresult(static_cast<const IUIElement3 &>(static_cast<const D &>(*this))->abi_StartDragAsync(get(pointerPoint), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics3<D>::Transform3DProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics3 &>(static_cast<const D &>(*this))->get_Transform3DProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics3<D>::CanDragProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics3 &>(static_cast<const D &>(*this))->get_CanDragProperty(put(value)));
    return value;
}

template <typename D> bool impl_IUIElementStatics3<D>::TryStartDirectManipulation(const Windows::UI::Xaml::Input::Pointer & value) const
{
    bool returnValue {};
    check_hresult(static_cast<const IUIElementStatics3 &>(static_cast<const D &>(*this))->abi_TryStartDirectManipulation(get(value), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::FlyoutBase impl_IUIElement4<D>::ContextFlyout() const
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase value { nullptr };
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->get_ContextFlyout(put(value)));
    return value;
}

template <typename D> void impl_IUIElement4<D>::ContextFlyout(const Windows::UI::Xaml::Controls::Primitives::FlyoutBase & value) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->put_ContextFlyout(get(value)));
}

template <typename D> bool impl_IUIElement4<D>::ExitDisplayModeOnAccessKeyInvoked() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->get_ExitDisplayModeOnAccessKeyInvoked(&value));
    return value;
}

template <typename D> void impl_IUIElement4<D>::ExitDisplayModeOnAccessKeyInvoked(bool value) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->put_ExitDisplayModeOnAccessKeyInvoked(value));
}

template <typename D> bool impl_IUIElement4<D>::IsAccessKeyScope() const
{
    bool value {};
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->get_IsAccessKeyScope(&value));
    return value;
}

template <typename D> void impl_IUIElement4<D>::IsAccessKeyScope(bool value) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->put_IsAccessKeyScope(value));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_IUIElement4<D>::AccessKeyScopeOwner() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->get_AccessKeyScopeOwner(put(value)));
    return value;
}

template <typename D> void impl_IUIElement4<D>::AccessKeyScopeOwner(const Windows::UI::Xaml::DependencyObject & value) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->put_AccessKeyScopeOwner(get(value)));
}

template <typename D> hstring impl_IUIElement4<D>::AccessKey() const
{
    hstring value;
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->get_AccessKey(put(value)));
    return value;
}

template <typename D> void impl_IUIElement4<D>::AccessKey(hstring_ref value) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->put_AccessKey(get(value)));
}

template <typename D> event_token impl_IUIElement4<D>::ContextRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->add_ContextRequested(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement4> impl_IUIElement4<D>::ContextRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::ContextRequestedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IUIElement4>(this, &ABI::Windows::UI::Xaml::IUIElement4::remove_ContextRequested, ContextRequested(value));
}

template <typename D> void impl_IUIElement4<D>::ContextRequested(event_token token) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->remove_ContextRequested(token));
}

template <typename D> event_token impl_IUIElement4<D>::ContextCanceled(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->add_ContextCanceled(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement4> impl_IUIElement4<D>::ContextCanceled(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::RoutedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IUIElement4>(this, &ABI::Windows::UI::Xaml::IUIElement4::remove_ContextCanceled, ContextCanceled(value));
}

template <typename D> void impl_IUIElement4<D>::ContextCanceled(event_token token) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->remove_ContextCanceled(token));
}

template <typename D> event_token impl_IUIElement4<D>::AccessKeyDisplayRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->add_AccessKeyDisplayRequested(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement4> impl_IUIElement4<D>::AccessKeyDisplayRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IUIElement4>(this, &ABI::Windows::UI::Xaml::IUIElement4::remove_AccessKeyDisplayRequested, AccessKeyDisplayRequested(value));
}

template <typename D> void impl_IUIElement4<D>::AccessKeyDisplayRequested(event_token token) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->remove_AccessKeyDisplayRequested(token));
}

template <typename D> event_token impl_IUIElement4<D>::AccessKeyDisplayDismissed(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->add_AccessKeyDisplayDismissed(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement4> impl_IUIElement4<D>::AccessKeyDisplayDismissed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IUIElement4>(this, &ABI::Windows::UI::Xaml::IUIElement4::remove_AccessKeyDisplayDismissed, AccessKeyDisplayDismissed(value));
}

template <typename D> void impl_IUIElement4<D>::AccessKeyDisplayDismissed(event_token token) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->remove_AccessKeyDisplayDismissed(token));
}

template <typename D> event_token impl_IUIElement4<D>::AccessKeyInvoked(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->add_AccessKeyInvoked(get(value), &token));
    return token;
}

template <typename D> event_revoker<IUIElement4> impl_IUIElement4<D>::AccessKeyInvoked(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::UIElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IUIElement4>(this, &ABI::Windows::UI::Xaml::IUIElement4::remove_AccessKeyInvoked, AccessKeyInvoked(value));
}

template <typename D> void impl_IUIElement4<D>::AccessKeyInvoked(event_token token) const
{
    check_hresult(static_cast<const IUIElement4 &>(static_cast<const D &>(*this))->remove_AccessKeyInvoked(token));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics4<D>::ContextFlyoutProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics4 &>(static_cast<const D &>(*this))->get_ContextFlyoutProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics4<D>::ExitDisplayModeOnAccessKeyInvokedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics4 &>(static_cast<const D &>(*this))->get_ExitDisplayModeOnAccessKeyInvokedProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics4<D>::IsAccessKeyScopeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics4 &>(static_cast<const D &>(*this))->get_IsAccessKeyScopeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics4<D>::AccessKeyScopeOwnerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics4 &>(static_cast<const D &>(*this))->get_AccessKeyScopeOwnerProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IUIElementStatics4<D>::AccessKeyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IUIElementStatics4 &>(static_cast<const D &>(*this))->get_AccessKeyProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IVisualState<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IVisualState &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::Storyboard impl_IVisualState<D>::Storyboard() const
{
    Windows::UI::Xaml::Media::Animation::Storyboard value { nullptr };
    check_hresult(static_cast<const IVisualState &>(static_cast<const D &>(*this))->get_Storyboard(put(value)));
    return value;
}

template <typename D> void impl_IVisualState<D>::Storyboard(const Windows::UI::Xaml::Media::Animation::Storyboard & value) const
{
    check_hresult(static_cast<const IVisualState &>(static_cast<const D &>(*this))->put_Storyboard(get(value)));
}

template <typename D> Windows::UI::Xaml::SetterBaseCollection impl_IVisualState2<D>::Setters() const
{
    Windows::UI::Xaml::SetterBaseCollection value { nullptr };
    check_hresult(static_cast<const IVisualState2 &>(static_cast<const D &>(*this))->get_Setters(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::StateTriggerBase> impl_IVisualState2<D>::StateTriggers() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::StateTriggerBase> value;
    check_hresult(static_cast<const IVisualState2 &>(static_cast<const D &>(*this))->get_StateTriggers(put(value)));
    return value;
}

template <typename D> hstring impl_IVisualStateGroup<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IVisualStateGroup &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualTransition> impl_IVisualStateGroup<D>::Transitions() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualTransition> value;
    check_hresult(static_cast<const IVisualStateGroup &>(static_cast<const D &>(*this))->get_Transitions(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualState> impl_IVisualStateGroup<D>::States() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualState> value;
    check_hresult(static_cast<const IVisualStateGroup &>(static_cast<const D &>(*this))->get_States(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::VisualState impl_IVisualStateGroup<D>::CurrentState() const
{
    Windows::UI::Xaml::VisualState value { nullptr };
    check_hresult(static_cast<const IVisualStateGroup &>(static_cast<const D &>(*this))->get_CurrentState(put(value)));
    return value;
}

template <typename D> event_token impl_IVisualStateGroup<D>::CurrentStateChanged(const Windows::UI::Xaml::VisualStateChangedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IVisualStateGroup &>(static_cast<const D &>(*this))->add_CurrentStateChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IVisualStateGroup> impl_IVisualStateGroup<D>::CurrentStateChanged(auto_revoke_t, const Windows::UI::Xaml::VisualStateChangedEventHandler & value) const
{
    return impl::make_event_revoker<D, IVisualStateGroup>(this, &ABI::Windows::UI::Xaml::IVisualStateGroup::remove_CurrentStateChanged, CurrentStateChanged(value));
}

template <typename D> void impl_IVisualStateGroup<D>::CurrentStateChanged(event_token token) const
{
    check_hresult(static_cast<const IVisualStateGroup &>(static_cast<const D &>(*this))->remove_CurrentStateChanged(token));
}

template <typename D> event_token impl_IVisualStateGroup<D>::CurrentStateChanging(const Windows::UI::Xaml::VisualStateChangedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IVisualStateGroup &>(static_cast<const D &>(*this))->add_CurrentStateChanging(get(value), &token));
    return token;
}

template <typename D> event_revoker<IVisualStateGroup> impl_IVisualStateGroup<D>::CurrentStateChanging(auto_revoke_t, const Windows::UI::Xaml::VisualStateChangedEventHandler & value) const
{
    return impl::make_event_revoker<D, IVisualStateGroup>(this, &ABI::Windows::UI::Xaml::IVisualStateGroup::remove_CurrentStateChanging, CurrentStateChanging(value));
}

template <typename D> void impl_IVisualStateGroup<D>::CurrentStateChanging(event_token token) const
{
    check_hresult(static_cast<const IVisualStateGroup &>(static_cast<const D &>(*this))->remove_CurrentStateChanging(token));
}

template <typename D> bool impl_IVisualStateManagerOverrides<D>::GoToStateCore(const Windows::UI::Xaml::Controls::Control & control, const Windows::UI::Xaml::FrameworkElement & templateRoot, hstring_ref stateName, const Windows::UI::Xaml::VisualStateGroup & group, const Windows::UI::Xaml::VisualState & state, bool useTransitions) const
{
    bool returnValue {};
    check_hresult(static_cast<const IVisualStateManagerOverrides &>(static_cast<const D &>(*this))->abi_GoToStateCore(get(control), get(templateRoot), get(stateName), get(group), get(state), useTransitions, &returnValue));
    return returnValue;
}

template <typename D> void impl_IVisualStateManagerProtected<D>::RaiseCurrentStateChanging(const Windows::UI::Xaml::VisualStateGroup & stateGroup, const Windows::UI::Xaml::VisualState & oldState, const Windows::UI::Xaml::VisualState & newState, const Windows::UI::Xaml::Controls::Control & control) const
{
    check_hresult(static_cast<const IVisualStateManagerProtected &>(static_cast<const D &>(*this))->abi_RaiseCurrentStateChanging(get(stateGroup), get(oldState), get(newState), get(control)));
}

template <typename D> void impl_IVisualStateManagerProtected<D>::RaiseCurrentStateChanged(const Windows::UI::Xaml::VisualStateGroup & stateGroup, const Windows::UI::Xaml::VisualState & oldState, const Windows::UI::Xaml::VisualState & newState, const Windows::UI::Xaml::Controls::Control & control) const
{
    check_hresult(static_cast<const IVisualStateManagerProtected &>(static_cast<const D &>(*this))->abi_RaiseCurrentStateChanged(get(stateGroup), get(oldState), get(newState), get(control)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> impl_IVisualStateManagerStatics<D>::GetVisualStateGroups(const Windows::UI::Xaml::FrameworkElement & obj) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> value;
    check_hresult(static_cast<const IVisualStateManagerStatics &>(static_cast<const D &>(*this))->abi_GetVisualStateGroups(get(obj), put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IVisualStateManagerStatics<D>::CustomVisualStateManagerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IVisualStateManagerStatics &>(static_cast<const D &>(*this))->get_CustomVisualStateManagerProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::VisualStateManager impl_IVisualStateManagerStatics<D>::GetCustomVisualStateManager(const Windows::UI::Xaml::FrameworkElement & obj) const
{
    Windows::UI::Xaml::VisualStateManager value { nullptr };
    check_hresult(static_cast<const IVisualStateManagerStatics &>(static_cast<const D &>(*this))->abi_GetCustomVisualStateManager(get(obj), put(value)));
    return value;
}

template <typename D> void impl_IVisualStateManagerStatics<D>::SetCustomVisualStateManager(const Windows::UI::Xaml::FrameworkElement & obj, const Windows::UI::Xaml::VisualStateManager & value) const
{
    check_hresult(static_cast<const IVisualStateManagerStatics &>(static_cast<const D &>(*this))->abi_SetCustomVisualStateManager(get(obj), get(value)));
}

template <typename D> bool impl_IVisualStateManagerStatics<D>::GoToState(const Windows::UI::Xaml::Controls::Control & control, hstring_ref stateName, bool useTransitions) const
{
    bool returnValue {};
    check_hresult(static_cast<const IVisualStateManagerStatics &>(static_cast<const D &>(*this))->abi_GoToState(get(control), get(stateName), useTransitions, &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::VisualStateManager impl_IVisualStateManagerFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::VisualStateManager instance { nullptr };
    check_hresult(static_cast<const IVisualStateManagerFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Duration impl_IVisualTransition<D>::GeneratedDuration() const
{
    Windows::UI::Xaml::Duration value {};
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->get_GeneratedDuration(put(value)));
    return value;
}

template <typename D> void impl_IVisualTransition<D>::GeneratedDuration(const Windows::UI::Xaml::Duration & value) const
{
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->put_GeneratedDuration(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::EasingFunctionBase impl_IVisualTransition<D>::GeneratedEasingFunction() const
{
    Windows::UI::Xaml::Media::Animation::EasingFunctionBase value { nullptr };
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->get_GeneratedEasingFunction(put(value)));
    return value;
}

template <typename D> void impl_IVisualTransition<D>::GeneratedEasingFunction(const Windows::UI::Xaml::Media::Animation::EasingFunctionBase & value) const
{
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->put_GeneratedEasingFunction(get(value)));
}

template <typename D> hstring impl_IVisualTransition<D>::To() const
{
    hstring value;
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->get_To(put(value)));
    return value;
}

template <typename D> void impl_IVisualTransition<D>::To(hstring_ref value) const
{
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->put_To(get(value)));
}

template <typename D> hstring impl_IVisualTransition<D>::From() const
{
    hstring value;
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->get_From(put(value)));
    return value;
}

template <typename D> void impl_IVisualTransition<D>::From(hstring_ref value) const
{
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->put_From(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Animation::Storyboard impl_IVisualTransition<D>::Storyboard() const
{
    Windows::UI::Xaml::Media::Animation::Storyboard value { nullptr };
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->get_Storyboard(put(value)));
    return value;
}

template <typename D> void impl_IVisualTransition<D>::Storyboard(const Windows::UI::Xaml::Media::Animation::Storyboard & value) const
{
    check_hresult(static_cast<const IVisualTransition &>(static_cast<const D &>(*this))->put_Storyboard(get(value)));
}

template <typename D> Windows::UI::Xaml::VisualTransition impl_IVisualTransitionFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::VisualTransition instance { nullptr };
    check_hresult(static_cast<const IVisualTransitionFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> double impl_IAdaptiveTrigger<D>::MinWindowWidth() const
{
    double value {};
    check_hresult(static_cast<const IAdaptiveTrigger &>(static_cast<const D &>(*this))->get_MinWindowWidth(&value));
    return value;
}

template <typename D> void impl_IAdaptiveTrigger<D>::MinWindowWidth(double value) const
{
    check_hresult(static_cast<const IAdaptiveTrigger &>(static_cast<const D &>(*this))->put_MinWindowWidth(value));
}

template <typename D> double impl_IAdaptiveTrigger<D>::MinWindowHeight() const
{
    double value {};
    check_hresult(static_cast<const IAdaptiveTrigger &>(static_cast<const D &>(*this))->get_MinWindowHeight(&value));
    return value;
}

template <typename D> void impl_IAdaptiveTrigger<D>::MinWindowHeight(double value) const
{
    check_hresult(static_cast<const IAdaptiveTrigger &>(static_cast<const D &>(*this))->put_MinWindowHeight(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAdaptiveTriggerStatics<D>::MinWindowWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAdaptiveTriggerStatics &>(static_cast<const D &>(*this))->get_MinWindowWidthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IAdaptiveTriggerStatics<D>::MinWindowHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IAdaptiveTriggerStatics &>(static_cast<const D &>(*this))->get_MinWindowHeightProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::AdaptiveTrigger impl_IAdaptiveTriggerFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::AdaptiveTrigger instance { nullptr };
    check_hresult(static_cast<const IAdaptiveTriggerFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::RoutedEvent impl_IEventTrigger<D>::RoutedEvent() const
{
    Windows::UI::Xaml::RoutedEvent value { nullptr };
    check_hresult(static_cast<const IEventTrigger &>(static_cast<const D &>(*this))->get_RoutedEvent(put(value)));
    return value;
}

template <typename D> void impl_IEventTrigger<D>::RoutedEvent(const Windows::UI::Xaml::RoutedEvent & value) const
{
    check_hresult(static_cast<const IEventTrigger &>(static_cast<const D &>(*this))->put_RoutedEvent(get(value)));
}

template <typename D> Windows::UI::Xaml::TriggerActionCollection impl_IEventTrigger<D>::Actions() const
{
    Windows::UI::Xaml::TriggerActionCollection value { nullptr };
    check_hresult(static_cast<const IEventTrigger &>(static_cast<const D &>(*this))->get_Actions(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::TriggerCollection impl_IFrameworkElement<D>::Triggers() const
{
    Windows::UI::Xaml::TriggerCollection value { nullptr };
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Triggers(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::ResourceDictionary impl_IFrameworkElement<D>::Resources() const
{
    Windows::UI::Xaml::ResourceDictionary value { nullptr };
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Resources(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::Resources(const Windows::UI::Xaml::ResourceDictionary & value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_Resources(get(value)));
}

template <typename D> Windows::IInspectable impl_IFrameworkElement<D>::Tag() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Tag(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::Tag(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_Tag(get(value)));
}

template <typename D> hstring impl_IFrameworkElement<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::Language(hstring_ref value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_Language(get(value)));
}

template <typename D> double impl_IFrameworkElement<D>::ActualWidth() const
{
    double value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_ActualWidth(&value));
    return value;
}

template <typename D> double impl_IFrameworkElement<D>::ActualHeight() const
{
    double value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_ActualHeight(&value));
    return value;
}

template <typename D> double impl_IFrameworkElement<D>::Width() const
{
    double value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::Width(double value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_Width(value));
}

template <typename D> double impl_IFrameworkElement<D>::Height() const
{
    double value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::Height(double value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_Height(value));
}

template <typename D> double impl_IFrameworkElement<D>::MinWidth() const
{
    double value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_MinWidth(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::MinWidth(double value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_MinWidth(value));
}

template <typename D> double impl_IFrameworkElement<D>::MaxWidth() const
{
    double value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_MaxWidth(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::MaxWidth(double value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_MaxWidth(value));
}

template <typename D> double impl_IFrameworkElement<D>::MinHeight() const
{
    double value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_MinHeight(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::MinHeight(double value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_MinHeight(value));
}

template <typename D> double impl_IFrameworkElement<D>::MaxHeight() const
{
    double value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_MaxHeight(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::MaxHeight(double value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_MaxHeight(value));
}

template <typename D> Windows::UI::Xaml::HorizontalAlignment impl_IFrameworkElement<D>::HorizontalAlignment() const
{
    Windows::UI::Xaml::HorizontalAlignment value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_HorizontalAlignment(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::HorizontalAlignment(Windows::UI::Xaml::HorizontalAlignment value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_HorizontalAlignment(value));
}

template <typename D> Windows::UI::Xaml::VerticalAlignment impl_IFrameworkElement<D>::VerticalAlignment() const
{
    Windows::UI::Xaml::VerticalAlignment value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_VerticalAlignment(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::VerticalAlignment(Windows::UI::Xaml::VerticalAlignment value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_VerticalAlignment(value));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IFrameworkElement<D>::Margin() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Margin(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::Margin(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_Margin(get(value)));
}

template <typename D> hstring impl_IFrameworkElement<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::Name(hstring_ref value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_Name(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IFrameworkElement<D>::BaseUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_BaseUri(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IFrameworkElement<D>::DataContext() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_DataContext(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::DataContext(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_DataContext(get(value)));
}

template <typename D> Windows::UI::Xaml::Style impl_IFrameworkElement<D>::Style() const
{
    Windows::UI::Xaml::Style value { nullptr };
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Style(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::Style(const Windows::UI::Xaml::Style & value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_Style(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject impl_IFrameworkElement<D>::Parent() const
{
    Windows::UI::Xaml::DependencyObject value { nullptr };
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_Parent(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FlowDirection impl_IFrameworkElement<D>::FlowDirection() const
{
    Windows::UI::Xaml::FlowDirection value {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->get_FlowDirection(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement<D>::FlowDirection(Windows::UI::Xaml::FlowDirection value) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->put_FlowDirection(value));
}

template <typename D> event_token impl_IFrameworkElement<D>::Loaded(const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->add_Loaded(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFrameworkElement> impl_IFrameworkElement<D>::Loaded(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IFrameworkElement>(this, &ABI::Windows::UI::Xaml::IFrameworkElement::remove_Loaded, Loaded(value));
}

template <typename D> void impl_IFrameworkElement<D>::Loaded(event_token token) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->remove_Loaded(token));
}

template <typename D> event_token impl_IFrameworkElement<D>::Unloaded(const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->add_Unloaded(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFrameworkElement> impl_IFrameworkElement<D>::Unloaded(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IFrameworkElement>(this, &ABI::Windows::UI::Xaml::IFrameworkElement::remove_Unloaded, Unloaded(value));
}

template <typename D> void impl_IFrameworkElement<D>::Unloaded(event_token token) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->remove_Unloaded(token));
}

template <typename D> event_token impl_IFrameworkElement<D>::SizeChanged(const Windows::UI::Xaml::SizeChangedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->add_SizeChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFrameworkElement> impl_IFrameworkElement<D>::SizeChanged(auto_revoke_t, const Windows::UI::Xaml::SizeChangedEventHandler & value) const
{
    return impl::make_event_revoker<D, IFrameworkElement>(this, &ABI::Windows::UI::Xaml::IFrameworkElement::remove_SizeChanged, SizeChanged(value));
}

template <typename D> void impl_IFrameworkElement<D>::SizeChanged(event_token token) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->remove_SizeChanged(token));
}

template <typename D> event_token impl_IFrameworkElement<D>::LayoutUpdated(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->add_LayoutUpdated(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFrameworkElement> impl_IFrameworkElement<D>::LayoutUpdated(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IFrameworkElement>(this, &ABI::Windows::UI::Xaml::IFrameworkElement::remove_LayoutUpdated, LayoutUpdated(value));
}

template <typename D> void impl_IFrameworkElement<D>::LayoutUpdated(event_token token) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->remove_LayoutUpdated(token));
}

template <typename D> Windows::IInspectable impl_IFrameworkElement<D>::FindName(hstring_ref name) const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->abi_FindName(get(name), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IFrameworkElement<D>::SetBinding(const Windows::UI::Xaml::DependencyProperty & dp, const Windows::UI::Xaml::Data::BindingBase & binding) const
{
    check_hresult(static_cast<const IFrameworkElement &>(static_cast<const D &>(*this))->abi_SetBinding(get(dp), get(binding)));
}

template <typename D> Windows::Foundation::Size impl_IFrameworkElementOverrides<D>::MeasureOverride(const Windows::Foundation::Size & availableSize) const
{
    Windows::Foundation::Size returnValue {};
    check_hresult(static_cast<const IFrameworkElementOverrides &>(static_cast<const D &>(*this))->abi_MeasureOverride(get(availableSize), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Size impl_IFrameworkElementOverrides<D>::ArrangeOverride(const Windows::Foundation::Size & finalSize) const
{
    Windows::Foundation::Size returnValue {};
    check_hresult(static_cast<const IFrameworkElementOverrides &>(static_cast<const D &>(*this))->abi_ArrangeOverride(get(finalSize), put(returnValue)));
    return returnValue;
}

template <typename D> void impl_IFrameworkElementOverrides<D>::OnApplyTemplate() const
{
    check_hresult(static_cast<const IFrameworkElementOverrides &>(static_cast<const D &>(*this))->abi_OnApplyTemplate());
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::TagProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_TagProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::LanguageProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_LanguageProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::ActualWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_ActualWidthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::ActualHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_ActualHeightProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::WidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_WidthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::HeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_HeightProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::MinWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_MinWidthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::MaxWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_MaxWidthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::MinHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_MinHeightProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::MaxHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_MaxHeightProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::HorizontalAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_HorizontalAlignmentProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::VerticalAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_VerticalAlignmentProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::MarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_MarginProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::NameProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_NameProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::DataContextProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_DataContextProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::StyleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_StyleProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics<D>::FlowDirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics &>(static_cast<const D &>(*this))->get_FlowDirectionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FrameworkElement impl_IFrameworkElementFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::FrameworkElement instance { nullptr };
    check_hresult(static_cast<const IFrameworkElementFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::ElementTheme impl_IFrameworkElement2<D>::RequestedTheme() const
{
    Windows::UI::Xaml::ElementTheme value {};
    check_hresult(static_cast<const IFrameworkElement2 &>(static_cast<const D &>(*this))->get_RequestedTheme(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement2<D>::RequestedTheme(Windows::UI::Xaml::ElementTheme value) const
{
    check_hresult(static_cast<const IFrameworkElement2 &>(static_cast<const D &>(*this))->put_RequestedTheme(value));
}

template <typename D> event_token impl_IFrameworkElement2<D>::DataContextChanged(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFrameworkElement2 &>(static_cast<const D &>(*this))->add_DataContextChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFrameworkElement2> impl_IFrameworkElement2<D>::DataContextChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::DataContextChangedEventArgs> & value) const
{
    return impl::make_event_revoker<D, IFrameworkElement2>(this, &ABI::Windows::UI::Xaml::IFrameworkElement2::remove_DataContextChanged, DataContextChanged(value));
}

template <typename D> void impl_IFrameworkElement2<D>::DataContextChanged(event_token token) const
{
    check_hresult(static_cast<const IFrameworkElement2 &>(static_cast<const D &>(*this))->remove_DataContextChanged(token));
}

template <typename D> Windows::UI::Xaml::Data::BindingExpression impl_IFrameworkElement2<D>::GetBindingExpression(const Windows::UI::Xaml::DependencyProperty & dp) const
{
    Windows::UI::Xaml::Data::BindingExpression returnValue { nullptr };
    check_hresult(static_cast<const IFrameworkElement2 &>(static_cast<const D &>(*this))->abi_GetBindingExpression(get(dp), put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IFrameworkElementOverrides2<D>::GoToElementStateCore(hstring_ref stateName, bool useTransitions) const
{
    bool returnValue {};
    check_hresult(static_cast<const IFrameworkElementOverrides2 &>(static_cast<const D &>(*this))->abi_GoToElementStateCore(get(stateName), useTransitions, &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics2<D>::RequestedThemeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics2 &>(static_cast<const D &>(*this))->get_RequestedThemeProperty(put(value)));
    return value;
}

template <typename D> event_token impl_IFrameworkElement3<D>::Loading(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFrameworkElement3 &>(static_cast<const D &>(*this))->add_Loading(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFrameworkElement3> impl_IFrameworkElement3<D>::Loading(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::FrameworkElement, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IFrameworkElement3>(this, &ABI::Windows::UI::Xaml::IFrameworkElement3::remove_Loading, Loading(value));
}

template <typename D> void impl_IFrameworkElement3<D>::Loading(event_token token) const
{
    check_hresult(static_cast<const IFrameworkElement3 &>(static_cast<const D &>(*this))->remove_Loading(token));
}

template <typename D> bool impl_IFrameworkElement4<D>::AllowFocusOnInteraction() const
{
    bool value {};
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->get_AllowFocusOnInteraction(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement4<D>::AllowFocusOnInteraction(bool value) const
{
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->put_AllowFocusOnInteraction(value));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IFrameworkElement4<D>::FocusVisualMargin() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->get_FocusVisualMargin(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement4<D>::FocusVisualMargin(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->put_FocusVisualMargin(get(value)));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IFrameworkElement4<D>::FocusVisualSecondaryThickness() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->get_FocusVisualSecondaryThickness(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement4<D>::FocusVisualSecondaryThickness(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->put_FocusVisualSecondaryThickness(get(value)));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IFrameworkElement4<D>::FocusVisualPrimaryThickness() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->get_FocusVisualPrimaryThickness(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement4<D>::FocusVisualPrimaryThickness(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->put_FocusVisualPrimaryThickness(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IFrameworkElement4<D>::FocusVisualSecondaryBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->get_FocusVisualSecondaryBrush(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement4<D>::FocusVisualSecondaryBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->put_FocusVisualSecondaryBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IFrameworkElement4<D>::FocusVisualPrimaryBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->get_FocusVisualPrimaryBrush(put(value)));
    return value;
}

template <typename D> void impl_IFrameworkElement4<D>::FocusVisualPrimaryBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->put_FocusVisualPrimaryBrush(get(value)));
}

template <typename D> bool impl_IFrameworkElement4<D>::AllowFocusWhenDisabled() const
{
    bool value {};
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->get_AllowFocusWhenDisabled(&value));
    return value;
}

template <typename D> void impl_IFrameworkElement4<D>::AllowFocusWhenDisabled(bool value) const
{
    check_hresult(static_cast<const IFrameworkElement4 &>(static_cast<const D &>(*this))->put_AllowFocusWhenDisabled(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics4<D>::AllowFocusOnInteractionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics4 &>(static_cast<const D &>(*this))->get_AllowFocusOnInteractionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics4<D>::FocusVisualMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics4 &>(static_cast<const D &>(*this))->get_FocusVisualMarginProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics4<D>::FocusVisualSecondaryThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics4 &>(static_cast<const D &>(*this))->get_FocusVisualSecondaryThicknessProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics4<D>::FocusVisualPrimaryThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics4 &>(static_cast<const D &>(*this))->get_FocusVisualPrimaryThicknessProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics4<D>::FocusVisualSecondaryBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics4 &>(static_cast<const D &>(*this))->get_FocusVisualSecondaryBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics4<D>::FocusVisualPrimaryBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics4 &>(static_cast<const D &>(*this))->get_FocusVisualPrimaryBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFrameworkElementStatics4<D>::AllowFocusWhenDisabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFrameworkElementStatics4 &>(static_cast<const D &>(*this))->get_AllowFocusWhenDisabledProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaFailedRoutedEventArgs<D>::ErrorTrace() const
{
    hstring value;
    check_hresult(static_cast<const IMediaFailedRoutedEventArgs &>(static_cast<const D &>(*this))->get_ErrorTrace(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISetter<D>::Property() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISetter &>(static_cast<const D &>(*this))->get_Property(put(value)));
    return value;
}

template <typename D> void impl_ISetter<D>::Property(const Windows::UI::Xaml::DependencyProperty & value) const
{
    check_hresult(static_cast<const ISetter &>(static_cast<const D &>(*this))->put_Property(get(value)));
}

template <typename D> Windows::IInspectable impl_ISetter<D>::Value() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ISetter &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_ISetter<D>::Value(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const ISetter &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::UI::Xaml::Setter impl_ISetterFactory<D>::CreateInstance(const Windows::UI::Xaml::DependencyProperty & targetProperty, const Windows::IInspectable & value) const
{
    Windows::UI::Xaml::Setter instance { nullptr };
    check_hresult(static_cast<const ISetterFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(targetProperty), get(value), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::TargetPropertyPath impl_ISetter2<D>::Target() const
{
    Windows::UI::Xaml::TargetPropertyPath value { nullptr };
    check_hresult(static_cast<const ISetter2 &>(static_cast<const D &>(*this))->get_Target(put(value)));
    return value;
}

template <typename D> void impl_ISetter2<D>::Target(const Windows::UI::Xaml::TargetPropertyPath & value) const
{
    check_hresult(static_cast<const ISetter2 &>(static_cast<const D &>(*this))->put_Target(get(value)));
}

template <typename D> bool impl_IStateTrigger<D>::IsActive() const
{
    bool value {};
    check_hresult(static_cast<const IStateTrigger &>(static_cast<const D &>(*this))->get_IsActive(&value));
    return value;
}

template <typename D> void impl_IStateTrigger<D>::IsActive(bool value) const
{
    check_hresult(static_cast<const IStateTrigger &>(static_cast<const D &>(*this))->put_IsActive(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IStateTriggerStatics<D>::IsActiveProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IStateTriggerStatics &>(static_cast<const D &>(*this))->get_IsActiveProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::GridLength impl_IGridLengthHelperStatics<D>::Auto() const
{
    Windows::UI::Xaml::GridLength value {};
    check_hresult(static_cast<const IGridLengthHelperStatics &>(static_cast<const D &>(*this))->get_Auto(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::GridLength impl_IGridLengthHelperStatics<D>::FromPixels(double pixels) const
{
    Windows::UI::Xaml::GridLength returnValue {};
    check_hresult(static_cast<const IGridLengthHelperStatics &>(static_cast<const D &>(*this))->abi_FromPixels(pixels, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::GridLength impl_IGridLengthHelperStatics<D>::FromValueAndType(double value, Windows::UI::Xaml::GridUnitType type) const
{
    Windows::UI::Xaml::GridLength returnValue {};
    check_hresult(static_cast<const IGridLengthHelperStatics &>(static_cast<const D &>(*this))->abi_FromValueAndType(value, type, put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IGridLengthHelperStatics<D>::GetIsAbsolute(const Windows::UI::Xaml::GridLength & target) const
{
    bool value {};
    check_hresult(static_cast<const IGridLengthHelperStatics &>(static_cast<const D &>(*this))->abi_GetIsAbsolute(get(target), &value));
    return value;
}

template <typename D> bool impl_IGridLengthHelperStatics<D>::GetIsAuto(const Windows::UI::Xaml::GridLength & target) const
{
    bool value {};
    check_hresult(static_cast<const IGridLengthHelperStatics &>(static_cast<const D &>(*this))->abi_GetIsAuto(get(target), &value));
    return value;
}

template <typename D> bool impl_IGridLengthHelperStatics<D>::GetIsStar(const Windows::UI::Xaml::GridLength & target) const
{
    bool value {};
    check_hresult(static_cast<const IGridLengthHelperStatics &>(static_cast<const D &>(*this))->abi_GetIsStar(get(target), &value));
    return value;
}

template <typename D> bool impl_IGridLengthHelperStatics<D>::Equals(const Windows::UI::Xaml::GridLength & target, const Windows::UI::Xaml::GridLength & value) const
{
    bool returnValue {};
    check_hresult(static_cast<const IGridLengthHelperStatics &>(static_cast<const D &>(*this))->abi_Equals(get(target), get(value), &returnValue));
    return returnValue;
}

template <typename D> hstring impl_IBindingFailedEventArgs<D>::Message() const
{
    hstring value;
    check_hresult(static_cast<const IBindingFailedEventArgs &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> bool impl_IDebugSettings<D>::EnableFrameRateCounter() const
{
    bool value {};
    check_hresult(static_cast<const IDebugSettings &>(static_cast<const D &>(*this))->get_EnableFrameRateCounter(&value));
    return value;
}

template <typename D> void impl_IDebugSettings<D>::EnableFrameRateCounter(bool value) const
{
    check_hresult(static_cast<const IDebugSettings &>(static_cast<const D &>(*this))->put_EnableFrameRateCounter(value));
}

template <typename D> bool impl_IDebugSettings<D>::IsBindingTracingEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDebugSettings &>(static_cast<const D &>(*this))->get_IsBindingTracingEnabled(&value));
    return value;
}

template <typename D> void impl_IDebugSettings<D>::IsBindingTracingEnabled(bool value) const
{
    check_hresult(static_cast<const IDebugSettings &>(static_cast<const D &>(*this))->put_IsBindingTracingEnabled(value));
}

template <typename D> bool impl_IDebugSettings<D>::IsOverdrawHeatMapEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDebugSettings &>(static_cast<const D &>(*this))->get_IsOverdrawHeatMapEnabled(&value));
    return value;
}

template <typename D> void impl_IDebugSettings<D>::IsOverdrawHeatMapEnabled(bool value) const
{
    check_hresult(static_cast<const IDebugSettings &>(static_cast<const D &>(*this))->put_IsOverdrawHeatMapEnabled(value));
}

template <typename D> event_token impl_IDebugSettings<D>::BindingFailed(const Windows::UI::Xaml::BindingFailedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IDebugSettings &>(static_cast<const D &>(*this))->add_BindingFailed(get(value), &token));
    return token;
}

template <typename D> event_revoker<IDebugSettings> impl_IDebugSettings<D>::BindingFailed(auto_revoke_t, const Windows::UI::Xaml::BindingFailedEventHandler & value) const
{
    return impl::make_event_revoker<D, IDebugSettings>(this, &ABI::Windows::UI::Xaml::IDebugSettings::remove_BindingFailed, BindingFailed(value));
}

template <typename D> void impl_IDebugSettings<D>::BindingFailed(event_token token) const
{
    check_hresult(static_cast<const IDebugSettings &>(static_cast<const D &>(*this))->remove_BindingFailed(token));
}

template <typename D> bool impl_IDebugSettings2<D>::EnableRedrawRegions() const
{
    bool value {};
    check_hresult(static_cast<const IDebugSettings2 &>(static_cast<const D &>(*this))->get_EnableRedrawRegions(&value));
    return value;
}

template <typename D> void impl_IDebugSettings2<D>::EnableRedrawRegions(bool value) const
{
    check_hresult(static_cast<const IDebugSettings2 &>(static_cast<const D &>(*this))->put_EnableRedrawRegions(value));
}

template <typename D> bool impl_IDebugSettings3<D>::IsTextPerformanceVisualizationEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDebugSettings3 &>(static_cast<const D &>(*this))->get_IsTextPerformanceVisualizationEnabled(&value));
    return value;
}

template <typename D> void impl_IDebugSettings3<D>::IsTextPerformanceVisualizationEnabled(bool value) const
{
    check_hresult(static_cast<const IDebugSettings3 &>(static_cast<const D &>(*this))->put_IsTextPerformanceVisualizationEnabled(value));
}

template <typename D> Windows::UI::Xaml::ResourceDictionary impl_IApplication<D>::Resources() const
{
    Windows::UI::Xaml::ResourceDictionary value { nullptr };
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->get_Resources(put(value)));
    return value;
}

template <typename D> void impl_IApplication<D>::Resources(const Windows::UI::Xaml::ResourceDictionary & value) const
{
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->put_Resources(get(value)));
}

template <typename D> Windows::UI::Xaml::DebugSettings impl_IApplication<D>::DebugSettings() const
{
    Windows::UI::Xaml::DebugSettings value { nullptr };
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->get_DebugSettings(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::ApplicationTheme impl_IApplication<D>::RequestedTheme() const
{
    Windows::UI::Xaml::ApplicationTheme value {};
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->get_RequestedTheme(&value));
    return value;
}

template <typename D> void impl_IApplication<D>::RequestedTheme(Windows::UI::Xaml::ApplicationTheme value) const
{
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->put_RequestedTheme(value));
}

template <typename D> event_token impl_IApplication<D>::UnhandledException(const Windows::UI::Xaml::UnhandledExceptionEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->add_UnhandledException(get(value), &token));
    return token;
}

template <typename D> event_revoker<IApplication> impl_IApplication<D>::UnhandledException(auto_revoke_t, const Windows::UI::Xaml::UnhandledExceptionEventHandler & value) const
{
    return impl::make_event_revoker<D, IApplication>(this, &ABI::Windows::UI::Xaml::IApplication::remove_UnhandledException, UnhandledException(value));
}

template <typename D> void impl_IApplication<D>::UnhandledException(event_token token) const
{
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->remove_UnhandledException(token));
}

template <typename D> event_token impl_IApplication<D>::Suspending(const Windows::UI::Xaml::SuspendingEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->add_Suspending(get(value), &token));
    return token;
}

template <typename D> event_revoker<IApplication> impl_IApplication<D>::Suspending(auto_revoke_t, const Windows::UI::Xaml::SuspendingEventHandler & value) const
{
    return impl::make_event_revoker<D, IApplication>(this, &ABI::Windows::UI::Xaml::IApplication::remove_Suspending, Suspending(value));
}

template <typename D> void impl_IApplication<D>::Suspending(event_token token) const
{
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->remove_Suspending(token));
}

template <typename D> event_token impl_IApplication<D>::Resuming(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->add_Resuming(get(value), &token));
    return token;
}

template <typename D> event_revoker<IApplication> impl_IApplication<D>::Resuming(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IApplication>(this, &ABI::Windows::UI::Xaml::IApplication::remove_Resuming, Resuming(value));
}

template <typename D> void impl_IApplication<D>::Resuming(event_token token) const
{
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->remove_Resuming(token));
}

template <typename D> void impl_IApplication<D>::Exit() const
{
    check_hresult(static_cast<const IApplication &>(static_cast<const D &>(*this))->abi_Exit());
}

template <typename D> void impl_IApplicationOverrides<D>::OnActivated(const Windows::ApplicationModel::Activation::IActivatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides &>(static_cast<const D &>(*this))->abi_OnActivated(get(args)));
}

template <typename D> void impl_IApplicationOverrides<D>::OnLaunched(const Windows::ApplicationModel::Activation::LaunchActivatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides &>(static_cast<const D &>(*this))->abi_OnLaunched(get(args)));
}

template <typename D> void impl_IApplicationOverrides<D>::OnFileActivated(const Windows::ApplicationModel::Activation::FileActivatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides &>(static_cast<const D &>(*this))->abi_OnFileActivated(get(args)));
}

template <typename D> void impl_IApplicationOverrides<D>::OnSearchActivated(const Windows::ApplicationModel::Activation::SearchActivatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides &>(static_cast<const D &>(*this))->abi_OnSearchActivated(get(args)));
}

template <typename D> void impl_IApplicationOverrides<D>::OnShareTargetActivated(const Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides &>(static_cast<const D &>(*this))->abi_OnShareTargetActivated(get(args)));
}

template <typename D> void impl_IApplicationOverrides<D>::OnFileOpenPickerActivated(const Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides &>(static_cast<const D &>(*this))->abi_OnFileOpenPickerActivated(get(args)));
}

template <typename D> void impl_IApplicationOverrides<D>::OnFileSavePickerActivated(const Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides &>(static_cast<const D &>(*this))->abi_OnFileSavePickerActivated(get(args)));
}

template <typename D> void impl_IApplicationOverrides<D>::OnCachedFileUpdaterActivated(const Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides &>(static_cast<const D &>(*this))->abi_OnCachedFileUpdaterActivated(get(args)));
}

template <typename D> void impl_IApplicationOverrides<D>::OnWindowCreated(const Windows::UI::Xaml::WindowCreatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides &>(static_cast<const D &>(*this))->abi_OnWindowCreated(get(args)));
}

template <typename D> Windows::UI::Xaml::Application impl_IApplicationStatics<D>::Current() const
{
    Windows::UI::Xaml::Application value { nullptr };
    check_hresult(static_cast<const IApplicationStatics &>(static_cast<const D &>(*this))->get_Current(put(value)));
    return value;
}

template <typename D> void impl_IApplicationStatics<D>::Start(const Windows::UI::Xaml::ApplicationInitializationCallback & callback) const
{
    check_hresult(static_cast<const IApplicationStatics &>(static_cast<const D &>(*this))->abi_Start(get(callback)));
}

template <typename D> void impl_IApplicationStatics<D>::LoadComponent(const Windows::IInspectable & component, const Windows::Foundation::Uri & resourceLocator) const
{
    check_hresult(static_cast<const IApplicationStatics &>(static_cast<const D &>(*this))->abi_LoadComponent(get(component), get(resourceLocator)));
}

template <typename D> void impl_IApplicationStatics<D>::LoadComponent(const Windows::IInspectable & component, const Windows::Foundation::Uri & resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation componentResourceLocation) const
{
    check_hresult(static_cast<const IApplicationStatics &>(static_cast<const D &>(*this))->abi_LoadComponentWithResourceLocation(get(component), get(resourceLocator), componentResourceLocation));
}

template <typename D> Windows::UI::Xaml::Application impl_IApplicationFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Application instance { nullptr };
    check_hresult(static_cast<const IApplicationFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::FocusVisualKind impl_IApplication2<D>::FocusVisualKind() const
{
    Windows::UI::Xaml::FocusVisualKind value {};
    check_hresult(static_cast<const IApplication2 &>(static_cast<const D &>(*this))->get_FocusVisualKind(&value));
    return value;
}

template <typename D> void impl_IApplication2<D>::FocusVisualKind(Windows::UI::Xaml::FocusVisualKind value) const
{
    check_hresult(static_cast<const IApplication2 &>(static_cast<const D &>(*this))->put_FocusVisualKind(value));
}

template <typename D> Windows::UI::Xaml::ApplicationRequiresPointerMode impl_IApplication2<D>::RequiresPointerMode() const
{
    Windows::UI::Xaml::ApplicationRequiresPointerMode value {};
    check_hresult(static_cast<const IApplication2 &>(static_cast<const D &>(*this))->get_RequiresPointerMode(&value));
    return value;
}

template <typename D> void impl_IApplication2<D>::RequiresPointerMode(Windows::UI::Xaml::ApplicationRequiresPointerMode value) const
{
    check_hresult(static_cast<const IApplication2 &>(static_cast<const D &>(*this))->put_RequiresPointerMode(value));
}

template <typename D> event_token impl_IApplication2<D>::LeavingBackground(const Windows::UI::Xaml::LeavingBackgroundEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IApplication2 &>(static_cast<const D &>(*this))->add_LeavingBackground(get(value), &token));
    return token;
}

template <typename D> event_revoker<IApplication2> impl_IApplication2<D>::LeavingBackground(auto_revoke_t, const Windows::UI::Xaml::LeavingBackgroundEventHandler & value) const
{
    return impl::make_event_revoker<D, IApplication2>(this, &ABI::Windows::UI::Xaml::IApplication2::remove_LeavingBackground, LeavingBackground(value));
}

template <typename D> void impl_IApplication2<D>::LeavingBackground(event_token token) const
{
    check_hresult(static_cast<const IApplication2 &>(static_cast<const D &>(*this))->remove_LeavingBackground(token));
}

template <typename D> event_token impl_IApplication2<D>::EnteredBackground(const Windows::UI::Xaml::EnteredBackgroundEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IApplication2 &>(static_cast<const D &>(*this))->add_EnteredBackground(get(value), &token));
    return token;
}

template <typename D> event_revoker<IApplication2> impl_IApplication2<D>::EnteredBackground(auto_revoke_t, const Windows::UI::Xaml::EnteredBackgroundEventHandler & value) const
{
    return impl::make_event_revoker<D, IApplication2>(this, &ABI::Windows::UI::Xaml::IApplication2::remove_EnteredBackground, EnteredBackground(value));
}

template <typename D> void impl_IApplication2<D>::EnteredBackground(event_token token) const
{
    check_hresult(static_cast<const IApplication2 &>(static_cast<const D &>(*this))->remove_EnteredBackground(token));
}

template <typename D> void impl_IApplicationOverrides2<D>::OnBackgroundActivated(const Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs & args) const
{
    check_hresult(static_cast<const IApplicationOverrides2 &>(static_cast<const D &>(*this))->abi_OnBackgroundActivated(get(args)));
}

template <typename D> Windows::Foundation::Point impl_IPointHelperStatics<D>::FromCoordinates(float x, float y) const
{
    Windows::Foundation::Point returnValue {};
    check_hresult(static_cast<const IPointHelperStatics &>(static_cast<const D &>(*this))->abi_FromCoordinates(x, y, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect impl_IRectHelperStatics<D>::Empty() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->get_Empty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_IRectHelperStatics<D>::FromCoordinatesAndDimensions(float x, float y, float width, float height) const
{
    Windows::Foundation::Rect returnValue {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_FromCoordinatesAndDimensions(x, y, width, height, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect impl_IRectHelperStatics<D>::FromPoints(const Windows::Foundation::Point & point1, const Windows::Foundation::Point & point2) const
{
    Windows::Foundation::Rect returnValue {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_FromPoints(get(point1), get(point2), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect impl_IRectHelperStatics<D>::FromLocationAndSize(const Windows::Foundation::Point & location, const Windows::Foundation::Size & size) const
{
    Windows::Foundation::Rect returnValue {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_FromLocationAndSize(get(location), get(size), put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IRectHelperStatics<D>::GetIsEmpty(const Windows::Foundation::Rect & target) const
{
    bool value {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_GetIsEmpty(get(target), &value));
    return value;
}

template <typename D> float impl_IRectHelperStatics<D>::GetBottom(const Windows::Foundation::Rect & target) const
{
    float value {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_GetBottom(get(target), &value));
    return value;
}

template <typename D> float impl_IRectHelperStatics<D>::GetLeft(const Windows::Foundation::Rect & target) const
{
    float value {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_GetLeft(get(target), &value));
    return value;
}

template <typename D> float impl_IRectHelperStatics<D>::GetRight(const Windows::Foundation::Rect & target) const
{
    float value {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_GetRight(get(target), &value));
    return value;
}

template <typename D> float impl_IRectHelperStatics<D>::GetTop(const Windows::Foundation::Rect & target) const
{
    float value {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_GetTop(get(target), &value));
    return value;
}

template <typename D> bool impl_IRectHelperStatics<D>::Contains(const Windows::Foundation::Rect & target, const Windows::Foundation::Point & point) const
{
    bool returnValue {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_Contains(get(target), get(point), &returnValue));
    return returnValue;
}

template <typename D> bool impl_IRectHelperStatics<D>::Equals(const Windows::Foundation::Rect & target, const Windows::Foundation::Rect & value) const
{
    bool returnValue {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_Equals(get(target), get(value), &returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect impl_IRectHelperStatics<D>::Intersect(const Windows::Foundation::Rect & target, const Windows::Foundation::Rect & rect) const
{
    Windows::Foundation::Rect returnValue {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_Intersect(get(target), get(rect), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect impl_IRectHelperStatics<D>::Union(const Windows::Foundation::Rect & target, const Windows::Foundation::Point & point) const
{
    Windows::Foundation::Rect returnValue {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_UnionWithPoint(get(target), get(point), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect impl_IRectHelperStatics<D>::Union(const Windows::Foundation::Rect & target, const Windows::Foundation::Rect & rect) const
{
    Windows::Foundation::Rect returnValue {};
    check_hresult(static_cast<const IRectHelperStatics &>(static_cast<const D &>(*this))->abi_UnionWithRect(get(target), get(rect), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Size impl_ISizeHelperStatics<D>::Empty() const
{
    Windows::Foundation::Size value {};
    check_hresult(static_cast<const ISizeHelperStatics &>(static_cast<const D &>(*this))->get_Empty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Size impl_ISizeHelperStatics<D>::FromDimensions(float width, float height) const
{
    Windows::Foundation::Size returnValue {};
    check_hresult(static_cast<const ISizeHelperStatics &>(static_cast<const D &>(*this))->abi_FromDimensions(width, height, put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_ISizeHelperStatics<D>::GetIsEmpty(const Windows::Foundation::Size & target) const
{
    bool value {};
    check_hresult(static_cast<const ISizeHelperStatics &>(static_cast<const D &>(*this))->abi_GetIsEmpty(get(target), &value));
    return value;
}

template <typename D> bool impl_ISizeHelperStatics<D>::Equals(const Windows::Foundation::Size & target, const Windows::Foundation::Size & value) const
{
    bool returnValue {};
    check_hresult(static_cast<const ISizeHelperStatics &>(static_cast<const D &>(*this))->abi_Equals(get(target), get(value), &returnValue));
    return returnValue;
}

inline AdaptiveTrigger::AdaptiveTrigger()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<AdaptiveTrigger, IAdaptiveTriggerFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty AdaptiveTrigger::MinWindowWidthProperty()
{
    return get_activation_factory<AdaptiveTrigger, IAdaptiveTriggerStatics>().MinWindowWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty AdaptiveTrigger::MinWindowHeightProperty()
{
    return get_activation_factory<AdaptiveTrigger, IAdaptiveTriggerStatics>().MinWindowHeightProperty();
}

inline Application::Application()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<Application, IApplicationFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::Application Application::Current()
{
    return get_activation_factory<Application, IApplicationStatics>().Current();
}

inline void Application::Start(const Windows::UI::Xaml::ApplicationInitializationCallback & callback)
{
    get_activation_factory<Application, IApplicationStatics>().Start(callback);
}

inline void Application::LoadComponent(const Windows::IInspectable & component, const Windows::Foundation::Uri & resourceLocator)
{
    get_activation_factory<Application, IApplicationStatics>().LoadComponent(component, resourceLocator);
}

inline void Application::LoadComponent(const Windows::IInspectable & component, const Windows::Foundation::Uri & resourceLocator, Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation componentResourceLocation)
{
    get_activation_factory<Application, IApplicationStatics>().LoadComponent(component, resourceLocator, componentResourceLocation);
}

inline Windows::UI::Xaml::CornerRadius CornerRadiusHelper::FromRadii(double topLeft, double topRight, double bottomRight, double bottomLeft)
{
    return get_activation_factory<CornerRadiusHelper, ICornerRadiusHelperStatics>().FromRadii(topLeft, topRight, bottomRight, bottomLeft);
}

inline Windows::UI::Xaml::CornerRadius CornerRadiusHelper::FromUniformRadius(double uniformRadius)
{
    return get_activation_factory<CornerRadiusHelper, ICornerRadiusHelperStatics>().FromUniformRadius(uniformRadius);
}

inline DataTemplate::DataTemplate()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<DataTemplate, IDataTemplateFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty DataTemplate::ExtensionInstanceProperty()
{
    return get_activation_factory<DataTemplate, IDataTemplateStatics2>().ExtensionInstanceProperty();
}

inline Windows::UI::Xaml::IDataTemplateExtension DataTemplate::GetExtensionInstance(const Windows::UI::Xaml::FrameworkElement & element)
{
    return get_activation_factory<DataTemplate, IDataTemplateStatics2>().GetExtensionInstance(element);
}

inline void DataTemplate::SetExtensionInstance(const Windows::UI::Xaml::FrameworkElement & element, const Windows::UI::Xaml::IDataTemplateExtension & value)
{
    get_activation_factory<DataTemplate, IDataTemplateStatics2>().SetExtensionInstance(element, value);
}

inline DataTemplateKey::DataTemplateKey()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<DataTemplateKey, IDataTemplateKeyFactory>().CreateInstance(outer, inner));
}

inline DataTemplateKey::DataTemplateKey(const Windows::IInspectable & dataType)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<DataTemplateKey, IDataTemplateKeyFactory>().CreateInstanceWithType(dataType, outer, inner));
}

inline DependencyObjectCollection::DependencyObjectCollection()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<DependencyObjectCollection, IDependencyObjectCollectionFactory>().CreateInstance(outer, inner));
}

inline Windows::IInspectable DependencyProperty::UnsetValue()
{
    return get_activation_factory<DependencyProperty, IDependencyPropertyStatics>().UnsetValue();
}

inline Windows::UI::Xaml::DependencyProperty DependencyProperty::Register(hstring_ref name, const Windows::UI::Xaml::Interop::TypeName & propertyType, const Windows::UI::Xaml::Interop::TypeName & ownerType, const Windows::UI::Xaml::PropertyMetadata & typeMetadata)
{
    return get_activation_factory<DependencyProperty, IDependencyPropertyStatics>().Register(name, propertyType, ownerType, typeMetadata);
}

inline Windows::UI::Xaml::DependencyProperty DependencyProperty::RegisterAttached(hstring_ref name, const Windows::UI::Xaml::Interop::TypeName & propertyType, const Windows::UI::Xaml::Interop::TypeName & ownerType, const Windows::UI::Xaml::PropertyMetadata & defaultMetadata)
{
    return get_activation_factory<DependencyProperty, IDependencyPropertyStatics>().RegisterAttached(name, propertyType, ownerType, defaultMetadata);
}

inline DispatcherTimer::DispatcherTimer()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<DispatcherTimer, IDispatcherTimerFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::Duration DurationHelper::Automatic()
{
    return get_activation_factory<DurationHelper, IDurationHelperStatics>().Automatic();
}

inline Windows::UI::Xaml::Duration DurationHelper::Forever()
{
    return get_activation_factory<DurationHelper, IDurationHelperStatics>().Forever();
}

inline int32_t DurationHelper::Compare(const Windows::UI::Xaml::Duration & duration1, const Windows::UI::Xaml::Duration & duration2)
{
    return get_activation_factory<DurationHelper, IDurationHelperStatics>().Compare(duration1, duration2);
}

inline Windows::UI::Xaml::Duration DurationHelper::FromTimeSpan(const Windows::Foundation::TimeSpan & timeSpan)
{
    return get_activation_factory<DurationHelper, IDurationHelperStatics>().FromTimeSpan(timeSpan);
}

inline bool DurationHelper::GetHasTimeSpan(const Windows::UI::Xaml::Duration & target)
{
    return get_activation_factory<DurationHelper, IDurationHelperStatics>().GetHasTimeSpan(target);
}

inline Windows::UI::Xaml::Duration DurationHelper::Add(const Windows::UI::Xaml::Duration & target, const Windows::UI::Xaml::Duration & duration)
{
    return get_activation_factory<DurationHelper, IDurationHelperStatics>().Add(target, duration);
}

inline bool DurationHelper::Equals(const Windows::UI::Xaml::Duration & target, const Windows::UI::Xaml::Duration & value)
{
    return get_activation_factory<DurationHelper, IDurationHelperStatics>().Equals(target, value);
}

inline Windows::UI::Xaml::Duration DurationHelper::Subtract(const Windows::UI::Xaml::Duration & target, const Windows::UI::Xaml::Duration & duration)
{
    return get_activation_factory<DurationHelper, IDurationHelperStatics>().Subtract(target, duration);
}

inline double ElementSoundPlayer::Volume()
{
    return get_activation_factory<ElementSoundPlayer, IElementSoundPlayerStatics>().Volume();
}

inline void ElementSoundPlayer::Volume(double value)
{
    get_activation_factory<ElementSoundPlayer, IElementSoundPlayerStatics>().Volume(value);
}

inline Windows::UI::Xaml::ElementSoundPlayerState ElementSoundPlayer::State()
{
    return get_activation_factory<ElementSoundPlayer, IElementSoundPlayerStatics>().State();
}

inline void ElementSoundPlayer::State(Windows::UI::Xaml::ElementSoundPlayerState value)
{
    get_activation_factory<ElementSoundPlayer, IElementSoundPlayerStatics>().State(value);
}

inline void ElementSoundPlayer::Play(Windows::UI::Xaml::ElementSoundKind sound)
{
    get_activation_factory<ElementSoundPlayer, IElementSoundPlayerStatics>().Play(sound);
}

inline EventTrigger::EventTrigger() :
    EventTrigger(activate_instance<EventTrigger>())
{}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::TagProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().TagProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::LanguageProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().LanguageProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::ActualWidthProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().ActualWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::ActualHeightProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().ActualHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::WidthProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().WidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::HeightProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().HeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MinWidthProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().MinWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MaxWidthProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().MaxWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MinHeightProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().MinHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MaxHeightProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().MaxHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::HorizontalAlignmentProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().HorizontalAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::VerticalAlignmentProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().VerticalAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::MarginProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().MarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::NameProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().NameProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::DataContextProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().DataContextProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::StyleProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().StyleProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FlowDirectionProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics>().FlowDirectionProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::RequestedThemeProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics2>().RequestedThemeProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::AllowFocusOnInteractionProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics4>().AllowFocusOnInteractionProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualMarginProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics4>().FocusVisualMarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualSecondaryThicknessProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics4>().FocusVisualSecondaryThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualPrimaryThicknessProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics4>().FocusVisualPrimaryThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualSecondaryBrushProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics4>().FocusVisualSecondaryBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::FocusVisualPrimaryBrushProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics4>().FocusVisualPrimaryBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty FrameworkElement::AllowFocusWhenDisabledProperty()
{
    return get_activation_factory<FrameworkElement, IFrameworkElementStatics4>().AllowFocusWhenDisabledProperty();
}

inline FrameworkView::FrameworkView() :
    FrameworkView(activate_instance<FrameworkView>())
{}

inline FrameworkViewSource::FrameworkViewSource() :
    FrameworkViewSource(activate_instance<FrameworkViewSource>())
{}

inline Windows::UI::Xaml::GridLength GridLengthHelper::Auto()
{
    return get_activation_factory<GridLengthHelper, IGridLengthHelperStatics>().Auto();
}

inline Windows::UI::Xaml::GridLength GridLengthHelper::FromPixels(double pixels)
{
    return get_activation_factory<GridLengthHelper, IGridLengthHelperStatics>().FromPixels(pixels);
}

inline Windows::UI::Xaml::GridLength GridLengthHelper::FromValueAndType(double value, Windows::UI::Xaml::GridUnitType type)
{
    return get_activation_factory<GridLengthHelper, IGridLengthHelperStatics>().FromValueAndType(value, type);
}

inline bool GridLengthHelper::GetIsAbsolute(const Windows::UI::Xaml::GridLength & target)
{
    return get_activation_factory<GridLengthHelper, IGridLengthHelperStatics>().GetIsAbsolute(target);
}

inline bool GridLengthHelper::GetIsAuto(const Windows::UI::Xaml::GridLength & target)
{
    return get_activation_factory<GridLengthHelper, IGridLengthHelperStatics>().GetIsAuto(target);
}

inline bool GridLengthHelper::GetIsStar(const Windows::UI::Xaml::GridLength & target)
{
    return get_activation_factory<GridLengthHelper, IGridLengthHelperStatics>().GetIsStar(target);
}

inline bool GridLengthHelper::Equals(const Windows::UI::Xaml::GridLength & target, const Windows::UI::Xaml::GridLength & value)
{
    return get_activation_factory<GridLengthHelper, IGridLengthHelperStatics>().Equals(target, value);
}

inline Windows::Foundation::Point PointHelper::FromCoordinates(float x, float y)
{
    return get_activation_factory<PointHelper, IPointHelperStatics>().FromCoordinates(x, y);
}

inline PropertyMetadata::PropertyMetadata(const Windows::IInspectable & defaultValue)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<PropertyMetadata, IPropertyMetadataFactory>().CreateInstanceWithDefaultValue(defaultValue, outer, inner));
}

inline PropertyMetadata::PropertyMetadata(const Windows::IInspectable & defaultValue, const Windows::UI::Xaml::PropertyChangedCallback & propertyChangedCallback)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<PropertyMetadata, IPropertyMetadataFactory>().CreateInstanceWithDefaultValueAndCallback(defaultValue, propertyChangedCallback, outer, inner));
}

inline Windows::UI::Xaml::PropertyMetadata PropertyMetadata::Create(const Windows::IInspectable & defaultValue)
{
    return get_activation_factory<PropertyMetadata, IPropertyMetadataStatics>().Create(defaultValue);
}

inline Windows::UI::Xaml::PropertyMetadata PropertyMetadata::Create(const Windows::IInspectable & defaultValue, const Windows::UI::Xaml::PropertyChangedCallback & propertyChangedCallback)
{
    return get_activation_factory<PropertyMetadata, IPropertyMetadataStatics>().Create(defaultValue, propertyChangedCallback);
}

inline Windows::UI::Xaml::PropertyMetadata PropertyMetadata::Create(const Windows::UI::Xaml::CreateDefaultValueCallback & createDefaultValueCallback)
{
    return get_activation_factory<PropertyMetadata, IPropertyMetadataStatics>().Create(createDefaultValueCallback);
}

inline Windows::UI::Xaml::PropertyMetadata PropertyMetadata::Create(const Windows::UI::Xaml::CreateDefaultValueCallback & createDefaultValueCallback, const Windows::UI::Xaml::PropertyChangedCallback & propertyChangedCallback)
{
    return get_activation_factory<PropertyMetadata, IPropertyMetadataStatics>().Create(createDefaultValueCallback, propertyChangedCallback);
}

inline PropertyPath::PropertyPath(hstring_ref path) :
    PropertyPath(get_activation_factory<PropertyPath, IPropertyPathFactory>().CreateInstance(path))
{}

inline Windows::Foundation::Rect RectHelper::Empty()
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().Empty();
}

inline Windows::Foundation::Rect RectHelper::FromCoordinatesAndDimensions(float x, float y, float width, float height)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().FromCoordinatesAndDimensions(x, y, width, height);
}

inline Windows::Foundation::Rect RectHelper::FromPoints(const Windows::Foundation::Point & point1, const Windows::Foundation::Point & point2)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().FromPoints(point1, point2);
}

inline Windows::Foundation::Rect RectHelper::FromLocationAndSize(const Windows::Foundation::Point & location, const Windows::Foundation::Size & size)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().FromLocationAndSize(location, size);
}

inline bool RectHelper::GetIsEmpty(const Windows::Foundation::Rect & target)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().GetIsEmpty(target);
}

inline float RectHelper::GetBottom(const Windows::Foundation::Rect & target)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().GetBottom(target);
}

inline float RectHelper::GetLeft(const Windows::Foundation::Rect & target)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().GetLeft(target);
}

inline float RectHelper::GetRight(const Windows::Foundation::Rect & target)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().GetRight(target);
}

inline float RectHelper::GetTop(const Windows::Foundation::Rect & target)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().GetTop(target);
}

inline bool RectHelper::Contains(const Windows::Foundation::Rect & target, const Windows::Foundation::Point & point)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().Contains(target, point);
}

inline bool RectHelper::Equals(const Windows::Foundation::Rect & target, const Windows::Foundation::Rect & value)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().Equals(target, value);
}

inline Windows::Foundation::Rect RectHelper::Intersect(const Windows::Foundation::Rect & target, const Windows::Foundation::Rect & rect)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().Intersect(target, rect);
}

inline Windows::Foundation::Rect RectHelper::Union(const Windows::Foundation::Rect & target, const Windows::Foundation::Point & point)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().Union(target, point);
}

inline Windows::Foundation::Rect RectHelper::Union(const Windows::Foundation::Rect & target, const Windows::Foundation::Rect & rect)
{
    return get_activation_factory<RectHelper, IRectHelperStatics>().Union(target, rect);
}

inline ResourceDictionary::ResourceDictionary()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<ResourceDictionary, IResourceDictionaryFactory>().CreateInstance(outer, inner));
}

inline RoutedEventArgs::RoutedEventArgs()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<RoutedEventArgs, IRoutedEventArgsFactory>().CreateInstance(outer, inner));
}

inline Setter::Setter() :
    Setter(activate_instance<Setter>())
{}

inline Setter::Setter(const Windows::UI::Xaml::DependencyProperty & targetProperty, const Windows::IInspectable & value) :
    Setter(get_activation_factory<Setter, ISetterFactory>().CreateInstance(targetProperty, value))
{}

inline SetterBaseCollection::SetterBaseCollection() :
    SetterBaseCollection(activate_instance<SetterBaseCollection>())
{}

inline Windows::Foundation::Size SizeHelper::Empty()
{
    return get_activation_factory<SizeHelper, ISizeHelperStatics>().Empty();
}

inline Windows::Foundation::Size SizeHelper::FromDimensions(float width, float height)
{
    return get_activation_factory<SizeHelper, ISizeHelperStatics>().FromDimensions(width, height);
}

inline bool SizeHelper::GetIsEmpty(const Windows::Foundation::Size & target)
{
    return get_activation_factory<SizeHelper, ISizeHelperStatics>().GetIsEmpty(target);
}

inline bool SizeHelper::Equals(const Windows::Foundation::Size & target, const Windows::Foundation::Size & value)
{
    return get_activation_factory<SizeHelper, ISizeHelperStatics>().Equals(target, value);
}

inline StateTrigger::StateTrigger() :
    StateTrigger(activate_instance<StateTrigger>())
{}

inline Windows::UI::Xaml::DependencyProperty StateTrigger::IsActiveProperty()
{
    return get_activation_factory<StateTrigger, IStateTriggerStatics>().IsActiveProperty();
}

inline Style::Style() :
    Style(activate_instance<Style>())
{}

inline Style::Style(const Windows::UI::Xaml::Interop::TypeName & targetType) :
    Style(get_activation_factory<Style, IStyleFactory>().CreateInstance(targetType))
{}

inline TargetPropertyPath::TargetPropertyPath() :
    TargetPropertyPath(activate_instance<TargetPropertyPath>())
{}

inline TargetPropertyPath::TargetPropertyPath(const Windows::UI::Xaml::DependencyProperty & targetProperty) :
    TargetPropertyPath(get_activation_factory<TargetPropertyPath, ITargetPropertyPathFactory>().CreateInstance(targetProperty))
{}

inline Windows::UI::Xaml::Thickness ThicknessHelper::FromLengths(double left, double top, double right, double bottom)
{
    return get_activation_factory<ThicknessHelper, IThicknessHelperStatics>().FromLengths(left, top, right, bottom);
}

inline Windows::UI::Xaml::Thickness ThicknessHelper::FromUniformLength(double uniformLength)
{
    return get_activation_factory<ThicknessHelper, IThicknessHelperStatics>().FromUniformLength(uniformLength);
}

inline TriggerActionCollection::TriggerActionCollection() :
    TriggerActionCollection(activate_instance<TriggerActionCollection>())
{}

inline Windows::UI::Xaml::RoutedEvent UIElement::KeyDownEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().KeyDownEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::KeyUpEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().KeyUpEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerEnteredEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().PointerEnteredEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerPressedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().PointerPressedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerMovedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().PointerMovedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerReleasedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().PointerReleasedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerExitedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().PointerExitedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerCaptureLostEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().PointerCaptureLostEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerCanceledEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().PointerCanceledEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::PointerWheelChangedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().PointerWheelChangedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::TappedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().TappedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DoubleTappedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().DoubleTappedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::HoldingEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().HoldingEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::RightTappedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().RightTappedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationStartingEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().ManipulationStartingEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationInertiaStartingEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().ManipulationInertiaStartingEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationStartedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().ManipulationStartedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationDeltaEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().ManipulationDeltaEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::ManipulationCompletedEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().ManipulationCompletedEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DragEnterEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().DragEnterEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DragLeaveEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().DragLeaveEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DragOverEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().DragOverEvent();
}

inline Windows::UI::Xaml::RoutedEvent UIElement::DropEvent()
{
    return get_activation_factory<UIElement, IUIElementStatics>().DropEvent();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::AllowDropProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().AllowDropProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::OpacityProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().OpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ClipProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().ClipProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::RenderTransformProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().RenderTransformProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ProjectionProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().ProjectionProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::RenderTransformOriginProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().RenderTransformOriginProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsHitTestVisibleProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().IsHitTestVisibleProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::VisibilityProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().VisibilityProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::UseLayoutRoundingProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().UseLayoutRoundingProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::TransitionsProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().TransitionsProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::CacheModeProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().CacheModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsTapEnabledProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().IsTapEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsDoubleTapEnabledProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().IsDoubleTapEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsRightTapEnabledProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().IsRightTapEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsHoldingEnabledProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().IsHoldingEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ManipulationModeProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().ManipulationModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::PointerCapturesProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics>().PointerCapturesProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::CompositeModeProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics2>().CompositeModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::Transform3DProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics3>().Transform3DProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::CanDragProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics3>().CanDragProperty();
}

inline bool UIElement::TryStartDirectManipulation(const Windows::UI::Xaml::Input::Pointer & value)
{
    return get_activation_factory<UIElement, IUIElementStatics3>().TryStartDirectManipulation(value);
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ContextFlyoutProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics4>().ContextFlyoutProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::ExitDisplayModeOnAccessKeyInvokedProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics4>().ExitDisplayModeOnAccessKeyInvokedProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::IsAccessKeyScopeProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics4>().IsAccessKeyScopeProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::AccessKeyScopeOwnerProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics4>().AccessKeyScopeOwnerProperty();
}

inline Windows::UI::Xaml::DependencyProperty UIElement::AccessKeyProperty()
{
    return get_activation_factory<UIElement, IUIElementStatics4>().AccessKeyProperty();
}

inline VisualState::VisualState() :
    VisualState(activate_instance<VisualState>())
{}

inline VisualStateChangedEventArgs::VisualStateChangedEventArgs() :
    VisualStateChangedEventArgs(activate_instance<VisualStateChangedEventArgs>())
{}

inline VisualStateGroup::VisualStateGroup() :
    VisualStateGroup(activate_instance<VisualStateGroup>())
{}

inline VisualStateManager::VisualStateManager()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<VisualStateManager, IVisualStateManagerFactory>().CreateInstance(outer, inner));
}

inline Windows::Foundation::Collections::IVector<Windows::UI::Xaml::VisualStateGroup> VisualStateManager::GetVisualStateGroups(const Windows::UI::Xaml::FrameworkElement & obj)
{
    return get_activation_factory<VisualStateManager, IVisualStateManagerStatics>().GetVisualStateGroups(obj);
}

inline Windows::UI::Xaml::DependencyProperty VisualStateManager::CustomVisualStateManagerProperty()
{
    return get_activation_factory<VisualStateManager, IVisualStateManagerStatics>().CustomVisualStateManagerProperty();
}

inline Windows::UI::Xaml::VisualStateManager VisualStateManager::GetCustomVisualStateManager(const Windows::UI::Xaml::FrameworkElement & obj)
{
    return get_activation_factory<VisualStateManager, IVisualStateManagerStatics>().GetCustomVisualStateManager(obj);
}

inline void VisualStateManager::SetCustomVisualStateManager(const Windows::UI::Xaml::FrameworkElement & obj, const Windows::UI::Xaml::VisualStateManager & value)
{
    get_activation_factory<VisualStateManager, IVisualStateManagerStatics>().SetCustomVisualStateManager(obj, value);
}

inline bool VisualStateManager::GoToState(const Windows::UI::Xaml::Controls::Control & control, hstring_ref stateName, bool useTransitions)
{
    return get_activation_factory<VisualStateManager, IVisualStateManagerStatics>().GoToState(control, stateName, useTransitions);
}

inline VisualTransition::VisualTransition()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<VisualTransition, IVisualTransitionFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::Window Window::Current()
{
    return get_activation_factory<Window, IWindowStatics>().Current();
}

}

}
