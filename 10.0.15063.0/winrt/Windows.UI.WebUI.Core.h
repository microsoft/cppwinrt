// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.WebUI.Core.2.h"
#include "winrt/Windows.UI.WebUI.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::Visible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->get_Visible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::Visible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->put_Visible(value));
}

template <typename D> double consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::Opacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::Opacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->put_Opacity(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::ForegroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->get_ForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::ForegroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->put_ForegroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::BackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::ClosedDisplayMode() const
{
    Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->get_ClosedDisplayMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::ClosedDisplayMode(Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->put_ClosedDisplayMode(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::IsOpen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->get_IsOpen(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::IsOpen(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->put_IsOpen(value));
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->get_Size(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::PrimaryCommands() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->get_PrimaryCommands(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::SecondaryCommands() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::UI::WebUI::Core::IWebUICommandBarElement> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->get_SecondaryCommands(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::MenuOpened(Windows::UI::WebUI::Core::MenuOpenedEventHandler const& handler) const
{
    event_token value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->add_MenuOpened(get_abi(handler), put_abi(value)));
    return value;
}

template <typename D> event_revoker<Windows::UI::WebUI::Core::IWebUICommandBar> consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::MenuOpened(auto_revoke_t, Windows::UI::WebUI::Core::MenuOpenedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::Core::IWebUICommandBar>(this, &abi_t<Windows::UI::WebUI::Core::IWebUICommandBar>::remove_MenuOpened, MenuOpened(handler));
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::MenuOpened(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->remove_MenuOpened(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::MenuClosed(Windows::UI::WebUI::Core::MenuClosedEventHandler const& handler) const
{
    event_token value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->add_MenuClosed(get_abi(handler), put_abi(value)));
    return value;
}

template <typename D> event_revoker<Windows::UI::WebUI::Core::IWebUICommandBar> consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::MenuClosed(auto_revoke_t, Windows::UI::WebUI::Core::MenuClosedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::Core::IWebUICommandBar>(this, &abi_t<Windows::UI::WebUI::Core::IWebUICommandBar>::remove_MenuClosed, MenuClosed(handler));
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::MenuClosed(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->remove_MenuClosed(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::SizeChanged(Windows::UI::WebUI::Core::SizeChangedEventHandler const& handler) const
{
    event_token value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->add_SizeChanged(get_abi(handler), put_abi(value)));
    return value;
}

template <typename D> event_revoker<Windows::UI::WebUI::Core::IWebUICommandBar> consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::SizeChanged(auto_revoke_t, Windows::UI::WebUI::Core::SizeChangedEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::Core::IWebUICommandBar>(this, &abi_t<Windows::UI::WebUI::Core::IWebUICommandBar>::remove_SizeChanged, SizeChanged(handler));
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBar<D>::SizeChanged(event_token const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBar)->remove_SizeChanged(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_WebUI_Core_IWebUICommandBarBitmapIcon<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarBitmapIcon<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon)->put_Uri(get_abi(value)));
}

template <typename D> Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon consume_Windows_UI_WebUI_Core_IWebUICommandBarBitmapIconFactory<D>::Create(Windows::Foundation::Uri const& uri) const
{
    Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory)->Create(get_abi(uri), put_abi(instance)));
    return instance;
}

template <typename D> hstring consume_Windows_UI_WebUI_Core_IWebUICommandBarConfirmationButton<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarConfirmationButton<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton)->put_Text(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_WebUI_Core_IWebUICommandBarConfirmationButton<D>::ItemInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton)->add_ItemInvoked(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton> consume_Windows_UI_WebUI_Core_IWebUICommandBarConfirmationButton<D>::ItemInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>(this, &abi_t<Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>::remove_ItemInvoked, ItemInvoked(handler));
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarConfirmationButton<D>::ItemInvoked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton)->remove_ItemInvoked(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->get_Enabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->put_Enabled(value));
}

template <typename D> hstring consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->put_Label(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::IsToggleButton() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->get_IsToggleButton(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::IsToggleButton(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->put_IsToggleButton(value));
}

template <typename D> bool consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::IsChecked() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->get_IsChecked(&value));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::IsChecked(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->put_IsChecked(value));
}

template <typename D> Windows::UI::WebUI::Core::IWebUICommandBarIcon consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::Icon() const
{
    Windows::UI::WebUI::Core::IWebUICommandBarIcon value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->get_Icon(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::Icon(Windows::UI::WebUI::Core::IWebUICommandBarIcon const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->put_Icon(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::ItemInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->add_ItemInvoked(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::WebUI::Core::IWebUICommandBarIconButton> consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::ItemInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::WebUI::Core::IWebUICommandBarIconButton>(this, &abi_t<Windows::UI::WebUI::Core::IWebUICommandBarIconButton>::remove_ItemInvoked, ItemInvoked(handler));
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarIconButton<D>::ItemInvoked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarIconButton)->remove_ItemInvoked(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_WebUI_Core_IWebUICommandBarItemInvokedEventArgs<D>::IsPrimaryCommand() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs)->get_IsPrimaryCommand(&value));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_WebUI_Core_IWebUICommandBarSizeChangedEventArgs<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs)->get_Size(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::WebUI::Core::WebUICommandBar consume_Windows_UI_WebUI_Core_IWebUICommandBarStatics<D>::GetForCurrentView() const
{
    Windows::UI::WebUI::Core::WebUICommandBar commandBar{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarStatics)->GetForCurrentView(put_abi(commandBar)));
    return commandBar;
}

template <typename D> hstring consume_Windows_UI_WebUI_Core_IWebUICommandBarSymbolIcon<D>::Symbol() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon)->get_Symbol(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_WebUI_Core_IWebUICommandBarSymbolIcon<D>::Symbol(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon)->put_Symbol(get_abi(value)));
}

template <typename D> Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon consume_Windows_UI_WebUI_Core_IWebUICommandBarSymbolIconFactory<D>::Create(param::hstring const& symbol) const
{
    Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory)->Create(get_abi(symbol), put_abi(instance)));
    return instance;
}

template <> struct delegate<Windows::UI::WebUI::Core::MenuClosedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::WebUI::Core::MenuClosedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::WebUI::Core::MenuClosedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke() noexcept final
        {
            try
            {
                (*this)();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::WebUI::Core::MenuOpenedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::WebUI::Core::MenuOpenedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::WebUI::Core::MenuOpenedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke() noexcept final
        {
            try
            {
                (*this)();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::WebUI::Core::SizeChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::WebUI::Core::SizeChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::WebUI::Core::SizeChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* eventArgs) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs const*>(&eventArgs));
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
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBar> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBar>
{
    HRESULT __stdcall get_Visible(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Visible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Visible(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Visible(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Opacity());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Opacity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedDisplayMode(abi_t<Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClosedDisplayMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClosedDisplayMode(abi_t<Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosedDisplayMode(*reinterpret_cast<Windows::UI::WebUI::Core::WebUICommandBarClosedDisplayMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOpen(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOpen());
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
            typename D::abi_guard guard(this->shim());
            this->shim().IsOpen(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryCommands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrimaryCommands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SecondaryCommands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SecondaryCommands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MenuOpened(::IUnknown* handler, abi_t<event_token>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MenuOpened(*reinterpret_cast<Windows::UI::WebUI::Core::MenuOpenedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MenuOpened(abi_t<event_token> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MenuOpened(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MenuClosed(::IUnknown* handler, abi_t<event_token>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MenuClosed(*reinterpret_cast<Windows::UI::WebUI::Core::MenuClosedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MenuClosed(abi_t<event_token> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MenuClosed(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SizeChanged(::IUnknown* handler, abi_t<event_token>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SizeChanged(*reinterpret_cast<Windows::UI::WebUI::Core::SizeChangedEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SizeChanged(abi_t<event_token> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SizeChanged(*reinterpret_cast<event_token const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon>
{
    HRESULT __stdcall get_Uri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory>
{
    HRESULT __stdcall Create(::IUnknown* uri, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
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
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton>
{
    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ItemInvoked(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ItemInvoked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemInvoked(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemInvoked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarElement> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarElement>
{};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarIcon> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarIcon>
{};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarIconButton> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarIconButton>
{
    HRESULT __stdcall get_Enabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Label(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Label(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsToggleButton(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsToggleButton());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsToggleButton(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsToggleButton(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsChecked(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsChecked());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsChecked(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsChecked(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Icon(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Icon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Icon(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Icon(*reinterpret_cast<Windows::UI::WebUI::Core::IWebUICommandBarIcon const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ItemInvoked(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ItemInvoked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::WebUI::Core::WebUICommandBarIconButton, Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemInvoked(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemInvoked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs>
{
    HRESULT __stdcall get_IsPrimaryCommand(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPrimaryCommand());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs>
{
    HRESULT __stdcall get_Size(abi_t<Windows::Foundation::Size>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarStatics> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** commandBar) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *commandBar = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *commandBar = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon>
{
    HRESULT __stdcall get_Symbol(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Symbol());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Symbol(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Symbol(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory> : produce_base<D, Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory>
{
    HRESULT __stdcall Create(HSTRING symbol, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&symbol)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::WebUI::Core {

inline Windows::UI::WebUI::Core::WebUICommandBar WebUICommandBar::GetForCurrentView()
{
    return get_activation_factory<WebUICommandBar, Windows::UI::WebUI::Core::IWebUICommandBarStatics>().GetForCurrentView();
}

inline WebUICommandBarBitmapIcon::WebUICommandBarBitmapIcon() :
    WebUICommandBarBitmapIcon(activate_instance<WebUICommandBarBitmapIcon>())
{}

inline WebUICommandBarBitmapIcon::WebUICommandBarBitmapIcon(Windows::Foundation::Uri const& uri) :
    WebUICommandBarBitmapIcon(get_activation_factory<WebUICommandBarBitmapIcon, Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory>().Create(uri))
{}

inline WebUICommandBarConfirmationButton::WebUICommandBarConfirmationButton() :
    WebUICommandBarConfirmationButton(activate_instance<WebUICommandBarConfirmationButton>())
{}

inline WebUICommandBarIconButton::WebUICommandBarIconButton() :
    WebUICommandBarIconButton(activate_instance<WebUICommandBarIconButton>())
{}

inline WebUICommandBarSymbolIcon::WebUICommandBarSymbolIcon() :
    WebUICommandBarSymbolIcon(activate_instance<WebUICommandBarSymbolIcon>())
{}

inline WebUICommandBarSymbolIcon::WebUICommandBarSymbolIcon(param::hstring const& symbol) :
    WebUICommandBarSymbolIcon(get_activation_factory<WebUICommandBarSymbolIcon, Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory>().Create(symbol))
{}

template <typename L> MenuClosedEventHandler::MenuClosedEventHandler(L handler) :
    MenuClosedEventHandler(impl::make_delegate<MenuClosedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> MenuClosedEventHandler::MenuClosedEventHandler(F* handler) :
    MenuClosedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> MenuClosedEventHandler::MenuClosedEventHandler(O* object, M method) :
    MenuClosedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void MenuClosedEventHandler::operator()() const
{
    check_hresult((*(abi_t<MenuClosedEventHandler>**)this)->Invoke());
}

template <typename L> MenuOpenedEventHandler::MenuOpenedEventHandler(L handler) :
    MenuOpenedEventHandler(impl::make_delegate<MenuOpenedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> MenuOpenedEventHandler::MenuOpenedEventHandler(F* handler) :
    MenuOpenedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> MenuOpenedEventHandler::MenuOpenedEventHandler(O* object, M method) :
    MenuOpenedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void MenuOpenedEventHandler::operator()() const
{
    check_hresult((*(abi_t<MenuOpenedEventHandler>**)this)->Invoke());
}

template <typename L> SizeChangedEventHandler::SizeChangedEventHandler(L handler) :
    SizeChangedEventHandler(impl::make_delegate<SizeChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> SizeChangedEventHandler::SizeChangedEventHandler(F* handler) :
    SizeChangedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> SizeChangedEventHandler::SizeChangedEventHandler(O* object, M method) :
    SizeChangedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void SizeChangedEventHandler::operator()(Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs const& eventArgs) const
{
    check_hresult((*(abi_t<SizeChangedEventHandler>**)this)->Invoke(get_abi(eventArgs)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBar> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarBitmapIcon> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarBitmapIconFactory> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarConfirmationButton> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarElement> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarElement> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarIcon> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarIcon> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarIconButton> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarIconButton> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarItemInvokedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarSizeChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarStatics> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarSymbolIcon> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::IWebUICommandBarSymbolIconFactory> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::WebUICommandBar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::WebUICommandBar> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::WebUICommandBarBitmapIcon> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::WebUICommandBarConfirmationButton> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::WebUICommandBarIconButton> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::WebUICommandBarIconButton> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::WebUICommandBarItemInvokedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::WebUICommandBarSizeChangedEventArgs> {};

template<> struct hash<winrt::Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::WebUI::Core::WebUICommandBarSymbolIcon> {};

}

WINRT_WARNING_POP
