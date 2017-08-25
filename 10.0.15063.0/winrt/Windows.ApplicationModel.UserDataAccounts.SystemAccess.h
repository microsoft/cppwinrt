// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.SystemAccess.2.h"
#include "winrt/Windows.ApplicationModel.UserDataAccounts.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::AccountName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_AccountName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::AccountName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_AccountName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::DeviceAccountTypeId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_DeviceAccountTypeId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::DeviceAccountTypeId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_DeviceAccountTypeId(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::ServerType() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_ServerType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::ServerType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_ServerType(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::EmailAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_EmailAddress(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::EmailAddress(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_EmailAddress(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::Domain() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_Domain(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::Domain(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_Domain(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::EmailSyncEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_EmailSyncEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::EmailSyncEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_EmailSyncEnabled(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::ContactsSyncEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_ContactsSyncEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::ContactsSyncEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_ContactsSyncEnabled(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::CalendarSyncEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_CalendarSyncEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::CalendarSyncEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_CalendarSyncEnabled(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::IncomingServerAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_IncomingServerAddress(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::IncomingServerAddress(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_IncomingServerAddress(get_abi(value)));
}

template <typename D> int32_t consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::IncomingServerPort() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_IncomingServerPort(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::IncomingServerPort(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_IncomingServerPort(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::IncomingServerRequiresSsl() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_IncomingServerRequiresSsl(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::IncomingServerRequiresSsl(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_IncomingServerRequiresSsl(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::IncomingServerUsername() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_IncomingServerUsername(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::IncomingServerUsername(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_IncomingServerUsername(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::OutgoingServerAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_OutgoingServerAddress(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::OutgoingServerAddress(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_OutgoingServerAddress(get_abi(value)));
}

template <typename D> int32_t consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::OutgoingServerPort() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_OutgoingServerPort(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::OutgoingServerPort(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_OutgoingServerPort(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::OutgoingServerRequiresSsl() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_OutgoingServerRequiresSsl(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::OutgoingServerRequiresSsl(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_OutgoingServerRequiresSsl(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::OutgoingServerUsername() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->get_OutgoingServerUsername(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration<D>::OutgoingServerUsername(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration)->put_OutgoingServerUsername(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IncomingServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_IncomingServerCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IncomingServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_IncomingServerCredential(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::OutgoingServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_OutgoingServerCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::OutgoingServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_OutgoingServerCredential(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::OAuthRefreshToken() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_OAuthRefreshToken(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::OAuthRefreshToken(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_OAuthRefreshToken(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsExternallyManaged() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_IsExternallyManaged(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsExternallyManaged(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_IsExternallyManaged(value));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AccountIconId() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_AccountIconId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AccountIconId(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_AccountIconId(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AuthenticationType() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_AuthenticationType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AuthenticationType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_AuthenticationType(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsSsoAuthenticationSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_IsSsoAuthenticationSupported(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::SsoAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_SsoAccountId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::SsoAccountId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_SsoAccountId(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AlwaysDownloadFullMessage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_AlwaysDownloadFullMessage(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AlwaysDownloadFullMessage(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_AlwaysDownloadFullMessage(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::DoesPolicyAllowMailSync() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_DoesPolicyAllowMailSync(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::SyncScheduleKind() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_SyncScheduleKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::SyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_SyncScheduleKind(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::MailAgeFilter() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_MailAgeFilter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::MailAgeFilter(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_MailAgeFilter(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsClientAuthenticationCertificateRequired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_IsClientAuthenticationCertificateRequired(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsClientAuthenticationCertificateRequired(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_IsClientAuthenticationCertificateRequired(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AutoSelectAuthenticationCertificate() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_AutoSelectAuthenticationCertificate(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AutoSelectAuthenticationCertificate(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_AutoSelectAuthenticationCertificate(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AuthenticationCertificateId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_AuthenticationCertificateId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::AuthenticationCertificateId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_AuthenticationCertificateId(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CardDavSyncScheduleKind() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_CardDavSyncScheduleKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CardDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_CardDavSyncScheduleKind(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CalDavSyncScheduleKind() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_CalDavSyncScheduleKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CalDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_CalDavSyncScheduleKind(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CardDavServerUrl() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_CardDavServerUrl(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CardDavServerUrl(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_CardDavServerUrl(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CardDavRequiresSsl() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_CardDavRequiresSsl(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CardDavRequiresSsl(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_CardDavRequiresSsl(value));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CalDavServerUrl() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_CalDavServerUrl(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CalDavServerUrl(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_CalDavServerUrl(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CalDavRequiresSsl() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_CalDavRequiresSsl(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::CalDavRequiresSsl(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_CalDavRequiresSsl(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::WasModifiedByUser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_WasModifiedByUser(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::WasModifiedByUser(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_WasModifiedByUser(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::WasIncomingServerCertificateHashConfirmed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_WasIncomingServerCertificateHashConfirmed(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::WasIncomingServerCertificateHashConfirmed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_WasIncomingServerCertificateHashConfirmed(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IncomingServerCertificateHash() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_IncomingServerCertificateHash(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IncomingServerCertificateHash(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_IncomingServerCertificateHash(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsOutgoingServerAuthenticationRequired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_IsOutgoingServerAuthenticationRequired(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsOutgoingServerAuthenticationRequired(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_IsOutgoingServerAuthenticationRequired(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsOutgoingServerAuthenticationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_IsOutgoingServerAuthenticationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsOutgoingServerAuthenticationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_IsOutgoingServerAuthenticationEnabled(value));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::WasOutgoingServerCertificateHashConfirmed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_WasOutgoingServerCertificateHashConfirmed(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::WasOutgoingServerCertificateHashConfirmed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_WasOutgoingServerCertificateHashConfirmed(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::OutgoingServerCertificateHash() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_OutgoingServerCertificateHash(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::OutgoingServerCertificateHash(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_OutgoingServerCertificateHash(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsSyncScheduleManagedBySystem() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->get_IsSyncScheduleManagedBySystem(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IDeviceAccountConfiguration2<D>::IsSyncScheduleManagedBySystem(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2)->put_IsSyncScheduleManagedBySystem(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics<D>::AddAndShowDeviceAccountsAsync(param::async_iterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> const& accounts) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics)->AddAndShowDeviceAccountsAsync(get_abi(accounts), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2<D>::SuppressLocalAccountWithAccountAsync(param::hstring const& userDataAccountId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2)->SuppressLocalAccountWithAccountAsync(get_abi(userDataAccountId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2<D>::CreateDeviceAccountAsync(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration const& account) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2)->CreateDeviceAccountAsync(get_abi(account), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2<D>::DeleteDeviceAccountAsync(param::hstring const& accountId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2)->DeleteDeviceAccountAsync(get_abi(accountId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> consume_Windows_ApplicationModel_UserDataAccounts_SystemAccess_IUserDataAccountSystemAccessManagerStatics2<D>::GetDeviceAccountConfigurationAsync(param::hstring const& accountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2)->GetDeviceAccountConfigurationAsync(get_abi(accountId), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>
{
    HRESULT __stdcall get_AccountName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccountName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccountName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAccountTypeId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceAccountTypeId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeviceAccountTypeId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeviceAccountTypeId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerType(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServerType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServerType(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerType(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EmailAddress(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EmailAddress(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Domain(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Domain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Domain(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Domain(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailSyncEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EmailSyncEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EmailSyncEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EmailSyncEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactsSyncEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactsSyncEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContactsSyncEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContactsSyncEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CalendarSyncEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CalendarSyncEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CalendarSyncEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CalendarSyncEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncomingServerAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerAddress(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncomingServerAddress(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerPort(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncomingServerPort());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerPort(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncomingServerPort(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerRequiresSsl(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncomingServerRequiresSsl());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerRequiresSsl(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncomingServerRequiresSsl(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerUsername(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncomingServerUsername());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerUsername(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncomingServerUsername(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutgoingServerAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerAddress(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutgoingServerAddress(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerPort(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutgoingServerPort());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerPort(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutgoingServerPort(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerRequiresSsl(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutgoingServerRequiresSsl());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerRequiresSsl(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutgoingServerRequiresSsl(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerUsername(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutgoingServerUsername());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerUsername(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutgoingServerUsername(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
{
    HRESULT __stdcall get_IncomingServerCredential(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncomingServerCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerCredential(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncomingServerCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerCredential(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutgoingServerCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerCredential(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutgoingServerCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthRefreshToken(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OAuthRefreshToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OAuthRefreshToken(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OAuthRefreshToken(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsExternallyManaged(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsExternallyManaged());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsExternallyManaged(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsExternallyManaged(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccountIconId(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountIconId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccountIconId(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccountIconId(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationType(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationType(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationType(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSsoAuthenticationSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSsoAuthenticationSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SsoAccountId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SsoAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SsoAccountId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SsoAccountId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysDownloadFullMessage(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlwaysDownloadFullMessage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysDownloadFullMessage(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysDownloadFullMessage(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DoesPolicyAllowMailSync(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DoesPolicyAllowMailSync());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SyncScheduleKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncScheduleKind(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MailAgeFilter(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MailAgeFilter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MailAgeFilter(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MailAgeFilter(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsClientAuthenticationCertificateRequired(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsClientAuthenticationCertificateRequired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsClientAuthenticationCertificateRequired(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsClientAuthenticationCertificateRequired(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoSelectAuthenticationCertificate(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoSelectAuthenticationCertificate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutoSelectAuthenticationCertificate(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoSelectAuthenticationCertificate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationCertificateId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AuthenticationCertificateId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationCertificateId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationCertificateId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CardDavSyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CardDavSyncScheduleKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CardDavSyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CardDavSyncScheduleKind(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CalDavSyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CalDavSyncScheduleKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CalDavSyncScheduleKind(abi_t<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CalDavSyncScheduleKind(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CardDavServerUrl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CardDavServerUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CardDavServerUrl(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CardDavServerUrl(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CardDavRequiresSsl(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CardDavRequiresSsl());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CardDavRequiresSsl(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CardDavRequiresSsl(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CalDavServerUrl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CalDavServerUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CalDavServerUrl(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CalDavServerUrl(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CalDavRequiresSsl(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CalDavRequiresSsl());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CalDavRequiresSsl(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CalDavRequiresSsl(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WasModifiedByUser(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WasModifiedByUser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WasModifiedByUser(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WasModifiedByUser(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WasIncomingServerCertificateHashConfirmed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WasIncomingServerCertificateHashConfirmed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WasIncomingServerCertificateHashConfirmed(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WasIncomingServerCertificateHashConfirmed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerCertificateHash(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IncomingServerCertificateHash());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerCertificateHash(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncomingServerCertificateHash(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOutgoingServerAuthenticationRequired(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOutgoingServerAuthenticationRequired());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsOutgoingServerAuthenticationRequired(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOutgoingServerAuthenticationRequired(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOutgoingServerAuthenticationEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsOutgoingServerAuthenticationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsOutgoingServerAuthenticationEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOutgoingServerAuthenticationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WasOutgoingServerCertificateHashConfirmed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WasOutgoingServerCertificateHashConfirmed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WasOutgoingServerCertificateHashConfirmed(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WasOutgoingServerCertificateHashConfirmed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerCertificateHash(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutgoingServerCertificateHash());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerCertificateHash(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutgoingServerCertificateHash(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSyncScheduleManagedBySystem(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSyncScheduleManagedBySystem());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSyncScheduleManagedBySystem(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSyncScheduleManagedBySystem(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>
{
    HRESULT __stdcall AddAndShowDeviceAccountsAsync(::IUnknown* accounts, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AddAndShowDeviceAccountsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> const*>(&accounts)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>
{
    HRESULT __stdcall SuppressLocalAccountWithAccountAsync(HSTRING userDataAccountId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SuppressLocalAccountWithAccountAsync(*reinterpret_cast<hstring const*>(&userDataAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceAccountAsync(::IUnknown* account, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateDeviceAccountAsync(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration const*>(&account)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteDeviceAccountAsync(HSTRING accountId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DeleteDeviceAccountAsync(*reinterpret_cast<hstring const*>(&accountId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceAccountConfigurationAsync(HSTRING accountId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceAccountConfigurationAsync(*reinterpret_cast<hstring const*>(&accountId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess {

inline DeviceAccountConfiguration::DeviceAccountConfiguration() :
    DeviceAccountConfiguration(activate_instance<DeviceAccountConfiguration>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> UserDataAccountSystemAccessManager::AddAndShowDeviceAccountsAsync(param::async_iterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> const& accounts)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>().AddAndShowDeviceAccountsAsync(accounts);
}

inline Windows::Foundation::IAsyncAction UserDataAccountSystemAccessManager::SuppressLocalAccountWithAccountAsync(param::hstring const& userDataAccountId)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>().SuppressLocalAccountWithAccountAsync(userDataAccountId);
}

inline Windows::Foundation::IAsyncOperation<hstring> UserDataAccountSystemAccessManager::CreateDeviceAccountAsync(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration const& account)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>().CreateDeviceAccountAsync(account);
}

inline Windows::Foundation::IAsyncAction UserDataAccountSystemAccessManager::DeleteDeviceAccountAsync(param::hstring const& accountId)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>().DeleteDeviceAccountAsync(accountId);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> UserDataAccountSystemAccessManager::GetDeviceAccountConfigurationAsync(param::hstring const& accountId)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>().GetDeviceAccountConfigurationAsync(accountId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::UserDataAccountSystemAccessManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::UserDataAccountSystemAccessManager> {};

}

WINRT_WARNING_POP
