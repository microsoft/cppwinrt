// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.UI.ApplicationSettings.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>::AccountCommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPane)->add_AccountCommandsRequested(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::ApplicationSettings::IAccountsSettingsPane> consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>::AccountCommandsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ApplicationSettings::IAccountsSettingsPane>(this, &abi_t<Windows::UI::ApplicationSettings::IAccountsSettingsPane>::remove_AccountCommandsRequested, AccountCommandsRequested(handler));
}

template <typename D> void consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>::AccountCommandsRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPane)->remove_AccountCommandsRequested(get_abi(cookie)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountProviderCommand> consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::WebAccountProviderCommands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountProviderCommand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_WebAccountProviderCommands(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountCommand> consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::WebAccountCommands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountCommand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_WebAccountCommands(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::CredentialCommand> consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::CredentialCommands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::CredentialCommand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_CredentialCommands(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand> consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_Commands(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::HeaderText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->get_HeaderText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::HeaderText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->put_HeaderText(get_abi(value)));
}

template <typename D> Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>::GetDeferral() const
{
    Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral)->Complete());
}

template <typename D> Windows::UI::ApplicationSettings::AccountsSettingsPane consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics<D>::GetForCurrentView() const
{
    Windows::UI::ApplicationSettings::AccountsSettingsPane current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics)->GetForCurrentView(put_abi(current)));
    return current;
}

template <typename D> void consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics<D>::Show() const
{
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics)->Show());
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2<D>::ShowManageAccountsAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2)->ShowManageAccountsAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2<D>::ShowAddAccountAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2)->ShowAddAccountAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_UI_ApplicationSettings_ICredentialCommand<D>::PasswordCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ICredentialCommand)->get_PasswordCredential(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler consume_Windows_UI_ApplicationSettings_ICredentialCommand<D>::CredentialDeleted() const
{
    Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ICredentialCommand)->get_CredentialDeleted(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ApplicationSettings::CredentialCommand consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory<D>::CreateCredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential) const
{
    Windows::UI::ApplicationSettings::CredentialCommand instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ICredentialCommandFactory)->CreateCredentialCommand(get_abi(passwordCredential), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::ApplicationSettings::CredentialCommand consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory<D>::CreateCredentialCommandWithHandler(Windows::Security::Credentials::PasswordCredential const& passwordCredential, Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const& deleted) const
{
    Windows::UI::ApplicationSettings::CredentialCommand instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ICredentialCommandFactory)->CreateCredentialCommandWithHandler(get_abi(passwordCredential), get_abi(deleted), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::ApplicationSettings::SettingsCommand consume_Windows_UI_ApplicationSettings_ISettingsCommandFactory<D>::CreateSettingsCommand(Windows::Foundation::IInspectable const& settingsCommandId, param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& handler) const
{
    Windows::UI::ApplicationSettings::SettingsCommand instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ISettingsCommandFactory)->CreateSettingsCommand(get_abi(settingsCommandId), get_abi(label), get_abi(handler), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::ApplicationSettings::SettingsCommand consume_Windows_UI_ApplicationSettings_ISettingsCommandStatics<D>::AccountsCommand() const
{
    Windows::UI::ApplicationSettings::SettingsCommand value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ISettingsCommandStatics)->get_AccountsCommand(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_ApplicationSettings_ISettingsPane<D>::CommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ISettingsPane)->add_CommandsRequested(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::ApplicationSettings::ISettingsPane> consume_Windows_UI_ApplicationSettings_ISettingsPane<D>::CommandsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ApplicationSettings::ISettingsPane>(this, &abi_t<Windows::UI::ApplicationSettings::ISettingsPane>::remove_CommandsRequested, CommandsRequested(handler));
}

template <typename D> void consume_Windows_UI_ApplicationSettings_ISettingsPane<D>::CommandsRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ISettingsPane)->remove_CommandsRequested(get_abi(cookie)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand> consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequest<D>::ApplicationCommands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest)->get_ApplicationCommands(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequestedEventArgs<D>::Request() const
{
    Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest request{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs)->get_Request(put_abi(request)));
    return request;
}

template <typename D> Windows::UI::ApplicationSettings::SettingsPane consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics<D>::GetForCurrentView() const
{
    Windows::UI::ApplicationSettings::SettingsPane current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneStatics)->GetForCurrentView(put_abi(current)));
    return current;
}

template <typename D> void consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics<D>::Show() const
{
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneStatics)->Show());
}

template <typename D> Windows::UI::ApplicationSettings::SettingsEdgeLocation consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics<D>::Edge() const
{
    Windows::UI::ApplicationSettings::SettingsEdgeLocation value{};
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::ISettingsPaneStatics)->get_Edge(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::WebAccount consume_Windows_UI_ApplicationSettings_IWebAccountCommand<D>::WebAccount() const
{
    Windows::Security::Credentials::WebAccount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IWebAccountCommand)->get_WebAccount(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler consume_Windows_UI_ApplicationSettings_IWebAccountCommand<D>::Invoked() const
{
    Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IWebAccountCommand)->get_Invoked(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ApplicationSettings::SupportedWebAccountActions consume_Windows_UI_ApplicationSettings_IWebAccountCommand<D>::Actions() const
{
    Windows::UI::ApplicationSettings::SupportedWebAccountActions value{};
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IWebAccountCommand)->get_Actions(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ApplicationSettings::WebAccountCommand consume_Windows_UI_ApplicationSettings_IWebAccountCommandFactory<D>::CreateWebAccountCommand(Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const& invoked, Windows::UI::ApplicationSettings::SupportedWebAccountActions const& actions) const
{
    Windows::UI::ApplicationSettings::WebAccountCommand instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IWebAccountCommandFactory)->CreateWebAccountCommand(get_abi(webAccount), get_abi(invoked), get_abi(actions), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::ApplicationSettings::WebAccountAction consume_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs<D>::Action() const
{
    Windows::UI::ApplicationSettings::WebAccountAction action{};
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IWebAccountInvokedArgs)->get_Action(put_abi(action)));
    return action;
}

template <typename D> Windows::Security::Credentials::WebAccountProvider consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand<D>::WebAccountProvider() const
{
    Windows::Security::Credentials::WebAccountProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IWebAccountProviderCommand)->get_WebAccountProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand<D>::Invoked() const
{
    Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IWebAccountProviderCommand)->get_Invoked(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ApplicationSettings::WebAccountProviderCommand consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory<D>::CreateWebAccountProviderCommand(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const& invoked) const
{
    Windows::UI::ApplicationSettings::WebAccountProviderCommand instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory)->CreateWebAccountProviderCommand(get_abi(webAccountProvider), get_abi(invoked), put_abi(instance)));
    return instance;
}

template <> struct delegate<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* command) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::ApplicationSettings::CredentialCommand const*>(&command));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* command, ::IUnknown* args) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountCommand const*>(&command), *reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountInvokedArgs const*>(&args));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* command) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountProviderCommand const*>(&command));
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
struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPane> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPane>
{
    HRESULT __stdcall add_AccountCommandsRequested(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().AccountCommandsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccountCommandsRequested(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccountCommandsRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
{
    HRESULT __stdcall get_WebAccountProviderCommands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebAccountProviderCommands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WebAccountCommands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebAccountCommands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialCommands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CredentialCommands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Commands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HeaderText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HeaderText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeaderText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** current) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *current = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Show() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2> : produce_base<D, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
{
    HRESULT __stdcall ShowManageAccountsAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ShowManageAccountsAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowAddAccountAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ShowAddAccountAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ApplicationSettings::ICredentialCommand> : produce_base<D, Windows::UI::ApplicationSettings::ICredentialCommand>
{
    HRESULT __stdcall get_PasswordCredential(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PasswordCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CredentialDeleted(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CredentialDeleted());
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
struct produce<D, Windows::UI::ApplicationSettings::ICredentialCommandFactory> : produce_base<D, Windows::UI::ApplicationSettings::ICredentialCommandFactory>
{
    HRESULT __stdcall CreateCredentialCommand(::IUnknown* passwordCredential, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateCredentialCommand(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateCredentialCommandWithHandler(::IUnknown* passwordCredential, ::IUnknown* deleted, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateCredentialCommandWithHandler(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential), *reinterpret_cast<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const*>(&deleted)));
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
struct produce<D, Windows::UI::ApplicationSettings::ISettingsCommandFactory> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsCommandFactory>
{
    HRESULT __stdcall CreateSettingsCommand(::IUnknown* settingsCommandId, HSTRING label, ::IUnknown* handler, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateSettingsCommand(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&settingsCommandId), *reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&handler)));
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
struct produce<D, Windows::UI::ApplicationSettings::ISettingsCommandStatics> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsCommandStatics>
{
    HRESULT __stdcall get_AccountsCommand(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountsCommand());
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
struct produce<D, Windows::UI::ApplicationSettings::ISettingsPane> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsPane>
{
    HRESULT __stdcall add_CommandsRequested(::IUnknown* handler, abi_t<event_token>* cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_abi(this->shim().CommandsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CommandsRequested(abi_t<event_token> cookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommandsRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>
{
    HRESULT __stdcall get_ApplicationCommands(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationCommands());
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
struct produce<D, Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** request) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *request = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *request = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ApplicationSettings::ISettingsPaneStatics> : produce_base<D, Windows::UI::ApplicationSettings::ISettingsPaneStatics>
{
    HRESULT __stdcall GetForCurrentView(::IUnknown** current) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *current = detach_abi(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Show() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Edge(abi_t<Windows::UI::ApplicationSettings::SettingsEdgeLocation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Edge());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ApplicationSettings::IWebAccountCommand> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountCommand>
{
    HRESULT __stdcall get_WebAccount(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebAccount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Invoked(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Invoked());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Actions(abi_t<Windows::UI::ApplicationSettings::SupportedWebAccountActions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Actions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ApplicationSettings::IWebAccountCommandFactory> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
{
    HRESULT __stdcall CreateWebAccountCommand(::IUnknown* webAccount, ::IUnknown* invoked, abi_t<Windows::UI::ApplicationSettings::SupportedWebAccountActions> actions, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateWebAccountCommand(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const*>(&invoked), *reinterpret_cast<Windows::UI::ApplicationSettings::SupportedWebAccountActions const*>(&actions)));
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
struct produce<D, Windows::UI::ApplicationSettings::IWebAccountInvokedArgs> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
{
    HRESULT __stdcall get_Action(abi_t<Windows::UI::ApplicationSettings::WebAccountAction>* action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().Action());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ApplicationSettings::IWebAccountProviderCommand> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
{
    HRESULT __stdcall get_WebAccountProvider(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebAccountProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Invoked(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Invoked());
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
struct produce<D, Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory> : produce_base<D, Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
{
    HRESULT __stdcall CreateWebAccountProviderCommand(::IUnknown* webAccountProvider, ::IUnknown* invoked, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateWebAccountProviderCommand(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&webAccountProvider), *reinterpret_cast<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const*>(&invoked)));
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

WINRT_EXPORT namespace winrt::Windows::UI::ApplicationSettings {

inline Windows::UI::ApplicationSettings::AccountsSettingsPane AccountsSettingsPane::GetForCurrentView()
{
    return get_activation_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>().GetForCurrentView();
}

inline void AccountsSettingsPane::Show()
{
    get_activation_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>().Show();
}

inline Windows::Foundation::IAsyncAction AccountsSettingsPane::ShowManageAccountsAsync()
{
    return get_activation_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>().ShowManageAccountsAsync();
}

inline Windows::Foundation::IAsyncAction AccountsSettingsPane::ShowAddAccountAsync()
{
    return get_activation_factory<AccountsSettingsPane, Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>().ShowAddAccountAsync();
}

inline CredentialCommand::CredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential) :
    CredentialCommand(get_activation_factory<CredentialCommand, Windows::UI::ApplicationSettings::ICredentialCommandFactory>().CreateCredentialCommand(passwordCredential))
{}

inline CredentialCommand::CredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential, Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const& deleted) :
    CredentialCommand(get_activation_factory<CredentialCommand, Windows::UI::ApplicationSettings::ICredentialCommandFactory>().CreateCredentialCommandWithHandler(passwordCredential, deleted))
{}

inline SettingsCommand::SettingsCommand(Windows::Foundation::IInspectable const& settingsCommandId, param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& handler) :
    SettingsCommand(get_activation_factory<SettingsCommand, Windows::UI::ApplicationSettings::ISettingsCommandFactory>().CreateSettingsCommand(settingsCommandId, label, handler))
{}

inline Windows::UI::ApplicationSettings::SettingsCommand SettingsCommand::AccountsCommand()
{
    return get_activation_factory<SettingsCommand, Windows::UI::ApplicationSettings::ISettingsCommandStatics>().AccountsCommand();
}

inline Windows::UI::ApplicationSettings::SettingsPane SettingsPane::GetForCurrentView()
{
    return get_activation_factory<SettingsPane, Windows::UI::ApplicationSettings::ISettingsPaneStatics>().GetForCurrentView();
}

inline void SettingsPane::Show()
{
    get_activation_factory<SettingsPane, Windows::UI::ApplicationSettings::ISettingsPaneStatics>().Show();
}

inline Windows::UI::ApplicationSettings::SettingsEdgeLocation SettingsPane::Edge()
{
    return get_activation_factory<SettingsPane, Windows::UI::ApplicationSettings::ISettingsPaneStatics>().Edge();
}

inline WebAccountCommand::WebAccountCommand(Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const& invoked, Windows::UI::ApplicationSettings::SupportedWebAccountActions const& actions) :
    WebAccountCommand(get_activation_factory<WebAccountCommand, Windows::UI::ApplicationSettings::IWebAccountCommandFactory>().CreateWebAccountCommand(webAccount, invoked, actions))
{}

inline WebAccountProviderCommand::WebAccountProviderCommand(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const& invoked) :
    WebAccountProviderCommand(get_activation_factory<WebAccountProviderCommand, Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>().CreateWebAccountProviderCommand(webAccountProvider, invoked))
{}

template <typename L> CredentialCommandCredentialDeletedHandler::CredentialCommandCredentialDeletedHandler(L handler) :
    CredentialCommandCredentialDeletedHandler(impl::make_delegate<CredentialCommandCredentialDeletedHandler>(std::forward<L>(handler)))
{}

template <typename F> CredentialCommandCredentialDeletedHandler::CredentialCommandCredentialDeletedHandler(F* handler) :
    CredentialCommandCredentialDeletedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> CredentialCommandCredentialDeletedHandler::CredentialCommandCredentialDeletedHandler(O* object, M method) :
    CredentialCommandCredentialDeletedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void CredentialCommandCredentialDeletedHandler::operator()(Windows::UI::ApplicationSettings::CredentialCommand const& command) const
{
    check_hresult((*(abi_t<CredentialCommandCredentialDeletedHandler>**)this)->Invoke(get_abi(command)));
}

template <typename L> WebAccountCommandInvokedHandler::WebAccountCommandInvokedHandler(L handler) :
    WebAccountCommandInvokedHandler(impl::make_delegate<WebAccountCommandInvokedHandler>(std::forward<L>(handler)))
{}

template <typename F> WebAccountCommandInvokedHandler::WebAccountCommandInvokedHandler(F* handler) :
    WebAccountCommandInvokedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> WebAccountCommandInvokedHandler::WebAccountCommandInvokedHandler(O* object, M method) :
    WebAccountCommandInvokedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void WebAccountCommandInvokedHandler::operator()(Windows::UI::ApplicationSettings::WebAccountCommand const& command, Windows::UI::ApplicationSettings::WebAccountInvokedArgs const& args) const
{
    check_hresult((*(abi_t<WebAccountCommandInvokedHandler>**)this)->Invoke(get_abi(command), get_abi(args)));
}

template <typename L> WebAccountProviderCommandInvokedHandler::WebAccountProviderCommandInvokedHandler(L handler) :
    WebAccountProviderCommandInvokedHandler(impl::make_delegate<WebAccountProviderCommandInvokedHandler>(std::forward<L>(handler)))
{}

template <typename F> WebAccountProviderCommandInvokedHandler::WebAccountProviderCommandInvokedHandler(F* handler) :
    WebAccountProviderCommandInvokedHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> WebAccountProviderCommandInvokedHandler::WebAccountProviderCommandInvokedHandler(O* object, M method) :
    WebAccountProviderCommandInvokedHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void WebAccountProviderCommandInvokedHandler::operator()(Windows::UI::ApplicationSettings::WebAccountProviderCommand const& command) const
{
    check_hresult((*(abi_t<WebAccountProviderCommandInvokedHandler>**)this)->Invoke(get_abi(command)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPane> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::ICredentialCommand> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::ICredentialCommand> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::ICredentialCommandFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::ICredentialCommandFactory> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsCommandFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::ISettingsCommandFactory> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsCommandStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::ISettingsCommandStatics> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsPane> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::ISettingsPane> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::ISettingsPaneStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::ISettingsPaneStatics> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountCommand> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IWebAccountCommand> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountCommandFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IWebAccountCommandFactory> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommand> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::CredentialCommand> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::CredentialCommand> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::SettingsCommand> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::SettingsCommand> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::SettingsPane> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::SettingsPane> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::WebAccountCommand> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::WebAccountCommand> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::WebAccountInvokedArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::WebAccountInvokedArgs> {};

template<> struct hash<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand> {};

}

WINRT_WARNING_POP
