// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Appointments.1.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.1.h"
#include "winrt/impl/Windows.ApplicationModel.Email.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts {

struct WINRT_EBO UserDataAccount :
    Windows::ApplicationModel::UserDataAccounts::IUserDataAccount,
    impl::require<UserDataAccount, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
{
    UserDataAccount(std::nullptr_t) noexcept {}
    using impl::consume_t<UserDataAccount, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>::Icon;
    using Windows::ApplicationModel::UserDataAccounts::IUserDataAccount::Icon;
    using impl::consume_t<UserDataAccount, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>::IsProtectedUnderLock;
    using impl::consume_t<UserDataAccount, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>::IsProtectedUnderLock;
};

struct UserDataAccountManager
{
    UserDataAccountManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType);
    static Windows::Foundation::IAsyncOperation<hstring> ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds const& contentKinds);
    static Windows::Foundation::IAsyncAction ShowAccountSettingsAsync(param::hstring const& id);
    static Windows::Foundation::IAsyncAction ShowAccountErrorResolverAsync(param::hstring const& id);
    static Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser GetForUser(Windows::System::User const& user);
};

struct WINRT_EBO UserDataAccountManagerForUser :
    Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser
{
    UserDataAccountManagerForUser(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataAccountStore :
    Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore,
    impl::require<UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
{
    UserDataAccountStore(std::nullptr_t) noexcept {}
    using impl::consume_t<UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>::CreateAccountAsync;
    using impl::consume_t<UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>::CreateAccountAsync;
    using Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore::CreateAccountAsync;
};

struct WINRT_EBO UserDataAccountStoreChangedEventArgs :
    Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs
{
    UserDataAccountStoreChangedEventArgs(std::nullptr_t) noexcept {}
};

}
