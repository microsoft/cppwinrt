// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.ApplicationSettings.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::ApplicationSettings {

struct __declspec(uuid("61c0e185-0977-4678-b4e2-98727afbeed9")) __declspec(novtable) CredentialCommandCredentialDeletedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::UI::ApplicationSettings::ICredentialCommand * command) = 0;
};

struct __declspec(uuid("81ea942c-4f09-4406-a538-838d9b14b7e6")) __declspec(novtable) IAccountsSettingsPane : Windows::IInspectable
{
    virtual HRESULT __stdcall add_AccountCommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_AccountCommandsRequested(event_token cookie) = 0;
};

struct __declspec(uuid("3b68c099-db19-45d0-9abf-95d3773c9330")) __declspec(novtable) IAccountsSettingsPaneCommandsRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_WebAccountProviderCommands(Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountProviderCommand> ** value) = 0;
    virtual HRESULT __stdcall get_WebAccountCommands(Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountCommand> ** value) = 0;
    virtual HRESULT __stdcall get_CredentialCommands(Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::CredentialCommand> ** value) = 0;
    virtual HRESULT __stdcall get_Commands(Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand> ** value) = 0;
    virtual HRESULT __stdcall get_HeaderText(hstring * value) = 0;
    virtual HRESULT __stdcall put_HeaderText(hstring value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral ** deferral) = 0;
};

struct __declspec(uuid("cbf25d3f-e5ba-40ef-93da-65e096e5fb04")) __declspec(novtable) IAccountsSettingsPaneEventDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("561f8b60-b0ec-4150-a8dc-208ee44b068a")) __declspec(novtable) IAccountsSettingsPaneStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::ApplicationSettings::IAccountsSettingsPane ** current) = 0;
    virtual HRESULT __stdcall abi_Show() = 0;
};

struct __declspec(uuid("d21df7c2-ce0d-484f-b8e8-e823c215765e")) __declspec(novtable) IAccountsSettingsPaneStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ShowManageAccountsAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_ShowAddAccountAsync(Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
};

struct __declspec(uuid("a5f665e6-6143-4a7a-a971-b017ba978ce2")) __declspec(novtable) ICredentialCommand : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PasswordCredential(Windows::Security::Credentials::IPasswordCredential ** value) = 0;
    virtual HRESULT __stdcall get_CredentialDeleted(Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler ** value) = 0;
};

struct __declspec(uuid("27e88c17-bc3e-4b80-9495-4ed720e48a91")) __declspec(novtable) ICredentialCommandFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateCredentialCommand(Windows::Security::Credentials::IPasswordCredential * passwordCredential, Windows::UI::ApplicationSettings::ICredentialCommand ** instance) = 0;
    virtual HRESULT __stdcall abi_CreateCredentialCommandWithHandler(Windows::Security::Credentials::IPasswordCredential * passwordCredential, Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler * deleted, Windows::UI::ApplicationSettings::ICredentialCommand ** instance) = 0;
};

struct __declspec(uuid("68e15b33-1c83-433a-aa5a-ceeea5bd4764")) __declspec(novtable) ISettingsCommandFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateSettingsCommand(Windows::IInspectable * settingsCommandId, hstring label, Windows::UI::Popups::UICommandInvokedHandler * handler, Windows::UI::Popups::IUICommand ** instance) = 0;
};

struct __declspec(uuid("749ae954-2f69-4b17-8aba-d05ce5778e46")) __declspec(novtable) ISettingsCommandStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AccountsCommand(Windows::UI::Popups::IUICommand ** value) = 0;
};

struct __declspec(uuid("b1cd0932-4570-4c69-8d38-89446561ace0")) __declspec(novtable) ISettingsPane : Windows::IInspectable
{
    virtual HRESULT __stdcall add_CommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_CommandsRequested(event_token cookie) = 0;
};

struct __declspec(uuid("44df23ae-5d6e-4068-a168-f47643182114")) __declspec(novtable) ISettingsPaneCommandsRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ApplicationCommands(Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand> ** value) = 0;
};

struct __declspec(uuid("205f5d24-1b48-4629-a6ca-2fdfedafb75d")) __declspec(novtable) ISettingsPaneCommandsRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest ** request) = 0;
};

struct __declspec(uuid("1c6a52c5-ff19-471b-ba6b-f8f35694ad9a")) __declspec(novtable) ISettingsPaneStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentView(Windows::UI::ApplicationSettings::ISettingsPane ** current) = 0;
    virtual HRESULT __stdcall abi_Show() = 0;
    virtual HRESULT __stdcall get_Edge(winrt::Windows::UI::ApplicationSettings::SettingsEdgeLocation * value) = 0;
};

struct __declspec(uuid("caa39398-9cfa-4246-b0c4-a913a3896541")) __declspec(novtable) IWebAccountCommand : Windows::IInspectable
{
    virtual HRESULT __stdcall get_WebAccount(Windows::Security::Credentials::IWebAccount ** value) = 0;
    virtual HRESULT __stdcall get_Invoked(Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler ** value) = 0;
    virtual HRESULT __stdcall get_Actions(winrt::Windows::UI::ApplicationSettings::SupportedWebAccountActions * value) = 0;
};

struct __declspec(uuid("bfa6cdff-2f2d-42f5-81de-1d56bafc496d")) __declspec(novtable) IWebAccountCommandFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWebAccountCommand(Windows::Security::Credentials::IWebAccount * webAccount, Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler * invoked, winrt::Windows::UI::ApplicationSettings::SupportedWebAccountActions actions, Windows::UI::ApplicationSettings::IWebAccountCommand ** instance) = 0;
};

struct __declspec(uuid("e7abcc40-a1d8-4c5d-9a7f-1d34b2f90ad2")) __declspec(novtable) IWebAccountInvokedArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Action(winrt::Windows::UI::ApplicationSettings::WebAccountAction * action) = 0;
};

struct __declspec(uuid("d69bdd9a-a0a6-4e9b-88dc-c71e757a3501")) __declspec(novtable) IWebAccountProviderCommand : Windows::IInspectable
{
    virtual HRESULT __stdcall get_WebAccountProvider(Windows::Security::Credentials::IWebAccountProvider ** value) = 0;
    virtual HRESULT __stdcall get_Invoked(Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler ** value) = 0;
};

struct __declspec(uuid("d5658a1b-b176-4776-8469-a9d3ff0b3f59")) __declspec(novtable) IWebAccountProviderCommandFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWebAccountProviderCommand(Windows::Security::Credentials::IWebAccountProvider * webAccountProvider, Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler * invoked, Windows::UI::ApplicationSettings::IWebAccountProviderCommand ** instance) = 0;
};

struct __declspec(uuid("1ee6e459-1705-4a9a-b599-a0c3d6921973")) __declspec(novtable) WebAccountCommandInvokedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::UI::ApplicationSettings::IWebAccountCommand * command, Windows::UI::ApplicationSettings::IWebAccountInvokedArgs * args) = 0;
};

struct __declspec(uuid("b7de5527-4c8f-42dd-84da-5ec493abdb9a")) __declspec(novtable) WebAccountProviderCommandInvokedHandler : IUnknown
{
    virtual HRESULT __stdcall abi_Invoke(Windows::UI::ApplicationSettings::IWebAccountProviderCommand * command) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::ApplicationSettings::AccountsSettingsPane> { using default_interface = Windows::UI::ApplicationSettings::IAccountsSettingsPane; };
template <> struct traits<Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> { using default_interface = Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs; };
template <> struct traits<Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral> { using default_interface = Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral; };
template <> struct traits<Windows::UI::ApplicationSettings::CredentialCommand> { using default_interface = Windows::UI::ApplicationSettings::ICredentialCommand; };
template <> struct traits<Windows::UI::ApplicationSettings::SettingsCommand> { using default_interface = Windows::UI::Popups::IUICommand; };
template <> struct traits<Windows::UI::ApplicationSettings::SettingsPane> { using default_interface = Windows::UI::ApplicationSettings::ISettingsPane; };
template <> struct traits<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest> { using default_interface = Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest; };
template <> struct traits<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> { using default_interface = Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs; };
template <> struct traits<Windows::UI::ApplicationSettings::WebAccountCommand> { using default_interface = Windows::UI::ApplicationSettings::IWebAccountCommand; };
template <> struct traits<Windows::UI::ApplicationSettings::WebAccountInvokedArgs> { using default_interface = Windows::UI::ApplicationSettings::IWebAccountInvokedArgs; };
template <> struct traits<Windows::UI::ApplicationSettings::WebAccountProviderCommand> { using default_interface = Windows::UI::ApplicationSettings::IWebAccountProviderCommand; };

}

namespace Windows::UI::ApplicationSettings {

template <typename T> struct impl_IAccountsSettingsPane;
template <typename T> struct impl_IAccountsSettingsPaneCommandsRequestedEventArgs;
template <typename T> struct impl_IAccountsSettingsPaneEventDeferral;
template <typename T> struct impl_IAccountsSettingsPaneStatics;
template <typename T> struct impl_IAccountsSettingsPaneStatics2;
template <typename T> struct impl_ICredentialCommand;
template <typename T> struct impl_ICredentialCommandFactory;
template <typename T> struct impl_ISettingsCommandFactory;
template <typename T> struct impl_ISettingsCommandStatics;
template <typename T> struct impl_ISettingsPane;
template <typename T> struct impl_ISettingsPaneCommandsRequest;
template <typename T> struct impl_ISettingsPaneCommandsRequestedEventArgs;
template <typename T> struct impl_ISettingsPaneStatics;
template <typename T> struct impl_IWebAccountCommand;
template <typename T> struct impl_IWebAccountCommandFactory;
template <typename T> struct impl_IWebAccountInvokedArgs;
template <typename T> struct impl_IWebAccountProviderCommand;
template <typename T> struct impl_IWebAccountProviderCommandFactory;
template <typename T> struct impl_CredentialCommandCredentialDeletedHandler;
template <typename T> struct impl_WebAccountCommandInvokedHandler;
template <typename T> struct impl_WebAccountProviderCommandInvokedHandler;

}

namespace impl {

template <> struct traits<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>
{
    using abi = ABI::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler;
};

template <> struct traits<Windows::UI::ApplicationSettings::IAccountsSettingsPane>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPane;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IAccountsSettingsPane<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IAccountsSettingsPaneCommandsRequestedEventArgs<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IAccountsSettingsPaneEventDeferral<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IAccountsSettingsPaneStatics<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IAccountsSettingsPaneStatics2<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::ICredentialCommand>
{
    using abi = ABI::Windows::UI::ApplicationSettings::ICredentialCommand;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_ICredentialCommand<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::ICredentialCommandFactory>
{
    using abi = ABI::Windows::UI::ApplicationSettings::ICredentialCommandFactory;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_ICredentialCommandFactory<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::ISettingsCommandFactory>
{
    using abi = ABI::Windows::UI::ApplicationSettings::ISettingsCommandFactory;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_ISettingsCommandFactory<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::ISettingsCommandStatics>
{
    using abi = ABI::Windows::UI::ApplicationSettings::ISettingsCommandStatics;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_ISettingsCommandStatics<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::ISettingsPane>
{
    using abi = ABI::Windows::UI::ApplicationSettings::ISettingsPane;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_ISettingsPane<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>
{
    using abi = ABI::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_ISettingsPaneCommandsRequest<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>
{
    using abi = ABI::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_ISettingsPaneCommandsRequestedEventArgs<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::ISettingsPaneStatics>
{
    using abi = ABI::Windows::UI::ApplicationSettings::ISettingsPaneStatics;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_ISettingsPaneStatics<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::IWebAccountCommand>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IWebAccountCommand;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IWebAccountCommand<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IWebAccountCommandFactory;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IWebAccountCommandFactory<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IWebAccountInvokedArgs;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IWebAccountInvokedArgs<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommand;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IWebAccountProviderCommand<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>
{
    using abi = ABI::Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory;
    template <typename D> using consume = Windows::UI::ApplicationSettings::impl_IWebAccountProviderCommandFactory<D>;
};

template <> struct traits<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>
{
    using abi = ABI::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler;
};

template <> struct traits<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>
{
    using abi = ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler;
};

template <> struct traits<Windows::UI::ApplicationSettings::AccountsSettingsPane>
{
    using abi = ABI::Windows::UI::ApplicationSettings::AccountsSettingsPane;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.AccountsSettingsPane"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>
{
    using abi = ABI::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>
{
    using abi = ABI::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::CredentialCommand>
{
    using abi = ABI::Windows::UI::ApplicationSettings::CredentialCommand;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.CredentialCommand"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::SettingsCommand>
{
    using abi = ABI::Windows::UI::ApplicationSettings::SettingsCommand;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.SettingsCommand"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::SettingsPane>
{
    using abi = ABI::Windows::UI::ApplicationSettings::SettingsPane;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.SettingsPane"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest>
{
    using abi = ABI::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs>
{
    using abi = ABI::Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::WebAccountCommand>
{
    using abi = ABI::Windows::UI::ApplicationSettings::WebAccountCommand;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.WebAccountCommand"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::WebAccountInvokedArgs>
{
    using abi = ABI::Windows::UI::ApplicationSettings::WebAccountInvokedArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.WebAccountInvokedArgs"; }
};

template <> struct traits<Windows::UI::ApplicationSettings::WebAccountProviderCommand>
{
    using abi = ABI::Windows::UI::ApplicationSettings::WebAccountProviderCommand;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ApplicationSettings.WebAccountProviderCommand"; }
};

}

}
