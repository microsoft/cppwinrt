// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Authentication.Web.Core.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f6d1f700_49c2_52ae_8154_826f9908773c
#define WINRT_GENERIC_f6d1f700_49c2_52ae_8154_826f9908773c
template <> struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c")) __declspec(novtable) IMap<hstring, hstring> : impl_IMap<hstring, hstring> {};
#endif

#ifndef WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
#define WINRT_GENERIC_60310303_49c5_52e6_abc6_a9b36eccc716
template <> struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716")) __declspec(novtable) IKeyValuePair<hstring, hstring> : impl_IKeyValuePair<hstring, hstring> {};
#endif

#ifndef WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
#define WINRT_GENERIC_ac7f26f2_feb7_5b2a_8ac4_345bc62caede
template <> struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede")) __declspec(novtable) IMapView<hstring, hstring> : impl_IMapView<hstring, hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_0a815852_7c44_5674_b3d2_fa2e4c1e46c9
#define WINRT_GENERIC_0a815852_7c44_5674_b3d2_fa2e4c1e46c9
template <> struct __declspec(uuid("0a815852-7c44-5674-b3d2-fa2e4c1e46c9")) __declspec(novtable) IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> : impl_IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> {};
#endif

#ifndef WINRT_GENERIC_acd76b54_297f_5a18_9143_20a309e2dfd3
#define WINRT_GENERIC_acd76b54_297f_5a18_9143_20a309e2dfd3
template <> struct __declspec(uuid("acd76b54-297f-5a18-9143-20a309e2dfd3")) __declspec(novtable) IAsyncOperation<Windows::Security::Credentials::WebAccount> : impl_IAsyncOperation<Windows::Security::Credentials::WebAccount> {};
#endif

#ifndef WINRT_GENERIC_88c66009_12f7_58e2_8dbe_6efc620c85ba
#define WINRT_GENERIC_88c66009_12f7_58e2_8dbe_6efc620c85ba
template <> struct __declspec(uuid("88c66009-12f7-58e2-8dbe-6efc620c85ba")) __declspec(novtable) IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> : impl_IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_cb15d439_a910_542a_89ed_7cfe67848a83
#define WINRT_GENERIC_cb15d439_a910_542a_89ed_7cfe67848a83
template <> struct __declspec(uuid("cb15d439-a910-542a-89ed-7cfe67848a83")) __declspec(novtable) IIterable<Windows::Security::Credentials::WebAccount> : impl_IIterable<Windows::Security::Credentials::WebAccount> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_fa704f04_87b6_516b_9596_cd7cc092169b
#define WINRT_GENERIC_fa704f04_87b6_516b_9596_cd7cc092169b
template <> struct __declspec(uuid("fa704f04-87b6-516b-9596-cd7cc092169b")) __declspec(novtable) TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> : impl_TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> {};
#endif

#ifndef WINRT_GENERIC_c8cb498d_e0da_52a1_abf9_7198c7f5cb42
#define WINRT_GENERIC_c8cb498d_e0da_52a1_abf9_7198c7f5cb42
template <> struct __declspec(uuid("c8cb498d-e0da-52a1-abf9-7198c7f5cb42")) __declspec(novtable) TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::IInspectable> : impl_TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_199e065c_8195_55da_9c10_8aeaf9ac1062
#define WINRT_GENERIC_199e065c_8195_55da_9c10_8aeaf9ac1062
template <> struct __declspec(uuid("199e065c-8195-55da-9c10-8aeaf9ac1062")) __declspec(novtable) IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> : impl_IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_deb54b22_70f2_55ab_97c0_6cbdc5ddb6f0
#define WINRT_GENERIC_deb54b22_70f2_55ab_97c0_6cbdc5ddb6f0
template <> struct __declspec(uuid("deb54b22-70f2-55ab-97c0-6cbdc5ddb6f0")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> : impl_AsyncOperationCompletedHandler<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> {};
#endif

#ifndef WINRT_GENERIC_4bd6f1e5_ca89_5240_8f3d_7f1b54ae90a7
#define WINRT_GENERIC_4bd6f1e5_ca89_5240_8f3d_7f1b54ae90a7
template <> struct __declspec(uuid("4bd6f1e5-ca89-5240-8f3d-7f1b54ae90a7")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::Credentials::WebAccount> : impl_AsyncOperationCompletedHandler<Windows::Security::Credentials::WebAccount> {};
#endif

#ifndef WINRT_GENERIC_9477622b_1340_5574_81fc_5013581f57c9
#define WINRT_GENERIC_9477622b_1340_5574_81fc_5013581f57c9
template <> struct __declspec(uuid("9477622b-1340-5574-81fc-5013581f57c9")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Security::Credentials::WebAccountProvider> : impl_AsyncOperationCompletedHandler<Windows::Security::Credentials::WebAccountProvider> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_bfb82cca_aebc_567c_95d9_eba25c365faa
#define WINRT_GENERIC_bfb82cca_aebc_567c_95d9_eba25c365faa
template <> struct __declspec(uuid("bfb82cca-aebc-567c-95d9-eba25c365faa")) __declspec(novtable) IIterator<Windows::Security::Credentials::WebAccount> : impl_IIterator<Windows::Security::Credentials::WebAccount> {};
#endif

#ifndef WINRT_GENERIC_f080b0c9_a095_5b3a_a1dc_d17e7d2982c7
#define WINRT_GENERIC_f080b0c9_a095_5b3a_a1dc_d17e7d2982c7
template <> struct __declspec(uuid("f080b0c9-a095-5b3a-a1dc-d17e7d2982c7")) __declspec(novtable) IIterator<Windows::Security::Authentication::Web::Core::WebTokenResponse> : impl_IIterator<Windows::Security::Authentication::Web::Core::WebTokenResponse> {};
#endif

#ifndef WINRT_GENERIC_7e5bb7ec_bbd7_5575_9a61_f5815fa22a0e
#define WINRT_GENERIC_7e5bb7ec_bbd7_5575_9a61_f5815fa22a0e
template <> struct __declspec(uuid("7e5bb7ec-bbd7-5575-9a61-f5815fa22a0e")) __declspec(novtable) IIterable<Windows::Security::Authentication::Web::Core::WebTokenResponse> : impl_IIterable<Windows::Security::Authentication::Web::Core::WebTokenResponse> {};
#endif

#ifndef WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
#define WINRT_GENERIC_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b
template <> struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif

#ifndef WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
#define WINRT_GENERIC_05eb86f1_7140_5517_b88d_cbaebe57e6b1
template <> struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> {};
#endif


}

namespace Windows::Security::Authentication::Web::Core {

template <typename D>
struct WINRT_EBO impl_IWebAccountEventArgs
{
    Windows::Security::Credentials::WebAccount Account() const;
};

template <typename D>
struct WINRT_EBO impl_IWebAccountMonitor
{
    event_token Updated(const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> & handler) const;
    using Updated_revoker = event_revoker<IWebAccountMonitor>;
    Updated_revoker Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> & handler) const;
    void Updated(event_token token) const;
    event_token Removed(const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> & handler) const;
    using Removed_revoker = event_revoker<IWebAccountMonitor>;
    Removed_revoker Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> & handler) const;
    void Removed(event_token token) const;
    event_token DefaultSignInAccountChanged(const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::IInspectable> & handler) const;
    using DefaultSignInAccountChanged_revoker = event_revoker<IWebAccountMonitor>;
    DefaultSignInAccountChanged_revoker DefaultSignInAccountChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::IInspectable> & handler) const;
    void DefaultSignInAccountChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IWebAuthenticationCoreManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> GetTokenSilentlyAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> GetTokenSilentlyAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request, const Windows::Security::Credentials::WebAccount & webAccount) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request, const Windows::Security::Credentials::WebAccount & webAccount) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> FindAccountAsync(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref webAccountId) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> FindAccountProviderAsync(hstring_ref webAccountProviderId) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> FindAccountProviderAsync(hstring_ref webAccountProviderId, hstring_ref authority) const;
};

template <typename D>
struct WINRT_EBO impl_IWebAuthenticationCoreManagerStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> FindAccountProviderAsync(hstring_ref webAccountProviderId, hstring_ref authority, const Windows::System::User & user) const;
};

template <typename D>
struct WINRT_EBO impl_IWebAuthenticationCoreManagerStatics3
{
    Windows::Security::Authentication::Web::Core::WebAccountMonitor CreateWebAccountMonitor(const Windows::Foundation::Collections::IIterable<Windows::Security::Credentials::WebAccount> & webAccounts) const;
};

template <typename D>
struct WINRT_EBO impl_IWebProviderError
{
    uint32_t ErrorCode() const;
    hstring ErrorMessage() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Properties() const;
};

template <typename D>
struct WINRT_EBO impl_IWebProviderErrorFactory
{
    Windows::Security::Authentication::Web::Core::WebProviderError Create(uint32_t errorCode, hstring_ref errorMessage) const;
};

template <typename D>
struct WINRT_EBO impl_IWebTokenRequest
{
    Windows::Security::Credentials::WebAccountProvider WebAccountProvider() const;
    hstring Scope() const;
    hstring ClientId() const;
    Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType PromptType() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Properties() const;
};

template <typename D>
struct WINRT_EBO impl_IWebTokenRequest2
{
    Windows::Foundation::Collections::IMap<hstring, hstring> AppProperties() const;
};

template <typename D>
struct WINRT_EBO impl_IWebTokenRequestFactory
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest Create(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref scope, hstring_ref clientId) const;
    Windows::Security::Authentication::Web::Core::WebTokenRequest CreateWithPromptType(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref scope, hstring_ref clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType promptType) const;
    Windows::Security::Authentication::Web::Core::WebTokenRequest CreateWithProvider(const Windows::Security::Credentials::WebAccountProvider & provider) const;
    Windows::Security::Authentication::Web::Core::WebTokenRequest CreateWithScope(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref scope) const;
};

template <typename D>
struct WINRT_EBO impl_IWebTokenRequestResult
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> ResponseData() const;
    Windows::Security::Authentication::Web::Core::WebTokenRequestStatus ResponseStatus() const;
    Windows::Security::Authentication::Web::Core::WebProviderError ResponseError() const;
    Windows::Foundation::IAsyncAction InvalidateCacheAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IWebTokenResponse
{
    hstring Token() const;
    Windows::Security::Authentication::Web::Core::WebProviderError ProviderError() const;
    Windows::Security::Credentials::WebAccount WebAccount() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Properties() const;
};

template <typename D>
struct WINRT_EBO impl_IWebTokenResponseFactory
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse CreateWithToken(hstring_ref token) const;
    Windows::Security::Authentication::Web::Core::WebTokenResponse CreateWithTokenAndAccount(hstring_ref token, const Windows::Security::Credentials::WebAccount & webAccount) const;
    Windows::Security::Authentication::Web::Core::WebTokenResponse CreateWithTokenAccountAndError(hstring_ref token, const Windows::Security::Credentials::WebAccount & webAccount, const Windows::Security::Authentication::Web::Core::WebProviderError & error) const;
};

struct IWebAccountEventArgs :
    Windows::IInspectable,
    impl::consume<IWebAccountEventArgs>
{
    IWebAccountEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebAccountEventArgs>(m_ptr); }
};

struct IWebAccountMonitor :
    Windows::IInspectable,
    impl::consume<IWebAccountMonitor>
{
    IWebAccountMonitor(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebAccountMonitor>(m_ptr); }
};

struct IWebAuthenticationCoreManagerStatics :
    Windows::IInspectable,
    impl::consume<IWebAuthenticationCoreManagerStatics>
{
    IWebAuthenticationCoreManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebAuthenticationCoreManagerStatics>(m_ptr); }
};

struct IWebAuthenticationCoreManagerStatics2 :
    Windows::IInspectable,
    impl::consume<IWebAuthenticationCoreManagerStatics2>,
    impl::require<IWebAuthenticationCoreManagerStatics2, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
{
    IWebAuthenticationCoreManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebAuthenticationCoreManagerStatics2>(m_ptr); }
    using impl_IWebAuthenticationCoreManagerStatics::FindAccountProviderAsync;
    using impl_IWebAuthenticationCoreManagerStatics2::FindAccountProviderAsync;
};

struct IWebAuthenticationCoreManagerStatics3 :
    Windows::IInspectable,
    impl::consume<IWebAuthenticationCoreManagerStatics3>,
    impl::require<IWebAuthenticationCoreManagerStatics3, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
{
    IWebAuthenticationCoreManagerStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebAuthenticationCoreManagerStatics3>(m_ptr); }
};

struct IWebProviderError :
    Windows::IInspectable,
    impl::consume<IWebProviderError>
{
    IWebProviderError(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebProviderError>(m_ptr); }
};

struct IWebProviderErrorFactory :
    Windows::IInspectable,
    impl::consume<IWebProviderErrorFactory>
{
    IWebProviderErrorFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebProviderErrorFactory>(m_ptr); }
};

struct IWebTokenRequest :
    Windows::IInspectable,
    impl::consume<IWebTokenRequest>
{
    IWebTokenRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebTokenRequest>(m_ptr); }
};

struct IWebTokenRequest2 :
    Windows::IInspectable,
    impl::consume<IWebTokenRequest2>
{
    IWebTokenRequest2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebTokenRequest2>(m_ptr); }
};

struct IWebTokenRequestFactory :
    Windows::IInspectable,
    impl::consume<IWebTokenRequestFactory>
{
    IWebTokenRequestFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebTokenRequestFactory>(m_ptr); }
};

struct IWebTokenRequestResult :
    Windows::IInspectable,
    impl::consume<IWebTokenRequestResult>
{
    IWebTokenRequestResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebTokenRequestResult>(m_ptr); }
};

struct IWebTokenResponse :
    Windows::IInspectable,
    impl::consume<IWebTokenResponse>
{
    IWebTokenResponse(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebTokenResponse>(m_ptr); }
};

struct IWebTokenResponseFactory :
    Windows::IInspectable,
    impl::consume<IWebTokenResponseFactory>
{
    IWebTokenResponseFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWebTokenResponseFactory>(m_ptr); }
};

}

}
