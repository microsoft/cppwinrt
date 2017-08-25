// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;
struct WebAccount;
struct WebAccountProvider;

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

struct UICommandInvokedHandler;

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

struct IUICommand;

}

WINRT_EXPORT namespace winrt::Windows::UI::ApplicationSettings {

enum class [[deprecated("SettingsEdgeLocation is deprecated and might not work on all platforms. For more info, see MSDN.")]] SettingsEdgeLocation
{
    Right = 0,
    Left = 1,
};

enum class SupportedWebAccountActions : unsigned
{
    None = 0x0,
    Reconnect = 0x1,
    Remove = 0x2,
    ViewDetails = 0x4,
    Manage = 0x8,
    More = 0x10,
};

DEFINE_ENUM_FLAG_OPERATORS(SupportedWebAccountActions)

enum class WebAccountAction
{
    Reconnect = 0,
    Remove = 1,
    ViewDetails = 2,
    Manage = 3,
    More = 4,
};

struct IAccountsSettingsPane;
struct IAccountsSettingsPaneCommandsRequestedEventArgs;
struct IAccountsSettingsPaneEventDeferral;
struct IAccountsSettingsPaneStatics;
struct IAccountsSettingsPaneStatics2;
struct ICredentialCommand;
struct ICredentialCommandFactory;
struct ISettingsCommandFactory;
struct ISettingsCommandStatics;
struct ISettingsPane;
struct ISettingsPaneCommandsRequest;
struct ISettingsPaneCommandsRequestedEventArgs;
struct ISettingsPaneStatics;
struct IWebAccountCommand;
struct IWebAccountCommandFactory;
struct IWebAccountInvokedArgs;
struct IWebAccountProviderCommand;
struct IWebAccountProviderCommandFactory;
struct AccountsSettingsPane;
struct AccountsSettingsPaneCommandsRequestedEventArgs;
struct AccountsSettingsPaneEventDeferral;
struct CredentialCommand;
struct SettingsCommand;
struct SettingsPane;
struct SettingsPaneCommandsRequest;
struct SettingsPaneCommandsRequestedEventArgs;
struct WebAccountCommand;
struct WebAccountInvokedArgs;
struct WebAccountProviderCommand;
struct CredentialCommandCredentialDeletedHandler;
struct WebAccountCommandInvokedHandler;
struct WebAccountProviderCommandInvokedHandler;

}

namespace winrt::impl {

template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPane>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::ICredentialCommand>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::ICredentialCommandFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::ISettingsCommandFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::ISettingsCommandStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::ISettingsPane>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::ISettingsPaneStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::IWebAccountCommand>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::ApplicationSettings::AccountsSettingsPane>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::CredentialCommand>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::SettingsCommand>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::SettingsPane>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::WebAccountCommand>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::WebAccountInvokedArgs>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::WebAccountProviderCommand>{ using type = class_category; };
template <> struct category<Windows::UI::ApplicationSettings::SettingsEdgeLocation>{ using type = enum_category; };
template <> struct category<Windows::UI::ApplicationSettings::SupportedWebAccountActions>{ using type = enum_category; };
template <> struct category<Windows::UI::ApplicationSettings::WebAccountAction>{ using type = enum_category; };
template <> struct category<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>{ using type = delegate_category; };
template <> struct category<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>{ using type = delegate_category; };
template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPane>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPane" }; };
template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneCommandsRequestedEventArgs" }; };
template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneEventDeferral" }; };
template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics" }; };
template <> struct name<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IAccountsSettingsPaneStatics2" }; };
template <> struct name<Windows::UI::ApplicationSettings::ICredentialCommand>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ICredentialCommand" }; };
template <> struct name<Windows::UI::ApplicationSettings::ICredentialCommandFactory>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ICredentialCommandFactory" }; };
template <> struct name<Windows::UI::ApplicationSettings::ISettingsCommandFactory>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsCommandFactory" }; };
template <> struct name<Windows::UI::ApplicationSettings::ISettingsCommandStatics>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsCommandStatics" }; };
template <> struct name<Windows::UI::ApplicationSettings::ISettingsPane>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsPane" }; };
template <> struct name<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequest" }; };
template <> struct name<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsPaneCommandsRequestedEventArgs" }; };
template <> struct name<Windows::UI::ApplicationSettings::ISettingsPaneStatics>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.ISettingsPaneStatics" }; };
template <> struct name<Windows::UI::ApplicationSettings::IWebAccountCommand>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountCommand" }; };
template <> struct name<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountCommandFactory" }; };
template <> struct name<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountInvokedArgs" }; };
template <> struct name<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountProviderCommand" }; };
template <> struct name<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.IWebAccountProviderCommandFactory" }; };
template <> struct name<Windows::UI::ApplicationSettings::AccountsSettingsPane>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.AccountsSettingsPane" }; };
template <> struct name<Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.AccountsSettingsPaneCommandsRequestedEventArgs" }; };
template <> struct name<Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.AccountsSettingsPaneEventDeferral" }; };
template <> struct name<Windows::UI::ApplicationSettings::CredentialCommand>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.CredentialCommand" }; };
template <> struct name<Windows::UI::ApplicationSettings::SettingsCommand>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsCommand" }; };
template <> struct name<Windows::UI::ApplicationSettings::SettingsPane>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsPane" }; };
template <> struct name<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequest" }; };
template <> struct name<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsPaneCommandsRequestedEventArgs" }; };
template <> struct name<Windows::UI::ApplicationSettings::WebAccountCommand>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountCommand" }; };
template <> struct name<Windows::UI::ApplicationSettings::WebAccountInvokedArgs>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountInvokedArgs" }; };
template <> struct name<Windows::UI::ApplicationSettings::WebAccountProviderCommand>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountProviderCommand" }; };
template <> struct name<Windows::UI::ApplicationSettings::SettingsEdgeLocation>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SettingsEdgeLocation" }; };
template <> struct name<Windows::UI::ApplicationSettings::SupportedWebAccountActions>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.SupportedWebAccountActions" }; };
template <> struct name<Windows::UI::ApplicationSettings::WebAccountAction>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountAction" }; };
template <> struct name<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.CredentialCommandCredentialDeletedHandler" }; };
template <> struct name<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountCommandInvokedHandler" }; };
template <> struct name<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>{ static constexpr auto & value{ L"Windows.UI.ApplicationSettings.WebAccountProviderCommandInvokedHandler" }; };
template <> struct guid<Windows::UI::ApplicationSettings::IAccountsSettingsPane>{ static constexpr GUID value{ 0x81EA942C,0x4F09,0x4406,{ 0xA5,0x38,0x83,0x8D,0x9B,0x14,0xB7,0xE6 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>{ static constexpr GUID value{ 0x3B68C099,0xDB19,0x45D0,{ 0x9A,0xBF,0x95,0xD3,0x77,0x3C,0x93,0x30 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>{ static constexpr GUID value{ 0xCBF25D3F,0xE5BA,0x40EF,{ 0x93,0xDA,0x65,0xE0,0x96,0xE5,0xFB,0x04 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>{ static constexpr GUID value{ 0x561F8B60,0xB0EC,0x4150,{ 0xA8,0xDC,0x20,0x8E,0xE4,0x4B,0x06,0x8A } }; };
template <> struct guid<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>{ static constexpr GUID value{ 0xD21DF7C2,0xCE0D,0x484F,{ 0xB8,0xE8,0xE8,0x23,0xC2,0x15,0x76,0x5E } }; };
template <> struct guid<Windows::UI::ApplicationSettings::ICredentialCommand>{ static constexpr GUID value{ 0xA5F665E6,0x6143,0x4A7A,{ 0xA9,0x71,0xB0,0x17,0xBA,0x97,0x8C,0xE2 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::ICredentialCommandFactory>{ static constexpr GUID value{ 0x27E88C17,0xBC3E,0x4B80,{ 0x94,0x95,0x4E,0xD7,0x20,0xE4,0x8A,0x91 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::ISettingsCommandFactory>{ static constexpr GUID value{ 0x68E15B33,0x1C83,0x433A,{ 0xAA,0x5A,0xCE,0xEE,0xA5,0xBD,0x47,0x64 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::ISettingsCommandStatics>{ static constexpr GUID value{ 0x749AE954,0x2F69,0x4B17,{ 0x8A,0xBA,0xD0,0x5C,0xE5,0x77,0x8E,0x46 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::ISettingsPane>{ static constexpr GUID value{ 0xB1CD0932,0x4570,0x4C69,{ 0x8D,0x38,0x89,0x44,0x65,0x61,0xAC,0xE0 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>{ static constexpr GUID value{ 0x44DF23AE,0x5D6E,0x4068,{ 0xA1,0x68,0xF4,0x76,0x43,0x18,0x21,0x14 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>{ static constexpr GUID value{ 0x205F5D24,0x1B48,0x4629,{ 0xA6,0xCA,0x2F,0xDF,0xED,0xAF,0xB7,0x5D } }; };
template <> struct guid<Windows::UI::ApplicationSettings::ISettingsPaneStatics>{ static constexpr GUID value{ 0x1C6A52C5,0xFF19,0x471B,{ 0xBA,0x6B,0xF8,0xF3,0x56,0x94,0xAD,0x9A } }; };
template <> struct guid<Windows::UI::ApplicationSettings::IWebAccountCommand>{ static constexpr GUID value{ 0xCAA39398,0x9CFA,0x4246,{ 0xB0,0xC4,0xA9,0x13,0xA3,0x89,0x65,0x41 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>{ static constexpr GUID value{ 0xBFA6CDFF,0x2F2D,0x42F5,{ 0x81,0xDE,0x1D,0x56,0xBA,0xFC,0x49,0x6D } }; };
template <> struct guid<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>{ static constexpr GUID value{ 0xE7ABCC40,0xA1D8,0x4C5D,{ 0x9A,0x7F,0x1D,0x34,0xB2,0xF9,0x0A,0xD2 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>{ static constexpr GUID value{ 0xD69BDD9A,0xA0A6,0x4E9B,{ 0x88,0xDC,0xC7,0x1E,0x75,0x7A,0x35,0x01 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>{ static constexpr GUID value{ 0xD5658A1B,0xB176,0x4776,{ 0x84,0x69,0xA9,0xD3,0xFF,0x0B,0x3F,0x59 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>{ static constexpr GUID value{ 0x61C0E185,0x0977,0x4678,{ 0xB4,0xE2,0x98,0x72,0x7A,0xFB,0xEE,0xD9 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>{ static constexpr GUID value{ 0x1EE6E459,0x1705,0x4A9A,{ 0xB5,0x99,0xA0,0xC3,0xD6,0x92,0x19,0x73 } }; };
template <> struct guid<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>{ static constexpr GUID value{ 0xB7DE5527,0x4C8F,0x42DD,{ 0x84,0xDA,0x5E,0xC4,0x93,0xAB,0xDB,0x9A } }; };
template <> struct default_interface<Windows::UI::ApplicationSettings::AccountsSettingsPane>{ using type = Windows::UI::ApplicationSettings::IAccountsSettingsPane; };
template <> struct default_interface<Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>{ using type = Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs; };
template <> struct default_interface<Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>{ using type = Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral; };
template <> struct default_interface<Windows::UI::ApplicationSettings::CredentialCommand>{ using type = Windows::UI::ApplicationSettings::ICredentialCommand; };
template <> struct default_interface<Windows::UI::ApplicationSettings::SettingsCommand>{ using type = Windows::UI::Popups::IUICommand; };
template <> struct default_interface<Windows::UI::ApplicationSettings::SettingsPane>{ using type = Windows::UI::ApplicationSettings::ISettingsPane; };
template <> struct default_interface<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest>{ using type = Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest; };
template <> struct default_interface<Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs>{ using type = Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs; };
template <> struct default_interface<Windows::UI::ApplicationSettings::WebAccountCommand>{ using type = Windows::UI::ApplicationSettings::IWebAccountCommand; };
template <> struct default_interface<Windows::UI::ApplicationSettings::WebAccountInvokedArgs>{ using type = Windows::UI::ApplicationSettings::IWebAccountInvokedArgs; };
template <> struct default_interface<Windows::UI::ApplicationSettings::WebAccountProviderCommand>{ using type = Windows::UI::ApplicationSettings::IWebAccountProviderCommand; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane
{
    event_token AccountCommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const;
    using AccountCommandsRequested_revoker = event_revoker<Windows::UI::ApplicationSettings::IAccountsSettingsPane>;
    AccountCommandsRequested_revoker AccountCommandsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::AccountsSettingsPane, Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs> const& handler) const;
    void AccountCommandsRequested(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPane> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPane<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs
{
    Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountProviderCommand> WebAccountProviderCommands() const;
    Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::WebAccountCommand> WebAccountCommands() const;
    Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::CredentialCommand> CredentialCommands() const;
    Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand> Commands() const;
    hstring HeaderText() const;
    void HeaderText(param::hstring const& value) const;
    Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral GetDeferral() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneCommandsRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneEventDeferral<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics
{
    Windows::UI::ApplicationSettings::AccountsSettingsPane GetForCurrentView() const;
    void Show() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2
{
    Windows::Foundation::IAsyncAction ShowManageAccountsAsync() const;
    Windows::Foundation::IAsyncAction ShowAddAccountAsync() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IAccountsSettingsPaneStatics2<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_ICredentialCommand
{
    Windows::Security::Credentials::PasswordCredential PasswordCredential() const;
    Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler CredentialDeleted() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::ICredentialCommand> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_ICredentialCommand<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory
{
    Windows::UI::ApplicationSettings::CredentialCommand CreateCredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential) const;
    Windows::UI::ApplicationSettings::CredentialCommand CreateCredentialCommandWithHandler(Windows::Security::Credentials::PasswordCredential const& passwordCredential, Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const& deleted) const;
};
template <> struct consume<Windows::UI::ApplicationSettings::ICredentialCommandFactory> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_ICredentialCommandFactory<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_ISettingsCommandFactory
{
    Windows::UI::ApplicationSettings::SettingsCommand CreateSettingsCommand(Windows::Foundation::IInspectable const& settingsCommandId, param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& handler) const;
};
template <> struct consume<Windows::UI::ApplicationSettings::ISettingsCommandFactory> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsCommandFactory<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_ISettingsCommandStatics
{
    Windows::UI::ApplicationSettings::SettingsCommand AccountsCommand() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::ISettingsCommandStatics> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsCommandStatics<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_ISettingsPane
{
    [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] event_token CommandsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const& handler) const;
    using CommandsRequested_revoker = event_revoker<Windows::UI::ApplicationSettings::ISettingsPane>;
    [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] CommandsRequested_revoker CommandsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ApplicationSettings::SettingsPane, Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs> const& handler) const;
    [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] void CommandsRequested(event_token const& cookie) const;
};
template <> struct consume<Windows::UI::ApplicationSettings::ISettingsPane> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsPane<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequest
{
    [[deprecated("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::Foundation::Collections::IVector<Windows::UI::ApplicationSettings::SettingsCommand> ApplicationCommands() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequest<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequestedEventArgs
{
    [[deprecated("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::UI::ApplicationSettings::SettingsPaneCommandsRequest Request() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsPaneCommandsRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics
{
    [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::UI::ApplicationSettings::SettingsPane GetForCurrentView() const;
    [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] void Show() const;
    [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] Windows::UI::ApplicationSettings::SettingsEdgeLocation Edge() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::ISettingsPaneStatics> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_ISettingsPaneStatics<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IWebAccountCommand
{
    Windows::Security::Credentials::WebAccount WebAccount() const;
    Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler Invoked() const;
    Windows::UI::ApplicationSettings::SupportedWebAccountActions Actions() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountCommand> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountCommand<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IWebAccountCommandFactory
{
    Windows::UI::ApplicationSettings::WebAccountCommand CreateWebAccountCommand(Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const& invoked, Windows::UI::ApplicationSettings::SupportedWebAccountActions const& actions) const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountCommandFactory> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountCommandFactory<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs
{
    Windows::UI::ApplicationSettings::WebAccountAction Action() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountInvokedArgs<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand
{
    Windows::Security::Credentials::WebAccountProvider WebAccountProvider() const;
    Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler Invoked() const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountProviderCommand> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommand<D>; };

template <typename D>
struct consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory
{
    Windows::UI::ApplicationSettings::WebAccountProviderCommand CreateWebAccountProviderCommand(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const& invoked) const;
};
template <> struct consume<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory> { template <typename D> using type = consume_Windows_UI_ApplicationSettings_IWebAccountProviderCommandFactory<D>; };

template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPane>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_AccountCommandsRequested(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_AccountCommandsRequested(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebAccountProviderCommands(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WebAccountCommands(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CredentialCommands(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Commands(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HeaderText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_HeaderText(HSTRING value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** deferral) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** current) = 0;
    virtual HRESULT __stdcall Show() = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::IAccountsSettingsPaneStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowManageAccountsAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ShowAddAccountAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::ICredentialCommand>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PasswordCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CredentialDeleted(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::ICredentialCommandFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateCredentialCommand(::IUnknown* passwordCredential, ::IUnknown** instance) = 0;
    virtual HRESULT __stdcall CreateCredentialCommandWithHandler(::IUnknown* passwordCredential, ::IUnknown* deleted, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::ISettingsCommandFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateSettingsCommand(::IUnknown* settingsCommandId, HSTRING label, ::IUnknown* handler, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::ISettingsCommandStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AccountsCommand(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::ISettingsPane>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CommandsRequested(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_CommandsRequested(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ApplicationCommands(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** request) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::ISettingsPaneStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** current) = 0;
    virtual HRESULT __stdcall Show() = 0;
    virtual HRESULT __stdcall get_Edge(abi_t<Windows::UI::ApplicationSettings::SettingsEdgeLocation>* value) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountCommand>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebAccount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Invoked(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Actions(abi_t<Windows::UI::ApplicationSettings::SupportedWebAccountActions>* value) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountCommandFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWebAccountCommand(::IUnknown* webAccount, ::IUnknown* invoked, abi_t<Windows::UI::ApplicationSettings::SupportedWebAccountActions> actions, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountInvokedArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Action(abi_t<Windows::UI::ApplicationSettings::WebAccountAction>* action) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountProviderCommand>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebAccountProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Invoked(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::IWebAccountProviderCommandFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWebAccountProviderCommand(::IUnknown* webAccountProvider, ::IUnknown* invoked, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* command) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* command, ::IUnknown* args) = 0;
};};

template <> struct abi<Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* command) = 0;
};};

}
