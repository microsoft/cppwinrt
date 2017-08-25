// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Web.Http.Filters.2.h"
#include "winrt/Windows.Web.Http.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowAutoRedirect() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_AllowAutoRedirect(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowAutoRedirect(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_AllowAutoRedirect(value));
}

template <typename D> bool consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowUI() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_AllowUI(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowUI(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_AllowUI(value));
}

template <typename D> bool consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AutomaticDecompression() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_AutomaticDecompression(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AutomaticDecompression(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_AutomaticDecompression(value));
}

template <typename D> Windows::Web::Http::Filters::HttpCacheControl consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::CacheControl() const
{
    Windows::Web::Http::Filters::HttpCacheControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_CacheControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpCookieManager consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::CookieManager() const
{
    Windows::Web::Http::HttpCookieManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_CookieManager(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ClientCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_ClientCertificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ClientCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_ClientCertificate(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::IgnorableServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_IgnorableServerCertificateErrors(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::MaxConnectionsPerServer() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_MaxConnectionsPerServer(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::MaxConnectionsPerServer(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_MaxConnectionsPerServer(value));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ProxyCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_ProxyCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ProxyCredential(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_ProxyCredential(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_ServerCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_ServerCredential(get_abi(value)));
}

template <typename D> bool consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::UseProxy() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_UseProxy(&value));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::UseProxy(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_UseProxy(value));
}

template <typename D> Windows::Web::Http::HttpVersion consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2<D>::MaxVersion() const
{
    Windows::Web::Http::HttpVersion value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter2)->get_MaxVersion(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2<D>::MaxVersion(Windows::Web::Http::HttpVersion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter2)->put_MaxVersion(get_abi(value)));
}

template <typename D> Windows::Web::Http::Filters::HttpCookieUsageBehavior consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3<D>::CookieUsageBehavior() const
{
    Windows::Web::Http::Filters::HttpCookieUsageBehavior value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter3)->get_CookieUsageBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3<D>::CookieUsageBehavior(Windows::Web::Http::Filters::HttpCookieUsageBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter3)->put_CookieUsageBehavior(get_abi(value)));
}

template <typename D> event_token consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter4)->add_ServerCustomValidationRequested(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>(this, &abi_t<Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>::remove_ServerCustomValidationRequested, ServerCustomValidationRequested(eventHandler));
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter4)->remove_ServerCustomValidationRequested(get_abi(eventCookie)));
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ClearAuthenticationCache() const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpBaseProtocolFilter4)->ClearAuthenticationCache());
}

template <typename D> Windows::Web::Http::Filters::HttpCacheReadBehavior consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::ReadBehavior() const
{
    Windows::Web::Http::Filters::HttpCacheReadBehavior value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpCacheControl)->get_ReadBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::ReadBehavior(Windows::Web::Http::Filters::HttpCacheReadBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpCacheControl)->put_ReadBehavior(get_abi(value)));
}

template <typename D> Windows::Web::Http::Filters::HttpCacheWriteBehavior consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::WriteBehavior() const
{
    Windows::Web::Http::Filters::HttpCacheWriteBehavior value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpCacheControl)->get_WriteBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::WriteBehavior(Windows::Web::Http::Filters::HttpCacheWriteBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpCacheControl)->put_WriteBehavior(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> consume_Windows_Web_Http_Filters_IHttpFilter<D>::SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpFilter)->SendRequestAsync(get_abi(request), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Web::Http::HttpRequestMessage consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::RequestMessage() const
{
    Windows::Web::Http::HttpRequestMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_RequestMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerCertificate(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerCertificateErrorSeverity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerCertificateErrors(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerIntermediateCertificates(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::Reject() const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->Reject());
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
{
    HRESULT __stdcall get_AllowAutoRedirect(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowAutoRedirect());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowAutoRedirect(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowAutoRedirect(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowUI(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowUI());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowUI(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowUI(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutomaticDecompression(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutomaticDecompression());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AutomaticDecompression(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutomaticDecompression(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CacheControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CacheControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CookieManager(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CookieManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClientCertificate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClientCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClientCertificate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClientCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IgnorableServerCertificateErrors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IgnorableServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxConnectionsPerServer(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxConnectionsPerServer());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxConnectionsPerServer(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxConnectionsPerServer(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyCredential(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProxyCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyCredential(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCredential(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServerCredential());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ServerCredential(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UseProxy(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UseProxy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UseProxy(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseProxy(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter2> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
{
    HRESULT __stdcall get_MaxVersion(abi_t<Windows::Web::Http::HttpVersion>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxVersion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_MaxVersion(abi_t<Windows::Web::Http::HttpVersion> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxVersion(*reinterpret_cast<Windows::Web::Http::HttpVersion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter3> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
{
    HRESULT __stdcall get_CookieUsageBehavior(abi_t<Windows::Web::Http::Filters::HttpCookieUsageBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CookieUsageBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CookieUsageBehavior(abi_t<Windows::Web::Http::Filters::HttpCookieUsageBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CookieUsageBehavior(*reinterpret_cast<Windows::Web::Http::Filters::HttpCookieUsageBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> : produce_base<D, Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
{
    HRESULT __stdcall add_ServerCustomValidationRequested(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().ServerCustomValidationRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::Http::Filters::HttpBaseProtocolFilter, Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServerCustomValidationRequested(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCustomValidationRequested(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearAuthenticationCache() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAuthenticationCache();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Filters::IHttpCacheControl> : produce_base<D, Windows::Web::Http::Filters::IHttpCacheControl>
{
    HRESULT __stdcall get_ReadBehavior(abi_t<Windows::Web::Http::Filters::HttpCacheReadBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReadBehavior(abi_t<Windows::Web::Http::Filters::HttpCacheReadBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadBehavior(*reinterpret_cast<Windows::Web::Http::Filters::HttpCacheReadBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteBehavior(abi_t<Windows::Web::Http::Filters::HttpCacheWriteBehavior>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WriteBehavior());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WriteBehavior(abi_t<Windows::Web::Http::Filters::HttpCacheWriteBehavior> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteBehavior(*reinterpret_cast<Windows::Web::Http::Filters::HttpCacheWriteBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Filters::IHttpFilter> : produce_base<D, Windows::Web::Http::Filters::IHttpFilter>
{
    HRESULT __stdcall SendRequestAsync(::IUnknown* request, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendRequestAsync(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs> : produce_base<D, Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
{
    HRESULT __stdcall get_RequestMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServerCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrorSeverity(abi_t<Windows::Networking::Sockets::SocketSslErrorSeverity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerIntermediateCertificates(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServerIntermediateCertificates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Reject() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reject();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
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

WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters {

inline HttpBaseProtocolFilter::HttpBaseProtocolFilter() :
    HttpBaseProtocolFilter(activate_instance<HttpBaseProtocolFilter>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter> {};

template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2> {};

template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3> {};

template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> {};

template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpCacheControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::IHttpCacheControl> {};

template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::IHttpFilter> {};

template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter> {};

template<> struct hash<winrt::Windows::Web::Http::Filters::HttpCacheControl> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::HttpCacheControl> {};

template<> struct hash<winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> {};

}

WINRT_WARNING_POP
