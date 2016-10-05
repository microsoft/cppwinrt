// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.UserDataAccounts.Provider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_b730f093_e2fb_5b20_9d9e_4f9defe647b0
#define WINRT_GENERIC_b730f093_e2fb_5b20_9d9e_4f9defe647b0
template <> struct __declspec(uuid("b730f093-e2fb-5b20-9d9e-4f9defe647b0")) __declspec(novtable) IVectorView<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> : impl_IVectorView<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> {};
#endif

#ifndef WINRT_GENERIC_ac401b26_3ebf_5cbf_9643_c96a40ab40a2
#define WINRT_GENERIC_ac401b26_3ebf_5cbf_9643_c96a40ab40a2
template <> struct __declspec(uuid("ac401b26-3ebf-5cbf-9643-c96a40ab40a2")) __declspec(novtable) IIterator<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> : impl_IIterator<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> {};
#endif

#ifndef WINRT_GENERIC_5cdb425e_da5a_55fa_b349_5467996cab32
#define WINRT_GENERIC_5cdb425e_da5a_55fa_b349_5467996cab32
template <> struct __declspec(uuid("5cdb425e-da5a-55fa-b349-5467996cab32")) __declspec(novtable) IIterable<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> : impl_IIterable<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> {};
#endif


}

namespace Windows::ApplicationModel::UserDataAccounts::Provider {

template <typename D>
struct WINRT_EBO impl_IUserDataAccountPartnerAccountInfo
{
    hstring DisplayName() const;
    uint32_t Priority() const;
    Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind AccountKind() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataAccountProviderAddAccountOperation
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds ContentKinds() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> PartnerAccountInfos() const;
    void ReportCompleted(hstring_ref userDataAccountId) const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataAccountProviderOperation
{
    Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind Kind() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataAccountProviderResolveErrorsOperation
{
    hstring UserDataAccountId() const;
    void ReportCompleted() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataAccountProviderSettingsOperation
{
    hstring UserDataAccountId() const;
    void ReportCompleted() const;
};

struct IUserDataAccountPartnerAccountInfo :
    Windows::IInspectable,
    impl::consume<IUserDataAccountPartnerAccountInfo>
{
    IUserDataAccountPartnerAccountInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserDataAccountPartnerAccountInfo>(m_ptr); }
};

struct IUserDataAccountProviderAddAccountOperation :
    Windows::IInspectable,
    impl::consume<IUserDataAccountProviderAddAccountOperation>,
    impl::require<IUserDataAccountProviderAddAccountOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderAddAccountOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserDataAccountProviderAddAccountOperation>(m_ptr); }
};

struct IUserDataAccountProviderOperation :
    Windows::IInspectable,
    impl::consume<IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserDataAccountProviderOperation>(m_ptr); }
};

struct IUserDataAccountProviderResolveErrorsOperation :
    Windows::IInspectable,
    impl::consume<IUserDataAccountProviderResolveErrorsOperation>,
    impl::require<IUserDataAccountProviderResolveErrorsOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderResolveErrorsOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserDataAccountProviderResolveErrorsOperation>(m_ptr); }
};

struct IUserDataAccountProviderSettingsOperation :
    Windows::IInspectable,
    impl::consume<IUserDataAccountProviderSettingsOperation>,
    impl::require<IUserDataAccountProviderSettingsOperation, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    IUserDataAccountProviderSettingsOperation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUserDataAccountProviderSettingsOperation>(m_ptr); }
};

}

}
