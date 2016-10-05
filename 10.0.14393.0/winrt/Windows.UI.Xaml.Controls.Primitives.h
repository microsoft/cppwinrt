// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Xaml.Controls.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.Xaml.3.h"
#include "internal/Windows.UI.Xaml.Media.3.h"
#include "internal/Windows.UI.Xaml.Input.3.h"
#include "internal/Windows.UI.Xaml.Controls.Primitives.3.h"
#include "Windows.UI.Xaml.Controls.h"
#include "Windows.UI.Xaml.Data.h"
#include "internal/Windows.UI.Xaml.Controls.Primitives.4.h"
#include "internal/Windows.UI.Xaml.Controls.Primitives.5.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Controls::Primitives {

template <typename L> DragCompletedEventHandler::DragCompletedEventHandler(L lambda) :
    DragCompletedEventHandler(impl::make_delegate<impl_DragCompletedEventHandler<L>, DragCompletedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DragCompletedEventHandler::DragCompletedEventHandler(F * function) :
    DragCompletedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DragCompletedEventHandler::DragCompletedEventHandler(O * object, M method) :
    DragCompletedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DragCompletedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> DragDeltaEventHandler::DragDeltaEventHandler(L lambda) :
    DragDeltaEventHandler(impl::make_delegate<impl_DragDeltaEventHandler<L>, DragDeltaEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DragDeltaEventHandler::DragDeltaEventHandler(F * function) :
    DragDeltaEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DragDeltaEventHandler::DragDeltaEventHandler(O * object, M method) :
    DragDeltaEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DragDeltaEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> DragStartedEventHandler::DragStartedEventHandler(L lambda) :
    DragStartedEventHandler(impl::make_delegate<impl_DragStartedEventHandler<L>, DragStartedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> DragStartedEventHandler::DragStartedEventHandler(F * function) :
    DragStartedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DragStartedEventHandler::DragStartedEventHandler(O * object, M method) :
    DragStartedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DragStartedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> ItemsChangedEventHandler::ItemsChangedEventHandler(L lambda) :
    ItemsChangedEventHandler(impl::make_delegate<impl_ItemsChangedEventHandler<L>, ItemsChangedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ItemsChangedEventHandler::ItemsChangedEventHandler(F * function) :
    ItemsChangedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ItemsChangedEventHandler::ItemsChangedEventHandler(O * object, M method) :
    ItemsChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ItemsChangedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> RangeBaseValueChangedEventHandler::RangeBaseValueChangedEventHandler(L lambda) :
    RangeBaseValueChangedEventHandler(impl::make_delegate<impl_RangeBaseValueChangedEventHandler<L>, RangeBaseValueChangedEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> RangeBaseValueChangedEventHandler::RangeBaseValueChangedEventHandler(F * function) :
    RangeBaseValueChangedEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> RangeBaseValueChangedEventHandler::RangeBaseValueChangedEventHandler(O * object, M method) :
    RangeBaseValueChangedEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void RangeBaseValueChangedEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

template <typename L> ScrollEventHandler::ScrollEventHandler(L lambda) :
    ScrollEventHandler(impl::make_delegate<impl_ScrollEventHandler<L>, ScrollEventHandler>(std::forward<L>(lambda)))
{}

template <typename F> ScrollEventHandler::ScrollEventHandler(F * function) :
    ScrollEventHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ScrollEventHandler::ScrollEventHandler(O * object, M method) :
    ScrollEventHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ScrollEventHandler::operator()(const Windows::IInspectable & sender, const Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs & e) const
{
    check_hresult((*this)->abi_Invoke(get(sender), get(e)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
{
    HRESULT __stdcall get_ClipRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClipRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompactVerticalDelta(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompactVerticalDelta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompactRootMargin(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompactRootMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimalVerticalDelta(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinimalVerticalDelta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinimalRootMargin(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinimalRootMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HiddenVerticalDelta(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HiddenVerticalDelta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HiddenRootMargin(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HiddenRootMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IButtonBase> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IButtonBase>
{
    HRESULT __stdcall get_ClickMode(Windows::UI::Xaml::Controls::ClickMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClickMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClickMode(Windows::UI::Xaml::Controls::ClickMode value) noexcept override
    {
        try
        {
            this->shim().ClickMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPointerOver(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPointerOver());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPressed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPressed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Command(abi_arg_out<Windows::UI::Xaml::Input::ICommand> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Command());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Command(abi_arg_in<Windows::UI::Xaml::Input::ICommand> value) noexcept override
    {
        try
        {
            this->shim().Command(*reinterpret_cast<const Windows::UI::Xaml::Input::ICommand *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommandParameter(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CommandParameter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommandParameter(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().CommandParameter(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Click(abi_arg_in<Windows::UI::Xaml::RoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Click(*reinterpret_cast<const Windows::UI::Xaml::RoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Click(event_token token) noexcept override
    {
        try
        {
            this->shim().Click(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IButtonBase> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
{
    HRESULT __stdcall get_ClickModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClickModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPointerOverProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPointerOverProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPressedProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPressedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommandProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CommandProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommandParameterProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CommandParameterProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICalendarPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
{
    HRESULT __stdcall get_MinViewWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinViewWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeaderText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WeekDay1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay2(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WeekDay2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay3(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WeekDay3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay4(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WeekDay4());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay5(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WeekDay5());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay6(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WeekDay6());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay7(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WeekDay7());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreContentAfter(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasMoreContentAfter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreContentBefore(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasMoreContentBefore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreViews(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HasMoreViews());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClipRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClipRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterX(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CenterY(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CenterY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICarouselPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
{
    HRESULT __stdcall get_CanVerticallyScroll(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanVerticallyScroll());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanVerticallyScroll(bool value) noexcept override
    {
        try
        {
            this->shim().CanVerticallyScroll(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanHorizontallyScroll(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanHorizontallyScroll());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanHorizontallyScroll(bool value) noexcept override
    {
        try
        {
            this->shim().CanHorizontallyScroll(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtentWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtentWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtentHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtentHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ViewportWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ViewportHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollOwner(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScrollOwner());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScrollOwner(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().ScrollOwner(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LineUp() noexcept override
    {
        try
        {
            this->shim().LineUp();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LineDown() noexcept override
    {
        try
        {
            this->shim().LineDown();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LineLeft() noexcept override
    {
        try
        {
            this->shim().LineLeft();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LineRight() noexcept override
    {
        try
        {
            this->shim().LineRight();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PageUp() noexcept override
    {
        try
        {
            this->shim().PageUp();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PageDown() noexcept override
    {
        try
        {
            this->shim().PageDown();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PageLeft() noexcept override
    {
        try
        {
            this->shim().PageLeft();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PageRight() noexcept override
    {
        try
        {
            this->shim().PageRight();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MouseWheelUp() noexcept override
    {
        try
        {
            this->shim().MouseWheelUp();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MouseWheelDown() noexcept override
    {
        try
        {
            this->shim().MouseWheelDown();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MouseWheelLeft() noexcept override
    {
        try
        {
            this->shim().MouseWheelLeft();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MouseWheelRight() noexcept override
    {
        try
        {
            this->shim().MouseWheelRight();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetHorizontalOffset(double offset) noexcept override
    {
        try
        {
            this->shim().SetHorizontalOffset(offset);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetVerticalOffset(double offset) noexcept override
    {
        try
        {
            this->shim().SetVerticalOffset(offset);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MakeVisible(abi_arg_in<Windows::UI::Xaml::IUIElement> visual, abi_arg_in<Windows::Foundation::Rect> rectangle, abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MakeVisible(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&visual), *reinterpret_cast<const Windows::Foundation::Rect *>(&rectangle)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
{
    HRESULT __stdcall get_DropDownOpenedHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropDownOpenedHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropDownClosedHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropDownClosedHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DropDownOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropDownOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedItemDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedItemDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
{
    HRESULT __stdcall get_DropDownContentMinWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DropDownContentMinWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
{
    HRESULT __stdcall get_ContentHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentClipRect(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OverflowContentClipRect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentMinWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OverflowContentMinWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentMaxHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OverflowContentMaxHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentHorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OverflowContentHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OverflowContentHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NegativeOverflowContentHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NegativeOverflowContentHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
{
    HRESULT __stdcall get_OverflowContentMaxWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OverflowContentMaxWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
{
    HRESULT __stdcall get_EffectiveOverflowButtonVisibility(Windows::UI::Xaml::Visibility * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EffectiveOverflowButtonVisibility());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
{
    HRESULT __stdcall get_HorizontalChange(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalChange(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Canceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Canceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
{
    HRESULT __stdcall abi_CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(horizontalChange, verticalChange, canceled, *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
{
    HRESULT __stdcall get_HorizontalChange(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalChange(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
{
    HRESULT __stdcall abi_CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithHorizontalChangeAndVerticalChange(horizontalChange, verticalChange, *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
{
    HRESULT __stdcall get_HorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
{
    HRESULT __stdcall abi_CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateInstanceWithHorizontalOffsetAndVerticalOffset(horizontalOffset, verticalOffset, *reinterpret_cast<const Windows::IInspectable *>(&outer), *inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
{
    HRESULT __stdcall get_Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Placement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode value) noexcept override
    {
        try
        {
            this->shim().Placement(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Opened(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Opened(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Opened(event_token token) noexcept override
    {
        try
        {
            this->shim().Opened(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Closed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
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

    HRESULT __stdcall add_Opening(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Opening(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Opening(event_token token) noexcept override
    {
        try
        {
            this->shim().Opening(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAt(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> placementTarget) noexcept override
    {
        try
        {
            this->shim().ShowAt(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&placementTarget));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Hide() noexcept override
    {
        try
        {
            this->shim().Hide();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
{
    HRESULT __stdcall get_Target(abi_arg_out<Windows::UI::Xaml::IFrameworkElement> value) noexcept override
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

    HRESULT __stdcall get_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightDismissOverlayMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) noexcept override
    {
        try
        {
            this->shim().LightDismissOverlayMode(value);
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

    HRESULT __stdcall get_ElementSoundMode(Windows::UI::Xaml::ElementSoundMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ElementSoundMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ElementSoundMode(Windows::UI::Xaml::ElementSoundMode value) noexcept override
    {
        try
        {
            this->shim().ElementSoundMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Closing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closing(event_token token) noexcept override
    {
        try
        {
            this->shim().Closing(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
{
    HRESULT __stdcall abi_CreatePresenter(abi_arg_out<Windows::UI::Xaml::Controls::IControl> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().CreatePresenter());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
{
    HRESULT __stdcall get_PlacementProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlacementProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AttachedFlyoutProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AttachedFlyoutProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAttachedFlyout(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> element, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetAttachedFlyout(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAttachedFlyout(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> element, abi_arg_in<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> value) noexcept override
    {
        try
        {
            this->shim().SetAttachedFlyout(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&element), *reinterpret_cast<const Windows::UI::Xaml::Controls::Primitives::FlyoutBase *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAttachedFlyout(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> flyoutOwner) noexcept override
    {
        try
        {
            this->shim().ShowAttachedFlyout(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&flyoutOwner));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
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

    HRESULT __stdcall get_LightDismissOverlayModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightDismissOverlayModeProperty());
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

    HRESULT __stdcall get_ElementSoundModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ElementSoundModeProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
{
    HRESULT __stdcall abi_FromIndexAndOffset(int32_t index, int32_t offset, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromIndexAndOffset(index, offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
{
    HRESULT __stdcall get_SelectionCheckMarkVisualEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectionCheckMarkVisualEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectionCheckMarkVisualEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().SelectionCheckMarkVisualEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckHintBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckHintBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CheckHintBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().CheckHintBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckSelectingBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckSelectingBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CheckSelectingBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().CheckSelectingBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CheckBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().CheckBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DragBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().DragBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragForeground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragForeground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DragForeground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().DragForeground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusBorderBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FocusBorderBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().FocusBorderBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaceholderBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PlaceholderBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().PlaceholderBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().PointerOverBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().SelectedBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedForeground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedForeground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedForeground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().SelectedForeground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPointerOverBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPointerOverBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().SelectedPointerOverBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBorderBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPointerOverBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPointerOverBorderBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().SelectedPointerOverBorderBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBorderThickness(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedBorderThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedBorderThickness(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().SelectedBorderThickness(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledOpacity(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisabledOpacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisabledOpacity(double value) noexcept override
    {
        try
        {
            this->shim().DisabledOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragOpacity(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragOpacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DragOpacity(double value) noexcept override
    {
        try
        {
            this->shim().DragOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReorderHintOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReorderHintOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReorderHintOffset(double value) noexcept override
    {
        try
        {
            this->shim().ReorderHintOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GridViewItemPresenterHorizontalContentAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) noexcept override
    {
        try
        {
            this->shim().GridViewItemPresenterHorizontalContentAlignment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GridViewItemPresenterVerticalContentAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) noexcept override
    {
        try
        {
            this->shim().GridViewItemPresenterVerticalContentAlignment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterPadding(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GridViewItemPresenterPadding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GridViewItemPresenterPadding(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().GridViewItemPresenterPadding(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundMargin(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverBackgroundMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverBackgroundMargin(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().PointerOverBackgroundMargin(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMargin(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentMargin(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().ContentMargin(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
{
    HRESULT __stdcall get_SelectionCheckMarkVisualEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectionCheckMarkVisualEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckHintBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckHintBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckSelectingBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckSelectingBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragForegroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusBorderBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaceholderBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedForegroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPointerOverBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBorderBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPointerOverBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBorderThicknessProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedBorderThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledOpacityProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisabledOpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragOpacityProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragOpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReorderHintOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReorderHintOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterHorizontalContentAlignmentProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GridViewItemPresenterHorizontalContentAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterVerticalContentAlignmentProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GridViewItemPresenterVerticalContentAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterPaddingProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GridViewItemPresenterPaddingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundMarginProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverBackgroundMarginProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMarginProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentMarginProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
{
    HRESULT __stdcall get_DragItemsCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragItemsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
{
    HRESULT __stdcall get_Action(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Action());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(abi_arg_out<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition> value) noexcept override
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

    HRESULT __stdcall get_OldPosition(abi_arg_out<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemUICount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemUICount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
{
    HRESULT __stdcall get_Enabled(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().Enabled(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Disabled(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Disabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Disabled(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().Disabled(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
{
    HRESULT __stdcall get_EnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisabledProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
{
    HRESULT __stdcall get_Enabled(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().Enabled(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Disabled(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Disabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Disabled(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().Disabled(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
{
    HRESULT __stdcall get_EnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisabledProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformation> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
{
    HRESULT __stdcall abi_GetLayoutExceptionElement(abi_arg_in<Windows::IInspectable> dispatcher, abi_arg_out<Windows::UI::Xaml::IUIElement> element) noexcept override
    {
        try
        {
            *element = detach(this->shim().GetLayoutExceptionElement(*reinterpret_cast<const Windows::IInspectable *>(&dispatcher)));
            return S_OK;
        }
        catch (...)
        {
            *element = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLayoutSlot(abi_arg_in<Windows::UI::Xaml::IFrameworkElement> element, abi_arg_out<Windows::Foundation::Rect> slot) noexcept override
    {
        try
        {
            *slot = detach(this->shim().GetLayoutSlot(*reinterpret_cast<const Windows::UI::Xaml::FrameworkElement *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
{
    HRESULT __stdcall get_SelectionCheckMarkVisualEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectionCheckMarkVisualEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectionCheckMarkVisualEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().SelectionCheckMarkVisualEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckHintBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckHintBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CheckHintBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().CheckHintBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckSelectingBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckSelectingBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CheckSelectingBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().CheckSelectingBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CheckBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().CheckBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DragBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().DragBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragForeground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragForeground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DragForeground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().DragForeground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusBorderBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FocusBorderBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().FocusBorderBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaceholderBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PlaceholderBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().PlaceholderBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().PointerOverBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().SelectedBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedForeground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedForeground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedForeground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().SelectedForeground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPointerOverBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPointerOverBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().SelectedPointerOverBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBorderBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPointerOverBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPointerOverBorderBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().SelectedPointerOverBorderBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBorderThickness(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedBorderThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedBorderThickness(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().SelectedBorderThickness(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledOpacity(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisabledOpacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisabledOpacity(double value) noexcept override
    {
        try
        {
            this->shim().DisabledOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragOpacity(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragOpacity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DragOpacity(double value) noexcept override
    {
        try
        {
            this->shim().DragOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReorderHintOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReorderHintOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReorderHintOffset(double value) noexcept override
    {
        try
        {
            this->shim().ReorderHintOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ListViewItemPresenterHorizontalContentAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) noexcept override
    {
        try
        {
            this->shim().ListViewItemPresenterHorizontalContentAlignment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ListViewItemPresenterVerticalContentAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) noexcept override
    {
        try
        {
            this->shim().ListViewItemPresenterVerticalContentAlignment(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterPadding(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ListViewItemPresenterPadding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListViewItemPresenterPadding(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().ListViewItemPresenterPadding(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundMargin(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverBackgroundMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverBackgroundMargin(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().PointerOverBackgroundMargin(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMargin(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentMargin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentMargin(abi_arg_in<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            this->shim().ContentMargin(*reinterpret_cast<const Windows::UI::Xaml::Thickness *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
{
    HRESULT __stdcall get_SelectedPressedBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPressedBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPressedBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().SelectedPressedBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PressedBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PressedBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PressedBackground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().PressedBackground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBoxBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckBoxBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CheckBoxBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().CheckBoxBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusSecondaryBorderBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusSecondaryBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FocusSecondaryBorderBrush(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().FocusSecondaryBorderBrush(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode value) noexcept override
    {
        try
        {
            this->shim().CheckMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverForeground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverForeground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverForeground(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().PointerOverForeground(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
{
    HRESULT __stdcall get_SelectionCheckMarkVisualEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectionCheckMarkVisualEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckHintBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckHintBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckSelectingBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckSelectingBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragForegroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusBorderBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PlaceholderBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedForegroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPointerOverBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBorderBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPointerOverBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBorderThicknessProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedBorderThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledOpacityProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisabledOpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DragOpacityProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragOpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReorderHintOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReorderHintOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterHorizontalContentAlignmentProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ListViewItemPresenterHorizontalContentAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterVerticalContentAlignmentProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ListViewItemPresenterVerticalContentAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterPaddingProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ListViewItemPresenterPaddingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundMarginProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverBackgroundMarginProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMarginProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentMarginProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
{
    HRESULT __stdcall get_SelectedPressedBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedPressedBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PressedBackgroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PressedBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBoxBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckBoxBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FocusSecondaryBorderBrushProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocusSecondaryBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CheckModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CheckModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverForegroundProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PointerOverForegroundProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
{
    HRESULT __stdcall get_DragItemsCount(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DragItemsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelector> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
{
    HRESULT __stdcall get_ShouldLoop(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShouldLoop());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldLoop(bool value) noexcept override
    {
        try
        {
            this->shim().ShouldLoop(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Items(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Items(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::IInspectable>> value) noexcept override
    {
        try
        {
            this->shim().Items(*reinterpret_cast<const Windows::Foundation::Collections::IVector<Windows::IInspectable> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedIndex(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedIndex(int32_t value) noexcept override
    {
        try
        {
            this->shim().SelectedIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedItem(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedItem(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().SelectedItem(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemWidth(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemWidth(int32_t value) noexcept override
    {
        try
        {
            this->shim().ItemWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemHeight(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemHeight(int32_t value) noexcept override
    {
        try
        {
            this->shim().ItemHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTemplate(abi_arg_out<Windows::UI::Xaml::IDataTemplate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemTemplate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ItemTemplate(abi_arg_in<Windows::UI::Xaml::IDataTemplate> value) noexcept override
    {
        try
        {
            this->shim().ItemTemplate(*reinterpret_cast<const Windows::UI::Xaml::DataTemplate *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionChanged(abi_arg_in<Windows::UI::Xaml::Controls::SelectionChangedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SelectionChanged(*reinterpret_cast<const Windows::UI::Xaml::Controls::SelectionChangedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().SelectionChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
{
    HRESULT __stdcall get_ShouldLoopProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShouldLoopProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedIndexProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedIndexProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedItemProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedItemProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemWidthProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemHeightProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTemplateProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemTemplateProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
{
    HRESULT __stdcall get_FlyoutContentMinWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FlyoutContentMinWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
{
    HRESULT __stdcall get_CanVerticallyScroll(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanVerticallyScroll());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanVerticallyScroll(bool value) noexcept override
    {
        try
        {
            this->shim().CanVerticallyScroll(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CanHorizontallyScroll(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanHorizontallyScroll());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanHorizontallyScroll(bool value) noexcept override
    {
        try
        {
            this->shim().CanHorizontallyScroll(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtentWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtentWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtentHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtentHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportWidth(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ViewportWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportHeight(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ViewportHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollOwner(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScrollOwner());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ScrollOwner(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().ScrollOwner(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LineUp() noexcept override
    {
        try
        {
            this->shim().LineUp();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LineDown() noexcept override
    {
        try
        {
            this->shim().LineDown();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LineLeft() noexcept override
    {
        try
        {
            this->shim().LineLeft();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LineRight() noexcept override
    {
        try
        {
            this->shim().LineRight();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PageUp() noexcept override
    {
        try
        {
            this->shim().PageUp();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PageDown() noexcept override
    {
        try
        {
            this->shim().PageDown();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PageLeft() noexcept override
    {
        try
        {
            this->shim().PageLeft();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PageRight() noexcept override
    {
        try
        {
            this->shim().PageRight();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MouseWheelUp() noexcept override
    {
        try
        {
            this->shim().MouseWheelUp();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MouseWheelDown() noexcept override
    {
        try
        {
            this->shim().MouseWheelDown();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MouseWheelLeft() noexcept override
    {
        try
        {
            this->shim().MouseWheelLeft();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MouseWheelRight() noexcept override
    {
        try
        {
            this->shim().MouseWheelRight();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetHorizontalOffset(double offset) noexcept override
    {
        try
        {
            this->shim().SetHorizontalOffset(offset);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetVerticalOffset(double offset) noexcept override
    {
        try
        {
            this->shim().SetVerticalOffset(offset);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MakeVisible(abi_arg_in<Windows::UI::Xaml::IUIElement> visual, abi_arg_in<Windows::Foundation::Rect> rectangle, abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().MakeVisible(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&visual), *reinterpret_cast<const Windows::Foundation::Rect *>(&rectangle)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
{
    HRESULT __stdcall abi_OnConfirmed() noexcept override
    {
        try
        {
            this->shim().OnConfirmed();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShouldShowConfirmationButtons(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().ShouldShowConfirmationButtons());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
{
    HRESULT __stdcall get_TitleProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TitleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTitle(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetTitle(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetTitle(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetTitle(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element), *reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPivotPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPopup> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPopup>
{
    HRESULT __stdcall get_Child(abi_arg_out<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Child());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Child(abi_arg_in<Windows::UI::Xaml::IUIElement> value) noexcept override
    {
        try
        {
            this->shim().Child(*reinterpret_cast<const Windows::UI::Xaml::UIElement *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOpen(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOpen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsOpen(bool value) noexcept override
    {
        try
        {
            this->shim().IsOpen(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalOffset(double value) noexcept override
    {
        try
        {
            this->shim().HorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalOffset(double value) noexcept override
    {
        try
        {
            this->shim().VerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChildTransitions(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChildTransitions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ChildTransitions(abi_arg_in<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition>> value) noexcept override
    {
        try
        {
            this->shim().ChildTransitions(*reinterpret_cast<const Windows::UI::Xaml::Media::Animation::TransitionCollection *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLightDismissEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsLightDismissEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsLightDismissEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsLightDismissEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Opened(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Opened(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Opened(event_token token) noexcept override
    {
        try
        {
            this->shim().Opened(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Closed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPopup2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPopup2>
{
    HRESULT __stdcall get_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightDismissOverlayMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) noexcept override
    {
        try
        {
            this->shim().LightDismissOverlayMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPopupStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
{
    HRESULT __stdcall get_ChildProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChildProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOpenProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOpenProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffsetProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChildTransitionsProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChildTransitionsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLightDismissEnabledProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsLightDismissEnabledProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPopupStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
{
    HRESULT __stdcall get_LightDismissOverlayModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightDismissOverlayModeProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
{
    HRESULT __stdcall get_EllipseDiameter(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EllipseDiameter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EllipseOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EllipseOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EllipseAnimationWellPosition(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EllipseAnimationWellPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EllipseAnimationEndPosition(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EllipseAnimationEndPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContainerAnimationStartPosition(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContainerAnimationStartPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContainerAnimationEndPosition(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContainerAnimationEndPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndicatorLengthDelta(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IndicatorLengthDelta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
{
    HRESULT __stdcall get_EllipseDiameter(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EllipseDiameter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EllipseOffset(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EllipseOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSideLength(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxSideLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBase> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBase>
{
    HRESULT __stdcall get_Minimum(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Minimum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Minimum(double value) noexcept override
    {
        try
        {
            this->shim().Minimum(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maximum(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Maximum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Maximum(double value) noexcept override
    {
        try
        {
            this->shim().Maximum(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallChange(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SmallChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmallChange(double value) noexcept override
    {
        try
        {
            this->shim().SmallChange(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeChange(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LargeChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LargeChange(double value) noexcept override
    {
        try
        {
            this->shim().LargeChange(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(double value) noexcept override
    {
        try
        {
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ValueChanged(abi_arg_in<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ValueChanged(*reinterpret_cast<const Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ValueChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IRangeBase> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
{
    HRESULT __stdcall abi_OnMinimumChanged(double oldMinimum, double newMinimum) noexcept override
    {
        try
        {
            this->shim().OnMinimumChanged(oldMinimum, newMinimum);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnMaximumChanged(double oldMaximum, double newMaximum) noexcept override
    {
        try
        {
            this->shim().OnMaximumChanged(oldMaximum, newMaximum);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OnValueChanged(double oldValue, double newValue) noexcept override
    {
        try
        {
            this->shim().OnValueChanged(oldValue, newValue);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
{
    HRESULT __stdcall get_MinimumProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinimumProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaximumProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallChangeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SmallChangeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LargeChangeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LargeChangeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ValueProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ValueProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
{
    HRESULT __stdcall get_OldValue(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRepeatButton> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
{
    HRESULT __stdcall get_Delay(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Delay());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Delay(int32_t value) noexcept override
    {
        try
        {
            this->shim().Delay(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(int32_t * value) noexcept override
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

    HRESULT __stdcall put_Interval(int32_t value) noexcept override
    {
        try
        {
            this->shim().Interval(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
{
    HRESULT __stdcall get_DelayProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DelayProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IntervalProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IntervalProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IScrollBar> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IScrollBar>
{
    HRESULT __stdcall get_Orientation(Windows::UI::Xaml::Controls::Orientation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(Windows::UI::Xaml::Controls::Orientation value) noexcept override
    {
        try
        {
            this->shim().Orientation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportSize(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ViewportSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewportSize(double value) noexcept override
    {
        try
        {
            this->shim().ViewportSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IndicatorMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode value) noexcept override
    {
        try
        {
            this->shim().IndicatorMode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Scroll(abi_arg_in<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Scroll(*reinterpret_cast<const Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Scroll(event_token token) noexcept override
    {
        try
        {
            this->shim().Scroll(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
{
    HRESULT __stdcall get_OrientationProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OrientationProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportSizeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ViewportSizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndicatorModeProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IndicatorModeProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
{
    HRESULT __stdcall get_NewValue(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollEventType(Windows::UI::Xaml::Controls::Primitives::ScrollEventType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ScrollEventType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
{
    HRESULT __stdcall get_AreHorizontalSnapPointsRegular(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AreHorizontalSnapPointsRegular());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AreVerticalSnapPointsRegular(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AreVerticalSnapPointsRegular());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_HorizontalSnapPointsChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().HorizontalSnapPointsChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_HorizontalSnapPointsChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().HorizontalSnapPointsChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VerticalSnapPointsChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().VerticalSnapPointsChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VerticalSnapPointsChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().VerticalSnapPointsChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIrregularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, abi_arg_out<Windows::Foundation::Collections::IVectorView<float>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetIrregularSnapPoints(orientation, alignment));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRegularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, float * offset, float * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetRegularSnapPoints(orientation, alignment, *offset));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelector> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelector>
{
    HRESULT __stdcall get_SelectedIndex(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedIndex(int32_t value) noexcept override
    {
        try
        {
            this->shim().SelectedIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedItem(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedItem(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().SelectedItem(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedValue(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().SelectedValue(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedValuePath(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedValuePath());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedValuePath(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SelectedValuePath(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSynchronizedWithCurrentItem(abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSynchronizedWithCurrentItem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSynchronizedWithCurrentItem(abi_arg_in<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            this->shim().IsSynchronizedWithCurrentItem(*reinterpret_cast<const Windows::Foundation::IReference<bool> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionChanged(abi_arg_in<Windows::UI::Xaml::Controls::SelectionChangedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SelectionChanged(*reinterpret_cast<const Windows::UI::Xaml::Controls::SelectionChangedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().SelectionChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItem> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
{
    HRESULT __stdcall get_IsSelected(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSelected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSelected(bool value) noexcept override
    {
        try
        {
            this->shim().IsSelected(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::ISelectorItem> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
{
    HRESULT __stdcall get_IsSelectedProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSelectedProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
{
    HRESULT __stdcall get_SelectedIndexProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedIndexProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedItemProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedItemProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedValueProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedValueProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedValuePathProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectedValuePathProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSynchronizedWithCurrentItemProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSynchronizedWithCurrentItemProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetIsSelectionActive(abi_arg_in<Windows::UI::Xaml::IDependencyObject> element, bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetIsSelectionActive(*reinterpret_cast<const Windows::UI::Xaml::DependencyObject *>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
{
    HRESULT __stdcall get_HeaderBackground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeaderBackground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderForeground(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HeaderForeground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderBrush(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BorderBrush());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BorderThickness(abi_arg_out<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BorderThickness());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IconSource(abi_arg_out<Windows::UI::Xaml::Media::IImageSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IconSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTransitions(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Media::Animation::Transition>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentTransitions());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
{
    HRESULT __stdcall get_OpenPaneLength(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenPaneLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NegativeOpenPaneLength(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NegativeOpenPaneLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenPaneLengthMinusCompactLength(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenPaneLengthMinusCompactLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NegativeOpenPaneLengthMinusCompactLength(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NegativeOpenPaneLengthMinusCompactLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OpenPaneGridLength(abi_arg_out<Windows::UI::Xaml::GridLength> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OpenPaneGridLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompactPaneGridLength(abi_arg_out<Windows::UI::Xaml::GridLength> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CompactPaneGridLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IThumb> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IThumb>
{
    HRESULT __stdcall get_IsDragging(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDragging());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DragStarted(abi_arg_in<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DragStarted(*reinterpret_cast<const Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DragStarted(event_token token) noexcept override
    {
        try
        {
            this->shim().DragStarted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DragDelta(abi_arg_in<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DragDelta(*reinterpret_cast<const Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DragDelta(event_token token) noexcept override
    {
        try
        {
            this->shim().DragDelta(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DragCompleted(abi_arg_in<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DragCompleted(*reinterpret_cast<const Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DragCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().DragCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CancelDrag() noexcept override
    {
        try
        {
            this->shim().CancelDrag();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IThumbStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
{
    HRESULT __stdcall get_IsDraggingProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDraggingProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ITickBar> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ITickBar>
{
    HRESULT __stdcall get_Fill(abi_arg_out<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Fill());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Fill(abi_arg_in<Windows::UI::Xaml::Media::IBrush> value) noexcept override
    {
        try
        {
            this->shim().Fill(*reinterpret_cast<const Windows::UI::Xaml::Media::Brush *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ITickBarStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
{
    HRESULT __stdcall get_FillProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FillProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleButton> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleButton>
{
    HRESULT __stdcall get_IsChecked(abi_arg_out<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsChecked());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsChecked(abi_arg_in<Windows::Foundation::IReference<bool>> value) noexcept override
    {
        try
        {
            this->shim().IsChecked(*reinterpret_cast<const Windows::Foundation::IReference<bool> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsThreeState(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsThreeState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsThreeState(bool value) noexcept override
    {
        try
        {
            this->shim().IsThreeState(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Checked(abi_arg_in<Windows::UI::Xaml::RoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Checked(*reinterpret_cast<const Windows::UI::Xaml::RoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Checked(event_token token) noexcept override
    {
        try
        {
            this->shim().Checked(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Unchecked(abi_arg_in<Windows::UI::Xaml::RoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Unchecked(*reinterpret_cast<const Windows::UI::Xaml::RoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Unchecked(event_token token) noexcept override
    {
        try
        {
            this->shim().Unchecked(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Indeterminate(abi_arg_in<Windows::UI::Xaml::RoutedEventHandler> value, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Indeterminate(*reinterpret_cast<const Windows::UI::Xaml::RoutedEventHandler *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Indeterminate(event_token token) noexcept override
    {
        try
        {
            this->shim().Indeterminate(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
{
    HRESULT __stdcall abi_CreateInstance(abi_arg_in<Windows::IInspectable> outer, abi_arg_out<Windows::IInspectable> inner, abi_arg_out<Windows::UI::Xaml::Controls::Primitives::IToggleButton> instance) noexcept override
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
{
    HRESULT __stdcall abi_OnToggle() noexcept override
    {
        try
        {
            this->shim().OnToggle();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
{
    HRESULT __stdcall get_IsCheckedProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCheckedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsThreeStateProperty(abi_arg_out<Windows::UI::Xaml::IDependencyProperty> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsThreeStateProperty());
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
{
    HRESULT __stdcall get_KnobCurrentToOnOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KnobCurrentToOnOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KnobCurrentToOffOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KnobCurrentToOffOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KnobOnToOffOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KnobOnToOffOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KnobOffToOnOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().KnobOffToOnOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurtainCurrentToOnOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurtainCurrentToOnOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurtainCurrentToOffOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurtainCurrentToOffOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurtainOnToOffOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurtainOnToOffOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurtainOffToOnOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurtainOffToOnOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
{
    HRESULT __stdcall get_FromHorizontalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI::Xaml::Controls::Primitives {

template <typename D> bool impl_IScrollSnapPointsInfo<D>::AreHorizontalSnapPointsRegular() const
{
    bool value {};
    check_hresult(static_cast<const IScrollSnapPointsInfo &>(static_cast<const D &>(*this))->get_AreHorizontalSnapPointsRegular(&value));
    return value;
}

template <typename D> bool impl_IScrollSnapPointsInfo<D>::AreVerticalSnapPointsRegular() const
{
    bool value {};
    check_hresult(static_cast<const IScrollSnapPointsInfo &>(static_cast<const D &>(*this))->get_AreVerticalSnapPointsRegular(&value));
    return value;
}

template <typename D> event_token impl_IScrollSnapPointsInfo<D>::HorizontalSnapPointsChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IScrollSnapPointsInfo &>(static_cast<const D &>(*this))->add_HorizontalSnapPointsChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IScrollSnapPointsInfo> impl_IScrollSnapPointsInfo<D>::HorizontalSnapPointsChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IScrollSnapPointsInfo>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo::remove_HorizontalSnapPointsChanged, HorizontalSnapPointsChanged(value));
}

template <typename D> void impl_IScrollSnapPointsInfo<D>::HorizontalSnapPointsChanged(event_token token) const
{
    check_hresult(static_cast<const IScrollSnapPointsInfo &>(static_cast<const D &>(*this))->remove_HorizontalSnapPointsChanged(token));
}

template <typename D> event_token impl_IScrollSnapPointsInfo<D>::VerticalSnapPointsChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IScrollSnapPointsInfo &>(static_cast<const D &>(*this))->add_VerticalSnapPointsChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IScrollSnapPointsInfo> impl_IScrollSnapPointsInfo<D>::VerticalSnapPointsChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IScrollSnapPointsInfo>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo::remove_VerticalSnapPointsChanged, VerticalSnapPointsChanged(value));
}

template <typename D> void impl_IScrollSnapPointsInfo<D>::VerticalSnapPointsChanged(event_token token) const
{
    check_hresult(static_cast<const IScrollSnapPointsInfo &>(static_cast<const D &>(*this))->remove_VerticalSnapPointsChanged(token));
}

template <typename D> Windows::Foundation::Collections::IVectorView<float> impl_IScrollSnapPointsInfo<D>::GetIrregularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment) const
{
    Windows::Foundation::Collections::IVectorView<float> returnValue;
    check_hresult(static_cast<const IScrollSnapPointsInfo &>(static_cast<const D &>(*this))->abi_GetIrregularSnapPoints(orientation, alignment, put(returnValue)));
    return returnValue;
}

template <typename D> float impl_IScrollSnapPointsInfo<D>::GetRegularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, float & offset) const
{
    float returnValue {};
    check_hresult(static_cast<const IScrollSnapPointsInfo &>(static_cast<const D &>(*this))->abi_GetRegularSnapPoints(orientation, alignment, &offset, &returnValue));
    return returnValue;
}

template <typename D> int32_t impl_IItemsChangedEventArgs<D>::Action() const
{
    int32_t value {};
    check_hresult(static_cast<const IItemsChangedEventArgs &>(static_cast<const D &>(*this))->get_Action(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::GeneratorPosition impl_IItemsChangedEventArgs<D>::Position() const
{
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition value {};
    check_hresult(static_cast<const IItemsChangedEventArgs &>(static_cast<const D &>(*this))->get_Position(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::GeneratorPosition impl_IItemsChangedEventArgs<D>::OldPosition() const
{
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition value {};
    check_hresult(static_cast<const IItemsChangedEventArgs &>(static_cast<const D &>(*this))->get_OldPosition(put(value)));
    return value;
}

template <typename D> int32_t impl_IItemsChangedEventArgs<D>::ItemCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IItemsChangedEventArgs &>(static_cast<const D &>(*this))->get_ItemCount(&value));
    return value;
}

template <typename D> int32_t impl_IItemsChangedEventArgs<D>::ItemUICount() const
{
    int32_t value {};
    check_hresult(static_cast<const IItemsChangedEventArgs &>(static_cast<const D &>(*this))->get_ItemUICount(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement impl_ILayoutInformationStatics<D>::GetLayoutExceptionElement(const Windows::IInspectable & dispatcher) const
{
    Windows::UI::Xaml::UIElement element { nullptr };
    check_hresult(static_cast<const ILayoutInformationStatics &>(static_cast<const D &>(*this))->abi_GetLayoutExceptionElement(get(dispatcher), put(element)));
    return element;
}

template <typename D> Windows::Foundation::Rect impl_ILayoutInformationStatics<D>::GetLayoutSlot(const Windows::UI::Xaml::FrameworkElement & element) const
{
    Windows::Foundation::Rect slot {};
    check_hresult(static_cast<const ILayoutInformationStatics &>(static_cast<const D &>(*this))->abi_GetLayoutSlot(get(element), put(slot)));
    return slot;
}

template <typename D> double impl_IComboBoxTemplateSettings<D>::DropDownOpenedHeight() const
{
    double value {};
    check_hresult(static_cast<const IComboBoxTemplateSettings &>(static_cast<const D &>(*this))->get_DropDownOpenedHeight(&value));
    return value;
}

template <typename D> double impl_IComboBoxTemplateSettings<D>::DropDownClosedHeight() const
{
    double value {};
    check_hresult(static_cast<const IComboBoxTemplateSettings &>(static_cast<const D &>(*this))->get_DropDownClosedHeight(&value));
    return value;
}

template <typename D> double impl_IComboBoxTemplateSettings<D>::DropDownOffset() const
{
    double value {};
    check_hresult(static_cast<const IComboBoxTemplateSettings &>(static_cast<const D &>(*this))->get_DropDownOffset(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::AnimationDirection impl_IComboBoxTemplateSettings<D>::SelectedItemDirection() const
{
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection value {};
    check_hresult(static_cast<const IComboBoxTemplateSettings &>(static_cast<const D &>(*this))->get_SelectedItemDirection(&value));
    return value;
}

template <typename D> double impl_IComboBoxTemplateSettings2<D>::DropDownContentMinWidth() const
{
    double value {};
    check_hresult(static_cast<const IComboBoxTemplateSettings2 &>(static_cast<const D &>(*this))->get_DropDownContentMinWidth(&value));
    return value;
}

template <typename D> double impl_IDragCompletedEventArgs<D>::HorizontalChange() const
{
    double value {};
    check_hresult(static_cast<const IDragCompletedEventArgs &>(static_cast<const D &>(*this))->get_HorizontalChange(&value));
    return value;
}

template <typename D> double impl_IDragCompletedEventArgs<D>::VerticalChange() const
{
    double value {};
    check_hresult(static_cast<const IDragCompletedEventArgs &>(static_cast<const D &>(*this))->get_VerticalChange(&value));
    return value;
}

template <typename D> bool impl_IDragCompletedEventArgs<D>::Canceled() const
{
    bool value {};
    check_hresult(static_cast<const IDragCompletedEventArgs &>(static_cast<const D &>(*this))->get_Canceled(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs impl_IDragCompletedEventArgsFactory<D>::CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs instance { nullptr };
    check_hresult(static_cast<const IDragCompletedEventArgsFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(horizontalChange, verticalChange, canceled, get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> double impl_IDragDeltaEventArgs<D>::HorizontalChange() const
{
    double value {};
    check_hresult(static_cast<const IDragDeltaEventArgs &>(static_cast<const D &>(*this))->get_HorizontalChange(&value));
    return value;
}

template <typename D> double impl_IDragDeltaEventArgs<D>::VerticalChange() const
{
    double value {};
    check_hresult(static_cast<const IDragDeltaEventArgs &>(static_cast<const D &>(*this))->get_VerticalChange(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs impl_IDragDeltaEventArgsFactory<D>::CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs instance { nullptr };
    check_hresult(static_cast<const IDragDeltaEventArgsFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithHorizontalChangeAndVerticalChange(horizontalChange, verticalChange, get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> double impl_IDragStartedEventArgs<D>::HorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const IDragStartedEventArgs &>(static_cast<const D &>(*this))->get_HorizontalOffset(&value));
    return value;
}

template <typename D> double impl_IDragStartedEventArgs<D>::VerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const IDragStartedEventArgs &>(static_cast<const D &>(*this))->get_VerticalOffset(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs impl_IDragStartedEventArgsFactory<D>::CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs instance { nullptr };
    check_hresult(static_cast<const IDragStartedEventArgsFactory &>(static_cast<const D &>(*this))->abi_CreateInstanceWithHorizontalOffsetAndVerticalOffset(horizontalOffset, verticalOffset, get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> int32_t impl_IGridViewItemTemplateSettings<D>::DragItemsCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IGridViewItemTemplateSettings &>(static_cast<const D &>(*this))->get_DragItemsCount(&value));
    return value;
}

template <typename D> int32_t impl_IListViewItemTemplateSettings<D>::DragItemsCount() const
{
    int32_t value {};
    check_hresult(static_cast<const IListViewItemTemplateSettings &>(static_cast<const D &>(*this))->get_DragItemsCount(&value));
    return value;
}

template <typename D> double impl_IMenuFlyoutPresenterTemplateSettings<D>::FlyoutContentMinWidth() const
{
    double value {};
    check_hresult(static_cast<const IMenuFlyoutPresenterTemplateSettings &>(static_cast<const D &>(*this))->get_FlyoutContentMinWidth(&value));
    return value;
}

template <typename D> double impl_IProgressBarTemplateSettings<D>::EllipseDiameter() const
{
    double value {};
    check_hresult(static_cast<const IProgressBarTemplateSettings &>(static_cast<const D &>(*this))->get_EllipseDiameter(&value));
    return value;
}

template <typename D> double impl_IProgressBarTemplateSettings<D>::EllipseOffset() const
{
    double value {};
    check_hresult(static_cast<const IProgressBarTemplateSettings &>(static_cast<const D &>(*this))->get_EllipseOffset(&value));
    return value;
}

template <typename D> double impl_IProgressBarTemplateSettings<D>::EllipseAnimationWellPosition() const
{
    double value {};
    check_hresult(static_cast<const IProgressBarTemplateSettings &>(static_cast<const D &>(*this))->get_EllipseAnimationWellPosition(&value));
    return value;
}

template <typename D> double impl_IProgressBarTemplateSettings<D>::EllipseAnimationEndPosition() const
{
    double value {};
    check_hresult(static_cast<const IProgressBarTemplateSettings &>(static_cast<const D &>(*this))->get_EllipseAnimationEndPosition(&value));
    return value;
}

template <typename D> double impl_IProgressBarTemplateSettings<D>::ContainerAnimationStartPosition() const
{
    double value {};
    check_hresult(static_cast<const IProgressBarTemplateSettings &>(static_cast<const D &>(*this))->get_ContainerAnimationStartPosition(&value));
    return value;
}

template <typename D> double impl_IProgressBarTemplateSettings<D>::ContainerAnimationEndPosition() const
{
    double value {};
    check_hresult(static_cast<const IProgressBarTemplateSettings &>(static_cast<const D &>(*this))->get_ContainerAnimationEndPosition(&value));
    return value;
}

template <typename D> double impl_IProgressBarTemplateSettings<D>::IndicatorLengthDelta() const
{
    double value {};
    check_hresult(static_cast<const IProgressBarTemplateSettings &>(static_cast<const D &>(*this))->get_IndicatorLengthDelta(&value));
    return value;
}

template <typename D> double impl_IProgressRingTemplateSettings<D>::EllipseDiameter() const
{
    double value {};
    check_hresult(static_cast<const IProgressRingTemplateSettings &>(static_cast<const D &>(*this))->get_EllipseDiameter(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness impl_IProgressRingTemplateSettings<D>::EllipseOffset() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IProgressRingTemplateSettings &>(static_cast<const D &>(*this))->get_EllipseOffset(put(value)));
    return value;
}

template <typename D> double impl_IProgressRingTemplateSettings<D>::MaxSideLength() const
{
    double value {};
    check_hresult(static_cast<const IProgressRingTemplateSettings &>(static_cast<const D &>(*this))->get_MaxSideLength(&value));
    return value;
}

template <typename D> double impl_IRangeBaseValueChangedEventArgs<D>::OldValue() const
{
    double value {};
    check_hresult(static_cast<const IRangeBaseValueChangedEventArgs &>(static_cast<const D &>(*this))->get_OldValue(&value));
    return value;
}

template <typename D> double impl_IRangeBaseValueChangedEventArgs<D>::NewValue() const
{
    double value {};
    check_hresult(static_cast<const IRangeBaseValueChangedEventArgs &>(static_cast<const D &>(*this))->get_NewValue(&value));
    return value;
}

template <typename D> double impl_IScrollEventArgs<D>::NewValue() const
{
    double value {};
    check_hresult(static_cast<const IScrollEventArgs &>(static_cast<const D &>(*this))->get_NewValue(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ScrollEventType impl_IScrollEventArgs<D>::ScrollEventType() const
{
    Windows::UI::Xaml::Controls::Primitives::ScrollEventType value {};
    check_hresult(static_cast<const IScrollEventArgs &>(static_cast<const D &>(*this))->get_ScrollEventType(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_ISettingsFlyoutTemplateSettings<D>::HeaderBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const ISettingsFlyoutTemplateSettings &>(static_cast<const D &>(*this))->get_HeaderBackground(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_ISettingsFlyoutTemplateSettings<D>::HeaderForeground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const ISettingsFlyoutTemplateSettings &>(static_cast<const D &>(*this))->get_HeaderForeground(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_ISettingsFlyoutTemplateSettings<D>::BorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const ISettingsFlyoutTemplateSettings &>(static_cast<const D &>(*this))->get_BorderBrush(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness impl_ISettingsFlyoutTemplateSettings<D>::BorderThickness() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const ISettingsFlyoutTemplateSettings &>(static_cast<const D &>(*this))->get_BorderThickness(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::ImageSource impl_ISettingsFlyoutTemplateSettings<D>::IconSource() const
{
    Windows::UI::Xaml::Media::ImageSource value { nullptr };
    check_hresult(static_cast<const ISettingsFlyoutTemplateSettings &>(static_cast<const D &>(*this))->get_IconSource(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::TransitionCollection impl_ISettingsFlyoutTemplateSettings<D>::ContentTransitions() const
{
    Windows::UI::Xaml::Media::Animation::TransitionCollection value { nullptr };
    check_hresult(static_cast<const ISettingsFlyoutTemplateSettings &>(static_cast<const D &>(*this))->get_ContentTransitions(put(value)));
    return value;
}

template <typename D> double impl_IToggleSwitchTemplateSettings<D>::KnobCurrentToOnOffset() const
{
    double value {};
    check_hresult(static_cast<const IToggleSwitchTemplateSettings &>(static_cast<const D &>(*this))->get_KnobCurrentToOnOffset(&value));
    return value;
}

template <typename D> double impl_IToggleSwitchTemplateSettings<D>::KnobCurrentToOffOffset() const
{
    double value {};
    check_hresult(static_cast<const IToggleSwitchTemplateSettings &>(static_cast<const D &>(*this))->get_KnobCurrentToOffOffset(&value));
    return value;
}

template <typename D> double impl_IToggleSwitchTemplateSettings<D>::KnobOnToOffOffset() const
{
    double value {};
    check_hresult(static_cast<const IToggleSwitchTemplateSettings &>(static_cast<const D &>(*this))->get_KnobOnToOffOffset(&value));
    return value;
}

template <typename D> double impl_IToggleSwitchTemplateSettings<D>::KnobOffToOnOffset() const
{
    double value {};
    check_hresult(static_cast<const IToggleSwitchTemplateSettings &>(static_cast<const D &>(*this))->get_KnobOffToOnOffset(&value));
    return value;
}

template <typename D> double impl_IToggleSwitchTemplateSettings<D>::CurtainCurrentToOnOffset() const
{
    double value {};
    check_hresult(static_cast<const IToggleSwitchTemplateSettings &>(static_cast<const D &>(*this))->get_CurtainCurrentToOnOffset(&value));
    return value;
}

template <typename D> double impl_IToggleSwitchTemplateSettings<D>::CurtainCurrentToOffOffset() const
{
    double value {};
    check_hresult(static_cast<const IToggleSwitchTemplateSettings &>(static_cast<const D &>(*this))->get_CurtainCurrentToOffOffset(&value));
    return value;
}

template <typename D> double impl_IToggleSwitchTemplateSettings<D>::CurtainOnToOffOffset() const
{
    double value {};
    check_hresult(static_cast<const IToggleSwitchTemplateSettings &>(static_cast<const D &>(*this))->get_CurtainOnToOffOffset(&value));
    return value;
}

template <typename D> double impl_IToggleSwitchTemplateSettings<D>::CurtainOffToOnOffset() const
{
    double value {};
    check_hresult(static_cast<const IToggleSwitchTemplateSettings &>(static_cast<const D &>(*this))->get_CurtainOffToOnOffset(&value));
    return value;
}

template <typename D> double impl_IToolTipTemplateSettings<D>::FromHorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const IToolTipTemplateSettings &>(static_cast<const D &>(*this))->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> double impl_IToolTipTemplateSettings<D>::FromVerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const IToolTipTemplateSettings &>(static_cast<const D &>(*this))->get_FromVerticalOffset(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement impl_IPopup<D>::Child() const
{
    Windows::UI::Xaml::UIElement value { nullptr };
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->get_Child(put(value)));
    return value;
}

template <typename D> void impl_IPopup<D>::Child(const Windows::UI::Xaml::UIElement & value) const
{
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->put_Child(get(value)));
}

template <typename D> bool impl_IPopup<D>::IsOpen() const
{
    bool value {};
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->get_IsOpen(&value));
    return value;
}

template <typename D> void impl_IPopup<D>::IsOpen(bool value) const
{
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->put_IsOpen(value));
}

template <typename D> double impl_IPopup<D>::HorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->get_HorizontalOffset(&value));
    return value;
}

template <typename D> void impl_IPopup<D>::HorizontalOffset(double value) const
{
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->put_HorizontalOffset(value));
}

template <typename D> double impl_IPopup<D>::VerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->get_VerticalOffset(&value));
    return value;
}

template <typename D> void impl_IPopup<D>::VerticalOffset(double value) const
{
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->put_VerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::TransitionCollection impl_IPopup<D>::ChildTransitions() const
{
    Windows::UI::Xaml::Media::Animation::TransitionCollection value { nullptr };
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->get_ChildTransitions(put(value)));
    return value;
}

template <typename D> void impl_IPopup<D>::ChildTransitions(const Windows::UI::Xaml::Media::Animation::TransitionCollection & value) const
{
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->put_ChildTransitions(get(value)));
}

template <typename D> bool impl_IPopup<D>::IsLightDismissEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->get_IsLightDismissEnabled(&value));
    return value;
}

template <typename D> void impl_IPopup<D>::IsLightDismissEnabled(bool value) const
{
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->put_IsLightDismissEnabled(value));
}

template <typename D> event_token impl_IPopup<D>::Opened(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->add_Opened(get(value), &token));
    return token;
}

template <typename D> event_revoker<IPopup> impl_IPopup<D>::Opened(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IPopup>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IPopup::remove_Opened, Opened(value));
}

template <typename D> void impl_IPopup<D>::Opened(event_token token) const
{
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->remove_Opened(token));
}

template <typename D> event_token impl_IPopup<D>::Closed(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->add_Closed(get(value), &token));
    return token;
}

template <typename D> event_revoker<IPopup> impl_IPopup<D>::Closed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IPopup>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IPopup::remove_Closed, Closed(value));
}

template <typename D> void impl_IPopup<D>::Closed(event_token token) const
{
    check_hresult(static_cast<const IPopup &>(static_cast<const D &>(*this))->remove_Closed(token));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopupStatics<D>::ChildProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopupStatics &>(static_cast<const D &>(*this))->get_ChildProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopupStatics<D>::IsOpenProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopupStatics &>(static_cast<const D &>(*this))->get_IsOpenProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopupStatics<D>::HorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopupStatics &>(static_cast<const D &>(*this))->get_HorizontalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopupStatics<D>::VerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopupStatics &>(static_cast<const D &>(*this))->get_VerticalOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopupStatics<D>::ChildTransitionsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopupStatics &>(static_cast<const D &>(*this))->get_ChildTransitionsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopupStatics<D>::IsLightDismissEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopupStatics &>(static_cast<const D &>(*this))->get_IsLightDismissEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::LightDismissOverlayMode impl_IPopup2<D>::LightDismissOverlayMode() const
{
    Windows::UI::Xaml::Controls::LightDismissOverlayMode value {};
    check_hresult(static_cast<const IPopup2 &>(static_cast<const D &>(*this))->get_LightDismissOverlayMode(&value));
    return value;
}

template <typename D> void impl_IPopup2<D>::LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) const
{
    check_hresult(static_cast<const IPopup2 &>(static_cast<const D &>(*this))->put_LightDismissOverlayMode(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPopupStatics2<D>::LightDismissOverlayModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPopupStatics2 &>(static_cast<const D &>(*this))->get_LightDismissOverlayModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_ITickBar<D>::Fill() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const ITickBar &>(static_cast<const D &>(*this))->get_Fill(put(value)));
    return value;
}

template <typename D> void impl_ITickBar<D>::Fill(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const ITickBar &>(static_cast<const D &>(*this))->put_Fill(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ITickBarStatics<D>::FillProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ITickBarStatics &>(static_cast<const D &>(*this))->get_FillProperty(put(value)));
    return value;
}

template <typename D> double impl_IRangeBase<D>::Minimum() const
{
    double value {};
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->get_Minimum(&value));
    return value;
}

template <typename D> void impl_IRangeBase<D>::Minimum(double value) const
{
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->put_Minimum(value));
}

template <typename D> double impl_IRangeBase<D>::Maximum() const
{
    double value {};
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->get_Maximum(&value));
    return value;
}

template <typename D> void impl_IRangeBase<D>::Maximum(double value) const
{
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->put_Maximum(value));
}

template <typename D> double impl_IRangeBase<D>::SmallChange() const
{
    double value {};
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->get_SmallChange(&value));
    return value;
}

template <typename D> void impl_IRangeBase<D>::SmallChange(double value) const
{
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->put_SmallChange(value));
}

template <typename D> double impl_IRangeBase<D>::LargeChange() const
{
    double value {};
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->get_LargeChange(&value));
    return value;
}

template <typename D> void impl_IRangeBase<D>::LargeChange(double value) const
{
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->put_LargeChange(value));
}

template <typename D> double impl_IRangeBase<D>::Value() const
{
    double value {};
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->get_Value(&value));
    return value;
}

template <typename D> void impl_IRangeBase<D>::Value(double value) const
{
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->put_Value(value));
}

template <typename D> event_token impl_IRangeBase<D>::ValueChanged(const Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->add_ValueChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<IRangeBase> impl_IRangeBase<D>::ValueChanged(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler & value) const
{
    return impl::make_event_revoker<D, IRangeBase>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IRangeBase::remove_ValueChanged, ValueChanged(value));
}

template <typename D> void impl_IRangeBase<D>::ValueChanged(event_token token) const
{
    check_hresult(static_cast<const IRangeBase &>(static_cast<const D &>(*this))->remove_ValueChanged(token));
}

template <typename D> void impl_IRangeBaseOverrides<D>::OnMinimumChanged(double oldMinimum, double newMinimum) const
{
    check_hresult(static_cast<const IRangeBaseOverrides &>(static_cast<const D &>(*this))->abi_OnMinimumChanged(oldMinimum, newMinimum));
}

template <typename D> void impl_IRangeBaseOverrides<D>::OnMaximumChanged(double oldMaximum, double newMaximum) const
{
    check_hresult(static_cast<const IRangeBaseOverrides &>(static_cast<const D &>(*this))->abi_OnMaximumChanged(oldMaximum, newMaximum));
}

template <typename D> void impl_IRangeBaseOverrides<D>::OnValueChanged(double oldValue, double newValue) const
{
    check_hresult(static_cast<const IRangeBaseOverrides &>(static_cast<const D &>(*this))->abi_OnValueChanged(oldValue, newValue));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRangeBaseStatics<D>::MinimumProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRangeBaseStatics &>(static_cast<const D &>(*this))->get_MinimumProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRangeBaseStatics<D>::MaximumProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRangeBaseStatics &>(static_cast<const D &>(*this))->get_MaximumProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRangeBaseStatics<D>::SmallChangeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRangeBaseStatics &>(static_cast<const D &>(*this))->get_SmallChangeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRangeBaseStatics<D>::LargeChangeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRangeBaseStatics &>(static_cast<const D &>(*this))->get_LargeChangeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRangeBaseStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRangeBaseStatics &>(static_cast<const D &>(*this))->get_ValueProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::RangeBase impl_IRangeBaseFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::RangeBase instance { nullptr };
    check_hresult(static_cast<const IRangeBaseFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_IThumb<D>::IsDragging() const
{
    bool value {};
    check_hresult(static_cast<const IThumb &>(static_cast<const D &>(*this))->get_IsDragging(&value));
    return value;
}

template <typename D> event_token impl_IThumb<D>::DragStarted(const Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IThumb &>(static_cast<const D &>(*this))->add_DragStarted(get(value), &token));
    return token;
}

template <typename D> event_revoker<IThumb> impl_IThumb<D>::DragStarted(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler & value) const
{
    return impl::make_event_revoker<D, IThumb>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IThumb::remove_DragStarted, DragStarted(value));
}

template <typename D> void impl_IThumb<D>::DragStarted(event_token token) const
{
    check_hresult(static_cast<const IThumb &>(static_cast<const D &>(*this))->remove_DragStarted(token));
}

template <typename D> event_token impl_IThumb<D>::DragDelta(const Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IThumb &>(static_cast<const D &>(*this))->add_DragDelta(get(value), &token));
    return token;
}

template <typename D> event_revoker<IThumb> impl_IThumb<D>::DragDelta(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler & value) const
{
    return impl::make_event_revoker<D, IThumb>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IThumb::remove_DragDelta, DragDelta(value));
}

template <typename D> void impl_IThumb<D>::DragDelta(event_token token) const
{
    check_hresult(static_cast<const IThumb &>(static_cast<const D &>(*this))->remove_DragDelta(token));
}

template <typename D> event_token impl_IThumb<D>::DragCompleted(const Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IThumb &>(static_cast<const D &>(*this))->add_DragCompleted(get(value), &token));
    return token;
}

template <typename D> event_revoker<IThumb> impl_IThumb<D>::DragCompleted(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler & value) const
{
    return impl::make_event_revoker<D, IThumb>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IThumb::remove_DragCompleted, DragCompleted(value));
}

template <typename D> void impl_IThumb<D>::DragCompleted(event_token token) const
{
    check_hresult(static_cast<const IThumb &>(static_cast<const D &>(*this))->remove_DragCompleted(token));
}

template <typename D> void impl_IThumb<D>::CancelDrag() const
{
    check_hresult(static_cast<const IThumb &>(static_cast<const D &>(*this))->abi_CancelDrag());
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IThumbStatics<D>::IsDraggingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IThumbStatics &>(static_cast<const D &>(*this))->get_IsDraggingProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::ClickMode impl_IButtonBase<D>::ClickMode() const
{
    Windows::UI::Xaml::Controls::ClickMode value {};
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->get_ClickMode(&value));
    return value;
}

template <typename D> void impl_IButtonBase<D>::ClickMode(Windows::UI::Xaml::Controls::ClickMode value) const
{
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->put_ClickMode(value));
}

template <typename D> bool impl_IButtonBase<D>::IsPointerOver() const
{
    bool value {};
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->get_IsPointerOver(&value));
    return value;
}

template <typename D> bool impl_IButtonBase<D>::IsPressed() const
{
    bool value {};
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->get_IsPressed(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::ICommand impl_IButtonBase<D>::Command() const
{
    Windows::UI::Xaml::Input::ICommand value;
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->get_Command(put(value)));
    return value;
}

template <typename D> void impl_IButtonBase<D>::Command(const Windows::UI::Xaml::Input::ICommand & value) const
{
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->put_Command(get(value)));
}

template <typename D> Windows::IInspectable impl_IButtonBase<D>::CommandParameter() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->get_CommandParameter(put(value)));
    return value;
}

template <typename D> void impl_IButtonBase<D>::CommandParameter(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->put_CommandParameter(get(value)));
}

template <typename D> event_token impl_IButtonBase<D>::Click(const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->add_Click(get(value), &token));
    return token;
}

template <typename D> event_revoker<IButtonBase> impl_IButtonBase<D>::Click(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IButtonBase>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IButtonBase::remove_Click, Click(value));
}

template <typename D> void impl_IButtonBase<D>::Click(event_token token) const
{
    check_hresult(static_cast<const IButtonBase &>(static_cast<const D &>(*this))->remove_Click(token));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IButtonBaseStatics<D>::ClickModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IButtonBaseStatics &>(static_cast<const D &>(*this))->get_ClickModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IButtonBaseStatics<D>::IsPointerOverProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IButtonBaseStatics &>(static_cast<const D &>(*this))->get_IsPointerOverProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IButtonBaseStatics<D>::IsPressedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IButtonBaseStatics &>(static_cast<const D &>(*this))->get_IsPressedProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IButtonBaseStatics<D>::CommandProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IButtonBaseStatics &>(static_cast<const D &>(*this))->get_CommandProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IButtonBaseStatics<D>::CommandParameterProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IButtonBaseStatics &>(static_cast<const D &>(*this))->get_CommandParameterProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ButtonBase impl_IButtonBaseFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::ButtonBase instance { nullptr };
    check_hresult(static_cast<const IButtonBaseFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_ICarouselPanel<D>::CanVerticallyScroll() const
{
    bool value {};
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->get_CanVerticallyScroll(&value));
    return value;
}

template <typename D> void impl_ICarouselPanel<D>::CanVerticallyScroll(bool value) const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->put_CanVerticallyScroll(value));
}

template <typename D> bool impl_ICarouselPanel<D>::CanHorizontallyScroll() const
{
    bool value {};
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->get_CanHorizontallyScroll(&value));
    return value;
}

template <typename D> void impl_ICarouselPanel<D>::CanHorizontallyScroll(bool value) const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->put_CanHorizontallyScroll(value));
}

template <typename D> double impl_ICarouselPanel<D>::ExtentWidth() const
{
    double value {};
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->get_ExtentWidth(&value));
    return value;
}

template <typename D> double impl_ICarouselPanel<D>::ExtentHeight() const
{
    double value {};
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->get_ExtentHeight(&value));
    return value;
}

template <typename D> double impl_ICarouselPanel<D>::ViewportWidth() const
{
    double value {};
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->get_ViewportWidth(&value));
    return value;
}

template <typename D> double impl_ICarouselPanel<D>::ViewportHeight() const
{
    double value {};
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->get_ViewportHeight(&value));
    return value;
}

template <typename D> double impl_ICarouselPanel<D>::HorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->get_HorizontalOffset(&value));
    return value;
}

template <typename D> double impl_ICarouselPanel<D>::VerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->get_VerticalOffset(&value));
    return value;
}

template <typename D> Windows::IInspectable impl_ICarouselPanel<D>::ScrollOwner() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->get_ScrollOwner(put(value)));
    return value;
}

template <typename D> void impl_ICarouselPanel<D>::ScrollOwner(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->put_ScrollOwner(get(value)));
}

template <typename D> void impl_ICarouselPanel<D>::LineUp() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_LineUp());
}

template <typename D> void impl_ICarouselPanel<D>::LineDown() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_LineDown());
}

template <typename D> void impl_ICarouselPanel<D>::LineLeft() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_LineLeft());
}

template <typename D> void impl_ICarouselPanel<D>::LineRight() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_LineRight());
}

template <typename D> void impl_ICarouselPanel<D>::PageUp() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_PageUp());
}

template <typename D> void impl_ICarouselPanel<D>::PageDown() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_PageDown());
}

template <typename D> void impl_ICarouselPanel<D>::PageLeft() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_PageLeft());
}

template <typename D> void impl_ICarouselPanel<D>::PageRight() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_PageRight());
}

template <typename D> void impl_ICarouselPanel<D>::MouseWheelUp() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_MouseWheelUp());
}

template <typename D> void impl_ICarouselPanel<D>::MouseWheelDown() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_MouseWheelDown());
}

template <typename D> void impl_ICarouselPanel<D>::MouseWheelLeft() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_MouseWheelLeft());
}

template <typename D> void impl_ICarouselPanel<D>::MouseWheelRight() const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_MouseWheelRight());
}

template <typename D> void impl_ICarouselPanel<D>::SetHorizontalOffset(double offset) const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_SetHorizontalOffset(offset));
}

template <typename D> void impl_ICarouselPanel<D>::SetVerticalOffset(double offset) const
{
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_SetVerticalOffset(offset));
}

template <typename D> Windows::Foundation::Rect impl_ICarouselPanel<D>::MakeVisible(const Windows::UI::Xaml::UIElement & visual, const Windows::Foundation::Rect & rectangle) const
{
    Windows::Foundation::Rect returnValue {};
    check_hresult(static_cast<const ICarouselPanel &>(static_cast<const D &>(*this))->abi_MakeVisible(get(visual), get(rectangle), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::CarouselPanel impl_ICarouselPanelFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::CarouselPanel instance { nullptr };
    check_hresult(static_cast<const ICarouselPanelFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_IOrientedVirtualizingPanel<D>::CanVerticallyScroll() const
{
    bool value {};
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->get_CanVerticallyScroll(&value));
    return value;
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::CanVerticallyScroll(bool value) const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->put_CanVerticallyScroll(value));
}

template <typename D> bool impl_IOrientedVirtualizingPanel<D>::CanHorizontallyScroll() const
{
    bool value {};
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->get_CanHorizontallyScroll(&value));
    return value;
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::CanHorizontallyScroll(bool value) const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->put_CanHorizontallyScroll(value));
}

template <typename D> double impl_IOrientedVirtualizingPanel<D>::ExtentWidth() const
{
    double value {};
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->get_ExtentWidth(&value));
    return value;
}

template <typename D> double impl_IOrientedVirtualizingPanel<D>::ExtentHeight() const
{
    double value {};
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->get_ExtentHeight(&value));
    return value;
}

template <typename D> double impl_IOrientedVirtualizingPanel<D>::ViewportWidth() const
{
    double value {};
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->get_ViewportWidth(&value));
    return value;
}

template <typename D> double impl_IOrientedVirtualizingPanel<D>::ViewportHeight() const
{
    double value {};
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->get_ViewportHeight(&value));
    return value;
}

template <typename D> double impl_IOrientedVirtualizingPanel<D>::HorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->get_HorizontalOffset(&value));
    return value;
}

template <typename D> double impl_IOrientedVirtualizingPanel<D>::VerticalOffset() const
{
    double value {};
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->get_VerticalOffset(&value));
    return value;
}

template <typename D> Windows::IInspectable impl_IOrientedVirtualizingPanel<D>::ScrollOwner() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->get_ScrollOwner(put(value)));
    return value;
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::ScrollOwner(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->put_ScrollOwner(get(value)));
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::LineUp() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_LineUp());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::LineDown() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_LineDown());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::LineLeft() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_LineLeft());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::LineRight() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_LineRight());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::PageUp() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_PageUp());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::PageDown() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_PageDown());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::PageLeft() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_PageLeft());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::PageRight() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_PageRight());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::MouseWheelUp() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_MouseWheelUp());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::MouseWheelDown() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_MouseWheelDown());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::MouseWheelLeft() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_MouseWheelLeft());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::MouseWheelRight() const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_MouseWheelRight());
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::SetHorizontalOffset(double offset) const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_SetHorizontalOffset(offset));
}

template <typename D> void impl_IOrientedVirtualizingPanel<D>::SetVerticalOffset(double offset) const
{
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_SetVerticalOffset(offset));
}

template <typename D> Windows::Foundation::Rect impl_IOrientedVirtualizingPanel<D>::MakeVisible(const Windows::UI::Xaml::UIElement & visual, const Windows::Foundation::Rect & rectangle) const
{
    Windows::Foundation::Rect returnValue {};
    check_hresult(static_cast<const IOrientedVirtualizingPanel &>(static_cast<const D &>(*this))->abi_MakeVisible(get(visual), get(rectangle), put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Orientation impl_IScrollBar<D>::Orientation() const
{
    Windows::UI::Xaml::Controls::Orientation value {};
    check_hresult(static_cast<const IScrollBar &>(static_cast<const D &>(*this))->get_Orientation(&value));
    return value;
}

template <typename D> void impl_IScrollBar<D>::Orientation(Windows::UI::Xaml::Controls::Orientation value) const
{
    check_hresult(static_cast<const IScrollBar &>(static_cast<const D &>(*this))->put_Orientation(value));
}

template <typename D> double impl_IScrollBar<D>::ViewportSize() const
{
    double value {};
    check_hresult(static_cast<const IScrollBar &>(static_cast<const D &>(*this))->get_ViewportSize(&value));
    return value;
}

template <typename D> void impl_IScrollBar<D>::ViewportSize(double value) const
{
    check_hresult(static_cast<const IScrollBar &>(static_cast<const D &>(*this))->put_ViewportSize(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode impl_IScrollBar<D>::IndicatorMode() const
{
    Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode value {};
    check_hresult(static_cast<const IScrollBar &>(static_cast<const D &>(*this))->get_IndicatorMode(&value));
    return value;
}

template <typename D> void impl_IScrollBar<D>::IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode value) const
{
    check_hresult(static_cast<const IScrollBar &>(static_cast<const D &>(*this))->put_IndicatorMode(value));
}

template <typename D> event_token impl_IScrollBar<D>::Scroll(const Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IScrollBar &>(static_cast<const D &>(*this))->add_Scroll(get(value), &token));
    return token;
}

template <typename D> event_revoker<IScrollBar> impl_IScrollBar<D>::Scroll(auto_revoke_t, const Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler & value) const
{
    return impl::make_event_revoker<D, IScrollBar>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IScrollBar::remove_Scroll, Scroll(value));
}

template <typename D> void impl_IScrollBar<D>::Scroll(event_token token) const
{
    check_hresult(static_cast<const IScrollBar &>(static_cast<const D &>(*this))->remove_Scroll(token));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IScrollBarStatics<D>::OrientationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IScrollBarStatics &>(static_cast<const D &>(*this))->get_OrientationProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IScrollBarStatics<D>::ViewportSizeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IScrollBarStatics &>(static_cast<const D &>(*this))->get_ViewportSizeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IScrollBarStatics<D>::IndicatorModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IScrollBarStatics &>(static_cast<const D &>(*this))->get_IndicatorModeProperty(put(value)));
    return value;
}

template <typename D> int32_t impl_ISelector<D>::SelectedIndex() const
{
    int32_t value {};
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->get_SelectedIndex(&value));
    return value;
}

template <typename D> void impl_ISelector<D>::SelectedIndex(int32_t value) const
{
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->put_SelectedIndex(value));
}

template <typename D> Windows::IInspectable impl_ISelector<D>::SelectedItem() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->get_SelectedItem(put(value)));
    return value;
}

template <typename D> void impl_ISelector<D>::SelectedItem(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->put_SelectedItem(get(value)));
}

template <typename D> Windows::IInspectable impl_ISelector<D>::SelectedValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->get_SelectedValue(put(value)));
    return value;
}

template <typename D> void impl_ISelector<D>::SelectedValue(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->put_SelectedValue(get(value)));
}

template <typename D> hstring impl_ISelector<D>::SelectedValuePath() const
{
    hstring value;
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->get_SelectedValuePath(put(value)));
    return value;
}

template <typename D> void impl_ISelector<D>::SelectedValuePath(hstring_ref value) const
{
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->put_SelectedValuePath(get(value)));
}

template <typename D> Windows::Foundation::IReference<bool> impl_ISelector<D>::IsSynchronizedWithCurrentItem() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->get_IsSynchronizedWithCurrentItem(put(value)));
    return value;
}

template <typename D> void impl_ISelector<D>::IsSynchronizedWithCurrentItem(const Windows::Foundation::IReference<bool> & value) const
{
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->put_IsSynchronizedWithCurrentItem(get(value)));
}

template <typename D> event_token impl_ISelector<D>::SelectionChanged(const Windows::UI::Xaml::Controls::SelectionChangedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->add_SelectionChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<ISelector> impl_ISelector<D>::SelectionChanged(auto_revoke_t, const Windows::UI::Xaml::Controls::SelectionChangedEventHandler & value) const
{
    return impl::make_event_revoker<D, ISelector>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::ISelector::remove_SelectionChanged, SelectionChanged(value));
}

template <typename D> void impl_ISelector<D>::SelectionChanged(event_token token) const
{
    check_hresult(static_cast<const ISelector &>(static_cast<const D &>(*this))->remove_SelectionChanged(token));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISelectorStatics<D>::SelectedIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISelectorStatics &>(static_cast<const D &>(*this))->get_SelectedIndexProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISelectorStatics<D>::SelectedItemProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISelectorStatics &>(static_cast<const D &>(*this))->get_SelectedItemProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISelectorStatics<D>::SelectedValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISelectorStatics &>(static_cast<const D &>(*this))->get_SelectedValueProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISelectorStatics<D>::SelectedValuePathProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISelectorStatics &>(static_cast<const D &>(*this))->get_SelectedValuePathProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISelectorStatics<D>::IsSynchronizedWithCurrentItemProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISelectorStatics &>(static_cast<const D &>(*this))->get_IsSynchronizedWithCurrentItemProperty(put(value)));
    return value;
}

template <typename D> bool impl_ISelectorStatics<D>::GetIsSelectionActive(const Windows::UI::Xaml::DependencyObject & element) const
{
    bool returnValue {};
    check_hresult(static_cast<const ISelectorStatics &>(static_cast<const D &>(*this))->abi_GetIsSelectionActive(get(element), &returnValue));
    return returnValue;
}

template <typename D> bool impl_ISelectorItem<D>::IsSelected() const
{
    bool value {};
    check_hresult(static_cast<const ISelectorItem &>(static_cast<const D &>(*this))->get_IsSelected(&value));
    return value;
}

template <typename D> void impl_ISelectorItem<D>::IsSelected(bool value) const
{
    check_hresult(static_cast<const ISelectorItem &>(static_cast<const D &>(*this))->put_IsSelected(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ISelectorItemStatics<D>::IsSelectedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ISelectorItemStatics &>(static_cast<const D &>(*this))->get_IsSelectedProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::SelectorItem impl_ISelectorItemFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::SelectorItem instance { nullptr };
    check_hresult(static_cast<const ISelectorItemFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> int32_t impl_IRepeatButton<D>::Delay() const
{
    int32_t value {};
    check_hresult(static_cast<const IRepeatButton &>(static_cast<const D &>(*this))->get_Delay(&value));
    return value;
}

template <typename D> void impl_IRepeatButton<D>::Delay(int32_t value) const
{
    check_hresult(static_cast<const IRepeatButton &>(static_cast<const D &>(*this))->put_Delay(value));
}

template <typename D> int32_t impl_IRepeatButton<D>::Interval() const
{
    int32_t value {};
    check_hresult(static_cast<const IRepeatButton &>(static_cast<const D &>(*this))->get_Interval(&value));
    return value;
}

template <typename D> void impl_IRepeatButton<D>::Interval(int32_t value) const
{
    check_hresult(static_cast<const IRepeatButton &>(static_cast<const D &>(*this))->put_Interval(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRepeatButtonStatics<D>::DelayProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRepeatButtonStatics &>(static_cast<const D &>(*this))->get_DelayProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IRepeatButtonStatics<D>::IntervalProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IRepeatButtonStatics &>(static_cast<const D &>(*this))->get_IntervalProperty(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> impl_IToggleButton<D>::IsChecked() const
{
    Windows::Foundation::IReference<bool> value;
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->get_IsChecked(put(value)));
    return value;
}

template <typename D> void impl_IToggleButton<D>::IsChecked(const Windows::Foundation::IReference<bool> & value) const
{
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->put_IsChecked(get(value)));
}

template <typename D> bool impl_IToggleButton<D>::IsThreeState() const
{
    bool value {};
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->get_IsThreeState(&value));
    return value;
}

template <typename D> void impl_IToggleButton<D>::IsThreeState(bool value) const
{
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->put_IsThreeState(value));
}

template <typename D> event_token impl_IToggleButton<D>::Checked(const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->add_Checked(get(value), &token));
    return token;
}

template <typename D> event_revoker<IToggleButton> impl_IToggleButton<D>::Checked(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IToggleButton>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IToggleButton::remove_Checked, Checked(value));
}

template <typename D> void impl_IToggleButton<D>::Checked(event_token token) const
{
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->remove_Checked(token));
}

template <typename D> event_token impl_IToggleButton<D>::Unchecked(const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->add_Unchecked(get(value), &token));
    return token;
}

template <typename D> event_revoker<IToggleButton> impl_IToggleButton<D>::Unchecked(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IToggleButton>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IToggleButton::remove_Unchecked, Unchecked(value));
}

template <typename D> void impl_IToggleButton<D>::Unchecked(event_token token) const
{
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->remove_Unchecked(token));
}

template <typename D> event_token impl_IToggleButton<D>::Indeterminate(const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->add_Indeterminate(get(value), &token));
    return token;
}

template <typename D> event_revoker<IToggleButton> impl_IToggleButton<D>::Indeterminate(auto_revoke_t, const Windows::UI::Xaml::RoutedEventHandler & value) const
{
    return impl::make_event_revoker<D, IToggleButton>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IToggleButton::remove_Indeterminate, Indeterminate(value));
}

template <typename D> void impl_IToggleButton<D>::Indeterminate(event_token token) const
{
    check_hresult(static_cast<const IToggleButton &>(static_cast<const D &>(*this))->remove_Indeterminate(token));
}

template <typename D> void impl_IToggleButtonOverrides<D>::OnToggle() const
{
    check_hresult(static_cast<const IToggleButtonOverrides &>(static_cast<const D &>(*this))->abi_OnToggle());
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IToggleButtonStatics<D>::IsCheckedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IToggleButtonStatics &>(static_cast<const D &>(*this))->get_IsCheckedProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IToggleButtonStatics<D>::IsThreeStateProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IToggleButtonStatics &>(static_cast<const D &>(*this))->get_IsThreeStateProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ToggleButton impl_IToggleButtonFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::ToggleButton instance { nullptr };
    check_hresult(static_cast<const IToggleButtonFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Rect impl_IAppBarTemplateSettings<D>::ClipRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const IAppBarTemplateSettings &>(static_cast<const D &>(*this))->get_ClipRect(put(value)));
    return value;
}

template <typename D> double impl_IAppBarTemplateSettings<D>::CompactVerticalDelta() const
{
    double value {};
    check_hresult(static_cast<const IAppBarTemplateSettings &>(static_cast<const D &>(*this))->get_CompactVerticalDelta(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness impl_IAppBarTemplateSettings<D>::CompactRootMargin() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IAppBarTemplateSettings &>(static_cast<const D &>(*this))->get_CompactRootMargin(put(value)));
    return value;
}

template <typename D> double impl_IAppBarTemplateSettings<D>::MinimalVerticalDelta() const
{
    double value {};
    check_hresult(static_cast<const IAppBarTemplateSettings &>(static_cast<const D &>(*this))->get_MinimalVerticalDelta(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness impl_IAppBarTemplateSettings<D>::MinimalRootMargin() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IAppBarTemplateSettings &>(static_cast<const D &>(*this))->get_MinimalRootMargin(put(value)));
    return value;
}

template <typename D> double impl_IAppBarTemplateSettings<D>::HiddenVerticalDelta() const
{
    double value {};
    check_hresult(static_cast<const IAppBarTemplateSettings &>(static_cast<const D &>(*this))->get_HiddenVerticalDelta(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness impl_IAppBarTemplateSettings<D>::HiddenRootMargin() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IAppBarTemplateSettings &>(static_cast<const D &>(*this))->get_HiddenRootMargin(put(value)));
    return value;
}

template <typename D> double impl_ICalendarViewTemplateSettings<D>::MinViewWidth() const
{
    double value {};
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_MinViewWidth(&value));
    return value;
}

template <typename D> hstring impl_ICalendarViewTemplateSettings<D>::HeaderText() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_HeaderText(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarViewTemplateSettings<D>::WeekDay1() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_WeekDay1(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarViewTemplateSettings<D>::WeekDay2() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_WeekDay2(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarViewTemplateSettings<D>::WeekDay3() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_WeekDay3(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarViewTemplateSettings<D>::WeekDay4() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_WeekDay4(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarViewTemplateSettings<D>::WeekDay5() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_WeekDay5(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarViewTemplateSettings<D>::WeekDay6() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_WeekDay6(put(value)));
    return value;
}

template <typename D> hstring impl_ICalendarViewTemplateSettings<D>::WeekDay7() const
{
    hstring value;
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_WeekDay7(put(value)));
    return value;
}

template <typename D> bool impl_ICalendarViewTemplateSettings<D>::HasMoreContentAfter() const
{
    bool value {};
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_HasMoreContentAfter(&value));
    return value;
}

template <typename D> bool impl_ICalendarViewTemplateSettings<D>::HasMoreContentBefore() const
{
    bool value {};
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_HasMoreContentBefore(&value));
    return value;
}

template <typename D> bool impl_ICalendarViewTemplateSettings<D>::HasMoreViews() const
{
    bool value {};
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_HasMoreViews(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_ICalendarViewTemplateSettings<D>::ClipRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_ClipRect(put(value)));
    return value;
}

template <typename D> double impl_ICalendarViewTemplateSettings<D>::CenterX() const
{
    double value {};
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_CenterX(&value));
    return value;
}

template <typename D> double impl_ICalendarViewTemplateSettings<D>::CenterY() const
{
    double value {};
    check_hresult(static_cast<const ICalendarViewTemplateSettings &>(static_cast<const D &>(*this))->get_CenterY(&value));
    return value;
}

template <typename D> double impl_ICommandBarTemplateSettings<D>::ContentHeight() const
{
    double value {};
    check_hresult(static_cast<const ICommandBarTemplateSettings &>(static_cast<const D &>(*this))->get_ContentHeight(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect impl_ICommandBarTemplateSettings<D>::OverflowContentClipRect() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const ICommandBarTemplateSettings &>(static_cast<const D &>(*this))->get_OverflowContentClipRect(put(value)));
    return value;
}

template <typename D> double impl_ICommandBarTemplateSettings<D>::OverflowContentMinWidth() const
{
    double value {};
    check_hresult(static_cast<const ICommandBarTemplateSettings &>(static_cast<const D &>(*this))->get_OverflowContentMinWidth(&value));
    return value;
}

template <typename D> double impl_ICommandBarTemplateSettings<D>::OverflowContentMaxHeight() const
{
    double value {};
    check_hresult(static_cast<const ICommandBarTemplateSettings &>(static_cast<const D &>(*this))->get_OverflowContentMaxHeight(&value));
    return value;
}

template <typename D> double impl_ICommandBarTemplateSettings<D>::OverflowContentHorizontalOffset() const
{
    double value {};
    check_hresult(static_cast<const ICommandBarTemplateSettings &>(static_cast<const D &>(*this))->get_OverflowContentHorizontalOffset(&value));
    return value;
}

template <typename D> double impl_ICommandBarTemplateSettings<D>::OverflowContentHeight() const
{
    double value {};
    check_hresult(static_cast<const ICommandBarTemplateSettings &>(static_cast<const D &>(*this))->get_OverflowContentHeight(&value));
    return value;
}

template <typename D> double impl_ICommandBarTemplateSettings<D>::NegativeOverflowContentHeight() const
{
    double value {};
    check_hresult(static_cast<const ICommandBarTemplateSettings &>(static_cast<const D &>(*this))->get_NegativeOverflowContentHeight(&value));
    return value;
}

template <typename D> double impl_ICommandBarTemplateSettings2<D>::OverflowContentMaxWidth() const
{
    double value {};
    check_hresult(static_cast<const ICommandBarTemplateSettings2 &>(static_cast<const D &>(*this))->get_OverflowContentMaxWidth(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Visibility impl_ICommandBarTemplateSettings3<D>::EffectiveOverflowButtonVisibility() const
{
    Windows::UI::Xaml::Visibility value {};
    check_hresult(static_cast<const ICommandBarTemplateSettings3 &>(static_cast<const D &>(*this))->get_EffectiveOverflowButtonVisibility(&value));
    return value;
}

template <typename D> double impl_ISplitViewTemplateSettings<D>::OpenPaneLength() const
{
    double value {};
    check_hresult(static_cast<const ISplitViewTemplateSettings &>(static_cast<const D &>(*this))->get_OpenPaneLength(&value));
    return value;
}

template <typename D> double impl_ISplitViewTemplateSettings<D>::NegativeOpenPaneLength() const
{
    double value {};
    check_hresult(static_cast<const ISplitViewTemplateSettings &>(static_cast<const D &>(*this))->get_NegativeOpenPaneLength(&value));
    return value;
}

template <typename D> double impl_ISplitViewTemplateSettings<D>::OpenPaneLengthMinusCompactLength() const
{
    double value {};
    check_hresult(static_cast<const ISplitViewTemplateSettings &>(static_cast<const D &>(*this))->get_OpenPaneLengthMinusCompactLength(&value));
    return value;
}

template <typename D> double impl_ISplitViewTemplateSettings<D>::NegativeOpenPaneLengthMinusCompactLength() const
{
    double value {};
    check_hresult(static_cast<const ISplitViewTemplateSettings &>(static_cast<const D &>(*this))->get_NegativeOpenPaneLengthMinusCompactLength(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::GridLength impl_ISplitViewTemplateSettings<D>::OpenPaneGridLength() const
{
    Windows::UI::Xaml::GridLength value {};
    check_hresult(static_cast<const ISplitViewTemplateSettings &>(static_cast<const D &>(*this))->get_OpenPaneGridLength(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::GridLength impl_ISplitViewTemplateSettings<D>::CompactPaneGridLength() const
{
    Windows::UI::Xaml::GridLength value {};
    check_hresult(static_cast<const ISplitViewTemplateSettings &>(static_cast<const D &>(*this))->get_CompactPaneGridLength(put(value)));
    return value;
}

template <typename D> bool impl_IGridViewItemPresenter<D>::SelectionCheckMarkVisualEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectionCheckMarkVisualEnabled(&value));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::SelectionCheckMarkVisualEnabled(bool value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectionCheckMarkVisualEnabled(value));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::CheckHintBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_CheckHintBrush(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::CheckHintBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_CheckHintBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::CheckSelectingBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_CheckSelectingBrush(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::CheckSelectingBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_CheckSelectingBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::CheckBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_CheckBrush(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::CheckBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_CheckBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::DragBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_DragBackground(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::DragBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_DragBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::DragForeground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_DragForeground(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::DragForeground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_DragForeground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::FocusBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_FocusBorderBrush(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::FocusBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_FocusBorderBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::PlaceholderBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_PlaceholderBackground(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::PlaceholderBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_PlaceholderBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::PointerOverBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_PointerOverBackground(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::PointerOverBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_PointerOverBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::SelectedBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedBackground(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::SelectedBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::SelectedForeground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedForeground(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::SelectedForeground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedForeground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::SelectedPointerOverBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedPointerOverBackground(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::SelectedPointerOverBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedPointerOverBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IGridViewItemPresenter<D>::SelectedPointerOverBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedPointerOverBorderBrush(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::SelectedPointerOverBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedPointerOverBorderBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IGridViewItemPresenter<D>::SelectedBorderThickness() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedBorderThickness(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::SelectedBorderThickness(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedBorderThickness(get(value)));
}

template <typename D> double impl_IGridViewItemPresenter<D>::DisabledOpacity() const
{
    double value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_DisabledOpacity(&value));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::DisabledOpacity(double value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_DisabledOpacity(value));
}

template <typename D> double impl_IGridViewItemPresenter<D>::DragOpacity() const
{
    double value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_DragOpacity(&value));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::DragOpacity(double value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_DragOpacity(value));
}

template <typename D> double impl_IGridViewItemPresenter<D>::ReorderHintOffset() const
{
    double value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_ReorderHintOffset(&value));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::ReorderHintOffset(double value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_ReorderHintOffset(value));
}

template <typename D> Windows::UI::Xaml::HorizontalAlignment impl_IGridViewItemPresenter<D>::GridViewItemPresenterHorizontalContentAlignment() const
{
    Windows::UI::Xaml::HorizontalAlignment value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_GridViewItemPresenterHorizontalContentAlignment(&value));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_GridViewItemPresenterHorizontalContentAlignment(value));
}

template <typename D> Windows::UI::Xaml::VerticalAlignment impl_IGridViewItemPresenter<D>::GridViewItemPresenterVerticalContentAlignment() const
{
    Windows::UI::Xaml::VerticalAlignment value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_GridViewItemPresenterVerticalContentAlignment(&value));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_GridViewItemPresenterVerticalContentAlignment(value));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IGridViewItemPresenter<D>::GridViewItemPresenterPadding() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_GridViewItemPresenterPadding(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::GridViewItemPresenterPadding(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_GridViewItemPresenterPadding(get(value)));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IGridViewItemPresenter<D>::PointerOverBackgroundMargin() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_PointerOverBackgroundMargin(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::PointerOverBackgroundMargin(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_PointerOverBackgroundMargin(get(value)));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IGridViewItemPresenter<D>::ContentMargin() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->get_ContentMargin(put(value)));
    return value;
}

template <typename D> void impl_IGridViewItemPresenter<D>::ContentMargin(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IGridViewItemPresenter &>(static_cast<const D &>(*this))->put_ContentMargin(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::SelectionCheckMarkVisualEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectionCheckMarkVisualEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::CheckHintBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_CheckHintBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::CheckSelectingBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_CheckSelectingBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::CheckBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_CheckBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::DragBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_DragBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::DragForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_DragForegroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::FocusBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_FocusBorderBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::PlaceholderBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_PlaceholderBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::PointerOverBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_PointerOverBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::SelectedBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::SelectedForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedForegroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::SelectedPointerOverBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedPointerOverBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::SelectedPointerOverBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedPointerOverBorderBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::SelectedBorderThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedBorderThicknessProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::DisabledOpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_DisabledOpacityProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::DragOpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_DragOpacityProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::ReorderHintOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_ReorderHintOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::GridViewItemPresenterHorizontalContentAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_GridViewItemPresenterHorizontalContentAlignmentProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::GridViewItemPresenterVerticalContentAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_GridViewItemPresenterVerticalContentAlignmentProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::GridViewItemPresenterPaddingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_GridViewItemPresenterPaddingProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::PointerOverBackgroundMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_PointerOverBackgroundMarginProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IGridViewItemPresenterStatics<D>::ContentMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_ContentMarginProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter impl_IGridViewItemPresenterFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter instance { nullptr };
    check_hresult(static_cast<const IGridViewItemPresenterFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_IListViewItemPresenter<D>::SelectionCheckMarkVisualEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectionCheckMarkVisualEnabled(&value));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::SelectionCheckMarkVisualEnabled(bool value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectionCheckMarkVisualEnabled(value));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::CheckHintBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_CheckHintBrush(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::CheckHintBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_CheckHintBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::CheckSelectingBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_CheckSelectingBrush(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::CheckSelectingBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_CheckSelectingBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::CheckBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_CheckBrush(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::CheckBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_CheckBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::DragBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_DragBackground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::DragBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_DragBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::DragForeground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_DragForeground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::DragForeground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_DragForeground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::FocusBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_FocusBorderBrush(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::FocusBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_FocusBorderBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::PlaceholderBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_PlaceholderBackground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::PlaceholderBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_PlaceholderBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::PointerOverBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_PointerOverBackground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::PointerOverBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_PointerOverBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::SelectedBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedBackground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::SelectedBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::SelectedForeground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedForeground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::SelectedForeground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedForeground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::SelectedPointerOverBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedPointerOverBackground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::SelectedPointerOverBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedPointerOverBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter<D>::SelectedPointerOverBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedPointerOverBorderBrush(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::SelectedPointerOverBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedPointerOverBorderBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IListViewItemPresenter<D>::SelectedBorderThickness() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_SelectedBorderThickness(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::SelectedBorderThickness(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_SelectedBorderThickness(get(value)));
}

template <typename D> double impl_IListViewItemPresenter<D>::DisabledOpacity() const
{
    double value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_DisabledOpacity(&value));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::DisabledOpacity(double value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_DisabledOpacity(value));
}

template <typename D> double impl_IListViewItemPresenter<D>::DragOpacity() const
{
    double value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_DragOpacity(&value));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::DragOpacity(double value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_DragOpacity(value));
}

template <typename D> double impl_IListViewItemPresenter<D>::ReorderHintOffset() const
{
    double value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_ReorderHintOffset(&value));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::ReorderHintOffset(double value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_ReorderHintOffset(value));
}

template <typename D> Windows::UI::Xaml::HorizontalAlignment impl_IListViewItemPresenter<D>::ListViewItemPresenterHorizontalContentAlignment() const
{
    Windows::UI::Xaml::HorizontalAlignment value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_ListViewItemPresenterHorizontalContentAlignment(&value));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_ListViewItemPresenterHorizontalContentAlignment(value));
}

template <typename D> Windows::UI::Xaml::VerticalAlignment impl_IListViewItemPresenter<D>::ListViewItemPresenterVerticalContentAlignment() const
{
    Windows::UI::Xaml::VerticalAlignment value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_ListViewItemPresenterVerticalContentAlignment(&value));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_ListViewItemPresenterVerticalContentAlignment(value));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IListViewItemPresenter<D>::ListViewItemPresenterPadding() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_ListViewItemPresenterPadding(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::ListViewItemPresenterPadding(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_ListViewItemPresenterPadding(get(value)));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IListViewItemPresenter<D>::PointerOverBackgroundMargin() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_PointerOverBackgroundMargin(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::PointerOverBackgroundMargin(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_PointerOverBackgroundMargin(get(value)));
}

template <typename D> Windows::UI::Xaml::Thickness impl_IListViewItemPresenter<D>::ContentMargin() const
{
    Windows::UI::Xaml::Thickness value {};
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->get_ContentMargin(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter<D>::ContentMargin(const Windows::UI::Xaml::Thickness & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter &>(static_cast<const D &>(*this))->put_ContentMargin(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::SelectionCheckMarkVisualEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectionCheckMarkVisualEnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::CheckHintBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_CheckHintBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::CheckSelectingBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_CheckSelectingBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::CheckBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_CheckBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::DragBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_DragBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::DragForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_DragForegroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::FocusBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_FocusBorderBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::PlaceholderBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_PlaceholderBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::PointerOverBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_PointerOverBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::SelectedBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::SelectedForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedForegroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::SelectedPointerOverBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedPointerOverBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::SelectedPointerOverBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedPointerOverBorderBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::SelectedBorderThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_SelectedBorderThicknessProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::DisabledOpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_DisabledOpacityProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::DragOpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_DragOpacityProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::ReorderHintOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_ReorderHintOffsetProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::ListViewItemPresenterHorizontalContentAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_ListViewItemPresenterHorizontalContentAlignmentProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::ListViewItemPresenterVerticalContentAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_ListViewItemPresenterVerticalContentAlignmentProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::ListViewItemPresenterPaddingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_ListViewItemPresenterPaddingProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::PointerOverBackgroundMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_PointerOverBackgroundMarginProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics<D>::ContentMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics &>(static_cast<const D &>(*this))->get_ContentMarginProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter impl_IListViewItemPresenterFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter instance { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter2<D>::SelectedPressedBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->get_SelectedPressedBackground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter2<D>::SelectedPressedBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->put_SelectedPressedBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter2<D>::PressedBackground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->get_PressedBackground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter2<D>::PressedBackground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->put_PressedBackground(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter2<D>::CheckBoxBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->get_CheckBoxBrush(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter2<D>::CheckBoxBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->put_CheckBoxBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter2<D>::FocusSecondaryBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->get_FocusSecondaryBorderBrush(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter2<D>::FocusSecondaryBorderBrush(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->put_FocusSecondaryBorderBrush(get(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode impl_IListViewItemPresenter2<D>::CheckMode() const
{
    Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode value {};
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->get_CheckMode(&value));
    return value;
}

template <typename D> void impl_IListViewItemPresenter2<D>::CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode value) const
{
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->put_CheckMode(value));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IListViewItemPresenter2<D>::PointerOverForeground() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->get_PointerOverForeground(put(value)));
    return value;
}

template <typename D> void impl_IListViewItemPresenter2<D>::PointerOverForeground(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IListViewItemPresenter2 &>(static_cast<const D &>(*this))->put_PointerOverForeground(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics2<D>::SelectedPressedBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics2 &>(static_cast<const D &>(*this))->get_SelectedPressedBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics2<D>::PressedBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics2 &>(static_cast<const D &>(*this))->get_PressedBackgroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics2<D>::CheckBoxBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics2 &>(static_cast<const D &>(*this))->get_CheckBoxBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics2<D>::FocusSecondaryBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics2 &>(static_cast<const D &>(*this))->get_FocusSecondaryBorderBrushProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics2<D>::CheckModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics2 &>(static_cast<const D &>(*this))->get_CheckModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IListViewItemPresenterStatics2<D>::PointerOverForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IListViewItemPresenterStatics2 &>(static_cast<const D &>(*this))->get_PointerOverForegroundProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::GeneratorPosition impl_IGeneratorPositionHelperStatics<D>::FromIndexAndOffset(int32_t index, int32_t offset) const
{
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition returnValue {};
    check_hresult(static_cast<const IGeneratorPositionHelperStatics &>(static_cast<const D &>(*this))->abi_FromIndexAndOffset(index, offset, put(returnValue)));
    return returnValue;
}

template <typename D> bool impl_IFlyoutBaseClosingEventArgs<D>::Cancel() const
{
    bool value {};
    check_hresult(static_cast<const IFlyoutBaseClosingEventArgs &>(static_cast<const D &>(*this))->get_Cancel(&value));
    return value;
}

template <typename D> void impl_IFlyoutBaseClosingEventArgs<D>::Cancel(bool value) const
{
    check_hresult(static_cast<const IFlyoutBaseClosingEventArgs &>(static_cast<const D &>(*this))->put_Cancel(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode impl_IFlyoutBase<D>::Placement() const
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode value {};
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->get_Placement(&value));
    return value;
}

template <typename D> void impl_IFlyoutBase<D>::Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode value) const
{
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->put_Placement(value));
}

template <typename D> event_token impl_IFlyoutBase<D>::Opened(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->add_Opened(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFlyoutBase> impl_IFlyoutBase<D>::Opened(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IFlyoutBase>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase::remove_Opened, Opened(value));
}

template <typename D> void impl_IFlyoutBase<D>::Opened(event_token token) const
{
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->remove_Opened(token));
}

template <typename D> event_token impl_IFlyoutBase<D>::Closed(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->add_Closed(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFlyoutBase> impl_IFlyoutBase<D>::Closed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IFlyoutBase>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase::remove_Closed, Closed(value));
}

template <typename D> void impl_IFlyoutBase<D>::Closed(event_token token) const
{
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->remove_Closed(token));
}

template <typename D> event_token impl_IFlyoutBase<D>::Opening(const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->add_Opening(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFlyoutBase> impl_IFlyoutBase<D>::Opening(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & value) const
{
    return impl::make_event_revoker<D, IFlyoutBase>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase::remove_Opening, Opening(value));
}

template <typename D> void impl_IFlyoutBase<D>::Opening(event_token token) const
{
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->remove_Opening(token));
}

template <typename D> void impl_IFlyoutBase<D>::ShowAt(const Windows::UI::Xaml::FrameworkElement & placementTarget) const
{
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->abi_ShowAt(get(placementTarget)));
}

template <typename D> void impl_IFlyoutBase<D>::Hide() const
{
    check_hresult(static_cast<const IFlyoutBase &>(static_cast<const D &>(*this))->abi_Hide());
}

template <typename D> Windows::UI::Xaml::Controls::Control impl_IFlyoutBaseOverrides<D>::CreatePresenter() const
{
    Windows::UI::Xaml::Controls::Control returnValue { nullptr };
    check_hresult(static_cast<const IFlyoutBaseOverrides &>(static_cast<const D &>(*this))->abi_CreatePresenter(put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFlyoutBaseStatics<D>::PlacementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFlyoutBaseStatics &>(static_cast<const D &>(*this))->get_PlacementProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFlyoutBaseStatics<D>::AttachedFlyoutProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFlyoutBaseStatics &>(static_cast<const D &>(*this))->get_AttachedFlyoutProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::FlyoutBase impl_IFlyoutBaseStatics<D>::GetAttachedFlyout(const Windows::UI::Xaml::FrameworkElement & element) const
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase value { nullptr };
    check_hresult(static_cast<const IFlyoutBaseStatics &>(static_cast<const D &>(*this))->abi_GetAttachedFlyout(get(element), put(value)));
    return value;
}

template <typename D> void impl_IFlyoutBaseStatics<D>::SetAttachedFlyout(const Windows::UI::Xaml::FrameworkElement & element, const Windows::UI::Xaml::Controls::Primitives::FlyoutBase & value) const
{
    check_hresult(static_cast<const IFlyoutBaseStatics &>(static_cast<const D &>(*this))->abi_SetAttachedFlyout(get(element), get(value)));
}

template <typename D> void impl_IFlyoutBaseStatics<D>::ShowAttachedFlyout(const Windows::UI::Xaml::FrameworkElement & flyoutOwner) const
{
    check_hresult(static_cast<const IFlyoutBaseStatics &>(static_cast<const D &>(*this))->abi_ShowAttachedFlyout(get(flyoutOwner)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::FlyoutBase impl_IFlyoutBaseFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase instance { nullptr };
    check_hresult(static_cast<const IFlyoutBaseFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::FrameworkElement impl_IFlyoutBase2<D>::Target() const
{
    Windows::UI::Xaml::FrameworkElement value { nullptr };
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->get_Target(put(value)));
    return value;
}

template <typename D> bool impl_IFlyoutBase2<D>::AllowFocusOnInteraction() const
{
    bool value {};
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->get_AllowFocusOnInteraction(&value));
    return value;
}

template <typename D> void impl_IFlyoutBase2<D>::AllowFocusOnInteraction(bool value) const
{
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->put_AllowFocusOnInteraction(value));
}

template <typename D> Windows::UI::Xaml::Controls::LightDismissOverlayMode impl_IFlyoutBase2<D>::LightDismissOverlayMode() const
{
    Windows::UI::Xaml::Controls::LightDismissOverlayMode value {};
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->get_LightDismissOverlayMode(&value));
    return value;
}

template <typename D> void impl_IFlyoutBase2<D>::LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) const
{
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->put_LightDismissOverlayMode(value));
}

template <typename D> bool impl_IFlyoutBase2<D>::AllowFocusWhenDisabled() const
{
    bool value {};
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->get_AllowFocusWhenDisabled(&value));
    return value;
}

template <typename D> void impl_IFlyoutBase2<D>::AllowFocusWhenDisabled(bool value) const
{
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->put_AllowFocusWhenDisabled(value));
}

template <typename D> Windows::UI::Xaml::ElementSoundMode impl_IFlyoutBase2<D>::ElementSoundMode() const
{
    Windows::UI::Xaml::ElementSoundMode value {};
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->get_ElementSoundMode(&value));
    return value;
}

template <typename D> void impl_IFlyoutBase2<D>::ElementSoundMode(Windows::UI::Xaml::ElementSoundMode value) const
{
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->put_ElementSoundMode(value));
}

template <typename D> event_token impl_IFlyoutBase2<D>::Closing(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> & value) const
{
    event_token token {};
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->add_Closing(get(value), &token));
    return token;
}

template <typename D> event_revoker<IFlyoutBase2> impl_IFlyoutBase2<D>::Closing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> & value) const
{
    return impl::make_event_revoker<D, IFlyoutBase2>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2::remove_Closing, Closing(value));
}

template <typename D> void impl_IFlyoutBase2<D>::Closing(event_token token) const
{
    check_hresult(static_cast<const IFlyoutBase2 &>(static_cast<const D &>(*this))->remove_Closing(token));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFlyoutBaseStatics2<D>::AllowFocusOnInteractionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFlyoutBaseStatics2 &>(static_cast<const D &>(*this))->get_AllowFocusOnInteractionProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFlyoutBaseStatics2<D>::LightDismissOverlayModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFlyoutBaseStatics2 &>(static_cast<const D &>(*this))->get_LightDismissOverlayModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFlyoutBaseStatics2<D>::AllowFocusWhenDisabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFlyoutBaseStatics2 &>(static_cast<const D &>(*this))->get_AllowFocusWhenDisabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IFlyoutBaseStatics2<D>::ElementSoundModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IFlyoutBaseStatics2 &>(static_cast<const D &>(*this))->get_ElementSoundModeProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IJumpListItemBackgroundConverter<D>::Enabled() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IJumpListItemBackgroundConverter &>(static_cast<const D &>(*this))->get_Enabled(put(value)));
    return value;
}

template <typename D> void impl_IJumpListItemBackgroundConverter<D>::Enabled(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IJumpListItemBackgroundConverter &>(static_cast<const D &>(*this))->put_Enabled(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IJumpListItemBackgroundConverter<D>::Disabled() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IJumpListItemBackgroundConverter &>(static_cast<const D &>(*this))->get_Disabled(put(value)));
    return value;
}

template <typename D> void impl_IJumpListItemBackgroundConverter<D>::Disabled(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IJumpListItemBackgroundConverter &>(static_cast<const D &>(*this))->put_Disabled(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IJumpListItemBackgroundConverterStatics<D>::EnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IJumpListItemBackgroundConverterStatics &>(static_cast<const D &>(*this))->get_EnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IJumpListItemBackgroundConverterStatics<D>::DisabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IJumpListItemBackgroundConverterStatics &>(static_cast<const D &>(*this))->get_DisabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IJumpListItemForegroundConverter<D>::Enabled() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IJumpListItemForegroundConverter &>(static_cast<const D &>(*this))->get_Enabled(put(value)));
    return value;
}

template <typename D> void impl_IJumpListItemForegroundConverter<D>::Enabled(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IJumpListItemForegroundConverter &>(static_cast<const D &>(*this))->put_Enabled(get(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush impl_IJumpListItemForegroundConverter<D>::Disabled() const
{
    Windows::UI::Xaml::Media::Brush value { nullptr };
    check_hresult(static_cast<const IJumpListItemForegroundConverter &>(static_cast<const D &>(*this))->get_Disabled(put(value)));
    return value;
}

template <typename D> void impl_IJumpListItemForegroundConverter<D>::Disabled(const Windows::UI::Xaml::Media::Brush & value) const
{
    check_hresult(static_cast<const IJumpListItemForegroundConverter &>(static_cast<const D &>(*this))->put_Disabled(get(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IJumpListItemForegroundConverterStatics<D>::EnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IJumpListItemForegroundConverterStatics &>(static_cast<const D &>(*this))->get_EnabledProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IJumpListItemForegroundConverterStatics<D>::DisabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IJumpListItemForegroundConverterStatics &>(static_cast<const D &>(*this))->get_DisabledProperty(put(value)));
    return value;
}

template <typename D> void impl_IPickerFlyoutBaseOverrides<D>::OnConfirmed() const
{
    check_hresult(static_cast<const IPickerFlyoutBaseOverrides &>(static_cast<const D &>(*this))->abi_OnConfirmed());
}

template <typename D> bool impl_IPickerFlyoutBaseOverrides<D>::ShouldShowConfirmationButtons() const
{
    bool returnValue {};
    check_hresult(static_cast<const IPickerFlyoutBaseOverrides &>(static_cast<const D &>(*this))->abi_ShouldShowConfirmationButtons(&returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_IPickerFlyoutBaseStatics<D>::TitleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const IPickerFlyoutBaseStatics &>(static_cast<const D &>(*this))->get_TitleProperty(put(value)));
    return value;
}

template <typename D> hstring impl_IPickerFlyoutBaseStatics<D>::GetTitle(const Windows::UI::Xaml::DependencyObject & element) const
{
    hstring value;
    check_hresult(static_cast<const IPickerFlyoutBaseStatics &>(static_cast<const D &>(*this))->abi_GetTitle(get(element), put(value)));
    return value;
}

template <typename D> void impl_IPickerFlyoutBaseStatics<D>::SetTitle(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value) const
{
    check_hresult(static_cast<const IPickerFlyoutBaseStatics &>(static_cast<const D &>(*this))->abi_SetTitle(get(element), get(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase impl_IPickerFlyoutBaseFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase instance { nullptr };
    check_hresult(static_cast<const IPickerFlyoutBaseFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

template <typename D> bool impl_ILoopingSelector<D>::ShouldLoop() const
{
    bool value {};
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->get_ShouldLoop(&value));
    return value;
}

template <typename D> void impl_ILoopingSelector<D>::ShouldLoop(bool value) const
{
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->put_ShouldLoop(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::IInspectable> impl_ILoopingSelector<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::IInspectable> value;
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->get_Items(put(value)));
    return value;
}

template <typename D> void impl_ILoopingSelector<D>::Items(const Windows::Foundation::Collections::IVector<Windows::IInspectable> & value) const
{
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->put_Items(get(value)));
}

template <typename D> int32_t impl_ILoopingSelector<D>::SelectedIndex() const
{
    int32_t value {};
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->get_SelectedIndex(&value));
    return value;
}

template <typename D> void impl_ILoopingSelector<D>::SelectedIndex(int32_t value) const
{
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->put_SelectedIndex(value));
}

template <typename D> Windows::IInspectable impl_ILoopingSelector<D>::SelectedItem() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->get_SelectedItem(put(value)));
    return value;
}

template <typename D> void impl_ILoopingSelector<D>::SelectedItem(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->put_SelectedItem(get(value)));
}

template <typename D> int32_t impl_ILoopingSelector<D>::ItemWidth() const
{
    int32_t value {};
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->get_ItemWidth(&value));
    return value;
}

template <typename D> void impl_ILoopingSelector<D>::ItemWidth(int32_t value) const
{
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->put_ItemWidth(value));
}

template <typename D> int32_t impl_ILoopingSelector<D>::ItemHeight() const
{
    int32_t value {};
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->get_ItemHeight(&value));
    return value;
}

template <typename D> void impl_ILoopingSelector<D>::ItemHeight(int32_t value) const
{
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->put_ItemHeight(value));
}

template <typename D> Windows::UI::Xaml::DataTemplate impl_ILoopingSelector<D>::ItemTemplate() const
{
    Windows::UI::Xaml::DataTemplate value { nullptr };
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->get_ItemTemplate(put(value)));
    return value;
}

template <typename D> void impl_ILoopingSelector<D>::ItemTemplate(const Windows::UI::Xaml::DataTemplate & value) const
{
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->put_ItemTemplate(get(value)));
}

template <typename D> event_token impl_ILoopingSelector<D>::SelectionChanged(const Windows::UI::Xaml::Controls::SelectionChangedEventHandler & value) const
{
    event_token token {};
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->add_SelectionChanged(get(value), &token));
    return token;
}

template <typename D> event_revoker<ILoopingSelector> impl_ILoopingSelector<D>::SelectionChanged(auto_revoke_t, const Windows::UI::Xaml::Controls::SelectionChangedEventHandler & value) const
{
    return impl::make_event_revoker<D, ILoopingSelector>(this, &ABI::Windows::UI::Xaml::Controls::Primitives::ILoopingSelector::remove_SelectionChanged, SelectionChanged(value));
}

template <typename D> void impl_ILoopingSelector<D>::SelectionChanged(event_token token) const
{
    check_hresult(static_cast<const ILoopingSelector &>(static_cast<const D &>(*this))->remove_SelectionChanged(token));
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILoopingSelectorStatics<D>::ShouldLoopProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILoopingSelectorStatics &>(static_cast<const D &>(*this))->get_ShouldLoopProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILoopingSelectorStatics<D>::ItemsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILoopingSelectorStatics &>(static_cast<const D &>(*this))->get_ItemsProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILoopingSelectorStatics<D>::SelectedIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILoopingSelectorStatics &>(static_cast<const D &>(*this))->get_SelectedIndexProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILoopingSelectorStatics<D>::SelectedItemProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILoopingSelectorStatics &>(static_cast<const D &>(*this))->get_SelectedItemProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILoopingSelectorStatics<D>::ItemWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILoopingSelectorStatics &>(static_cast<const D &>(*this))->get_ItemWidthProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILoopingSelectorStatics<D>::ItemHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILoopingSelectorStatics &>(static_cast<const D &>(*this))->get_ItemHeightProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty impl_ILoopingSelectorStatics<D>::ItemTemplateProperty() const
{
    Windows::UI::Xaml::DependencyProperty value { nullptr };
    check_hresult(static_cast<const ILoopingSelectorStatics &>(static_cast<const D &>(*this))->get_ItemTemplateProperty(put(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem impl_IPivotHeaderItemFactory<D>::CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const
{
    Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem instance { nullptr };
    check_hresult(static_cast<const IPivotHeaderItemFactory &>(static_cast<const D &>(*this))->abi_CreateInstance(get(outer), put(inner), put(instance)));
    return instance;
}

inline Windows::UI::Xaml::DependencyProperty ButtonBase::ClickModeProperty()
{
    return get_activation_factory<ButtonBase, IButtonBaseStatics>().ClickModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty ButtonBase::IsPointerOverProperty()
{
    return get_activation_factory<ButtonBase, IButtonBaseStatics>().IsPointerOverProperty();
}

inline Windows::UI::Xaml::DependencyProperty ButtonBase::IsPressedProperty()
{
    return get_activation_factory<ButtonBase, IButtonBaseStatics>().IsPressedProperty();
}

inline Windows::UI::Xaml::DependencyProperty ButtonBase::CommandProperty()
{
    return get_activation_factory<ButtonBase, IButtonBaseStatics>().CommandProperty();
}

inline Windows::UI::Xaml::DependencyProperty ButtonBase::CommandParameterProperty()
{
    return get_activation_factory<ButtonBase, IButtonBaseStatics>().CommandParameterProperty();
}

inline CalendarPanel::CalendarPanel() :
    CalendarPanel(activate_instance<CalendarPanel>())
{}

inline CarouselPanel::CarouselPanel()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<CarouselPanel, ICarouselPanelFactory>().CreateInstance(outer, inner));
}

inline DragCompletedEventArgs::DragCompletedEventArgs(double horizontalChange, double verticalChange, bool canceled)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<DragCompletedEventArgs, IDragCompletedEventArgsFactory>().CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(horizontalChange, verticalChange, canceled, outer, inner));
}

inline DragDeltaEventArgs::DragDeltaEventArgs(double horizontalChange, double verticalChange)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<DragDeltaEventArgs, IDragDeltaEventArgsFactory>().CreateInstanceWithHorizontalChangeAndVerticalChange(horizontalChange, verticalChange, outer, inner));
}

inline DragStartedEventArgs::DragStartedEventArgs(double horizontalOffset, double verticalOffset)
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<DragStartedEventArgs, IDragStartedEventArgsFactory>().CreateInstanceWithHorizontalOffsetAndVerticalOffset(horizontalOffset, verticalOffset, outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::PlacementProperty()
{
    return get_activation_factory<FlyoutBase, IFlyoutBaseStatics>().PlacementProperty();
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::AttachedFlyoutProperty()
{
    return get_activation_factory<FlyoutBase, IFlyoutBaseStatics>().AttachedFlyoutProperty();
}

inline Windows::UI::Xaml::Controls::Primitives::FlyoutBase FlyoutBase::GetAttachedFlyout(const Windows::UI::Xaml::FrameworkElement & element)
{
    return get_activation_factory<FlyoutBase, IFlyoutBaseStatics>().GetAttachedFlyout(element);
}

inline void FlyoutBase::SetAttachedFlyout(const Windows::UI::Xaml::FrameworkElement & element, const Windows::UI::Xaml::Controls::Primitives::FlyoutBase & value)
{
    get_activation_factory<FlyoutBase, IFlyoutBaseStatics>().SetAttachedFlyout(element, value);
}

inline void FlyoutBase::ShowAttachedFlyout(const Windows::UI::Xaml::FrameworkElement & flyoutOwner)
{
    get_activation_factory<FlyoutBase, IFlyoutBaseStatics>().ShowAttachedFlyout(flyoutOwner);
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::AllowFocusOnInteractionProperty()
{
    return get_activation_factory<FlyoutBase, IFlyoutBaseStatics2>().AllowFocusOnInteractionProperty();
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::LightDismissOverlayModeProperty()
{
    return get_activation_factory<FlyoutBase, IFlyoutBaseStatics2>().LightDismissOverlayModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::AllowFocusWhenDisabledProperty()
{
    return get_activation_factory<FlyoutBase, IFlyoutBaseStatics2>().AllowFocusWhenDisabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::ElementSoundModeProperty()
{
    return get_activation_factory<FlyoutBase, IFlyoutBaseStatics2>().ElementSoundModeProperty();
}

inline Windows::UI::Xaml::Controls::Primitives::GeneratorPosition GeneratorPositionHelper::FromIndexAndOffset(int32_t index, int32_t offset)
{
    return get_activation_factory<GeneratorPositionHelper, IGeneratorPositionHelperStatics>().FromIndexAndOffset(index, offset);
}

inline GridViewItemPresenter::GridViewItemPresenter()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectionCheckMarkVisualEnabledProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().SelectionCheckMarkVisualEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::CheckHintBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().CheckHintBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::CheckSelectingBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().CheckSelectingBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::CheckBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().CheckBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::DragBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().DragBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::DragForegroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().DragForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::FocusBorderBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().FocusBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::PlaceholderBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().PlaceholderBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::PointerOverBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().PointerOverBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().SelectedBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedForegroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().SelectedForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedPointerOverBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().SelectedPointerOverBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedPointerOverBorderBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().SelectedPointerOverBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedBorderThicknessProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().SelectedBorderThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::DisabledOpacityProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().DisabledOpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::DragOpacityProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().DragOpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::ReorderHintOffsetProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().ReorderHintOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::GridViewItemPresenterHorizontalContentAlignmentProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().GridViewItemPresenterHorizontalContentAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::GridViewItemPresenterVerticalContentAlignmentProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().GridViewItemPresenterVerticalContentAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::GridViewItemPresenterPaddingProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().GridViewItemPresenterPaddingProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::PointerOverBackgroundMarginProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().PointerOverBackgroundMarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::ContentMarginProperty()
{
    return get_activation_factory<GridViewItemPresenter, IGridViewItemPresenterStatics>().ContentMarginProperty();
}

inline JumpListItemBackgroundConverter::JumpListItemBackgroundConverter() :
    JumpListItemBackgroundConverter(activate_instance<JumpListItemBackgroundConverter>())
{}

inline Windows::UI::Xaml::DependencyProperty JumpListItemBackgroundConverter::EnabledProperty()
{
    return get_activation_factory<JumpListItemBackgroundConverter, IJumpListItemBackgroundConverterStatics>().EnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty JumpListItemBackgroundConverter::DisabledProperty()
{
    return get_activation_factory<JumpListItemBackgroundConverter, IJumpListItemBackgroundConverterStatics>().DisabledProperty();
}

inline JumpListItemForegroundConverter::JumpListItemForegroundConverter() :
    JumpListItemForegroundConverter(activate_instance<JumpListItemForegroundConverter>())
{}

inline Windows::UI::Xaml::DependencyProperty JumpListItemForegroundConverter::EnabledProperty()
{
    return get_activation_factory<JumpListItemForegroundConverter, IJumpListItemForegroundConverterStatics>().EnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty JumpListItemForegroundConverter::DisabledProperty()
{
    return get_activation_factory<JumpListItemForegroundConverter, IJumpListItemForegroundConverterStatics>().DisabledProperty();
}

inline Windows::UI::Xaml::UIElement LayoutInformation::GetLayoutExceptionElement(const Windows::IInspectable & dispatcher)
{
    return get_activation_factory<LayoutInformation, ILayoutInformationStatics>().GetLayoutExceptionElement(dispatcher);
}

inline Windows::Foundation::Rect LayoutInformation::GetLayoutSlot(const Windows::UI::Xaml::FrameworkElement & element)
{
    return get_activation_factory<LayoutInformation, ILayoutInformationStatics>().GetLayoutSlot(element);
}

inline ListViewItemPresenter::ListViewItemPresenter()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<ListViewItemPresenter, IListViewItemPresenterFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectionCheckMarkVisualEnabledProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().SelectionCheckMarkVisualEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckHintBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().CheckHintBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckSelectingBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().CheckSelectingBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().CheckBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::DragBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().DragBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::DragForegroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().DragForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::FocusBorderBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().FocusBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PlaceholderBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().PlaceholderBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PointerOverBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().PointerOverBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().SelectedBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedForegroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().SelectedForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedPointerOverBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().SelectedPointerOverBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedPointerOverBorderBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().SelectedPointerOverBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedBorderThicknessProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().SelectedBorderThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::DisabledOpacityProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().DisabledOpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::DragOpacityProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().DragOpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ReorderHintOffsetProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().ReorderHintOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ListViewItemPresenterHorizontalContentAlignmentProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().ListViewItemPresenterHorizontalContentAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ListViewItemPresenterVerticalContentAlignmentProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().ListViewItemPresenterVerticalContentAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ListViewItemPresenterPaddingProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().ListViewItemPresenterPaddingProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PointerOverBackgroundMarginProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().PointerOverBackgroundMarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ContentMarginProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics>().ContentMarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedPressedBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics2>().SelectedPressedBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PressedBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics2>().PressedBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckBoxBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics2>().CheckBoxBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::FocusSecondaryBorderBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics2>().FocusSecondaryBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckModeProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics2>().CheckModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PointerOverForegroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, IListViewItemPresenterStatics2>().PointerOverForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ShouldLoopProperty()
{
    return get_activation_factory<LoopingSelector, ILoopingSelectorStatics>().ShouldLoopProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ItemsProperty()
{
    return get_activation_factory<LoopingSelector, ILoopingSelectorStatics>().ItemsProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::SelectedIndexProperty()
{
    return get_activation_factory<LoopingSelector, ILoopingSelectorStatics>().SelectedIndexProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::SelectedItemProperty()
{
    return get_activation_factory<LoopingSelector, ILoopingSelectorStatics>().SelectedItemProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ItemWidthProperty()
{
    return get_activation_factory<LoopingSelector, ILoopingSelectorStatics>().ItemWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ItemHeightProperty()
{
    return get_activation_factory<LoopingSelector, ILoopingSelectorStatics>().ItemHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ItemTemplateProperty()
{
    return get_activation_factory<LoopingSelector, ILoopingSelectorStatics>().ItemTemplateProperty();
}

inline Windows::UI::Xaml::DependencyProperty PickerFlyoutBase::TitleProperty()
{
    return get_activation_factory<PickerFlyoutBase, IPickerFlyoutBaseStatics>().TitleProperty();
}

inline hstring PickerFlyoutBase::GetTitle(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<PickerFlyoutBase, IPickerFlyoutBaseStatics>().GetTitle(element);
}

inline void PickerFlyoutBase::SetTitle(const Windows::UI::Xaml::DependencyObject & element, hstring_ref value)
{
    get_activation_factory<PickerFlyoutBase, IPickerFlyoutBaseStatics>().SetTitle(element, value);
}

inline PivotHeaderItem::PivotHeaderItem()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<PivotHeaderItem, IPivotHeaderItemFactory>().CreateInstance(outer, inner));
}

inline PivotHeaderPanel::PivotHeaderPanel() :
    PivotHeaderPanel(activate_instance<PivotHeaderPanel>())
{}

inline PivotPanel::PivotPanel() :
    PivotPanel(activate_instance<PivotPanel>())
{}

inline Popup::Popup() :
    Popup(activate_instance<Popup>())
{}

inline Windows::UI::Xaml::DependencyProperty Popup::ChildProperty()
{
    return get_activation_factory<Popup, IPopupStatics>().ChildProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::IsOpenProperty()
{
    return get_activation_factory<Popup, IPopupStatics>().IsOpenProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::HorizontalOffsetProperty()
{
    return get_activation_factory<Popup, IPopupStatics>().HorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::VerticalOffsetProperty()
{
    return get_activation_factory<Popup, IPopupStatics>().VerticalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::ChildTransitionsProperty()
{
    return get_activation_factory<Popup, IPopupStatics>().ChildTransitionsProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::IsLightDismissEnabledProperty()
{
    return get_activation_factory<Popup, IPopupStatics>().IsLightDismissEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::LightDismissOverlayModeProperty()
{
    return get_activation_factory<Popup, IPopupStatics2>().LightDismissOverlayModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::MinimumProperty()
{
    return get_activation_factory<RangeBase, IRangeBaseStatics>().MinimumProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::MaximumProperty()
{
    return get_activation_factory<RangeBase, IRangeBaseStatics>().MaximumProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::SmallChangeProperty()
{
    return get_activation_factory<RangeBase, IRangeBaseStatics>().SmallChangeProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::LargeChangeProperty()
{
    return get_activation_factory<RangeBase, IRangeBaseStatics>().LargeChangeProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::ValueProperty()
{
    return get_activation_factory<RangeBase, IRangeBaseStatics>().ValueProperty();
}

inline RepeatButton::RepeatButton() :
    RepeatButton(activate_instance<RepeatButton>())
{}

inline Windows::UI::Xaml::DependencyProperty RepeatButton::DelayProperty()
{
    return get_activation_factory<RepeatButton, IRepeatButtonStatics>().DelayProperty();
}

inline Windows::UI::Xaml::DependencyProperty RepeatButton::IntervalProperty()
{
    return get_activation_factory<RepeatButton, IRepeatButtonStatics>().IntervalProperty();
}

inline ScrollBar::ScrollBar() :
    ScrollBar(activate_instance<ScrollBar>())
{}

inline Windows::UI::Xaml::DependencyProperty ScrollBar::OrientationProperty()
{
    return get_activation_factory<ScrollBar, IScrollBarStatics>().OrientationProperty();
}

inline Windows::UI::Xaml::DependencyProperty ScrollBar::ViewportSizeProperty()
{
    return get_activation_factory<ScrollBar, IScrollBarStatics>().ViewportSizeProperty();
}

inline Windows::UI::Xaml::DependencyProperty ScrollBar::IndicatorModeProperty()
{
    return get_activation_factory<ScrollBar, IScrollBarStatics>().IndicatorModeProperty();
}

inline ScrollEventArgs::ScrollEventArgs() :
    ScrollEventArgs(activate_instance<ScrollEventArgs>())
{}

inline Windows::UI::Xaml::DependencyProperty Selector::SelectedIndexProperty()
{
    return get_activation_factory<Selector, ISelectorStatics>().SelectedIndexProperty();
}

inline Windows::UI::Xaml::DependencyProperty Selector::SelectedItemProperty()
{
    return get_activation_factory<Selector, ISelectorStatics>().SelectedItemProperty();
}

inline Windows::UI::Xaml::DependencyProperty Selector::SelectedValueProperty()
{
    return get_activation_factory<Selector, ISelectorStatics>().SelectedValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty Selector::SelectedValuePathProperty()
{
    return get_activation_factory<Selector, ISelectorStatics>().SelectedValuePathProperty();
}

inline Windows::UI::Xaml::DependencyProperty Selector::IsSynchronizedWithCurrentItemProperty()
{
    return get_activation_factory<Selector, ISelectorStatics>().IsSynchronizedWithCurrentItemProperty();
}

inline bool Selector::GetIsSelectionActive(const Windows::UI::Xaml::DependencyObject & element)
{
    return get_activation_factory<Selector, ISelectorStatics>().GetIsSelectionActive(element);
}

inline Windows::UI::Xaml::DependencyProperty SelectorItem::IsSelectedProperty()
{
    return get_activation_factory<SelectorItem, ISelectorItemStatics>().IsSelectedProperty();
}

inline Thumb::Thumb() :
    Thumb(activate_instance<Thumb>())
{}

inline Windows::UI::Xaml::DependencyProperty Thumb::IsDraggingProperty()
{
    return get_activation_factory<Thumb, IThumbStatics>().IsDraggingProperty();
}

inline TickBar::TickBar() :
    TickBar(activate_instance<TickBar>())
{}

inline Windows::UI::Xaml::DependencyProperty TickBar::FillProperty()
{
    return get_activation_factory<TickBar, ITickBarStatics>().FillProperty();
}

inline ToggleButton::ToggleButton()
{
    Windows::IInspectable outer, inner;
    impl_move(get_activation_factory<ToggleButton, IToggleButtonFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty ToggleButton::IsCheckedProperty()
{
    return get_activation_factory<ToggleButton, IToggleButtonStatics>().IsCheckedProperty();
}

inline Windows::UI::Xaml::DependencyProperty ToggleButton::IsThreeStateProperty()
{
    return get_activation_factory<ToggleButton, IToggleButtonStatics>().IsThreeStateProperty();
}

}

}
