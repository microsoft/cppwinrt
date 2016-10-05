// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Authentication::Web::Provider {

struct IWebAccountClientView;
struct IWebAccountClientViewFactory;
struct IWebAccountManagerStatics;
struct IWebAccountManagerStatics2;
struct IWebAccountMapManagerStatics;
struct IWebAccountProviderAddAccountOperation;
struct IWebAccountProviderBaseReportOperation;
struct IWebAccountProviderDeleteAccountOperation;
struct IWebAccountProviderManageAccountOperation;
struct IWebAccountProviderOperation;
struct IWebAccountProviderRetrieveCookiesOperation;
struct IWebAccountProviderSignOutAccountOperation;
struct IWebAccountProviderSilentReportOperation;
struct IWebAccountProviderTokenObjects;
struct IWebAccountProviderTokenOperation;
struct IWebAccountProviderUIReportOperation;
struct IWebAccountScopeManagerStatics;
struct IWebProviderTokenRequest;
struct IWebProviderTokenRequest2;
struct IWebProviderTokenResponse;
struct IWebProviderTokenResponseFactory;
struct WebAccountClientView;
struct WebAccountProviderAddAccountOperation;
struct WebAccountProviderDeleteAccountOperation;
struct WebAccountProviderGetTokenSilentOperation;
struct WebAccountProviderManageAccountOperation;
struct WebAccountProviderRequestTokenOperation;
struct WebAccountProviderRetrieveCookiesOperation;
struct WebAccountProviderSignOutAccountOperation;
struct WebAccountProviderTriggerDetails;
struct WebProviderTokenRequest;
struct WebProviderTokenResponse;

}

namespace Windows::Security::Authentication::Web::Provider {

struct IWebAccountClientView;
struct IWebAccountClientViewFactory;
struct IWebAccountManagerStatics;
struct IWebAccountManagerStatics2;
struct IWebAccountMapManagerStatics;
struct IWebAccountProviderAddAccountOperation;
struct IWebAccountProviderBaseReportOperation;
struct IWebAccountProviderDeleteAccountOperation;
struct IWebAccountProviderManageAccountOperation;
struct IWebAccountProviderOperation;
struct IWebAccountProviderRetrieveCookiesOperation;
struct IWebAccountProviderSignOutAccountOperation;
struct IWebAccountProviderSilentReportOperation;
struct IWebAccountProviderTokenObjects;
struct IWebAccountProviderTokenOperation;
struct IWebAccountProviderUIReportOperation;
struct IWebAccountScopeManagerStatics;
struct IWebProviderTokenRequest;
struct IWebProviderTokenRequest2;
struct IWebProviderTokenResponse;
struct IWebProviderTokenResponseFactory;
struct WebAccountClientView;
struct WebAccountManager;
struct WebAccountProviderAddAccountOperation;
struct WebAccountProviderDeleteAccountOperation;
struct WebAccountProviderGetTokenSilentOperation;
struct WebAccountProviderManageAccountOperation;
struct WebAccountProviderRequestTokenOperation;
struct WebAccountProviderRetrieveCookiesOperation;
struct WebAccountProviderSignOutAccountOperation;
struct WebAccountProviderTriggerDetails;
struct WebProviderTokenRequest;
struct WebProviderTokenResponse;

}

namespace Windows::Security::Authentication::Web::Provider {

enum class WebAccountClientViewType
{
    IdOnly = 0,
    IdAndProperties = 1,
};

enum class WebAccountProviderOperationKind
{
    RequestToken = 0,
    GetTokenSilently = 1,
    AddAccount = 2,
    ManageAccount = 3,
    DeleteAccount = 4,
    RetrieveCookies = 5,
    SignOutAccount = 6,
};

enum class WebAccountScope
{
    PerUser = 0,
    PerApplication = 1,
};

enum class WebAccountSelectionOptions : unsigned
{
    Default = 0x0,
    New = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(WebAccountSelectionOptions)

}

}
