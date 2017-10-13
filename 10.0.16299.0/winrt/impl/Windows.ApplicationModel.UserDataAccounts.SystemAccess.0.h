// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess {

enum class DeviceAccountAuthenticationType : int32_t
{
    Basic = 0,
    OAuth = 1,
    SingleSignOn = 2,
};

enum class DeviceAccountIconId : int32_t
{
    Exchange = 0,
    Msa = 1,
    Outlook = 2,
    Generic = 3,
};

enum class DeviceAccountMailAgeFilter : int32_t
{
    All = 0,
    Last1Day = 1,
    Last3Days = 2,
    Last7Days = 3,
    Last14Days = 4,
    Last30Days = 5,
    Last90Days = 6,
};

enum class DeviceAccountServerType : int32_t
{
    Exchange = 0,
    Pop = 1,
    Imap = 2,
};

enum class DeviceAccountSyncScheduleKind : int32_t
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
    hstring AccountName() const noexcept;
    void AccountName(param::hstring const& value) const noexcept;
    hstring DeviceAccountTypeId() const noexcept;
    void DeviceAccountTypeId(param::hstring const& value) const noexcept;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType ServerType() const noexcept;
    void ServerType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType const& value) const noexcept;
    hstring EmailAddress() const noexcept;
    void EmailAddress(param::hstring const& value) const noexcept;
    hstring Domain() const noexcept;
    void Domain(param::hstring const& value) const noexcept;
    bool EmailSyncEnabled() const noexcept;
    void EmailSyncEnabled(bool value) const noexcept;
    bool ContactsSyncEnabled() const noexcept;
    void ContactsSyncEnabled(bool value) const noexcept;
    bool CalendarSyncEnabled() const noexcept;
    void CalendarSyncEnabled(bool value) const noexcept;
    hstring IncomingServerAddress() const noexcept;
    void IncomingServerAddress(param::hstring const& value) const noexcept;
    int32_t IncomingServerPort() const noexcept;
    void IncomingServerPort(int32_t value) const noexcept;
    bool IncomingServerRequiresSsl() const noexcept;
    void IncomingServerRequiresSsl(bool value) const noexcept;
    hstring IncomingServerUsername() const noexcept;
    void IncomingServerUsername(param::hstring const& value) const noexcept;
    hstring OutgoingServerAddress() const noexcept;
    void OutgoingServerAddress(param::hstring const& value) const noexcept;
    int32_t OutgoingServerPort() const noexcept;
    void OutgoingServerPort(int32_t value) const noexcept;
    bool OutgoingServerRequiresSsl() const noexcept;
    void OutgoingServerRequiresSsl(bool value) const noexcept;
    hstring OutgoingServerUsername() const noexcept;
    void OutgoingServerUsername(param::hstring const& value) const noexcept;
};
template <> struct consume<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2
{
    Windows::Security::Credentials::PasswordCredential IncomingServerCredential() const noexcept;
    void IncomingServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const noexcept;
    Windows::Security::Credentials::PasswordCredential OutgoingServerCredential() const noexcept;
    void OutgoingServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const noexcept;
    hstring OAuthRefreshToken() const noexcept;
    void OAuthRefreshToken(param::hstring const& value) const noexcept;
    bool IsExternallyManaged() const noexcept;
    void IsExternallyManaged(bool value) const noexcept;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId AccountIconId() const noexcept;
    void AccountIconId(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId const& value) const noexcept;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType AuthenticationType() const noexcept;
    void AuthenticationType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType const& value) const noexcept;
    bool IsSsoAuthenticationSupported() const noexcept;
    hstring SsoAccountId() const noexcept;
    void SsoAccountId(param::hstring const& value) const noexcept;
    bool AlwaysDownloadFullMessage() const noexcept;
    void AlwaysDownloadFullMessage(bool value) const noexcept;
    bool DoesPolicyAllowMailSync() const noexcept;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind SyncScheduleKind() const noexcept;
    void SyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const noexcept;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter MailAgeFilter() const noexcept;
    void MailAgeFilter(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter const& value) const noexcept;
    bool IsClientAuthenticationCertificateRequired() const noexcept;
    void IsClientAuthenticationCertificateRequired(bool value) const noexcept;
    bool AutoSelectAuthenticationCertificate() const noexcept;
    void AutoSelectAuthenticationCertificate(bool value) const noexcept;
    hstring AuthenticationCertificateId() const noexcept;
    void AuthenticationCertificateId(param::hstring const& value) const noexcept;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind CardDavSyncScheduleKind() const noexcept;
    void CardDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const noexcept;
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind CalDavSyncScheduleKind() const noexcept;
    void CalDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const noexcept;
    Windows::Foundation::Uri CardDavServerUrl() const noexcept;
    void CardDavServerUrl(Windows::Foundation::Uri const& value) const noexcept;
    bool CardDavRequiresSsl() const noexcept;
    void CardDavRequiresSsl(bool value) const noexcept;
    Windows::Foundation::Uri CalDavServerUrl() const noexcept;
    void CalDavServerUrl(Windows::Foundation::Uri const& value) const noexcept;
    bool CalDavRequiresSsl() const noexcept;
    void CalDavRequiresSsl(bool value) const noexcept;
    bool WasModifiedByUser() const noexcept;
    void WasModifiedByUser(bool value) const noexcept;
    bool WasIncomingServerCertificateHashConfirmed() const noexcept;
    void WasIncomingServerCertificateHashConfirmed(bool value) const noexcept;
    hstring IncomingServerCertificateHash() const noexcept;
    void IncomingServerCertificateHash(param::hstring const& value) const noexcept;
    bool IsOutgoingServerAuthenticationRequired() const noexcept;
    void IsOutgoingServerAuthenticationRequired(bool value) const noexcept;
    bool IsOutgoingServerAuthenticationEnabled() const noexcept;
    void IsOutgoingServerAuthenticationEnabled(bool value) const noexcept;
    bool WasOutgoingServerCertificateHashConfirmed() const noexcept;
    void WasOutgoingServerCertificateHashConfirmed(bool value) const noexcept;
    hstring OutgoingServerCertificateHash() const noexcept;
    void OutgoingServerCertificateHash(param::hstring const& value) const noexcept;
    bool IsSyncScheduleManagedBySystem() const noexcept;
    void IsSyncScheduleManagedBySystem(bool value) const noexcept;
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
    virtual HRESULT __stdcall get_ServerType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType* value) = 0;
    virtual HRESULT __stdcall put_ServerType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType value) = 0;
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
    virtual HRESULT __stdcall get_AccountIconId(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId* value) = 0;
    virtual HRESULT __stdcall put_AccountIconId(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId value) = 0;
    virtual HRESULT __stdcall get_AuthenticationType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType* value) = 0;
    virtual HRESULT __stdcall put_AuthenticationType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType value) = 0;
    virtual HRESULT __stdcall get_IsSsoAuthenticationSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_SsoAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SsoAccountId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AlwaysDownloadFullMessage(bool* value) = 0;
    virtual HRESULT __stdcall put_AlwaysDownloadFullMessage(bool value) = 0;
    virtual HRESULT __stdcall get_DoesPolicyAllowMailSync(bool* value) = 0;
    virtual HRESULT __stdcall get_SyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind* value) = 0;
    virtual HRESULT __stdcall put_SyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) = 0;
    virtual HRESULT __stdcall get_MailAgeFilter(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter* value) = 0;
    virtual HRESULT __stdcall put_MailAgeFilter(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter value) = 0;
    virtual HRESULT __stdcall get_IsClientAuthenticationCertificateRequired(bool* value) = 0;
    virtual HRESULT __stdcall put_IsClientAuthenticationCertificateRequired(bool value) = 0;
    virtual HRESULT __stdcall get_AutoSelectAuthenticationCertificate(bool* value) = 0;
    virtual HRESULT __stdcall put_AutoSelectAuthenticationCertificate(bool value) = 0;
    virtual HRESULT __stdcall get_AuthenticationCertificateId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AuthenticationCertificateId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_CardDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind* value) = 0;
    virtual HRESULT __stdcall put_CardDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) = 0;
    virtual HRESULT __stdcall get_CalDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind* value) = 0;
    virtual HRESULT __stdcall put_CalDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) = 0;
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
