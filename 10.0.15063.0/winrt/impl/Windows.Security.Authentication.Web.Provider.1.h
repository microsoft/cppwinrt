// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Security.Authentication.Web.0.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Web.Http.0.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Provider {

struct WINRT_EBO IWebAccountClientView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountClientView>
{
    IWebAccountClientView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountClientViewFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountClientViewFactory>
{
    IWebAccountClientViewFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountManagerStatics>
{
    IWebAccountManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountManagerStatics2>
{
    IWebAccountManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountManagerStatics3>
{
    IWebAccountManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountMapManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountMapManagerStatics>
{
    IWebAccountMapManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderAddAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderAddAccountOperation>,
    impl::require<IWebAccountProviderAddAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderAddAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderBaseReportOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderBaseReportOperation>
{
    IWebAccountProviderBaseReportOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderDeleteAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderDeleteAccountOperation>,
    impl::require<IWebAccountProviderDeleteAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderDeleteAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderManageAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderManageAccountOperation>,
    impl::require<IWebAccountProviderManageAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderManageAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderOperation>
{
    IWebAccountProviderOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderRetrieveCookiesOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderRetrieveCookiesOperation>,
    impl::require<IWebAccountProviderRetrieveCookiesOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderRetrieveCookiesOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderSignOutAccountOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderSignOutAccountOperation>,
    impl::require<IWebAccountProviderSignOutAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderSignOutAccountOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderSilentReportOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderSilentReportOperation>,
    impl::require<IWebAccountProviderSilentReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
{
    IWebAccountProviderSilentReportOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderTokenObjects :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderTokenObjects>
{
    IWebAccountProviderTokenObjects(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderTokenObjects2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderTokenObjects2>,
    impl::require<IWebAccountProviderTokenObjects2, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
{
    IWebAccountProviderTokenObjects2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderTokenOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderTokenOperation>,
    impl::require<IWebAccountProviderTokenOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    IWebAccountProviderTokenOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountProviderUIReportOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountProviderUIReportOperation>,
    impl::require<IWebAccountProviderUIReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
{
    IWebAccountProviderUIReportOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebAccountScopeManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebAccountScopeManagerStatics>
{
    IWebAccountScopeManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebProviderTokenRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderTokenRequest>
{
    IWebProviderTokenRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebProviderTokenRequest2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderTokenRequest2>
{
    IWebProviderTokenRequest2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebProviderTokenResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderTokenResponse>
{
    IWebProviderTokenResponse(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebProviderTokenResponseFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebProviderTokenResponseFactory>
{
    IWebProviderTokenResponseFactory(std::nullptr_t = nullptr) noexcept {}
};

}
