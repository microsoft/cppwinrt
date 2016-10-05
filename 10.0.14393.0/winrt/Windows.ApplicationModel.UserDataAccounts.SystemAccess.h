// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.UserDataAccounts.SystemAccess.3.h"
#include "Windows.ApplicationModel.UserDataAccounts.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration>
{
    HRESULT __stdcall get_AccountName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccountName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccountName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AccountName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAccountTypeId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceAccountTypeId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DeviceAccountTypeId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DeviceAccountTypeId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServerType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType value) noexcept override
    {
        try
        {
            this->shim().ServerType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EmailAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EmailAddress(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().EmailAddress(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Domain(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Domain());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Domain(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Domain(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EmailSyncEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EmailSyncEnabled());
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
            this->shim().EmailSyncEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactsSyncEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactsSyncEnabled());
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
            this->shim().ContactsSyncEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CalendarSyncEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CalendarSyncEnabled());
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
            this->shim().CalendarSyncEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IncomingServerAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerAddress(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().IncomingServerAddress(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerPort(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IncomingServerPort());
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
            this->shim().IncomingServerPort(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerRequiresSsl(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IncomingServerRequiresSsl());
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
            this->shim().IncomingServerRequiresSsl(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerUsername(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IncomingServerUsername());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerUsername(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().IncomingServerUsername(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerAddress(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutgoingServerAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerAddress(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().OutgoingServerAddress(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerPort(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutgoingServerPort());
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
            this->shim().OutgoingServerPort(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerRequiresSsl(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutgoingServerRequiresSsl());
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
            this->shim().OutgoingServerRequiresSsl(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerUsername(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutgoingServerUsername());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerUsername(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().OutgoingServerUsername(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_IncomingServerCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IncomingServerCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerCredential(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            this->shim().IncomingServerCredential(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerCredential(abi_arg_out<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutgoingServerCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerCredential(abi_arg_in<Windows::Security::Credentials::IPasswordCredential> value) noexcept override
    {
        try
        {
            this->shim().OutgoingServerCredential(*reinterpret_cast<const Windows::Security::Credentials::PasswordCredential *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthRefreshToken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OAuthRefreshToken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OAuthRefreshToken(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().OAuthRefreshToken(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsExternallyManaged(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsExternallyManaged());
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
            this->shim().IsExternallyManaged(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccountIconId(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccountIconId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccountIconId(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId value) noexcept override
    {
        try
        {
            this->shim().AccountIconId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType value) noexcept override
    {
        try
        {
            this->shim().AuthenticationType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSsoAuthenticationSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSsoAuthenticationSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SsoAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SsoAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SsoAccountId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SsoAccountId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysDownloadFullMessage(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlwaysDownloadFullMessage());
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
            this->shim().AlwaysDownloadFullMessage(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DoesPolicyAllowMailSync(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DoesPolicyAllowMailSync());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SyncScheduleKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) noexcept override
    {
        try
        {
            this->shim().SyncScheduleKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MailAgeFilter(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MailAgeFilter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MailAgeFilter(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter value) noexcept override
    {
        try
        {
            this->shim().MailAgeFilter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsClientAuthenticationCertificateRequired(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsClientAuthenticationCertificateRequired());
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
            this->shim().IsClientAuthenticationCertificateRequired(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoSelectAuthenticationCertificate(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoSelectAuthenticationCertificate());
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
            this->shim().AutoSelectAuthenticationCertificate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationCertificateId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AuthenticationCertificateId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationCertificateId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AuthenticationCertificateId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CardDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CardDavSyncScheduleKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CardDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) noexcept override
    {
        try
        {
            this->shim().CardDavSyncScheduleKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CalDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CalDavSyncScheduleKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CalDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) noexcept override
    {
        try
        {
            this->shim().CalDavSyncScheduleKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CardDavServerUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CardDavServerUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CardDavServerUrl(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().CardDavServerUrl(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CardDavRequiresSsl(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CardDavRequiresSsl());
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
            this->shim().CardDavRequiresSsl(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CalDavServerUrl(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CalDavServerUrl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CalDavServerUrl(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().CalDavServerUrl(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CalDavRequiresSsl(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CalDavRequiresSsl());
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
            this->shim().CalDavRequiresSsl(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WasModifiedByUser(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WasModifiedByUser());
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
            this->shim().WasModifiedByUser(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WasIncomingServerCertificateHashConfirmed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WasIncomingServerCertificateHashConfirmed());
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
            this->shim().WasIncomingServerCertificateHashConfirmed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IncomingServerCertificateHash(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IncomingServerCertificateHash());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IncomingServerCertificateHash(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().IncomingServerCertificateHash(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOutgoingServerAuthenticationRequired(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOutgoingServerAuthenticationRequired());
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
            this->shim().IsOutgoingServerAuthenticationRequired(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsOutgoingServerAuthenticationEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOutgoingServerAuthenticationEnabled());
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
            this->shim().IsOutgoingServerAuthenticationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WasOutgoingServerCertificateHashConfirmed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WasOutgoingServerCertificateHashConfirmed());
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
            this->shim().WasOutgoingServerCertificateHashConfirmed(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingServerCertificateHash(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutgoingServerCertificateHash());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingServerCertificateHash(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().OutgoingServerCertificateHash(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSyncScheduleManagedBySystem(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSyncScheduleManagedBySystem());
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
    HRESULT __stdcall abi_AddAndShowDeviceAccountsAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration>> accounts, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AddAndShowDeviceAccountsAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> *>(&accounts)));
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
    HRESULT __stdcall abi_SuppressLocalAccountWithAccountAsync(abi_arg_in<hstring> userDataAccountId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SuppressLocalAccountWithAccountAsync(*reinterpret_cast<const hstring *>(&userDataAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateDeviceAccountAsync(abi_arg_in<Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration> account, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateDeviceAccountAsync(*reinterpret_cast<const Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration *>(&account)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteDeviceAccountAsync(abi_arg_in<hstring> accountId, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DeleteDeviceAccountAsync(*reinterpret_cast<const hstring *>(&accountId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceAccountConfigurationAsync(abi_arg_in<hstring> accountId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeviceAccountConfigurationAsync(*reinterpret_cast<const hstring *>(&accountId)));
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

namespace Windows::ApplicationModel::UserDataAccounts::SystemAccess {

template <typename D> hstring impl_IDeviceAccountConfiguration<D>::AccountName() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_AccountName(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::AccountName(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_AccountName(get(value)));
}

template <typename D> hstring impl_IDeviceAccountConfiguration<D>::DeviceAccountTypeId() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_DeviceAccountTypeId(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::DeviceAccountTypeId(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_DeviceAccountTypeId(get(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType impl_IDeviceAccountConfiguration<D>::ServerType() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_ServerType(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::ServerType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountServerType value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_ServerType(value));
}

template <typename D> hstring impl_IDeviceAccountConfiguration<D>::EmailAddress() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_EmailAddress(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::EmailAddress(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_EmailAddress(get(value)));
}

template <typename D> hstring impl_IDeviceAccountConfiguration<D>::Domain() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_Domain(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::Domain(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_Domain(get(value)));
}

template <typename D> bool impl_IDeviceAccountConfiguration<D>::EmailSyncEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_EmailSyncEnabled(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::EmailSyncEnabled(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_EmailSyncEnabled(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration<D>::ContactsSyncEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_ContactsSyncEnabled(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::ContactsSyncEnabled(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_ContactsSyncEnabled(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration<D>::CalendarSyncEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_CalendarSyncEnabled(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::CalendarSyncEnabled(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_CalendarSyncEnabled(value));
}

template <typename D> hstring impl_IDeviceAccountConfiguration<D>::IncomingServerAddress() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_IncomingServerAddress(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::IncomingServerAddress(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_IncomingServerAddress(get(value)));
}

template <typename D> int32_t impl_IDeviceAccountConfiguration<D>::IncomingServerPort() const
{
    int32_t value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_IncomingServerPort(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::IncomingServerPort(int32_t value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_IncomingServerPort(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration<D>::IncomingServerRequiresSsl() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_IncomingServerRequiresSsl(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::IncomingServerRequiresSsl(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_IncomingServerRequiresSsl(value));
}

template <typename D> hstring impl_IDeviceAccountConfiguration<D>::IncomingServerUsername() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_IncomingServerUsername(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::IncomingServerUsername(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_IncomingServerUsername(get(value)));
}

template <typename D> hstring impl_IDeviceAccountConfiguration<D>::OutgoingServerAddress() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_OutgoingServerAddress(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::OutgoingServerAddress(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_OutgoingServerAddress(get(value)));
}

template <typename D> int32_t impl_IDeviceAccountConfiguration<D>::OutgoingServerPort() const
{
    int32_t value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_OutgoingServerPort(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::OutgoingServerPort(int32_t value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_OutgoingServerPort(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration<D>::OutgoingServerRequiresSsl() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_OutgoingServerRequiresSsl(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::OutgoingServerRequiresSsl(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_OutgoingServerRequiresSsl(value));
}

template <typename D> hstring impl_IDeviceAccountConfiguration<D>::OutgoingServerUsername() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->get_OutgoingServerUsername(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration<D>::OutgoingServerUsername(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration &>(static_cast<const D &>(*this))->put_OutgoingServerUsername(get(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IDeviceAccountConfiguration2<D>::IncomingServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_IncomingServerCredential(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::IncomingServerCredential(const Windows::Security::Credentials::PasswordCredential & value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_IncomingServerCredential(get(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential impl_IDeviceAccountConfiguration2<D>::OutgoingServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential value { nullptr };
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_OutgoingServerCredential(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::OutgoingServerCredential(const Windows::Security::Credentials::PasswordCredential & value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_OutgoingServerCredential(get(value)));
}

template <typename D> hstring impl_IDeviceAccountConfiguration2<D>::OAuthRefreshToken() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_OAuthRefreshToken(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::OAuthRefreshToken(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_OAuthRefreshToken(get(value)));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::IsExternallyManaged() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_IsExternallyManaged(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::IsExternallyManaged(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_IsExternallyManaged(value));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId impl_IDeviceAccountConfiguration2<D>::AccountIconId() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_AccountIconId(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::AccountIconId(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountIconId value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_AccountIconId(value));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType impl_IDeviceAccountConfiguration2<D>::AuthenticationType() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_AuthenticationType(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::AuthenticationType(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountAuthenticationType value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_AuthenticationType(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::IsSsoAuthenticationSupported() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_IsSsoAuthenticationSupported(&value));
    return value;
}

template <typename D> hstring impl_IDeviceAccountConfiguration2<D>::SsoAccountId() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_SsoAccountId(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::SsoAccountId(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_SsoAccountId(get(value)));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::AlwaysDownloadFullMessage() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_AlwaysDownloadFullMessage(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::AlwaysDownloadFullMessage(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_AlwaysDownloadFullMessage(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::DoesPolicyAllowMailSync() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_DoesPolicyAllowMailSync(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind impl_IDeviceAccountConfiguration2<D>::SyncScheduleKind() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_SyncScheduleKind(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::SyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_SyncScheduleKind(value));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter impl_IDeviceAccountConfiguration2<D>::MailAgeFilter() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_MailAgeFilter(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::MailAgeFilter(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountMailAgeFilter value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_MailAgeFilter(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::IsClientAuthenticationCertificateRequired() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_IsClientAuthenticationCertificateRequired(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::IsClientAuthenticationCertificateRequired(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_IsClientAuthenticationCertificateRequired(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::AutoSelectAuthenticationCertificate() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_AutoSelectAuthenticationCertificate(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::AutoSelectAuthenticationCertificate(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_AutoSelectAuthenticationCertificate(value));
}

template <typename D> hstring impl_IDeviceAccountConfiguration2<D>::AuthenticationCertificateId() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_AuthenticationCertificateId(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::AuthenticationCertificateId(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_AuthenticationCertificateId(get(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind impl_IDeviceAccountConfiguration2<D>::CardDavSyncScheduleKind() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_CardDavSyncScheduleKind(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::CardDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_CardDavSyncScheduleKind(value));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind impl_IDeviceAccountConfiguration2<D>::CalDavSyncScheduleKind() const
{
    Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_CalDavSyncScheduleKind(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::CalDavSyncScheduleKind(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountSyncScheduleKind value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_CalDavSyncScheduleKind(value));
}

template <typename D> Windows::Foundation::Uri impl_IDeviceAccountConfiguration2<D>::CardDavServerUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_CardDavServerUrl(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::CardDavServerUrl(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_CardDavServerUrl(get(value)));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::CardDavRequiresSsl() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_CardDavRequiresSsl(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::CardDavRequiresSsl(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_CardDavRequiresSsl(value));
}

template <typename D> Windows::Foundation::Uri impl_IDeviceAccountConfiguration2<D>::CalDavServerUrl() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_CalDavServerUrl(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::CalDavServerUrl(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_CalDavServerUrl(get(value)));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::CalDavRequiresSsl() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_CalDavRequiresSsl(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::CalDavRequiresSsl(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_CalDavRequiresSsl(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::WasModifiedByUser() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_WasModifiedByUser(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::WasModifiedByUser(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_WasModifiedByUser(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::WasIncomingServerCertificateHashConfirmed() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_WasIncomingServerCertificateHashConfirmed(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::WasIncomingServerCertificateHashConfirmed(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_WasIncomingServerCertificateHashConfirmed(value));
}

template <typename D> hstring impl_IDeviceAccountConfiguration2<D>::IncomingServerCertificateHash() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_IncomingServerCertificateHash(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::IncomingServerCertificateHash(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_IncomingServerCertificateHash(get(value)));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::IsOutgoingServerAuthenticationRequired() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_IsOutgoingServerAuthenticationRequired(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::IsOutgoingServerAuthenticationRequired(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_IsOutgoingServerAuthenticationRequired(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::IsOutgoingServerAuthenticationEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_IsOutgoingServerAuthenticationEnabled(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::IsOutgoingServerAuthenticationEnabled(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_IsOutgoingServerAuthenticationEnabled(value));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::WasOutgoingServerCertificateHashConfirmed() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_WasOutgoingServerCertificateHashConfirmed(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::WasOutgoingServerCertificateHashConfirmed(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_WasOutgoingServerCertificateHashConfirmed(value));
}

template <typename D> hstring impl_IDeviceAccountConfiguration2<D>::OutgoingServerCertificateHash() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_OutgoingServerCertificateHash(put(value)));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::OutgoingServerCertificateHash(hstring_ref value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_OutgoingServerCertificateHash(get(value)));
}

template <typename D> bool impl_IDeviceAccountConfiguration2<D>::IsSyncScheduleManagedBySystem() const
{
    bool value {};
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->get_IsSyncScheduleManagedBySystem(&value));
    return value;
}

template <typename D> void impl_IDeviceAccountConfiguration2<D>::IsSyncScheduleManagedBySystem(bool value) const
{
    check_hresult(static_cast<const IDeviceAccountConfiguration2 &>(static_cast<const D &>(*this))->put_IsSyncScheduleManagedBySystem(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> impl_IUserDataAccountSystemAccessManagerStatics<D>::AddAndShowDeviceAccountsAsync(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> & accounts) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result;
    check_hresult(static_cast<const IUserDataAccountSystemAccessManagerStatics &>(static_cast<const D &>(*this))->abi_AddAndShowDeviceAccountsAsync(get(accounts), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccountSystemAccessManagerStatics2<D>::SuppressLocalAccountWithAccountAsync(hstring_ref userDataAccountId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IUserDataAccountSystemAccessManagerStatics2 &>(static_cast<const D &>(*this))->abi_SuppressLocalAccountWithAccountAsync(get(userDataAccountId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserDataAccountSystemAccessManagerStatics2<D>::CreateDeviceAccountAsync(const Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration & account) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(static_cast<const IUserDataAccountSystemAccessManagerStatics2 &>(static_cast<const D &>(*this))->abi_CreateDeviceAccountAsync(get(account), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccountSystemAccessManagerStatics2<D>::DeleteDeviceAccountAsync(hstring_ref accountId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IUserDataAccountSystemAccessManagerStatics2 &>(static_cast<const D &>(*this))->abi_DeleteDeviceAccountAsync(get(accountId), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> impl_IUserDataAccountSystemAccessManagerStatics2<D>::GetDeviceAccountConfigurationAsync(hstring_ref accountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> result;
    check_hresult(static_cast<const IUserDataAccountSystemAccessManagerStatics2 &>(static_cast<const D &>(*this))->abi_GetDeviceAccountConfigurationAsync(get(accountId), put(result)));
    return result;
}

inline DeviceAccountConfiguration::DeviceAccountConfiguration() :
    DeviceAccountConfiguration(activate_instance<DeviceAccountConfiguration>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> UserDataAccountSystemAccessManager::AddAndShowDeviceAccountsAsync(const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> & accounts)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, IUserDataAccountSystemAccessManagerStatics>().AddAndShowDeviceAccountsAsync(accounts);
}

inline Windows::Foundation::IAsyncAction UserDataAccountSystemAccessManager::SuppressLocalAccountWithAccountAsync(hstring_ref userDataAccountId)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, IUserDataAccountSystemAccessManagerStatics2>().SuppressLocalAccountWithAccountAsync(userDataAccountId);
}

inline Windows::Foundation::IAsyncOperation<hstring> UserDataAccountSystemAccessManager::CreateDeviceAccountAsync(const Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration & account)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, IUserDataAccountSystemAccessManagerStatics2>().CreateDeviceAccountAsync(account);
}

inline Windows::Foundation::IAsyncAction UserDataAccountSystemAccessManager::DeleteDeviceAccountAsync(hstring_ref accountId)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, IUserDataAccountSystemAccessManagerStatics2>().DeleteDeviceAccountAsync(accountId);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> UserDataAccountSystemAccessManager::GetDeviceAccountConfigurationAsync(hstring_ref accountId)
{
    return get_activation_factory<UserDataAccountSystemAccessManager, IUserDataAccountSystemAccessManagerStatics2>().GetDeviceAccountConfigurationAsync(accountId);
}

}

}
