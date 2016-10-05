// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::ApplicationSettings {

struct CredentialCommandCredentialDeletedHandler;
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
struct WebAccountCommandInvokedHandler;
struct WebAccountProviderCommandInvokedHandler;
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

}

namespace Windows::UI::ApplicationSettings {

struct CredentialCommandCredentialDeletedHandler;
struct WebAccountCommandInvokedHandler;
struct WebAccountProviderCommandInvokedHandler;
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

}

namespace Windows::UI::ApplicationSettings {

enum class SettingsEdgeLocation
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

}

}
