// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Authentication::Web::Core {

struct IWebAccountEventArgs;
struct IWebAccountMonitor;
struct IWebAuthenticationCoreManagerStatics;
struct IWebAuthenticationCoreManagerStatics2;
struct IWebAuthenticationCoreManagerStatics3;
struct IWebProviderError;
struct IWebProviderErrorFactory;
struct IWebTokenRequest;
struct IWebTokenRequest2;
struct IWebTokenRequestFactory;
struct IWebTokenRequestResult;
struct IWebTokenResponse;
struct IWebTokenResponseFactory;
struct WebAccountEventArgs;
struct WebAccountMonitor;
struct WebProviderError;
struct WebTokenRequest;
struct WebTokenRequestResult;
struct WebTokenResponse;

}

namespace Windows::Security::Authentication::Web::Core {

struct IWebAccountEventArgs;
struct IWebAccountMonitor;
struct IWebAuthenticationCoreManagerStatics;
struct IWebAuthenticationCoreManagerStatics2;
struct IWebAuthenticationCoreManagerStatics3;
struct IWebProviderError;
struct IWebProviderErrorFactory;
struct IWebTokenRequest;
struct IWebTokenRequest2;
struct IWebTokenRequestFactory;
struct IWebTokenRequestResult;
struct IWebTokenResponse;
struct IWebTokenResponseFactory;
struct WebAccountEventArgs;
struct WebAccountMonitor;
struct WebAuthenticationCoreManager;
struct WebProviderError;
struct WebTokenRequest;
struct WebTokenRequestResult;
struct WebTokenResponse;

}

namespace Windows::Security::Authentication::Web::Core {

enum class WebTokenRequestPromptType
{
    Default = 0,
    ForceAuthentication = 1,
};

enum class WebTokenRequestStatus
{
    Success = 0,
    UserCancel = 1,
    AccountSwitch = 2,
    UserInteractionRequired = 3,
    AccountProviderNotAvailable = 4,
    ProviderError = 5,
};

}

}
