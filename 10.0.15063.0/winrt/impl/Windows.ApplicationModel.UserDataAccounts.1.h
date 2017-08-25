// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Appointments.0.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.0.h"
#include "winrt/impl/Windows.ApplicationModel.Email.0.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts {

struct WINRT_EBO IUserDataAccount :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccount>
{
    IUserDataAccount(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccount2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccount2>,
    impl::require<IUserDataAccount2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
{
    IUserDataAccount2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccount3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccount3>
{
    IUserDataAccount3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccount4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccount4>
{
    IUserDataAccount4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountManagerForUser>
{
    IUserDataAccountManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountManagerStatics>
{
    IUserDataAccountManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountManagerStatics2>
{
    IUserDataAccountManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountStore>
{
    IUserDataAccountStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountStore2>,
    impl::require<IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
{
    IUserDataAccountStore2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>::CreateAccountAsync;
    using impl::consume_t<IUserDataAccountStore2, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>::CreateAccountAsync;
};

struct WINRT_EBO IUserDataAccountStore3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountStore3>,
    impl::require<IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
{
    IUserDataAccountStore3(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>::CreateAccountAsync;
    using impl::consume_t<IUserDataAccountStore3, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>::CreateAccountAsync;
};

struct WINRT_EBO IUserDataAccountStoreChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountStoreChangedEventArgs>
{
    IUserDataAccountStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
