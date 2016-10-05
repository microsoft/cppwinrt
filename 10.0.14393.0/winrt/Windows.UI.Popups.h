// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.Popups.3.h"
#include "Windows.UI.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Popups {

template <typename L> UICommandInvokedHandler::UICommandInvokedHandler(L lambda) :
    UICommandInvokedHandler(impl::make_delegate<impl_UICommandInvokedHandler<L>, UICommandInvokedHandler>(std::forward<L>(lambda)))
{}

template <typename F> UICommandInvokedHandler::UICommandInvokedHandler(F * function) :
    UICommandInvokedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> UICommandInvokedHandler::UICommandInvokedHandler(O * object, M method) :
    UICommandInvokedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void UICommandInvokedHandler::operator()(const Windows::UI::Popups::IUICommand & command) const
{
    check_hresult((*this)->abi_Invoke(get(command)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::UI::Popups::IMessageDialog> : produce_base<D, Windows::UI::Popups::IMessageDialog>
{
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Commands(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultCommandIndex(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultCommandIndex(uint32_t value) noexcept override
    {
        try
        {
            this->shim().DefaultCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CancelCommandIndex(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CancelCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CancelCommandIndex(uint32_t value) noexcept override
    {
        try
        {
            this->shim().CancelCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Content(abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Content(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Content(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>> messageDialogAsyncOperation) noexcept override
    {
        try
        {
            *messageDialogAsyncOperation = detach(this->shim().ShowAsync());
            return S_OK;
        }
        catch (...)
        {
            *messageDialogAsyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(Windows::UI::Popups::MessageDialogOptions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Options(Windows::UI::Popups::MessageDialogOptions value) noexcept override
    {
        try
        {
            this->shim().Options(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Popups::IMessageDialogFactory> : produce_base<D, Windows::UI::Popups::IMessageDialogFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> content, abi_arg_out<Windows::UI::Popups::IMessageDialog> messageDialog) noexcept override
    {
        try
        {
            *messageDialog = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *messageDialog = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithTitle(abi_arg_in<hstring> content, abi_arg_in<hstring> title, abi_arg_out<Windows::UI::Popups::IMessageDialog> messageDialog) noexcept override
    {
        try
        {
            *messageDialog = detach(this->shim().CreateWithTitle(*reinterpret_cast<const hstring *>(&content), *reinterpret_cast<const hstring *>(&title)));
            return S_OK;
        }
        catch (...)
        {
            *messageDialog = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Popups::IPopupMenu> : produce_base<D, Windows::UI::Popups::IPopupMenu>
{
    HRESULT __stdcall get_Commands(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAsync(abi_arg_in<Windows::Foundation::Point> invocationPoint, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().ShowAsync(*reinterpret_cast<const Windows::Foundation::Point *>(&invocationPoint)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAsyncWithRect(abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().ShowForSelectionAsync(*reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAsyncWithRectAndPlacement(abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>> asyncOperation) noexcept override
    {
        try
        {
            *asyncOperation = detach(this->shim().ShowForSelectionAsync(*reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            *asyncOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Popups::IUICommand> : produce_base<D, Windows::UI::Popups::IUICommand>
{
    HRESULT __stdcall get_Label(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Label(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Label(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Invoked(abi_arg_out<Windows::UI::Popups::UICommandInvokedHandler> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Invoked());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Invoked(abi_arg_in<Windows::UI::Popups::UICommandInvokedHandler> value) noexcept override
    {
        try
        {
            this->shim().Invoked(*reinterpret_cast<const Windows::UI::Popups::UICommandInvokedHandler *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Popups::IUICommandFactory> : produce_base<D, Windows::UI::Popups::IUICommandFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> label, abi_arg_out<Windows::UI::Popups::IUICommand> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&label)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithHandler(abi_arg_in<hstring> label, abi_arg_in<Windows::UI::Popups::UICommandInvokedHandler> action, abi_arg_out<Windows::UI::Popups::IUICommand> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateWithHandler(*reinterpret_cast<const hstring *>(&label), *reinterpret_cast<const Windows::UI::Popups::UICommandInvokedHandler *>(&action)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithHandlerAndId(abi_arg_in<hstring> label, abi_arg_in<Windows::UI::Popups::UICommandInvokedHandler> action, abi_arg_in<Windows::IInspectable> commandId, abi_arg_out<Windows::UI::Popups::IUICommand> instance) noexcept override
    {
        try
        {
            *instance = detach(this->shim().CreateWithHandlerAndId(*reinterpret_cast<const hstring *>(&label), *reinterpret_cast<const Windows::UI::Popups::UICommandInvokedHandler *>(&action), *reinterpret_cast<const Windows::IInspectable *>(&commandId)));
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

namespace Windows::UI::Popups {

template <typename D> hstring impl_IMessageDialog<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IMessageDialog<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> impl_IMessageDialog<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> value;
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->get_Commands(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMessageDialog<D>::DefaultCommandIndex() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->get_DefaultCommandIndex(&value));
    return value;
}

template <typename D> void impl_IMessageDialog<D>::DefaultCommandIndex(uint32_t value) const
{
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->put_DefaultCommandIndex(value));
}

template <typename D> uint32_t impl_IMessageDialog<D>::CancelCommandIndex() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->get_CancelCommandIndex(&value));
    return value;
}

template <typename D> void impl_IMessageDialog<D>::CancelCommandIndex(uint32_t value) const
{
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->put_CancelCommandIndex(value));
}

template <typename D> hstring impl_IMessageDialog<D>::Content() const
{
    hstring value;
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> void impl_IMessageDialog<D>::Content(hstring_ref value) const
{
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->put_Content(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> impl_IMessageDialog<D>::ShowAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> messageDialogAsyncOperation;
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->abi_ShowAsync(put(messageDialogAsyncOperation)));
    return messageDialogAsyncOperation;
}

template <typename D> Windows::UI::Popups::MessageDialogOptions impl_IMessageDialog<D>::Options() const
{
    Windows::UI::Popups::MessageDialogOptions value {};
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->get_Options(&value));
    return value;
}

template <typename D> void impl_IMessageDialog<D>::Options(Windows::UI::Popups::MessageDialogOptions value) const
{
    check_hresult(static_cast<const IMessageDialog &>(static_cast<const D &>(*this))->put_Options(value));
}

template <typename D> Windows::UI::Popups::MessageDialog impl_IMessageDialogFactory<D>::Create(hstring_ref content) const
{
    Windows::UI::Popups::MessageDialog messageDialog { nullptr };
    check_hresult(static_cast<const IMessageDialogFactory &>(static_cast<const D &>(*this))->abi_Create(get(content), put(messageDialog)));
    return messageDialog;
}

template <typename D> Windows::UI::Popups::MessageDialog impl_IMessageDialogFactory<D>::CreateWithTitle(hstring_ref content, hstring_ref title) const
{
    Windows::UI::Popups::MessageDialog messageDialog { nullptr };
    check_hresult(static_cast<const IMessageDialogFactory &>(static_cast<const D &>(*this))->abi_CreateWithTitle(get(content), get(title), put(messageDialog)));
    return messageDialog;
}

template <typename D> hstring impl_IUICommand<D>::Label() const
{
    hstring value;
    check_hresult(static_cast<const IUICommand &>(static_cast<const D &>(*this))->get_Label(put(value)));
    return value;
}

template <typename D> void impl_IUICommand<D>::Label(hstring_ref value) const
{
    check_hresult(static_cast<const IUICommand &>(static_cast<const D &>(*this))->put_Label(get(value)));
}

template <typename D> Windows::UI::Popups::UICommandInvokedHandler impl_IUICommand<D>::Invoked() const
{
    Windows::UI::Popups::UICommandInvokedHandler value {};
    check_hresult(static_cast<const IUICommand &>(static_cast<const D &>(*this))->get_Invoked(put(value)));
    return value;
}

template <typename D> void impl_IUICommand<D>::Invoked(const Windows::UI::Popups::UICommandInvokedHandler & value) const
{
    check_hresult(static_cast<const IUICommand &>(static_cast<const D &>(*this))->put_Invoked(get(value)));
}

template <typename D> Windows::IInspectable impl_IUICommand<D>::Id() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IUICommand &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IUICommand<D>::Id(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IUICommand &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> Windows::UI::Popups::UICommand impl_IUICommandFactory<D>::Create(hstring_ref label) const
{
    Windows::UI::Popups::UICommand instance { nullptr };
    check_hresult(static_cast<const IUICommandFactory &>(static_cast<const D &>(*this))->abi_Create(get(label), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Popups::UICommand impl_IUICommandFactory<D>::CreateWithHandler(hstring_ref label, const Windows::UI::Popups::UICommandInvokedHandler & action) const
{
    Windows::UI::Popups::UICommand instance { nullptr };
    check_hresult(static_cast<const IUICommandFactory &>(static_cast<const D &>(*this))->abi_CreateWithHandler(get(label), get(action), put(instance)));
    return instance;
}

template <typename D> Windows::UI::Popups::UICommand impl_IUICommandFactory<D>::CreateWithHandlerAndId(hstring_ref label, const Windows::UI::Popups::UICommandInvokedHandler & action, const Windows::IInspectable & commandId) const
{
    Windows::UI::Popups::UICommand instance { nullptr };
    check_hresult(static_cast<const IUICommandFactory &>(static_cast<const D &>(*this))->abi_CreateWithHandlerAndId(get(label), get(action), get(commandId), put(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> impl_IPopupMenu<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> value;
    check_hresult(static_cast<const IPopupMenu &>(static_cast<const D &>(*this))->get_Commands(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> impl_IPopupMenu<D>::ShowAsync(const Windows::Foundation::Point & invocationPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncOperation;
    check_hresult(static_cast<const IPopupMenu &>(static_cast<const D &>(*this))->abi_ShowAsync(get(invocationPoint), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> impl_IPopupMenu<D>::ShowForSelectionAsync(const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncOperation;
    check_hresult(static_cast<const IPopupMenu &>(static_cast<const D &>(*this))->abi_ShowAsyncWithRect(get(selection), put(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> impl_IPopupMenu<D>::ShowForSelectionAsync(const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncOperation;
    check_hresult(static_cast<const IPopupMenu &>(static_cast<const D &>(*this))->abi_ShowAsyncWithRectAndPlacement(get(selection), preferredPlacement, put(asyncOperation)));
    return asyncOperation;
}

inline MessageDialog::MessageDialog(hstring_ref content) :
    MessageDialog(get_activation_factory<MessageDialog, IMessageDialogFactory>().Create(content))
{}

inline MessageDialog::MessageDialog(hstring_ref content, hstring_ref title) :
    MessageDialog(get_activation_factory<MessageDialog, IMessageDialogFactory>().CreateWithTitle(content, title))
{}

inline PopupMenu::PopupMenu() :
    PopupMenu(activate_instance<PopupMenu>())
{}

inline UICommand::UICommand() :
    UICommand(activate_instance<UICommand>())
{}

inline UICommand::UICommand(hstring_ref label) :
    UICommand(get_activation_factory<UICommand, IUICommandFactory>().Create(label))
{}

inline UICommand::UICommand(hstring_ref label, const Windows::UI::Popups::UICommandInvokedHandler & action) :
    UICommand(get_activation_factory<UICommand, IUICommandFactory>().CreateWithHandler(label, action))
{}

inline UICommand::UICommand(hstring_ref label, const Windows::UI::Popups::UICommandInvokedHandler & action, const Windows::IInspectable & commandId) :
    UICommand(get_activation_factory<UICommand, IUICommandFactory>().CreateWithHandlerAndId(label, action, commandId))
{}

inline UICommandSeparator::UICommandSeparator() :
    UICommandSeparator(activate_instance<UICommandSeparator>())
{}

}

}
