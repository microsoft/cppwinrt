// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.UI.ApplicationSettings.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::ApplicationSettings {

struct CredentialCommandCredentialDeletedHandler : Windows::Foundation::IUnknown
{
    CredentialCommandCredentialDeletedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> CredentialCommandCredentialDeletedHandler(L lambda);
    template <typename F> CredentialCommandCredentialDeletedHandler(F* function);
    template <typename O, typename M> CredentialCommandCredentialDeletedHandler(O* object, M method);
    void operator()(Windows::UI::ApplicationSettings::CredentialCommand const& command) const;
};

struct WebAccountCommandInvokedHandler : Windows::Foundation::IUnknown
{
    WebAccountCommandInvokedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> WebAccountCommandInvokedHandler(L lambda);
    template <typename F> WebAccountCommandInvokedHandler(F* function);
    template <typename O, typename M> WebAccountCommandInvokedHandler(O* object, M method);
    void operator()(Windows::UI::ApplicationSettings::WebAccountCommand const& command, Windows::UI::ApplicationSettings::WebAccountInvokedArgs const& args) const;
};

struct WebAccountProviderCommandInvokedHandler : Windows::Foundation::IUnknown
{
    WebAccountProviderCommandInvokedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> WebAccountProviderCommandInvokedHandler(L lambda);
    template <typename F> WebAccountProviderCommandInvokedHandler(F* function);
    template <typename O, typename M> WebAccountProviderCommandInvokedHandler(O* object, M method);
    void operator()(Windows::UI::ApplicationSettings::WebAccountProviderCommand const& command) const;
};

struct WINRT_EBO AccountsSettingsPane :
    Windows::UI::ApplicationSettings::IAccountsSettingsPane
{
    AccountsSettingsPane(std::nullptr_t) noexcept {}
    static Windows::UI::ApplicationSettings::AccountsSettingsPane GetForCurrentView();
    static void Show();
    static Windows::Foundation::IAsyncAction ShowManageAccountsAsync();
    static Windows::Foundation::IAsyncAction ShowAddAccountAsync();
};

struct WINRT_EBO AccountsSettingsPaneCommandsRequestedEventArgs :
    Windows::UI::ApplicationSettings::IAccountsSettingsPaneCommandsRequestedEventArgs
{
    AccountsSettingsPaneCommandsRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AccountsSettingsPaneEventDeferral :
    Windows::UI::ApplicationSettings::IAccountsSettingsPaneEventDeferral
{
    AccountsSettingsPaneEventDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CredentialCommand :
    Windows::UI::ApplicationSettings::ICredentialCommand
{
    CredentialCommand(std::nullptr_t) noexcept {}
    CredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential);
    CredentialCommand(Windows::Security::Credentials::PasswordCredential const& passwordCredential, Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler const& deleted);
};

struct WINRT_EBO SettingsCommand :
    Windows::UI::Popups::IUICommand
{
    SettingsCommand(std::nullptr_t) noexcept {}
    SettingsCommand(Windows::Foundation::IInspectable const& settingsCommandId, param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& handler);
    static Windows::UI::ApplicationSettings::SettingsCommand AccountsCommand();
};

struct WINRT_EBO [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] SettingsPane :
    Windows::UI::ApplicationSettings::ISettingsPane
{
    SettingsPane(std::nullptr_t) noexcept {}
    [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::UI::ApplicationSettings::SettingsPane GetForCurrentView();
    [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] static void Show();
    [[deprecated("SettingsPane is deprecated and might not work on all platforms. For more info, see MSDN.")]] static Windows::UI::ApplicationSettings::SettingsEdgeLocation Edge();
};

struct WINRT_EBO [[deprecated("SettingsPaneCommandsRequest is deprecated and might not work on all platforms. For more info, see MSDN.")]] SettingsPaneCommandsRequest :
    Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest
{
    SettingsPaneCommandsRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SettingsPaneCommandsRequestedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")]] SettingsPaneCommandsRequestedEventArgs :
    Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequestedEventArgs
{
    SettingsPaneCommandsRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountCommand :
    Windows::UI::ApplicationSettings::IWebAccountCommand
{
    WebAccountCommand(std::nullptr_t) noexcept {}
    WebAccountCommand(Windows::Security::Credentials::WebAccount const& webAccount, Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler const& invoked, Windows::UI::ApplicationSettings::SupportedWebAccountActions const& actions);
};

struct WINRT_EBO WebAccountInvokedArgs :
    Windows::UI::ApplicationSettings::IWebAccountInvokedArgs
{
    WebAccountInvokedArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountProviderCommand :
    Windows::UI::ApplicationSettings::IWebAccountProviderCommand
{
    WebAccountProviderCommand(std::nullptr_t) noexcept {}
    WebAccountProviderCommand(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler const& invoked);
};

}
