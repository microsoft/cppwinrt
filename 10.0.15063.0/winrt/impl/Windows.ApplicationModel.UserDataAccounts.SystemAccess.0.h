// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess {

enum class DeviceAccountAuthenticationType
{
    Basic = 0,
    OAuth = 1,
    SingleSignOn = 2,
};

enum class DeviceAccountIconId
{
    Exchange = 0,
    Msa = 1,
    Outlook = 2,
    Generic = 3,
};

enum class DeviceAccountMailAgeFilter
{
    All = 0,
    Last1Day = 1,
    Last3Days = 2,
    Last7Days = 3,
    Last14Days = 4,
    Last30Days = 5,
    Last90Days = 6,
};

enum class DeviceAccountServerType
{
    Exchange = 0,
    Pop = 1,
    Imap = 2,
};

enum class DeviceAccountSyncScheduleKind
{
    Manual = 0,
    Every15Minutes = 1,
    Every30Minutes = 2,
    Every60Minutes = 3,
    Every2Hours = 4,
    Daily = 5,
    AsItemsArrive = 6,
};

struct IDeviceAccountConfiguration;
struct IDeviceAccountConfiguration2;
struct IUserDataAccountSystemAccessManagerStatics;
struct IUserDataAccountSystemAccessManagerStatics2;
struct DeviceAccountConfiguration;
struct UserDataAccountSystemAccessManager;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::UserDataAccountSystemAccessManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IDeviceAccountConfiguration2" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.IUserDataAccountSystemAccessManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::UserDataAccountSystemAccessManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountAuthenticationType" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountIconId" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountMailAgeFilter" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountServerType" }; };
template <> struct name<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountSyncScheduleKind" }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>{ static constexpr GUID value{ 0xAD0123A3,0xFBDC,0x4D1B,{ 0xBE,0x43,0x5A,0x27,0xEA,0x4A,0x1B,0x63 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>{ static constexpr GUID value{ 0xF2B2E5A6,0x728D,0x4A4A,{ 0x89,0x45,0x2B,0xF8,0x58,0x01,0x36,0xDE } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>{ static constexpr GUID value{ 0x9D6B11B9,0xCBE5,0x45F5,{ 0x82,0x2B,0xC2,0x67,0xB8,0x1D,0xBD,0xB6 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>{ static constexpr GUID value{ 0x943F854D,0x4B4E,0x439F,{ 0x83,0xD3,0x97,0x9B,0x27,0xC0,0x5A,0xC7 } }; };
template <> struct default_interface<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration>{ using type = Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration
{
    hstring AccountName() const;
    void AccountName(param::hstring const& value) const;
    hstring DeviceAccountTypeId() const;
    void DeviceAccountTypeId(param::hstring const& value) const;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType ServerType() const;
    void ServerType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType const& value) const;
    hstring EmailAddress() const;
    void EmailAddress(param::hstring const& value) const;
    hstring Domain() const;
    void Domain(param::hstring const& value) const;
    bool EmailSyncEnabled() const;
    void EmailSyncEnabled(bool value) const;
    bool ContactsSyncEnabled() const;
    void ContactsSyncEnabled(bool value) const;
    bool CalendarSyncEnabled() const;
    void CalendarSyncEnabled(bool value) const;
    hstring IncomingServerAddress() const;
    void IncomingServerAddress(param::hstring const& value) const;
    int32_t IncomingServerPort() const;
    void IncomingServerPort(int32_t value) const;
    bool IncomingServerRequiresSsl() const;
    void IncomingServerRequiresSsl(bool value) const;
    hstring IncomingServerUsername() const;
    void IncomingServerUsername(param::hstring const& value) const;
    hstring OutgoingServerAddress() const;
    void OutgoingServerAddress(param::hstring const& value) const;
    int32_t OutgoingServerPort() const;
    void OutgoingServerPort(int32_t value) const;
    bool OutgoingServerRequiresSsl() const;
    void OutgoingServerRequiresSsl(bool value) const;
    hstring OutgoingServerUsername() const;
    void OutgoingServerUsername(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2
{
    Windows::Security::Credentials::PasswordCredential IncomingServerCredential() const;
    void IncomingServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
    Windows::Security::Credentials::PasswordCredential OutgoingServerCredential() const;
    void OutgoingServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
    hstring OAuthRefreshToken() const;
    void OAuthRefreshToken(param::hstring const& value) const;
    bool IsExternallyManaged() const;
    void IsExternallyManaged(bool value) const;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId AccountIconId() const;
    void AccountIconId(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId const& value) const;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType AuthenticationType() const;
    void AuthenticationType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType const& value) const;
    bool IsSsoAuthenticationSupported() const;
    hstring SsoAccountId() const;
    void SsoAccountId(param::hstring const& value) const;
    bool AlwaysDownloadFullMessage() const;
    void AlwaysDownloadFullMessage(bool value) const;
    bool DoesPolicyAllowMailSync() const;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind SyncScheduleKind() const;
    void SyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter MailAgeFilter() const;
    void MailAgeFilter(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter const& value) const;
    bool IsClientAuthenticationCertificateRequired() const;
    void IsClientAuthenticationCertificateRequired(bool value) const;
    bool AutoSelectAuthenticationCertificate() const;
    void AutoSelectAuthenticationCertificate(bool value) const;
    hstring AuthenticationCertificateId() const;
    void AuthenticationCertificateId(param::hstring const& value) const;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind CardDavSyncScheduleKind() const;
    void CardDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind CalDavSyncScheduleKind() const;
    void CalDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const;
    Windows::Foundation::Uri CardDavServerUrl() const;
    void CardDavServerUrl(Windows::Foundation::Uri const& value) const;
    bool CardDavRequiresSsl() const;
    void CardDavRequiresSsl(bool value) const;
    Windows::Foundation::Uri CalDavServerUrl() const;
    void CalDavServerUrl(Windows::Foundation::Uri const& value) const;
    bool CalDavRequiresSsl() const;
    void CalDavRequiresSsl(bool value) const;
    bool WasModifiedByUser() const;
    void WasModifiedByUser(bool value) const;
    bool WasIncomingServerCertificateHashConfirmed() const;
    void WasIncomingServerCertificateHashConfirmed(bool value) const;
    hstring IncomingServerCertificateHash() const;
    void IncomingServerCertificateHash(param::hstring const& value) const;
    bool IsOutgoingServerAuthenticationRequired() const;
    void IsOutgoingServerAuthenticationRequired(bool value) const;
    bool IsOutgoingServerAuthenticationEnabled() const;
    void IsOutgoingServerAuthenticationEnabled(bool value) const;
    bool WasOutgoingServerCertificateHashConfirmed() const;
    void WasOutgoingServerCertificateHashConfirmed(bool value) const;
    hstring OutgoingServerCertificateHash() const;
    void OutgoingServerCertificateHash(param::hstring const& value) const;
    bool IsSyncScheduleManagedBySystem() const;
    void IsSyncScheduleManagedBySystem(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> AddAndShowDeviceAccountsAsync(param::async_iterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> const& accounts) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2
{
    Windows::Foundation::IAsyncAction SuppressLocalAccountWithAccountAsync(param::hstring const& userDataAccountId) const;
    Windows::Foundation::IAsyncOperation<hstring> CreateDeviceAccountAsync(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration const& account) const;
    Windows::Foundation::IAsyncAction DeleteDeviceAccountAsync(param::hstring const& accountId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> GetDeviceAccountConfigurationAsync(param::hstring const& accountId) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2<D>; };

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AccountName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AccountName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DeviceAccountTypeId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DeviceAccountTypeId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ServerType(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType>* value) = 0;
    virtual HRESULT __stdcall put_ServerType(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType> value) = 0;
    virtual HRESULT __stdcall get_EmailAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_EmailAddress(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Domain(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Domain(HSTRING value) = 0;
    virtual HRESULT __stdcall get_EmailSyncEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_EmailSyncEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ContactsSyncEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_ContactsSyncEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_CalendarSyncEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_CalendarSyncEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IncomingServerAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_IncomingServerAddress(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IncomingServerPort(int32_t* value) = 0;
    virtual HRESULT __stdcall put_IncomingServerPort(int32_t value) = 0;
    virtual HRESULT __stdcall get_IncomingServerRequiresSsl(bool* value) = 0;
    virtual HRESULT __stdcall put_IncomingServerRequiresSsl(bool value) = 0;
    virtual HRESULT __stdcall get_IncomingServerUsername(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_IncomingServerUsername(HSTRING value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerAddress(HSTRING value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerPort(int32_t* value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerPort(int32_t value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerRequiresSsl(bool* value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerRequiresSsl(bool value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerUsername(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerUsername(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IncomingServerCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_IncomingServerCredential(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerCredential(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OAuthRefreshToken(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_OAuthRefreshToken(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsExternallyManaged(bool* value) = 0;
    virtual HRESULT __stdcall put_IsExternallyManaged(bool value) = 0;
    virtual HRESULT __stdcall get_AccountIconId(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId>* value) = 0;
    virtual HRESULT __stdcall put_AccountIconId(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId> value) = 0;
    virtual HRESULT __stdcall get_AuthenticationType(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType>* value) = 0;
    virtual HRESULT __stdcall put_AuthenticationType(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType> value) = 0;
    virtual HRESULT __stdcall get_IsSsoAuthenticationSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_SsoAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SsoAccountId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AlwaysDownloadFullMessage(bool* value) = 0;
    virtual HRESULT __stdcall put_AlwaysDownloadFullMessage(bool value) = 0;
    virtual HRESULT __stdcall get_DoesPolicyAllowMailSync(bool* value) = 0;
    virtual HRESULT __stdcall get_SyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>* value) = 0;
    virtual HRESULT __stdcall put_SyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind> value) = 0;
    virtual HRESULT __stdcall get_MailAgeFilter(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter>* value) = 0;
    virtual HRESULT __stdcall put_MailAgeFilter(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter> value) = 0;
    virtual HRESULT __stdcall get_IsClientAuthenticationCertificateRequired(bool* value) = 0;
    virtual HRESULT __stdcall put_IsClientAuthenticationCertificateRequired(bool value) = 0;
    virtual HRESULT __stdcall get_AutoSelectAuthenticationCertificate(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoSelectAuthenticationCertificate(bool value) = 0;
    virtual HRESULT __stdcall get_AuthenticationCertificateId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AuthenticationCertificateId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_CardDavSyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>* value) = 0;
    virtual HRESULT __stdcall put_CardDavSyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind> value) = 0;
    virtual HRESULT __stdcall get_CalDavSyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>* value) = 0;
    virtual HRESULT __stdcall put_CalDavSyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind> value) = 0;
    virtual HRESULT __stdcall get_CardDavServerUrl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CardDavServerUrl(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CardDavRequiresSsl(bool* value) = 0;
    virtual HRESULT __stdcall put_CardDavRequiresSsl(bool value) = 0;
    virtual HRESULT __stdcall get_CalDavServerUrl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CalDavServerUrl(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_CalDavRequiresSsl(bool* value) = 0;
    virtual HRESULT __stdcall put_CalDavRequiresSsl(bool value) = 0;
    virtual HRESULT __stdcall get_WasModifiedByUser(bool* value) = 0;
    virtual HRESULT __stdcall put_WasModifiedByUser(bool value) = 0;
    virtual HRESULT __stdcall get_WasIncomingServerCertificateHashConfirmed(bool* value) = 0;
    virtual HRESULT __stdcall put_WasIncomingServerCertificateHashConfirmed(bool value) = 0;
    virtual HRESULT __stdcall get_IncomingServerCertificateHash(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_IncomingServerCertificateHash(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsOutgoingServerAuthenticationRequired(bool* value) = 0;
    virtual HRESULT __stdcall put_IsOutgoingServerAuthenticationRequired(bool value) = 0;
    virtual HRESULT __stdcall get_IsOutgoingServerAuthenticationEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsOutgoingServerAuthenticationEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_WasOutgoingServerCertificateHashConfirmed(bool* value) = 0;
    virtual HRESULT __stdcall put_WasOutgoingServerCertificateHashConfirmed(bool value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerCertificateHash(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerCertificateHash(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsSyncScheduleManagedBySystem(bool* value) = 0;
    virtual HRESULT __stdcall put_IsSyncScheduleManagedBySystem(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddAndShowDeviceAccountsAsync(::IUnknown* accounts, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SuppressLocalAccountWithAccountAsync(HSTRING userDataAccountId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateDeviceAccountAsync(::IUnknown* account, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall DeleteDeviceAccountAsync(HSTRING accountId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetDeviceAccountConfigurationAsync(HSTRING accountId, ::IUnknown** result) = 0;
};};

}
