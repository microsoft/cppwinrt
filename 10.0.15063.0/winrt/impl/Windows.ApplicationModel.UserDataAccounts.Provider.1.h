// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.0.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::Provider {

struct WINRT_EBO IUserDataAccountPartnerAccountInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountPartnerAccountInfo>
{
    IUserDataAccountPartnerAccountInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountProviderAddAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountProviderAddAccountOperation>,
    impl::require<IUserDataAccountProviderAddAccountOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderAddAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountProviderOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountProviderResolveErrorsOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountProviderResolveErrorsOperation>,
    impl::require<IUserDataAccountProviderResolveErrorsOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderResolveErrorsOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountProviderSettingsOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountProviderSettingsOperation>,
    impl::require<IUserDataAccountProviderSettingsOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderSettingsOperation(std::nullptr_t = nullptr) noexcept {}
};

}
