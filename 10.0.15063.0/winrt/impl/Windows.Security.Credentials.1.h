// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct WINRT_EBO ICredentialFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialFactory>
{
    ICredentialFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyCredential :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredential>
{
    IKeyCredential(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyCredentialAttestationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredentialAttestationResult>
{
    IKeyCredentialAttestationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyCredentialManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredentialManagerStatics>
{
    IKeyCredentialManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyCredentialOperationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredentialOperationResult>
{
    IKeyCredentialOperationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKeyCredentialRetrievalResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKeyCredentialRetrievalResult>
{
    IKeyCredentialRetrievalResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPasswordCredential :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPasswordCredential>
{
    IPasswordCredential(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPasswordVault :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPasswordVault>
{
    IPasswordVault(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccount :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccount>
{
    IWebAccount(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccount2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccount2>,
    impl::require<IWebAccount2, Windows::Security::Credentials::IWebAccount>
{
    IWebAccount2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountFactory>
{
    IWebAccountFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProvider>
{
    IWebAccountProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProvider2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProvider2>,
    impl::require<IWebAccountProvider2, Windows::Security::Credentials::IWebAccountProvider>
{
    IWebAccountProvider2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProvider3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProvider3>,
    impl::require<IWebAccountProvider3, Windows::Security::Credentials::IWebAccountProvider, Windows::Security::Credentials::IWebAccountProvider2>
{
    IWebAccountProvider3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderFactory>
{
    IWebAccountProviderFactory(std::nullptr_t = nullptr) noexcept {}
};

}
