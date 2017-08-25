// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct WINRT_EBO KeyCredential :
    Windows::Security::Credentials::IKeyCredential
{
    KeyCredential(std::nullptr_t) noexcept {}
};

struct WINRT_EBO KeyCredentialAttestationResult :
    Windows::Security::Credentials::IKeyCredentialAttestationResult
{
    KeyCredentialAttestationResult(std::nullptr_t) noexcept {}
};

struct KeyCredentialManager
{
    KeyCredentialManager() = delete;
    static Windows::Foundation::IAsyncOperation<bool> IsSupportedAsync();
    static Windows::Foundation::IAsyncAction RenewAttestationAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> RequestCreateAsync(param::hstring const& name, Windows::Security::Credentials::KeyCredentialCreationOption const& option);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::KeyCredentialRetrievalResult> OpenAsync(param::hstring const& name);
    static Windows::Foundation::IAsyncAction DeleteAsync(param::hstring const& name);
};

struct WINRT_EBO KeyCredentialOperationResult :
    Windows::Security::Credentials::IKeyCredentialOperationResult
{
    KeyCredentialOperationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO KeyCredentialRetrievalResult :
    Windows::Security::Credentials::IKeyCredentialRetrievalResult
{
    KeyCredentialRetrievalResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PasswordCredential :
    Windows::Security::Credentials::IPasswordCredential
{
    PasswordCredential(std::nullptr_t) noexcept {}
    PasswordCredential();
    PasswordCredential(param::hstring const& resource, param::hstring const& userName, param::hstring const& password);
};

struct WINRT_EBO PasswordCredentialPropertyStore :
    Windows::Foundation::Collections::IPropertySet
{
    PasswordCredentialPropertyStore(std::nullptr_t) noexcept {}
    PasswordCredentialPropertyStore();
};

struct WINRT_EBO PasswordVault :
    Windows::Security::Credentials::IPasswordVault
{
    PasswordVault(std::nullptr_t) noexcept {}
    PasswordVault();
};

struct WINRT_EBO WebAccount :
    Windows::Security::Credentials::IWebAccount,
    impl::require<WebAccount, Windows::Security::Credentials::IWebAccount2>
{
    WebAccount(std::nullptr_t) noexcept {}
    WebAccount(Windows::Security::Credentials::WebAccountProvider const& webAccountProvider, param::hstring const& userName, Windows::Security::Credentials::WebAccountState const& state);
};

struct WINRT_EBO WebAccountProvider :
    Windows::Security::Credentials::IWebAccountProvider,
    impl::require<WebAccountProvider, Windows::Security::Credentials::IWebAccountProvider2, Windows::Security::Credentials::IWebAccountProvider3>
{
    WebAccountProvider(std::nullptr_t) noexcept {}
    WebAccountProvider(param::hstring const& id, param::hstring const& displayName, Windows::Foundation::Uri const& iconUri);
};

}
