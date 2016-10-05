// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.Devices.Input.3.h"
#include "internal/Windows.UI.Input.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.UI.Core.3.h"
#include "internal/Windows.UI.Xaml.Input.3.h"
#include "Windows.UI.Xaml.h"
#include "internal/Windows.UI.Xaml.Input.5.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Input {

template <typename L> DoubleTappedEventHandler::DoubleTappedEventHandler(L lambda) :
    DoubleTappedEventHandler(impl::make_delegate<impl_DoubleTappedEventHandler<L>, DoubleTappedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DoubleTappedEventHandler::DoubleTappedEventHandler(F * function) :
    DoubleTappedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DoubleTappedEventHandler::DoubleTappedEventHandler(O * object, M method) :
    DoubleTappedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DoubleTappedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> HoldingEventHandler::HoldingEventHandler(L lambda) :
    HoldingEventHandler(impl::make_delegate<impl_HoldingEventHandler<L>, HoldingEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> HoldingEventHandler::HoldingEventHandler(F * function) :
    HoldingEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> HoldingEventHandler::HoldingEventHandler(O * object, M method) :
    HoldingEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void HoldingEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::HoldingRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> KeyEventHandler::KeyEventHandler(L lambda) :
    KeyEventHandler(impl::make_delegate<impl_KeyEventHandler<L>, KeyEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> KeyEventHandler::KeyEventHandler(F * function) :
    KeyEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> KeyEventHandler::KeyEventHandler(O * object, M method) :
    KeyEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void KeyEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::KeyRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> ManipulationCompletedEventHandler::ManipulationCompletedEventHandler(L lambda) :
    ManipulationCompletedEventHandler(impl::make_delegate<impl_ManipulationCompletedEventHandler<L>, ManipulationCompletedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ManipulationCompletedEventHandler::ManipulationCompletedEventHandler(F * function) :
    ManipulationCompletedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ManipulationCompletedEventHandler::ManipulationCompletedEventHandler(O * object, M method) :
    ManipulationCompletedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ManipulationCompletedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationCompletedRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> ManipulationDeltaEventHandler::ManipulationDeltaEventHandler(L lambda) :
    ManipulationDeltaEventHandler(impl::make_delegate<impl_ManipulationDeltaEventHandler<L>, ManipulationDeltaEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ManipulationDeltaEventHandler::ManipulationDeltaEventHandler(F * function) :
    ManipulationDeltaEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ManipulationDeltaEventHandler::ManipulationDeltaEventHandler(O * object, M method) :
    ManipulationDeltaEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ManipulationDeltaEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> ManipulationInertiaStartingEventHandler::ManipulationInertiaStartingEventHandler(L lambda) :
    ManipulationInertiaStartingEventHandler(impl::make_delegate<impl_ManipulationInertiaStartingEventHandler<L>, ManipulationInertiaStartingEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ManipulationInertiaStartingEventHandler::ManipulationInertiaStartingEventHandler(F * function) :
    ManipulationInertiaStartingEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ManipulationInertiaStartingEventHandler::ManipulationInertiaStartingEventHandler(O * object, M method) :
    ManipulationInertiaStartingEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ManipulationInertiaStartingEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationInertiaStartingRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> ManipulationStartedEventHandler::ManipulationStartedEventHandler(L lambda) :
    ManipulationStartedEventHandler(impl::make_delegate<impl_ManipulationStartedEventHandler<L>, ManipulationStartedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ManipulationStartedEventHandler::ManipulationStartedEventHandler(F * function) :
    ManipulationStartedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ManipulationStartedEventHandler::ManipulationStartedEventHandler(O * object, M method) :
    ManipulationStartedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ManipulationStartedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> ManipulationStartingEventHandler::ManipulationStartingEventHandler(L lambda) :
    ManipulationStartingEventHandler(impl::make_delegate<impl_ManipulationStartingEventHandler<L>, ManipulationStartingEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ManipulationStartingEventHandler::ManipulationStartingEventHandler(F * function) :
    ManipulationStartingEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ManipulationStartingEventHandler::ManipulationStartingEventHandler(O * object, M method) :
    ManipulationStartingEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ManipulationStartingEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::ManipulationStartingRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> PointerEventHandler::PointerEventHandler(L lambda) :
    PointerEventHandler(impl::make_delegate<impl_PointerEventHandler<L>, PointerEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> PointerEventHandler::PointerEventHandler(F * function) :
    PointerEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> PointerEventHandler::PointerEventHandler(O * object, M method) :
    PointerEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void PointerEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::PointerRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> RightTappedEventHandler::RightTappedEventHandler(L lambda) :
    RightTappedEventHandler(impl::make_delegate<impl_RightTappedEventHandler<L>, RightTappedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> RightTappedEventHandler::RightTappedEventHandler(F * function) :
    RightTappedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> RightTappedEventHandler::RightTappedEventHandler(O * object, M method) :
    RightTappedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void RightTappedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::RightTappedRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> TappedEventHandler::TappedEventHandler(L lambda) :
    TappedEventHandler(impl::make_delegate<impl_TappedEventHandler<L>, TappedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> TappedEventHandler::TappedEventHandler(F * function) :
    TappedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> TappedEventHandler::TappedEventHandler(O * object, M method) :
    TappedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void TappedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Input::TappedRoutedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs>
{
    HRESULT __stdcall get_PressedKeys(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PressedKeys());
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
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs>
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyManager> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyManager>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IAccessKeyManagerStatics> : produce_base<D, Windows::UI::Xaml::Input::IAccessKeyManagerStatics>
{
    HRESULT __stdcall get_IsDisplayModeEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDisplayModeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_IsDisplayModeEnabledChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().IsDisplayModeEnabledChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_IsDisplayModeEnabledChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().IsDisplayModeEnabledChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ExitDisplayMode() noexcept override
    {
        try
        {
            this->shim().ExitDisplayMode();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::ICommand> : produce_base<D, Windows::UI::Xaml::Input::ICommand>
{
    HRESULT __stdcall add_CanExecuteChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CanExecuteChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CanExecuteChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CanExecuteChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanExecute(abi_arg_in<Windows::IInspectable> parameter, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CanExecute(*reinterpret_cast<const Windows::IInspectable *>(&parameter)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Execute(abi_arg_in<Windows::IInspectable> parameter) noexcept override
    {
        try
        {
            this->shim().Execute(*reinterpret_cast<const Windows::IInspectable *>(&parameter));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IContextRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IContextRequestedEventArgs>
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

    HRESULT __stdcall abi_TryGetPosition(abi_arg_in<Windows::UI::Xaml::IUIElement> relativeTo, abi_arg_out<Windows::Foundation::Point> point, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryGetPosition(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&relativeTo), *point));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::UI::Xaml::Input::IFocusManager> : produce_base<D, Windows::UI::Xaml::Input::IFocusManager>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IFocusManagerStatics> : produce_base<D, Windows::UI::Xaml::Input::IFocusManagerStatics>
{
    HRESULT __stdcall abi_GetFocusedElement(abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetFocusedElement());
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
struct produce<D, Windows::UI::Xaml::Input::IFocusManagerStatics2> : produce_base<D, Windows::UI::Xaml::Input::IFocusManagerStatics2>
{
    HRESULT __stdcall abi_TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().TryMoveFocus(focusNavigationDirection));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IFocusManagerStatics3> : produce_base<D, Windows::UI::Xaml::Input::IFocusManagerStatics3>
{
    HRESULT __stdcall abi_FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, abi_arg_out<Windows::UI::Xaml::IUIElement> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindNextFocusableElement(focusNavigationDirection));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindNextFocusableElementWithHint(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, abi_arg_in<Windows::Foundation::Rect> hintRect, abi_arg_out<Windows::UI::Xaml::IUIElement> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindNextFocusableElement(focusNavigationDirection, *reinterpret_cast<const Windows::Foundation::Rect *>(&hintRect)));
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
struct produce<D, Windows::UI::Xaml::Input::IHoldingRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IHoldingRoutedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HoldingState(Windows::UI::Input::HoldingState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HoldingState());
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::UI::Xaml::Input::IInertiaExpansionBehavior> : produce_base<D, Windows::UI::Xaml::Input::IInertiaExpansionBehavior>
{
    HRESULT __stdcall get_DesiredDeceleration(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredDeceleration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredDeceleration(double value) noexcept override
    {
        try
        {
            this->shim().DesiredDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredExpansion(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredExpansion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredExpansion(double value) noexcept override
    {
        try
        {
            this->shim().DesiredExpansion(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IInertiaRotationBehavior> : produce_base<D, Windows::UI::Xaml::Input::IInertiaRotationBehavior>
{
    HRESULT __stdcall get_DesiredDeceleration(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredDeceleration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredDeceleration(double value) noexcept override
    {
        try
        {
            this->shim().DesiredDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredRotation(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredRotation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredRotation(double value) noexcept override
    {
        try
        {
            this->shim().DesiredRotation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IInertiaTranslationBehavior> : produce_base<D, Windows::UI::Xaml::Input::IInertiaTranslationBehavior>
{
    HRESULT __stdcall get_DesiredDeceleration(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredDeceleration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredDeceleration(double value) noexcept override
    {
        try
        {
            this->shim().DesiredDeceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredDisplacement(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredDisplacement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredDisplacement(double value) noexcept override
    {
        try
        {
            this->shim().DesiredDisplacement(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IInputScope> : produce_base<D, Windows::UI::Xaml::Input::IInputScope>
{
    HRESULT __stdcall get_Names(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::InputScopeName>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Names());
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
struct produce<D, Windows::UI::Xaml::Input::IInputScopeName> : produce_base<D, Windows::UI::Xaml::Input::IInputScopeName>
{
    HRESULT __stdcall get_NameValue(Windows::UI::Xaml::Input::InputScopeNameValue * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NameValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NameValue(Windows::UI::Xaml::Input::InputScopeNameValue value) noexcept override
    {
        try
        {
            this->shim().NameValue(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IInputScopeNameFactory> : produce_base<D, Windows::UI::Xaml::Input::IInputScopeNameFactory>
{
    HRESULT __stdcall abi_CreateInstance(Windows::UI::Xaml::Input::InputScopeNameValue nameValue, abi_arg_out<Windows::UI::Xaml::Input::IInputScopeName> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstance(nameValue));
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
struct produce<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs>
{
    HRESULT __stdcall get_Key(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Key());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(abi_arg_out<Windows::UI::Core::CorePhysicalKeyStatus> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyStatus());
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs2> : produce_base<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs2>
{
    HRESULT __stdcall get_OriginalKey(Windows::System::VirtualKey * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OriginalKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs3> : produce_base<D, Windows::UI::Xaml::Input::IKeyRoutedEventArgs3>
{
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
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
struct produce<D, Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs>
{
    HRESULT __stdcall get_Container(abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Container());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInertial(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInertial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(abi_arg_out<Windows::UI::Input::ManipulationVelocities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Velocities());
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationDeltaRoutedEventArgs>
{
    HRESULT __stdcall get_Container(abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Container());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInertial(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInertial());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Delta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(abi_arg_out<Windows::UI::Input::ManipulationVelocities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Velocities());
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
struct produce<D, Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationInertiaStartingRoutedEventArgs>
{
    HRESULT __stdcall get_Container(abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Container());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExpansionBehavior(abi_arg_out<Windows::UI::Xaml::Input::IInertiaExpansionBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExpansionBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExpansionBehavior(abi_arg_in<Windows::UI::Xaml::Input::IInertiaExpansionBehavior> value) noexcept override
    {
        try
        {
            this->shim().ExpansionBehavior(*reinterpret_cast<const Windows::UI::Xaml::Input::InertiaExpansionBehavior *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RotationBehavior(abi_arg_out<Windows::UI::Xaml::Input::IInertiaRotationBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RotationBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RotationBehavior(abi_arg_in<Windows::UI::Xaml::Input::IInertiaRotationBehavior> value) noexcept override
    {
        try
        {
            this->shim().RotationBehavior(*reinterpret_cast<const Windows::UI::Xaml::Input::InertiaRotationBehavior *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TranslationBehavior(abi_arg_out<Windows::UI::Xaml::Input::IInertiaTranslationBehavior> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TranslationBehavior());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TranslationBehavior(abi_arg_in<Windows::UI::Xaml::Input::IInertiaTranslationBehavior> value) noexcept override
    {
        try
        {
            this->shim().TranslationBehavior(*reinterpret_cast<const Windows::UI::Xaml::Input::InertiaTranslationBehavior *>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Delta(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Delta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Velocities(abi_arg_out<Windows::UI::Input::ManipulationVelocities> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Velocities());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IManipulationPivot> : produce_base<D, Windows::UI::Xaml::Input::IManipulationPivot>
{
    HRESULT __stdcall get_Center(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Center(abi_arg_in<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            this->shim().Center(*reinterpret_cast<const Windows::Foundation::Point *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Radius(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Radius());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Radius(double value) noexcept override
    {
        try
        {
            this->shim().Radius(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IManipulationPivotFactory> : produce_base<D, Windows::UI::Xaml::Input::IManipulationPivotFactory>
{
    HRESULT __stdcall abi_CreateInstanceWithCenterAndRadius(abi_arg_in<Windows::Foundation::Point> center, double radius, abi_arg_out<Windows::UI::Xaml::Input::IManipulationPivot> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithCenterAndRadius(*reinterpret_cast<const Windows::Foundation::Point *>(&center), radius));
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
struct produce<D, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs>
{
    HRESULT __stdcall get_Container(abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Container());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::Foundation::Point> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cumulative(abi_arg_out<Windows::UI::Input::ManipulationDelta> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cumulative());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
struct produce<D, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgsFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IManipulationStartingRoutedEventArgs>
{
    HRESULT __stdcall get_Mode(Windows::UI::Xaml::Input::ManipulationModes * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::UI::Xaml::Input::ManipulationModes value) noexcept override
    {
        try
        {
            this->shim().Mode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Container(abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Container());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Container(abi_arg_in<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            this->shim().Container(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pivot(abi_arg_out<Windows::UI::Xaml::Input::IManipulationPivot> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pivot());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Pivot(abi_arg_in<Windows::UI::Xaml::Input::IManipulationPivot> value) noexcept override
    {
        try
        {
            this->shim().Pivot(*reinterpret_cast<const Windows::UI::Xaml::Input::ManipulationPivot *>(&value));
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::UI::Xaml::Input::IPointer> : produce_base<D, Windows::UI::Xaml::Input::IPointer>
{
    HRESULT __stdcall get_PointerId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInContact(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInContact());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsInRange(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsInRange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Input::IPointerRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IPointerRoutedEventArgs>
{
    HRESULT __stdcall get_Pointer(abi_arg_out<Windows::UI::Xaml::Input::IPointer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pointer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyModifiers(Windows::System::VirtualKeyModifiers * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KeyModifiers());
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall abi_GetCurrentPoint(abi_arg_in<Windows::UI::Xaml::IUIElement> relativeTo, abi_arg_out<Windows::UI::Input::IPointerPoint> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetCurrentPoint(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&relativeTo)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIntermediatePoints(abi_arg_in<Windows::UI::Xaml::IUIElement> relativeTo, abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetIntermediatePoints(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&relativeTo)));
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
struct produce<D, Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
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
struct produce<D, Windows::UI::Xaml::Input::ITappedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Input::ITappedRoutedEventArgs>
{
    HRESULT __stdcall get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerDeviceType());
            return S_OK;
        }
        catch (...)
        {
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

}

namespace Windows::UI::Xaml::Input {

template <typename D> event_token impl_ICommand<D>::CanExecuteChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const ICommand &>(static_cast<const D &>(*this))->add_CanExecuteChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<ICommand> impl_ICommand<D>::CanExecuteChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, ICommand>(this, &ABI::Windows::UI::Xaml::Input::ICommand::remove_CanExecuteChanged, CanExecuteChanged(value));
}

template <typename D> void impl_ICommand<D>::CanExecuteChanged(event_token token) const
{
    check_hresult(static_cast<const ICommand &>(static_cast<const D &>(*this))->remove_CanExecuteChanged(token));
}

template <typename D> bool impl_ICommand<D>::CanExecute(const Windows::IInspectable & parameter) const
{
    bool returnValue {};
    check_hresult(static_cast<const ICommand &>(static_cast<const D &>(*this))->abi_CanExecute(get(parameter), &returnValue));
    return returnValue;
}

template <typename D> void impl_ICommand<D>::Execute(const Windows::IInspectable & parameter) const
{
    check_hresult(static_cast<const ICommand &>(static_cast<const D &>(*this))->abi_Execute(get(parameter)));
}

template <typename D> hstring impl_IAccessKeyDisplayRequestedEventArgs<D>::PressedKeys() const
{
    hstring value;
    check_hresult(static_cast<const IAccessKeyDisplayRequestedEventArgs &>(static_cast<const D &>(*this))->get_PressedKeys(put(value)));
    return value;
}

template <typename D> bool impl_IAccessKeyInvokedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IAccessKeyInvokedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IAccessKeyInvokedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IAccessKeyInvokedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> bool impl_IAccessKeyManagerStatics<D>::IsDisplayModeEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IAccessKeyManagerStatics &>(static_cast<const D &>(*this))->get_IsDisplayModeEnabled(&value));
    return value;
}

template <typename D> event_token impl_IAccessKeyManagerStatics<D>::IsDisplayModeEnabledChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IAccessKeyManagerStatics &>(static_cast<const D &>(*this))->add_IsDisplayModeEnabledChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IAccessKeyManagerStatics> impl_IAccessKeyManagerStatics<D>::IsDisplayModeEnabledChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IAccessKeyManagerStatics>(this, &ABI::Windows::UI::Xaml::Input::IAccessKeyManagerStatics::remove_IsDisplayModeEnabledChanged, IsDisplayModeEnabledChanged(value));
}

template <typename D> void impl_IAccessKeyManagerStatics<D>::IsDisplayModeEnabledChanged(event_token token) const
{
    check_hresult(static_cast<const IAccessKeyManagerStatics &>(static_cast<const D &>(*this))->remove_IsDisplayModeEnabledChanged(token));
}

template <typename D> void impl_IAccessKeyManagerStatics<D>::ExitDisplayMode() const
{
    check_hresult(static_cast<const IAccessKeyManagerStatics &>(static_cast<const D &>(*this))->abi_ExitDisplayMode());
}

template <typename D> Windows::IInspectable impl_IFocusManagerStatics<D>::GetFocusedElement() const
{
    Windows::IInspectable returnValue;
    check_hresult(static_cast<const IFocusManagerStatics &>(static_cast<const D &>(*this))->abi_GetFocusedElement(put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IFocusManagerStatics2<D>::TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection) const
{
    bool returnValue {};
    check_hresult(static_cast<const IFocusManagerStatics2 &>(static_cast<const D &>(*this))->abi_TryMoveFocus(focusNavigationDirection, &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::UIElement impl_IFocusManagerStatics3<D>::FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection) const
{
    Windows::UI::Xaml::UIElement result { nullptr };
    check_hresult(static_cast<const IFocusManagerStatics3 &>(static_cast<const D &>(*this))->abi_FindNextFocusableElement(focusNavigationDirection, put(result)));
    return result;
}

template <typename D> Windows::UI::Xaml::UIElement impl_IFocusManagerStatics3<D>::FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, const Windows::Foundation::Rect & hintRect) const
{
    Windows::UI::Xaml::UIElement result { nullptr };
    check_hresult(static_cast<const IFocusManagerStatics3 &>(static_cast<const D &>(*this))->abi_FindNextFocusableElementWithHint(focusNavigationDirection, get(hintRect), put(result)));
    return result;
}

template <typename D> double impl_IInertiaExpansionBehavior<D>::DesiredDeceleration() const
{
    double value {};
    check_hresult(static_cast<const IInertiaExpansionBehavior &>(static_cast<const D &>(*this))->get_DesiredDeceleration(&value));
    return value;
}

template <typename D> void impl_IInertiaExpansionBehavior<D>::DesiredDeceleration(double value) const
{
    check_hresult(static_cast<const IInertiaExpansionBehavior &>(static_cast<const D &>(*this))->put_DesiredDeceleration(value));
}

template <typename D> double impl_IInertiaExpansionBehavior<D>::DesiredExpansion() const
{
    double value {};
    check_hresult(static_cast<const IInertiaExpansionBehavior &>(static_cast<const D &>(*this))->get_DesiredExpansion(&value));
    return value;
}

template <typename D> void impl_IInertiaExpansionBehavior<D>::DesiredExpansion(double value) const
{
    check_hresult(static_cast<const IInertiaExpansionBehavior &>(static_cast<const D &>(*this))->put_DesiredExpansion(value));
}

template <typename D> double impl_IInertiaRotationBehavior<D>::DesiredDeceleration() const
{
    double value {};
    check_hresult(static_cast<const IInertiaRotationBehavior &>(static_cast<const D &>(*this))->get_DesiredDeceleration(&value));
    return value;
}

template <typename D> void impl_IInertiaRotationBehavior<D>::DesiredDeceleration(double value) const
{
    check_hresult(static_cast<const IInertiaRotationBehavior &>(static_cast<const D &>(*this))->put_DesiredDeceleration(value));
}

template <typename D> double impl_IInertiaRotationBehavior<D>::DesiredRotation() const
{
    double value {};
    check_hresult(static_cast<const IInertiaRotationBehavior &>(static_cast<const D &>(*this))->get_DesiredRotation(&value));
    return value;
}

template <typename D> void impl_IInertiaRotationBehavior<D>::DesiredRotation(double value) const
{
    check_hresult(static_cast<const IInertiaRotationBehavior &>(static_cast<const D &>(*this))->put_DesiredRotation(value));
}

template <typename D> double impl_IInertiaTranslationBehavior<D>::DesiredDeceleration() const
{
    double value {};
    check_hresult(static_cast<const IInertiaTranslationBehavior &>(static_cast<const D &>(*this))->get_DesiredDeceleration(&value));
    return value;
}

template <typename D> void impl_IInertiaTranslationBehavior<D>::DesiredDeceleration(double value) const
{
    check_hresult(static_cast<const IInertiaTranslationBehavior &>(static_cast<const D &>(*this))->put_DesiredDeceleration(value));
}

template <typename D> double impl_IInertiaTranslationBehavior<D>::DesiredDisplacement() const
{
    double value {};
    check_hresult(static_cast<const IInertiaTranslationBehavior &>(static_cast<const D &>(*this))->get_DesiredDisplacement(&value));
    return value;
}

template <typename D> void impl_IInertiaTranslationBehavior<D>::DesiredDisplacement(double value) const
{
    check_hresult(static_cast<const IInertiaTranslationBehavior &>(static_cast<const D &>(*this))->put_DesiredDisplacement(value));
}

template <typename D> Windows::Foundation::Point impl_IManipulationPivot<D>::Center() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IManipulationPivot &>(static_cast<const D &>(*this))->get_Center(put(value)));
    return value;
}

template <typename D> void impl_IManipulationPivot<D>::Center(const Windows::Foundation::Point & value) const
{
    check_hresult(static_cast<const IManipulationPivot &>(static_cast<const D &>(*this))->put_Center(get(value)));
}

template <typename D> double impl_IManipulationPivot<D>::Radius() const
{
    double value {};
    check_hresult(static_cast<const IManipulationPivot &>(static_cast<const D &>(*this))->get_Radius(&value));
    return value;
}

template <typename D> void impl_IManipulationPivot<D>::Radius(double value) const
{
    check_hresult(static_cast<const IManipulationPivot &>(static_cast<const D &>(*this))->put_Radius(value));
}

template <typename D> Windows::UI::Xaml::Input::ManipulationPivot impl_IManipulationPivotFactory<D>::CreateInstanceWithCenterAndRadius(const Windows::Foundation::Point & center, double radius) const
{
    Windows::UI::Xaml::Input::ManipulationPivot instance { nullptr };
    check_hresult(static_cast<const IManipulationPivotFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithCenterAndRadius(get(center), radius, put(instance)));
    return instance;
}

template <typename D> uint32_t impl_IPointer<D>::PointerId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IPointer &>(static_cast<const D &>(*this))->get_PointerId(&value));
    return value;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IPointer<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IPointer &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> bool impl_IPointer<D>::IsInContact() const
{
    bool value {};
    check_hresult(static_cast<const IPointer &>(static_cast<const D &>(*this))->get_IsInContact(&value));
    return value;
}

template <typename D> bool impl_IPointer<D>::IsInRange() const
{
    bool value {};
    check_hresult(static_cast<const IPointer &>(static_cast<const D &>(*this))->get_IsInRange(&value));
    return value;
}

template <typename D> bool impl_IContextRequestedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IContextRequestedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IContextRequestedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IContextRequestedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> bool impl_IContextRequestedEventArgs<D>::TryGetPosition(const Windows::UI::Xaml::UIElement & relativeTo, Windows::Foundation::Point & point) const
{
    bool returnValue {};
    check_hresult(static_cast<const IContextRequestedEventArgs &>(static_cast<const D &>(*this))->abi_TryGetPosition(get(relativeTo), put(point), &returnValue));
    return returnValue;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IDoubleTappedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IDoubleTappedRoutedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> bool impl_IDoubleTappedRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IDoubleTappedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IDoubleTappedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IDoubleTappedRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Point impl_IDoubleTappedRoutedEventArgs<D>::GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const
{
    Windows::Foundation::Point returnValue {};
    check_hresult(static_cast<const IDoubleTappedRoutedEventArgs &>(static_cast<const D &>(*this))->abi_GetPosition(get(relativeTo), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IHoldingRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IHoldingRoutedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::UI::Input::HoldingState impl_IHoldingRoutedEventArgs<D>::HoldingState() const
{
    Windows::UI::Input::HoldingState value {};
    check_hresult(static_cast<const IHoldingRoutedEventArgs &>(static_cast<const D &>(*this))->get_HoldingState(&value));
    return value;
}

template <typename D> bool impl_IHoldingRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IHoldingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IHoldingRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IHoldingRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Point impl_IHoldingRoutedEventArgs<D>::GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const
{
    Windows::Foundation::Point returnValue {};
    check_hresult(static_cast<const IHoldingRoutedEventArgs &>(static_cast<const D &>(*this))->abi_GetPosition(get(relativeTo), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::InputScopeName> impl_IInputScope<D>::Names() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Input::InputScopeName> value;
    check_hresult(static_cast<const IInputScope &>(static_cast<const D &>(*this))->get_Names(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::InputScopeNameValue impl_IInputScopeName<D>::NameValue() const
{
    Windows::UI::Xaml::Input::InputScopeNameValue value {};
    check_hresult(static_cast<const IInputScopeName &>(static_cast<const D &>(*this))->get_NameValue(&value));
    return value;
}

template <typename D> void impl_IInputScopeName<D>::NameValue(Windows::UI::Xaml::Input::InputScopeNameValue value) const
{
    check_hresult(static_cast<const IInputScopeName &>(static_cast<const D &>(*this))->put_NameValue(value));
}

template <typename D> Windows::UI::Xaml::Input::InputScopeName impl_IInputScopeNameFactory<D>::CreateInstance(Windows::UI::Xaml::Input::InputScopeNameValue nameValue) const
{
    Windows::UI::Xaml::Input::InputScopeName instance { nullptr };
    check_hresult(static_cast<const IInputScopeNameFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(nameValue, put(instance)));
    return instance;
}

template <typename D> Windows::System::VirtualKey impl_IKeyRoutedEventArgs<D>::Key() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IKeyRoutedEventArgs &>(static_cast<const D &>(*this))->get_Key(&value));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus impl_IKeyRoutedEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value {};
    check_hresult(static_cast<const IKeyRoutedEventArgs &>(static_cast<const D &>(*this))->get_KeyStatus(put(value)));
    return value;
}

template <typename D> bool impl_IKeyRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IKeyRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IKeyRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IKeyRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::System::VirtualKey impl_IKeyRoutedEventArgs2<D>::OriginalKey() const
{
    Windows::System::VirtualKey value {};
    check_hresult(static_cast<const IKeyRoutedEventArgs2 &>(static_cast<const D &>(*this))->get_OriginalKey(&value));
    return value;
}

template <typename D> hstring impl_IKeyRoutedEventArgs3<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IKeyRoutedEventArgs3 &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement impl_IManipulationCompletedRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IManipulationCompletedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Container(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IManipulationCompletedRoutedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IManipulationCompletedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> bool impl_IManipulationCompletedRoutedEventArgs<D>::IsInertial() const
{
    bool value {};
    check_hresult(static_cast<const IManipulationCompletedRoutedEventArgs &>(static_cast<const D &>(*this))->get_IsInertial(&value));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationCompletedRoutedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationCompletedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Cumulative(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities impl_IManipulationCompletedRoutedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value {};
    check_hresult(static_cast<const IManipulationCompletedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Velocities(put(value)));
    return value;
}

template <typename D> bool impl_IManipulationCompletedRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IManipulationCompletedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IManipulationCompletedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IManipulationCompletedRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IManipulationCompletedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IManipulationCompletedRoutedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement impl_IManipulationDeltaRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->get_Container(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IManipulationDeltaRoutedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> bool impl_IManipulationDeltaRoutedEventArgs<D>::IsInertial() const
{
    bool value {};
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->get_IsInertial(&value));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationDeltaRoutedEventArgs<D>::Delta() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->get_Delta(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationDeltaRoutedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->get_Cumulative(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities impl_IManipulationDeltaRoutedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value {};
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->get_Velocities(put(value)));
    return value;
}

template <typename D> bool impl_IManipulationDeltaRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IManipulationDeltaRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IManipulationDeltaRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> void impl_IManipulationDeltaRoutedEventArgs<D>::Complete() const
{
    check_hresult(static_cast<const IManipulationDeltaRoutedEventArgs &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::UI::Xaml::UIElement impl_IManipulationInertiaStartingRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Container(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::InertiaExpansionBehavior impl_IManipulationInertiaStartingRoutedEventArgs<D>::ExpansionBehavior() const
{
    Windows::UI::Xaml::Input::InertiaExpansionBehavior value { nullptr };
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_ExpansionBehavior(put(value)));
    return value;
}

template <typename D> void impl_IManipulationInertiaStartingRoutedEventArgs<D>::ExpansionBehavior(const Windows::UI::Xaml::Input::InertiaExpansionBehavior & value) const
{
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->put_ExpansionBehavior(get(value)));
}

template <typename D> Windows::UI::Xaml::Input::InertiaRotationBehavior impl_IManipulationInertiaStartingRoutedEventArgs<D>::RotationBehavior() const
{
    Windows::UI::Xaml::Input::InertiaRotationBehavior value { nullptr };
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_RotationBehavior(put(value)));
    return value;
}

template <typename D> void impl_IManipulationInertiaStartingRoutedEventArgs<D>::RotationBehavior(const Windows::UI::Xaml::Input::InertiaRotationBehavior & value) const
{
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->put_RotationBehavior(get(value)));
}

template <typename D> Windows::UI::Xaml::Input::InertiaTranslationBehavior impl_IManipulationInertiaStartingRoutedEventArgs<D>::TranslationBehavior() const
{
    Windows::UI::Xaml::Input::InertiaTranslationBehavior value { nullptr };
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_TranslationBehavior(put(value)));
    return value;
}

template <typename D> void impl_IManipulationInertiaStartingRoutedEventArgs<D>::TranslationBehavior(const Windows::UI::Xaml::Input::InertiaTranslationBehavior & value) const
{
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->put_TranslationBehavior(get(value)));
}

template <typename D> bool impl_IManipulationInertiaStartingRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IManipulationInertiaStartingRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IManipulationInertiaStartingRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationInertiaStartingRoutedEventArgs<D>::Delta() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Delta(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationInertiaStartingRoutedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Cumulative(put(value)));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationVelocities impl_IManipulationInertiaStartingRoutedEventArgs<D>::Velocities() const
{
    Windows::UI::Input::ManipulationVelocities value {};
    check_hresult(static_cast<const IManipulationInertiaStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Velocities(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement impl_IManipulationStartedRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IManipulationStartedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Container(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Point impl_IManipulationStartedRoutedEventArgs<D>::Position() const
{
    Windows::Foundation::Point value {};
    check_hresult(static_cast<const IManipulationStartedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> bool impl_IManipulationStartedRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IManipulationStartedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IManipulationStartedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IManipulationStartedRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IManipulationStartedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IManipulationStartedRoutedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> Windows::UI::Input::ManipulationDelta impl_IManipulationStartedRoutedEventArgs<D>::Cumulative() const
{
    Windows::UI::Input::ManipulationDelta value {};
    check_hresult(static_cast<const IManipulationStartedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Cumulative(put(value)));
    return value;
}

template <typename D> void impl_IManipulationStartedRoutedEventArgs<D>::Complete() const
{
    check_hresult(static_cast<const IManipulationStartedRoutedEventArgs &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs impl_IManipulationStartedRoutedEventArgsFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Input::ManipulationStartedRoutedEventArgs instance { nullptr };
    check_hresult(static_cast<const IManipulationStartedRoutedEventArgsFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Input::ManipulationModes impl_IManipulationStartingRoutedEventArgs<D>::Mode() const
{
    Windows::UI::Xaml::Input::ManipulationModes value {};
    check_hresult(static_cast<const IManipulationStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Mode(&value));
    return value;
}

template <typename D> void impl_IManipulationStartingRoutedEventArgs<D>::Mode(Windows::UI::Xaml::Input::ManipulationModes value) const
{
    check_hresult(static_cast<const IManipulationStartingRoutedEventArgs &>(static_cast<const D &>(*this))->put_Mode(value));
}

template <typename D> Windows::UI::Xaml::UIElement impl_IManipulationStartingRoutedEventArgs<D>::Container() const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IManipulationStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Container(put(value)));
    return value;
}

template <typename D> void impl_IManipulationStartingRoutedEventArgs<D>::Container(const Windows::UI::Xaml::UIElement & value) const
{
    check_hresult(static_cast<const IManipulationStartingRoutedEventArgs &>(static_cast<const D &>(*this))->put_Container(get(value)));
}

template <typename D> Windows::UI::Xaml::Input::ManipulationPivot impl_IManipulationStartingRoutedEventArgs<D>::Pivot() const
{
    Windows::UI::Xaml::Input::ManipulationPivot value { nullptr };
    check_hresult(static_cast<const IManipulationStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Pivot(put(value)));
    return value;
}

template <typename D> void impl_IManipulationStartingRoutedEventArgs<D>::Pivot(const Windows::UI::Xaml::Input::ManipulationPivot & value) const
{
    check_hresult(static_cast<const IManipulationStartingRoutedEventArgs &>(static_cast<const D &>(*this))->put_Pivot(get(value)));
}

template <typename D> bool impl_IManipulationStartingRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IManipulationStartingRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IManipulationStartingRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IManipulationStartingRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::UI::Xaml::Input::Pointer impl_IPointerRoutedEventArgs<D>::Pointer() const
{
    Windows::UI::Xaml::Input::Pointer value { nullptr };
    check_hresult(static_cast<const IPointerRoutedEventArgs &>(static_cast<const D &>(*this))->get_Pointer(put(value)));
    return value;
}

template <typename D> Windows::System::VirtualKeyModifiers impl_IPointerRoutedEventArgs<D>::KeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value {};
    check_hresult(static_cast<const IPointerRoutedEventArgs &>(static_cast<const D &>(*this))->get_KeyModifiers(&value));
    return value;
}

template <typename D> bool impl_IPointerRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IPointerRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IPointerRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IPointerRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::UI::Input::PointerPoint impl_IPointerRoutedEventArgs<D>::GetCurrentPoint(const Windows::UI::Xaml::UIElement & relativeTo) const
{
    Windows::UI::Input::PointerPoint returnValue { nullptr };
    check_hresult(static_cast<const IPointerRoutedEventArgs &>(static_cast<const D &>(*this))->abi_GetCurrentPoint(get(relativeTo), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> impl_IPointerRoutedEventArgs<D>::GetIntermediatePoints(const Windows::UI::Xaml::UIElement & relativeTo) const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> returnValue;
    check_hresult(static_cast<const IPointerRoutedEventArgs &>(static_cast<const D &>(*this))->abi_GetIntermediatePoints(get(relativeTo), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_IRightTappedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const IRightTappedRoutedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> bool impl_IRightTappedRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const IRightTappedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_IRightTappedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const IRightTappedRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Point impl_IRightTappedRoutedEventArgs<D>::GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const
{
    Windows::Foundation::Point returnValue {};
    check_hresult(static_cast<const IRightTappedRoutedEventArgs &>(static_cast<const D &>(*this))->abi_GetPosition(get(relativeTo), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::Devices::Input::PointerDeviceType impl_ITappedRoutedEventArgs<D>::PointerDeviceType() const
{
    Windows::Devices::Input::PointerDeviceType value {};
    check_hresult(static_cast<const ITappedRoutedEventArgs &>(static_cast<const D &>(*this))->get_PointerDeviceType(&value));
    return value;
}

template <typename D> bool impl_ITappedRoutedEventArgs<D>::Handled() const
{
    bool value {};
    check_hresult(static_cast<const ITappedRoutedEventArgs &>(static_cast<const D &>(*this))->get_Handled(&value));
    return value;
}

template <typename D> void impl_ITappedRoutedEventArgs<D>::Handled(bool value) const
{
    check_hresult(static_cast<const ITappedRoutedEventArgs &>(static_cast<const D &>(*this))->put_Handled(value));
}

template <typename D> Windows::Foundation::Point impl_ITappedRoutedEventArgs<D>::GetPosition(const Windows::UI::Xaml::UIElement & relativeTo) const
{
    Windows::Foundation::Point returnValue {};
    check_hresult(static_cast<const ITappedRoutedEventArgs &>(static_cast<const D &>(*this))->abi_GetPosition(get(relativeTo), put(returnValue)));
    return returnValue;
}

inline AccessKeyDisplayDismissedEventArgs::AccessKeyDisplayDismissedEventArgs() :
    AccessKeyDisplayDismissedEventArgs(activate_instance<AccessKeyDisplayDismissedEventArgs>())
{}

inline AccessKeyDisplayRequestedEventArgs::AccessKeyDisplayRequestedEventArgs() :
    AccessKeyDisplayRequestedEventArgs(activate_instance<AccessKeyDisplayRequestedEventArgs>())
{}

inline AccessKeyInvokedEventArgs::AccessKeyInvokedEventArgs() :
    AccessKeyInvokedEventArgs(activate_instance<AccessKeyInvokedEventArgs>())
{}

inline bool AccessKeyManager::IsDisplayModeEnabled()
{
    return get_activation_factory<AccessKeyManager, IAccessKeyManagerStatics>().IsDisplayModeEnabled();
}

inline event_token AccessKeyManager::IsDisplayModeEnabledChanged(const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::IInspectable> & value)
{
    return get_activation_factory<AccessKeyManager, IAccessKeyManagerStatics>().IsDisplayModeEnabledChanged(value);
}

inline factory_event_revoker<IAccessKeyManagerStatics> AccessKeyManager::IsDisplayModeEnabledChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::IInspectable, Windows::IInspectable> & value)
{
    auto factory = get_activation_factory<AccessKeyManager, IAccessKeyManagerStatics>();
    return { factory, &ABI::Windows::UI::Xaml::Input::IAccessKeyManagerStatics::remove_IsDisplayModeEnabledChanged, factory.IsDisplayModeEnabledChanged(value) };
}

inline void AccessKeyManager::IsDisplayModeEnabledChanged(event_token token)
{
    get_activation_factory<AccessKeyManager, IAccessKeyManagerStatics>().IsDisplayModeEnabledChanged(token);
}

inline void AccessKeyManager::ExitDisplayMode()
{
    get_activation_factory<AccessKeyManager, IAccessKeyManagerStatics>().ExitDisplayMode();
}

inline ContextRequestedEventArgs::ContextRequestedEventArgs() :
    ContextRequestedEventArgs(activate_instance<ContextRequestedEventArgs>())
{}

inline DoubleTappedRoutedEventArgs::DoubleTappedRoutedEventArgs() :
    DoubleTappedRoutedEventArgs(activate_instance<DoubleTappedRoutedEventArgs>())
{}

inline Windows::IInspectable FocusManager::GetFocusedElement()
{
    return get_activation_factory<FocusManager, IFocusManagerStatics>().GetFocusedElement();
}

inline bool FocusManager::TryMoveFocus(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection)
{
    return get_activation_factory<FocusManager, IFocusManagerStatics2>().TryMoveFocus(focusNavigationDirection);
}

inline Windows::UI::Xaml::UIElement FocusManager::FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection)
{
    return get_activation_factory<FocusManager, IFocusManagerStatics3>().FindNextFocusableElement(focusNavigationDirection);
}

inline Windows::UI::Xaml::UIElement FocusManager::FindNextFocusableElement(Windows::UI::Xaml::Input::FocusNavigationDirection focusNavigationDirection, const Windows::Foundation::Rect & hintRect)
{
    return get_activation_factory<FocusManager, IFocusManagerStatics3>().FindNextFocusableElement(focusNavigationDirection, hintRect);
}

inline HoldingRoutedEventArgs::HoldingRoutedEventArgs() :
    HoldingRoutedEventArgs(activate_instance<HoldingRoutedEventArgs>())
{}

inline InputScope::InputScope() :
    InputScope(activate_instance<InputScope>())
{}

inline InputScopeName::InputScopeName() :
    InputScopeName(activate_instance<InputScopeName>())
{}

inline InputScopeName::InputScopeName(Windows::UI::Xaml::Input::InputScopeNameValue nameValue) :
    InputScopeName(get_activation_factory<InputScopeName, IInputScopeNameFactory>().CreateInstance(nameValue))
{}

inline ManipulationCompletedRoutedEventArgs::ManipulationCompletedRoutedEventArgs() :
    ManipulationCompletedRoutedEventArgs(activate_instance<ManipulationCompletedRoutedEventArgs>())
{}

inline ManipulationDeltaRoutedEventArgs::ManipulationDeltaRoutedEventArgs() :
    ManipulationDeltaRoutedEventArgs(activate_instance<ManipulationDeltaRoutedEventArgs>())
{}

inline ManipulationInertiaStartingRoutedEventArgs::ManipulationInertiaStartingRoutedEventArgs() :
    ManipulationInertiaStartingRoutedEventArgs(activate_instance<ManipulationInertiaStartingRoutedEventArgs>())
{}

inline ManipulationPivot::ManipulationPivot() :
    ManipulationPivot(activate_instance<ManipulationPivot>())
{}

inline ManipulationPivot::ManipulationPivot(const Windows::Foundation::Point & center, double radius) :
    ManipulationPivot(get_activation_factory<ManipulationPivot, IManipulationPivotFactory>().CreateInstanceWithCenterAndRadius(center, radius))
{}

inline ManipulationStartedRoutedEventArgs::ManipulationStartedRoutedEventArgs()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<ManipulationStartedRoutedEventArgs, IManipulationStartedRoutedEventArgsFactory>().CreateInstance(outer, inner));
}

inline ManipulationStartingRoutedEventArgs::ManipulationStartingRoutedEventArgs() :
    ManipulationStartingRoutedEventArgs(activate_instance<ManipulationStartingRoutedEventArgs>())
{}

inline RightTappedRoutedEventArgs::RightTappedRoutedEventArgs() :
    RightTappedRoutedEventArgs(activate_instance<RightTappedRoutedEventArgs>())
{}

inline TappedRoutedEventArgs::TappedRoutedEventArgs() :
    TappedRoutedEventArgs(activate_instance<TappedRoutedEventArgs>())
{}

}

}
