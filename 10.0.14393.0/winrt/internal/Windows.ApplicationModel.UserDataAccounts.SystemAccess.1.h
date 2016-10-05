// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.UserDataAccounts.SystemAccess.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess {

struct __declspec(uuid("ad0123a3-fbdc-4d1b-be43-5a27ea4a1b63")) __declspec(novtable) IDeviceAccountConfiguration : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AccountName(hstring * value) = 0;
    virtual HRESULT __stdcall put_AccountName(hstring value) = 0;
    virtual HRESULT __stdcall get_DeviceAccountTypeId(hstring * value) = 0;
    virtual HRESULT __stdcall put_DeviceAccountTypeId(hstring value) = 0;
    virtual HRESULT __stdcall get_ServerType(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType * value) = 0;
    virtual HRESULT __stdcall put_ServerType(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType value) = 0;
    virtual HRESULT __stdcall get_EmailAddress(hstring * value) = 0;
    virtual HRESULT __stdcall put_EmailAddress(hstring value) = 0;
    virtual HRESULT __stdcall get_Domain(hstring * value) = 0;
    virtual HRESULT __stdcall put_Domain(hstring value) = 0;
    virtual HRESULT __stdcall get_EmailSyncEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_EmailSyncEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ContactsSyncEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_ContactsSyncEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_CalendarSyncEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_CalendarSyncEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_IncomingServerAddress(hstring * value) = 0;
    virtual HRESULT __stdcall put_IncomingServerAddress(hstring value) = 0;
    virtual HRESULT __stdcall get_IncomingServerPort(int32_t * value) = 0;
    virtual HRESULT __stdcall put_IncomingServerPort(int32_t value) = 0;
    virtual HRESULT __stdcall get_IncomingServerRequiresSsl(bool * value) = 0;
    virtual HRESULT __stdcall put_IncomingServerRequiresSsl(bool value) = 0;
    virtual HRESULT __stdcall get_IncomingServerUsername(hstring * value) = 0;
    virtual HRESULT __stdcall put_IncomingServerUsername(hstring value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerAddress(hstring * value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerAddress(hstring value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerPort(int32_t * value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerPort(int32_t value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerRequiresSsl(bool * value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerRequiresSsl(bool value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerUsername(hstring * value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerUsername(hstring value) = 0;
};

struct __declspec(uuid("f2b2e5a6-728d-4a4a-8945-2bf8580136de")) __declspec(novtable) IDeviceAccountConfiguration2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IncomingServerCredential(Windows::Security::Credentials::IPasswordCredential ** value) = 0;
    virtual HRESULT __stdcall put_IncomingServerCredential(Windows::Security::Credentials::IPasswordCredential * value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerCredential(Windows::Security::Credentials::IPasswordCredential ** value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerCredential(Windows::Security::Credentials::IPasswordCredential * value) = 0;
    virtual HRESULT __stdcall get_OAuthRefreshToken(hstring * value) = 0;
    virtual HRESULT __stdcall put_OAuthRefreshToken(hstring value) = 0;
    virtual HRESULT __stdcall get_IsExternallyManaged(bool * value) = 0;
    virtual HRESULT __stdcall put_IsExternallyManaged(bool value) = 0;
    virtual HRESULT __stdcall get_AccountIconId(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId * value) = 0;
    virtual HRESULT __stdcall put_AccountIconId(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId value) = 0;
    virtual HRESULT __stdcall get_AuthenticationType(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType * value) = 0;
    virtual HRESULT __stdcall put_AuthenticationType(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType value) = 0;
    virtual HRESULT __stdcall get_IsSsoAuthenticationSupported(bool * value) = 0;
    virtual HRESULT __stdcall get_SsoAccountId(hstring * value) = 0;
    virtual HRESULT __stdcall put_SsoAccountId(hstring value) = 0;
    virtual HRESULT __stdcall get_AlwaysDownloadFullMessage(bool * value) = 0;
    virtual HRESULT __stdcall put_AlwaysDownloadFullMessage(bool value) = 0;
    virtual HRESULT __stdcall get_DoesPolicyAllowMailSync(bool * value) = 0;
    virtual HRESULT __stdcall get_SyncScheduleKind(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind * value) = 0;
    virtual HRESULT __stdcall put_SyncScheduleKind(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) = 0;
    virtual HRESULT __stdcall get_MailAgeFilter(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter * value) = 0;
    virtual HRESULT __stdcall put_MailAgeFilter(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter value) = 0;
    virtual HRESULT __stdcall get_IsClientAuthenticationCertificateRequired(bool * value) = 0;
    virtual HRESULT __stdcall put_IsClientAuthenticationCertificateRequired(bool value) = 0;
    virtual HRESULT __stdcall get_AutoSelectAuthenticationCertificate(bool * value) = 0;
    virtual HRESULT __stdcall put_AutoSelectAuthenticationCertificate(bool value) = 0;
    virtual HRESULT __stdcall get_AuthenticationCertificateId(hstring * value) = 0;
    virtual HRESULT __stdcall put_AuthenticationCertificateId(hstring value) = 0;
    virtual HRESULT __stdcall get_CardDavSyncScheduleKind(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind * value) = 0;
    virtual HRESULT __stdcall put_CardDavSyncScheduleKind(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) = 0;
    virtual HRESULT __stdcall get_CalDavSyncScheduleKind(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind * value) = 0;
    virtual HRESULT __stdcall put_CalDavSyncScheduleKind(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) = 0;
    virtual HRESULT __stdcall get_CardDavServerUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_CardDavServerUrl(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_CardDavRequiresSsl(bool * value) = 0;
    virtual HRESULT __stdcall put_CardDavRequiresSsl(bool value) = 0;
    virtual HRESULT __stdcall get_CalDavServerUrl(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_CalDavServerUrl(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_CalDavRequiresSsl(bool * value) = 0;
    virtual HRESULT __stdcall put_CalDavRequiresSsl(bool value) = 0;
    virtual HRESULT __stdcall get_WasModifiedByUser(bool * value) = 0;
    virtual HRESULT __stdcall put_WasModifiedByUser(bool value) = 0;
    virtual HRESULT __stdcall get_WasIncomingServerCertificateHashConfirmed(bool * value) = 0;
    virtual HRESULT __stdcall put_WasIncomingServerCertificateHashConfirmed(bool value) = 0;
    virtual HRESULT __stdcall get_IncomingServerCertificateHash(hstring * value) = 0;
    virtual HRESULT __stdcall put_IncomingServerCertificateHash(hstring value) = 0;
    virtual HRESULT __stdcall get_IsOutgoingServerAuthenticationRequired(bool * value) = 0;
    virtual HRESULT __stdcall put_IsOutgoingServerAuthenticationRequired(bool value) = 0;
    virtual HRESULT __stdcall get_IsOutgoingServerAuthenticationEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsOutgoingServerAuthenticationEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_WasOutgoingServerCertificateHashConfirmed(bool * value) = 0;
    virtual HRESULT __stdcall put_WasOutgoingServerCertificateHashConfirmed(bool value) = 0;
    virtual HRESULT __stdcall get_OutgoingServerCertificateHash(hstring * value) = 0;
    virtual HRESULT __stdcall put_OutgoingServerCertificateHash(hstring value) = 0;
    virtual HRESULT __stdcall get_IsSyncScheduleManagedBySystem(bool * value) = 0;
    virtual HRESULT __stdcall put_IsSyncScheduleManagedBySystem(bool value) = 0;
};

struct __declspec(uuid("9d6b11b9-cbe5-45f5-822b-c267b81dbdb6")) __declspec(novtable) IUserDataAccountSystemAccessManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_AddAndShowDeviceAccountsAsync(Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> * accounts, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> ** result) = 0;
};

struct __declspec(uuid("943f854d-4b4e-439f-83d3-979b27c05ac7")) __declspec(novtable) IUserDataAccountSystemAccessManagerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SuppressLocalAccountWithAccountAsync(hstring userDataAccountId, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_CreateDeviceAccountAsync(Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration * account, Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
    virtual HRESULT __stdcall abi_DeleteDeviceAccountAsync(hstring accountId, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_GetDeviceAccountConfigurationAsync(hstring accountId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> { using default_interface = Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration; };

}

namespace Windows::ApplicationModel::UserDataAccounts::SystemAccess {

template <typename T> struct impl_IDeviceAccountConfiguration;
template <typename T> struct impl_IDeviceAccountConfiguration2;
template <typename T> struct impl_IUserDataAccountSystemAccessManagerStatics;
template <typename T> struct impl_IUserDataAccountSystemAccessManagerStatics2;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>
{
    using abi = ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration;
    template <typename D> using consume = Windows::ApplicationModel::UserDataAccounts::SystemAccess::impl_IDeviceAccountConfiguration<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
{
    using abi = ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2;
    template <typename D> using consume = Windows::ApplicationModel::UserDataAccounts::SystemAccess::impl_IDeviceAccountConfiguration2<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics>
{
    using abi = ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics;
    template <typename D> using consume = Windows::ApplicationModel::UserDataAccounts::SystemAccess::impl_IUserDataAccountSystemAccessManagerStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2>
{
    using abi = ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IUserDataAccountSystemAccessManagerStatics2;
    template <typename D> using consume = Windows::ApplicationModel::UserDataAccounts::SystemAccess::impl_IUserDataAccountSystemAccessManagerStatics2<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration>
{
    using abi = ABI::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.DeviceAccountConfiguration"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataAccounts::SystemAccess::UserDataAccountSystemAccessManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataAccounts.SystemAccess.UserDataAccountSystemAccessManager"; }
};

}

}
