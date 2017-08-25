// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments {

struct AppointmentCalendar;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts {

struct ContactAnnotationList;
struct ContactGroup;
struct ContactList;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email {

struct EmailMailbox;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks {

struct UserDataTaskList;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts {

enum class UserDataAccountContentKinds : unsigned
{
    Email = 0x1,
    Contact = 0x2,
    Appointment = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(UserDataAccountContentKinds)

enum class UserDataAccountOtherAppReadAccess
{
    SystemOnly = 0,
    Full = 1,
    None = 2,
};

enum class UserDataAccountStoreAccessType
{
    AllAccountsReadOnly = 0,
    AppAccountsReadWrite = 1,
};

struct IUserDataAccount;
struct IUserDataAccount2;
struct IUserDataAccount3;
struct IUserDataAccount4;
struct IUserDataAccountManagerForUser;
struct IUserDataAccountManagerStatics;
struct IUserDataAccountManagerStatics2;
struct IUserDataAccountStore;
struct IUserDataAccountStore2;
struct IUserDataAccountStore3;
struct IUserDataAccountStoreChangedEventArgs;
struct UserDataAccount;
struct UserDataAccountManager;
struct UserDataAccountManagerForUser;
struct UserDataAccountStore;
struct UserDataAccountStoreChangedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount2" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount3" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccount4" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore2" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStore3" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.IUserDataAccountStoreChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccount" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountManager" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStore" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStoreChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountContentKinds" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountOtherAppReadAccess" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.UserDataAccountStoreAccessType" }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>{ static constexpr GUID value{ 0xB9C4367E,0xB348,0x4910,{ 0xBE,0x94,0x4A,0xD4,0xBB,0xA6,0xDE,0xA7 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>{ static constexpr GUID value{ 0x078CD89F,0xDE82,0x404B,{ 0x81,0x95,0xC8,0xA3,0xAC,0x19,0x8F,0x60 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>{ static constexpr GUID value{ 0x01533845,0x6C43,0x4286,{ 0x9D,0x69,0x3E,0x17,0x09,0xA1,0xF2,0x66 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>{ static constexpr GUID value{ 0xC4315210,0xEAE5,0x4F0A,{ 0xA8,0xB2,0x1C,0xCA,0x11,0x5E,0x00,0x8F } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>{ static constexpr GUID value{ 0x56A6E8DB,0xDB8F,0x41AB,{ 0xA6,0x5F,0x8C,0x59,0x71,0xAA,0xC9,0x82 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>{ static constexpr GUID value{ 0x0D9B89EA,0x1928,0x4A20,{ 0x86,0xD5,0x3C,0x73,0x7F,0x7D,0xC3,0xB0 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>{ static constexpr GUID value{ 0x6A3DED88,0x316B,0x435E,{ 0xB5,0x34,0xF7,0xD4,0xB4,0xB7,0xDB,0xA6 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>{ static constexpr GUID value{ 0x2073B0AD,0x7D0A,0x4E76,{ 0xBF,0x45,0x23,0x68,0xF9,0x78,0xA5,0x9A } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>{ static constexpr GUID value{ 0xB1E0AEF7,0x9560,0x4631,{ 0x8A,0xF0,0x06,0x1D,0x30,0x16,0x14,0x69 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>{ static constexpr GUID value{ 0x8142C094,0xF3C9,0x478B,{ 0xB1,0x17,0x65,0x85,0xBE,0xBB,0x67,0x89 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>{ static constexpr GUID value{ 0x84E3E2E5,0x8820,0x4512,{ 0xB1,0xF6,0x2E,0x03,0x5B,0xE1,0x07,0x2C } }; };
template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>{ using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccount; };
template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser>{ using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser; };
template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>{ using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore; };
template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>{ using type = Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount
{
    hstring Id() const;
    hstring UserDisplayName() const;
    void UserDisplayName(param::hstring const& value) const;
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess OtherAppReadAccess() const;
    void OtherAppReadAccess(Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Icon() const;
    hstring DeviceAccountTypeId() const;
    hstring PackageFamilyName() const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> FindAppointmentCalendarsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> FindEmailMailboxesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> FindContactListsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> FindContactAnnotationListsAsync() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount2
{
    hstring EnterpriseId() const;
    bool IsProtectedUnderLock() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3
{
    Windows::Foundation::Collections::IVector<hstring> ExplictReadAccessPackageFamilyNames() const;
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4
{
    bool CanShowCreateContactGroup() const;
    void CanShowCreateContactGroup(bool value) const;
    Windows::Foundation::Collections::IPropertySet ProviderProperties() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> FindUserDataTaskListsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactGroup>> FindContactGroupsAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> TryShowCreateContactGroupAsync() const;
    void IsProtectedUnderLock(bool value) const;
    void Icon(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerForUser
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType) const;
    Windows::System::User User() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerForUser<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds const& contentKinds) const;
    Windows::Foundation::IAsyncAction ShowAccountSettingsAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncAction ShowAccountErrorResolverAsync(param::hstring const& id) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics2
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> FindAccountsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> GetAccountAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> CreateAccountAsync(param::hstring const& userDisplayName) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> CreateAccountAsync(param::hstring const& userDisplayName, param::hstring const& packageRelativeAppId) const;
    event_token StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> const& handler) const;
    using StoreChanged_revoker = event_revoker<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>;
    StoreChanged_revoker StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> const& handler) const;
    void StoreChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore3
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> CreateAccountAsync(param::hstring const& userDisplayName, param::hstring const& packageRelativeAppId, param::hstring const& enterpriseId) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStoreChangedEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStoreChangedEventArgs<D>; };

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UserDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_UserDisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_OtherAppReadAccess(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess>* value) = 0;
    virtual HRESULT __stdcall put_OtherAppReadAccess(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess> value) = 0;
    virtual HRESULT __stdcall get_Icon(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceAccountTypeId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindAppointmentCalendarsAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindEmailMailboxesAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindContactListsAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindContactAnnotationListsAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnterpriseId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsProtectedUnderLock(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExplictReadAccessPackageFamilyNames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanShowCreateContactGroup(bool* value) = 0;
    virtual HRESULT __stdcall put_CanShowCreateContactGroup(bool value) = 0;
    virtual HRESULT __stdcall get_ProviderProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindUserDataTaskListsAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindContactGroupsAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryShowCreateContactGroupAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall put_IsProtectedUnderLock(bool value) = 0;
    virtual HRESULT __stdcall put_Icon(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType> storeAccessType, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType> storeAccessType, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowAddAccountAsync(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds> contentKinds, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowAccountSettingsAsync(HSTRING id, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowAccountErrorResolverAsync(HSTRING id, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindAccountsAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetAccountAsync(HSTRING id, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateAccountAsync(HSTRING userDisplayName, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAccountWithPackageRelativeAppIdAsync(HSTRING userDisplayName, HSTRING packageRelativeAppId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_StoreChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StoreChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAccountWithPackageRelativeAppIdAndEnterpriseIdAsync(HSTRING userDisplayName, HSTRING packageRelativeAppId, HSTRING enterpriseId, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

}
