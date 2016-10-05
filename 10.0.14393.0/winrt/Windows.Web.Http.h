// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Web.Http.Filters.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Web.Http.Headers.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Security.Cryptography.Certificates.3.h"
#include "internal/Windows.Networking.Sockets.3.h"
#include "internal/Windows.Web.Http.3.h"
#include "Windows.Web.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Web::Http::IHttpBufferContentFactory> : produce_base<D, Windows::Web::Http::IHttpBufferContentFactory>
{
    HRESULT __stdcall abi_CreateFromBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> content, abi_arg_out<Windows::Web::Http::IHttpContent> bufferContent) noexcept override
    {
        try
        {
            *bufferContent = detach(this->shim().CreateFromBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *bufferContent = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromBufferWithOffset(abi_arg_in<Windows::Storage::Streams::IBuffer> content, uint32_t offset, uint32_t count, abi_arg_out<Windows::Web::Http::IHttpContent> bufferContent) noexcept override
    {
        try
        {
            *bufferContent = detach(this->shim().CreateFromBufferWithOffset(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&content), offset, count));
            return S_OK;
        }
        catch (...)
        {
            *bufferContent = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpClient> : produce_base<D, Windows::Web::Http::IHttpClient>
{
    HRESULT __stdcall abi_DeleteAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetWithOptionAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, Windows::Web::Http::HttpCompletionOption completionOption, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), completionOption));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBufferAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetBufferAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetInputStreamAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetInputStreamAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStringAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<hstring, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetStringAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PostAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::Web::Http::IHttpContent> content, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PostAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::Web::Http::IHttpContent *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PutAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::Web::Http::IHttpContent> content, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PutAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::Web::Http::IHttpContent *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendRequestAsync(abi_arg_in<Windows::Web::Http::IHttpRequestMessage> request, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendRequestAsync(*reinterpret_cast<const Windows::Web::Http::HttpRequestMessage *>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendRequestWithOptionAsync(abi_arg_in<Windows::Web::Http::IHttpRequestMessage> request, Windows::Web::Http::HttpCompletionOption completionOption, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendRequestAsync(*reinterpret_cast<const Windows::Web::Http::HttpRequestMessage *>(&request), completionOption));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultRequestHeaders(abi_arg_out<Windows::Web::Http::Headers::IHttpRequestHeaderCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultRequestHeaders());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpClientFactory> : produce_base<D, Windows::Web::Http::IHttpClientFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Web::Http::Filters::IHttpFilter> filter, abi_arg_out<Windows::Web::Http::IHttpClient> client) noexcept override
    {
        try
        {
            *client = detach(this->shim().Create(*reinterpret_cast<const Windows::Web::Http::Filters::IHttpFilter *>(&filter)));
            return S_OK;
        }
        catch (...)
        {
            *client = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpContent> : produce_base<D, Windows::Web::Http::IHttpContent>
{
    HRESULT __stdcall get_Headers(abi_arg_out<Windows::Web::Http::Headers::IHttpContentHeaderCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Headers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_BufferAllAsync(abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().BufferAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadAsBufferAsync(abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReadAsBufferAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadAsInputStreamAsync(abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, uint64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReadAsInputStreamAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadAsStringAsync(abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<hstring, uint64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReadAsStringAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryComputeLength(uint64_t * length, bool * succeeded) noexcept override
    {
        try
        {
            *succeeded = detach(this->shim().TryComputeLength(*length));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteToStreamAsync(abi_arg_in<Windows::Storage::Streams::IOutputStream> outputStream, abi_arg_out<Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteToStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&outputStream)));
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
struct produce<D, Windows::Web::Http::IHttpCookie> : produce_base<D, Windows::Web::Http::IHttpCookie>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_Path(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Expires(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Expires());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Expires(abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            this->shim().Expires(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HttpOnly(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HttpOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HttpOnly(bool value) noexcept override
    {
        try
        {
            this->shim().HttpOnly(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Secure(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Secure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Secure(bool value) noexcept override
    {
        try
        {
            this->shim().Secure(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Value(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpCookieFactory> : produce_base<D, Windows::Web::Http::IHttpCookieFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> name, abi_arg_in<hstring> domain, abi_arg_in<hstring> path, abi_arg_out<Windows::Web::Http::IHttpCookie> cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&domain), *reinterpret_cast<const hstring *>(&path)));
            return S_OK;
        }
        catch (...)
        {
            *cookie = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpCookieManager> : produce_base<D, Windows::Web::Http::IHttpCookieManager>
{
    HRESULT __stdcall abi_SetCookie(abi_arg_in<Windows::Web::Http::IHttpCookie> cookie, bool * replaced) noexcept override
    {
        try
        {
            *replaced = detach(this->shim().SetCookie(*reinterpret_cast<const Windows::Web::Http::HttpCookie *>(&cookie)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetCookieWithThirdParty(abi_arg_in<Windows::Web::Http::IHttpCookie> cookie, bool thirdParty, bool * replaced) noexcept override
    {
        try
        {
            *replaced = detach(this->shim().SetCookie(*reinterpret_cast<const Windows::Web::Http::HttpCookie *>(&cookie), thirdParty));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteCookie(abi_arg_in<Windows::Web::Http::IHttpCookie> cookie) noexcept override
    {
        try
        {
            this->shim().DeleteCookie(*reinterpret_cast<const Windows::Web::Http::HttpCookie *>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCookies(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Web::Http::HttpCookie>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetCookies(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpFormUrlEncodedContentFactory> : produce_base<D, Windows::Web::Http::IHttpFormUrlEncodedContentFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>>> content, abi_arg_out<Windows::Web::Http::IHttpContent> formUrlEncodedContent) noexcept override
    {
        try
        {
            *formUrlEncodedContent = detach(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *formUrlEncodedContent = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpMethod> : produce_base<D, Windows::Web::Http::IHttpMethod>
{
    HRESULT __stdcall get_Method(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Method());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpMethodFactory> : produce_base<D, Windows::Web::Http::IHttpMethodFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> method, abi_arg_out<Windows::Web::Http::IHttpMethod> httpMethod) noexcept override
    {
        try
        {
            *httpMethod = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&method)));
            return S_OK;
        }
        catch (...)
        {
            *httpMethod = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpMethodStatics> : produce_base<D, Windows::Web::Http::IHttpMethodStatics>
{
    HRESULT __stdcall get_Delete(abi_arg_out<Windows::Web::Http::IHttpMethod> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Delete());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Get(abi_arg_out<Windows::Web::Http::IHttpMethod> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Get());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Head(abi_arg_out<Windows::Web::Http::IHttpMethod> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Head());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(abi_arg_out<Windows::Web::Http::IHttpMethod> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Patch(abi_arg_out<Windows::Web::Http::IHttpMethod> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Patch());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Post(abi_arg_out<Windows::Web::Http::IHttpMethod> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Post());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Put(abi_arg_out<Windows::Web::Http::IHttpMethod> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Put());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpMultipartContent> : produce_base<D, Windows::Web::Http::IHttpMultipartContent>
{
    HRESULT __stdcall abi_Add(abi_arg_in<Windows::Web::Http::IHttpContent> content) noexcept override
    {
        try
        {
            this->shim().Add(*reinterpret_cast<const Windows::Web::Http::IHttpContent *>(&content));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpMultipartContentFactory> : produce_base<D, Windows::Web::Http::IHttpMultipartContentFactory>
{
    HRESULT __stdcall abi_CreateWithSubtype(abi_arg_in<hstring> subtype, abi_arg_out<Windows::Web::Http::IHttpContent> multipartContent) noexcept override
    {
        try
        {
            *multipartContent = detach(this->shim().CreateWithSubtype(*reinterpret_cast<const hstring *>(&subtype)));
            return S_OK;
        }
        catch (...)
        {
            *multipartContent = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithSubtypeAndBoundary(abi_arg_in<hstring> subtype, abi_arg_in<hstring> boundary, abi_arg_out<Windows::Web::Http::IHttpContent> multipartContent) noexcept override
    {
        try
        {
            *multipartContent = detach(this->shim().CreateWithSubtypeAndBoundary(*reinterpret_cast<const hstring *>(&subtype), *reinterpret_cast<const hstring *>(&boundary)));
            return S_OK;
        }
        catch (...)
        {
            *multipartContent = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpMultipartFormDataContent> : produce_base<D, Windows::Web::Http::IHttpMultipartFormDataContent>
{
    HRESULT __stdcall abi_Add(abi_arg_in<Windows::Web::Http::IHttpContent> content) noexcept override
    {
        try
        {
            this->shim().Add(*reinterpret_cast<const Windows::Web::Http::IHttpContent *>(&content));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddWithName(abi_arg_in<Windows::Web::Http::IHttpContent> content, abi_arg_in<hstring> name) noexcept override
    {
        try
        {
            this->shim().Add(*reinterpret_cast<const Windows::Web::Http::IHttpContent *>(&content), *reinterpret_cast<const hstring *>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddWithNameAndFileName(abi_arg_in<Windows::Web::Http::IHttpContent> content, abi_arg_in<hstring> name, abi_arg_in<hstring> fileName) noexcept override
    {
        try
        {
            this->shim().Add(*reinterpret_cast<const Windows::Web::Http::IHttpContent *>(&content), *reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&fileName));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpMultipartFormDataContentFactory> : produce_base<D, Windows::Web::Http::IHttpMultipartFormDataContentFactory>
{
    HRESULT __stdcall abi_CreateWithBoundary(abi_arg_in<hstring> boundary, abi_arg_out<Windows::Web::Http::IHttpContent> multipartFormDataContent) noexcept override
    {
        try
        {
            *multipartFormDataContent = detach(this->shim().CreateWithBoundary(*reinterpret_cast<const hstring *>(&boundary)));
            return S_OK;
        }
        catch (...)
        {
            *multipartFormDataContent = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpRequestMessage> : produce_base<D, Windows::Web::Http::IHttpRequestMessage>
{
    HRESULT __stdcall get_Content(abi_arg_out<Windows::Web::Http::IHttpContent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Content(abi_arg_in<Windows::Web::Http::IHttpContent> value) noexcept override
    {
        try
        {
            this->shim().Content(*reinterpret_cast<const Windows::Web::Http::IHttpContent *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Headers(abi_arg_out<Windows::Web::Http::Headers::IHttpRequestHeaderCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Headers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Method(abi_arg_out<Windows::Web::Http::IHttpMethod> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Method());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Method(abi_arg_in<Windows::Web::Http::IHttpMethod> value) noexcept override
    {
        try
        {
            this->shim().Method(*reinterpret_cast<const Windows::Web::Http::HttpMethod *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().RequestUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportInformation(abi_arg_out<Windows::Web::Http::IHttpTransportInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TransportInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpRequestMessageFactory> : produce_base<D, Windows::Web::Http::IHttpRequestMessageFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Web::Http::IHttpMethod> method, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Web::Http::IHttpRequestMessage> httpRequestMessage) noexcept override
    {
        try
        {
            *httpRequestMessage = detach(this->shim().Create(*reinterpret_cast<const Windows::Web::Http::HttpMethod *>(&method), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *httpRequestMessage = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpResponseMessage> : produce_base<D, Windows::Web::Http::IHttpResponseMessage>
{
    HRESULT __stdcall get_Content(abi_arg_out<Windows::Web::Http::IHttpContent> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Content(abi_arg_in<Windows::Web::Http::IHttpContent> value) noexcept override
    {
        try
        {
            this->shim().Content(*reinterpret_cast<const Windows::Web::Http::IHttpContent *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Headers(abi_arg_out<Windows::Web::Http::Headers::IHttpResponseHeaderCollection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Headers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSuccessStatusCode(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSuccessStatusCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReasonPhrase(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReasonPhrase());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReasonPhrase(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ReasonPhrase(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestMessage(abi_arg_out<Windows::Web::Http::IHttpRequestMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestMessage(abi_arg_in<Windows::Web::Http::IHttpRequestMessage> value) noexcept override
    {
        try
        {
            this->shim().RequestMessage(*reinterpret_cast<const Windows::Web::Http::HttpRequestMessage *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(Windows::Web::Http::HttpResponseMessageSource * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(Windows::Web::Http::HttpResponseMessageSource value) noexcept override
    {
        try
        {
            this->shim().Source(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StatusCode(Windows::Web::Http::HttpStatusCode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StatusCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StatusCode(Windows::Web::Http::HttpStatusCode value) noexcept override
    {
        try
        {
            this->shim().StatusCode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Version(Windows::Web::Http::HttpVersion * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Version(Windows::Web::Http::HttpVersion value) noexcept override
    {
        try
        {
            this->shim().Version(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_EnsureSuccessStatusCode(abi_arg_out<Windows::Web::Http::IHttpResponseMessage> httpResponseMessage) noexcept override
    {
        try
        {
            *httpResponseMessage = detach(this->shim().EnsureSuccessStatusCode());
            return S_OK;
        }
        catch (...)
        {
            *httpResponseMessage = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpResponseMessageFactory> : produce_base<D, Windows::Web::Http::IHttpResponseMessageFactory>
{
    HRESULT __stdcall abi_Create(Windows::Web::Http::HttpStatusCode statusCode, abi_arg_out<Windows::Web::Http::IHttpResponseMessage> httpResponseMessage) noexcept override
    {
        try
        {
            *httpResponseMessage = detach(this->shim().Create(statusCode));
            return S_OK;
        }
        catch (...)
        {
            *httpResponseMessage = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpStreamContentFactory> : produce_base<D, Windows::Web::Http::IHttpStreamContentFactory>
{
    HRESULT __stdcall abi_CreateFromInputStream(abi_arg_in<Windows::Storage::Streams::IInputStream> content, abi_arg_out<Windows::Web::Http::IHttpContent> streamContent) noexcept override
    {
        try
        {
            *streamContent = detach(this->shim().CreateFromInputStream(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *streamContent = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpStringContentFactory> : produce_base<D, Windows::Web::Http::IHttpStringContentFactory>
{
    HRESULT __stdcall abi_CreateFromString(abi_arg_in<hstring> content, abi_arg_out<Windows::Web::Http::IHttpContent> stringContent) noexcept override
    {
        try
        {
            *stringContent = detach(this->shim().CreateFromString(*reinterpret_cast<const hstring *>(&content)));
            return S_OK;
        }
        catch (...)
        {
            *stringContent = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromStringWithEncoding(abi_arg_in<hstring> content, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Web::Http::IHttpContent> stringContent) noexcept override
    {
        try
        {
            *stringContent = detach(this->shim().CreateFromStringWithEncoding(*reinterpret_cast<const hstring *>(&content), encoding));
            return S_OK;
        }
        catch (...)
        {
            *stringContent = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromStringWithEncodingAndMediaType(abi_arg_in<hstring> content, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_in<hstring> mediaType, abi_arg_out<Windows::Web::Http::IHttpContent> stringContent) noexcept override
    {
        try
        {
            *stringContent = detach(this->shim().CreateFromStringWithEncodingAndMediaType(*reinterpret_cast<const hstring *>(&content), encoding, *reinterpret_cast<const hstring *>(&mediaType)));
            return S_OK;
        }
        catch (...)
        {
            *stringContent = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::IHttpTransportInformation> : produce_base<D, Windows::Web::Http::IHttpTransportInformation>
{
    HRESULT __stdcall get_ServerCertificate(abi_arg_out<Windows::Security::Cryptography::Certificates::ICertificate> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrors(abi_arg_out<Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServerIntermediateCertificates(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServerIntermediateCertificates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Web::Http {

template <typename D> Windows::Web::Http::HttpClient impl_IHttpClientFactory<D>::Create(const Windows::Web::Http::Filters::IHttpFilter & filter) const
{
    Windows::Web::Http::HttpClient client { nullptr };
    check_hresult(static_cast<const IHttpClientFactory &>(static_cast<const D &>(*this))->abi_Create(get(filter), put(client)));
    return client;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::DeleteAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_DeleteAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::GetAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_GetAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::GetAsync(const Windows::Foundation::Uri & uri, Windows::Web::Http::HttpCompletionOption completionOption) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_GetWithOptionAsync(get(uri), completionOption, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::GetBufferAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_GetBufferAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::GetInputStreamAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_GetInputStreamAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<hstring, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::GetStringAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperationWithProgress<hstring, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_GetStringAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::PostAsync(const Windows::Foundation::Uri & uri, const Windows::Web::Http::IHttpContent & content) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_PostAsync(get(uri), get(content), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::PutAsync(const Windows::Foundation::Uri & uri, const Windows::Web::Http::IHttpContent & content) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_PutAsync(get(uri), get(content), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::SendRequestAsync(const Windows::Web::Http::HttpRequestMessage & request) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_SendRequestAsync(get(request), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> impl_IHttpClient<D>::SendRequestAsync(const Windows::Web::Http::HttpRequestMessage & request, Windows::Web::Http::HttpCompletionOption completionOption) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> operation;
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->abi_SendRequestWithOptionAsync(get(request), completionOption, put(operation)));
    return operation;
}

template <typename D> Windows::Web::Http::Headers::HttpRequestHeaderCollection impl_IHttpClient<D>::DefaultRequestHeaders() const
{
    Windows::Web::Http::Headers::HttpRequestHeaderCollection value { nullptr };
    check_hresult(static_cast<const IHttpClient &>(static_cast<const D &>(*this))->get_DefaultRequestHeaders(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Headers::HttpContentHeaderCollection impl_IHttpContent<D>::Headers() const
{
    Windows::Web::Http::Headers::HttpContentHeaderCollection value { nullptr };
    check_hresult(static_cast<const IHttpContent &>(static_cast<const D &>(*this))->get_Headers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> impl_IHttpContent<D>::BufferAllAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation;
    check_hresult(static_cast<const IHttpContent &>(static_cast<const D &>(*this))->abi_BufferAllAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint64_t> impl_IHttpContent<D>::ReadAsBufferAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint64_t> operation;
    check_hresult(static_cast<const IHttpContent &>(static_cast<const D &>(*this))->abi_ReadAsBufferAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, uint64_t> impl_IHttpContent<D>::ReadAsInputStreamAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, uint64_t> operation;
    check_hresult(static_cast<const IHttpContent &>(static_cast<const D &>(*this))->abi_ReadAsInputStreamAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<hstring, uint64_t> impl_IHttpContent<D>::ReadAsStringAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<hstring, uint64_t> operation;
    check_hresult(static_cast<const IHttpContent &>(static_cast<const D &>(*this))->abi_ReadAsStringAsync(put(operation)));
    return operation;
}

template <typename D> bool impl_IHttpContent<D>::TryComputeLength(uint64_t & length) const
{
    bool succeeded {};
    check_hresult(static_cast<const IHttpContent &>(static_cast<const D &>(*this))->abi_TryComputeLength(&length, &succeeded));
    return succeeded;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> impl_IHttpContent<D>::WriteToStreamAsync(const Windows::Storage::Streams::IOutputStream & outputStream) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> operation;
    check_hresult(static_cast<const IHttpContent &>(static_cast<const D &>(*this))->abi_WriteToStreamAsync(get(outputStream), put(operation)));
    return operation;
}

template <typename D> bool impl_IHttpCookieManager<D>::SetCookie(const Windows::Web::Http::HttpCookie & cookie) const
{
    bool replaced {};
    check_hresult(static_cast<const IHttpCookieManager &>(static_cast<const D &>(*this))->abi_SetCookie(get(cookie), &replaced));
    return replaced;
}

template <typename D> bool impl_IHttpCookieManager<D>::SetCookie(const Windows::Web::Http::HttpCookie & cookie, bool thirdParty) const
{
    bool replaced {};
    check_hresult(static_cast<const IHttpCookieManager &>(static_cast<const D &>(*this))->abi_SetCookieWithThirdParty(get(cookie), thirdParty, &replaced));
    return replaced;
}

template <typename D> void impl_IHttpCookieManager<D>::DeleteCookie(const Windows::Web::Http::HttpCookie & cookie) const
{
    check_hresult(static_cast<const IHttpCookieManager &>(static_cast<const D &>(*this))->abi_DeleteCookie(get(cookie)));
}

template <typename D> Windows::Web::Http::HttpCookieCollection impl_IHttpCookieManager<D>::GetCookies(const Windows::Foundation::Uri & uri) const
{
    Windows::Web::Http::HttpCookieCollection value { nullptr };
    check_hresult(static_cast<const IHttpCookieManager &>(static_cast<const D &>(*this))->abi_GetCookies(get(uri), put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpCookie impl_IHttpCookieFactory<D>::Create(hstring_ref name, hstring_ref domain, hstring_ref path) const
{
    Windows::Web::Http::HttpCookie cookie { nullptr };
    check_hresult(static_cast<const IHttpCookieFactory &>(static_cast<const D &>(*this))->abi_Create(get(name), get(domain), get(path), put(cookie)));
    return cookie;
}

template <typename D> hstring impl_IHttpCookie<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpCookie<D>::Domain() const
{
    hstring value;
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->get_Domain(put(value)));
    return value;
}

template <typename D> hstring impl_IHttpCookie<D>::Path() const
{
    hstring value;
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpCookie<D>::Expires() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->get_Expires(put(value)));
    return value;
}

template <typename D> void impl_IHttpCookie<D>::Expires(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const
{
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->put_Expires(get(value)));
}

template <typename D> bool impl_IHttpCookie<D>::HttpOnly() const
{
    bool value {};
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->get_HttpOnly(&value));
    return value;
}

template <typename D> void impl_IHttpCookie<D>::HttpOnly(bool value) const
{
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->put_HttpOnly(value));
}

template <typename D> bool impl_IHttpCookie<D>::Secure() const
{
    bool value {};
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->get_Secure(&value));
    return value;
}

template <typename D> void impl_IHttpCookie<D>::Secure(bool value) const
{
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->put_Secure(value));
}

template <typename D> hstring impl_IHttpCookie<D>::Value() const
{
    hstring value;
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> void impl_IHttpCookie<D>::Value(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpCookie &>(static_cast<const D &>(*this))->put_Value(get(value)));
}

template <typename D> Windows::Web::Http::HttpMethod impl_IHttpMethodStatics<D>::Delete() const
{
    Windows::Web::Http::HttpMethod value { nullptr };
    check_hresult(static_cast<const IHttpMethodStatics &>(static_cast<const D &>(*this))->get_Delete(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod impl_IHttpMethodStatics<D>::Get() const
{
    Windows::Web::Http::HttpMethod value { nullptr };
    check_hresult(static_cast<const IHttpMethodStatics &>(static_cast<const D &>(*this))->get_Get(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod impl_IHttpMethodStatics<D>::Head() const
{
    Windows::Web::Http::HttpMethod value { nullptr };
    check_hresult(static_cast<const IHttpMethodStatics &>(static_cast<const D &>(*this))->get_Head(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod impl_IHttpMethodStatics<D>::Options() const
{
    Windows::Web::Http::HttpMethod value { nullptr };
    check_hresult(static_cast<const IHttpMethodStatics &>(static_cast<const D &>(*this))->get_Options(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod impl_IHttpMethodStatics<D>::Patch() const
{
    Windows::Web::Http::HttpMethod value { nullptr };
    check_hresult(static_cast<const IHttpMethodStatics &>(static_cast<const D &>(*this))->get_Patch(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod impl_IHttpMethodStatics<D>::Post() const
{
    Windows::Web::Http::HttpMethod value { nullptr };
    check_hresult(static_cast<const IHttpMethodStatics &>(static_cast<const D &>(*this))->get_Post(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod impl_IHttpMethodStatics<D>::Put() const
{
    Windows::Web::Http::HttpMethod value { nullptr };
    check_hresult(static_cast<const IHttpMethodStatics &>(static_cast<const D &>(*this))->get_Put(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod impl_IHttpMethodFactory<D>::Create(hstring_ref method) const
{
    Windows::Web::Http::HttpMethod httpMethod { nullptr };
    check_hresult(static_cast<const IHttpMethodFactory &>(static_cast<const D &>(*this))->abi_Create(get(method), put(httpMethod)));
    return httpMethod;
}

template <typename D> hstring impl_IHttpMethod<D>::Method() const
{
    hstring value;
    check_hresult(static_cast<const IHttpMethod &>(static_cast<const D &>(*this))->get_Method(put(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate impl_IHttpTransportInformation<D>::ServerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value { nullptr };
    check_hresult(static_cast<const IHttpTransportInformation &>(static_cast<const D &>(*this))->get_ServerCertificate(put(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity impl_IHttpTransportInformation<D>::ServerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value {};
    check_hresult(static_cast<const IHttpTransportInformation &>(static_cast<const D &>(*this))->get_ServerCertificateErrorSeverity(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> impl_IHttpTransportInformation<D>::ServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult> value;
    check_hresult(static_cast<const IHttpTransportInformation &>(static_cast<const D &>(*this))->get_ServerCertificateErrors(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> impl_IHttpTransportInformation<D>::ServerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value;
    check_hresult(static_cast<const IHttpTransportInformation &>(static_cast<const D &>(*this))->get_ServerIntermediateCertificates(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpRequestMessage impl_IHttpRequestMessageFactory<D>::Create(const Windows::Web::Http::HttpMethod & method, const Windows::Foundation::Uri & uri) const
{
    Windows::Web::Http::HttpRequestMessage httpRequestMessage { nullptr };
    check_hresult(static_cast<const IHttpRequestMessageFactory &>(static_cast<const D &>(*this))->abi_Create(get(method), get(uri), put(httpRequestMessage)));
    return httpRequestMessage;
}

template <typename D> Windows::Web::Http::IHttpContent impl_IHttpRequestMessage<D>::Content() const
{
    Windows::Web::Http::IHttpContent value;
    check_hresult(static_cast<const IHttpRequestMessage &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestMessage<D>::Content(const Windows::Web::Http::IHttpContent & value) const
{
    check_hresult(static_cast<const IHttpRequestMessage &>(static_cast<const D &>(*this))->put_Content(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpRequestHeaderCollection impl_IHttpRequestMessage<D>::Headers() const
{
    Windows::Web::Http::Headers::HttpRequestHeaderCollection value { nullptr };
    check_hresult(static_cast<const IHttpRequestMessage &>(static_cast<const D &>(*this))->get_Headers(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpMethod impl_IHttpRequestMessage<D>::Method() const
{
    Windows::Web::Http::HttpMethod value { nullptr };
    check_hresult(static_cast<const IHttpRequestMessage &>(static_cast<const D &>(*this))->get_Method(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestMessage<D>::Method(const Windows::Web::Http::HttpMethod & value) const
{
    check_hresult(static_cast<const IHttpRequestMessage &>(static_cast<const D &>(*this))->put_Method(get(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable> impl_IHttpRequestMessage<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IHttpRequestMessage &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IHttpRequestMessage<D>::RequestUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IHttpRequestMessage &>(static_cast<const D &>(*this))->get_RequestUri(put(value)));
    return value;
}

template <typename D> void impl_IHttpRequestMessage<D>::RequestUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IHttpRequestMessage &>(static_cast<const D &>(*this))->put_RequestUri(get(value)));
}

template <typename D> Windows::Web::Http::HttpTransportInformation impl_IHttpRequestMessage<D>::TransportInformation() const
{
    Windows::Web::Http::HttpTransportInformation value { nullptr };
    check_hresult(static_cast<const IHttpRequestMessage &>(static_cast<const D &>(*this))->get_TransportInformation(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage impl_IHttpResponseMessageFactory<D>::Create(Windows::Web::Http::HttpStatusCode statusCode) const
{
    Windows::Web::Http::HttpResponseMessage httpResponseMessage { nullptr };
    check_hresult(static_cast<const IHttpResponseMessageFactory &>(static_cast<const D &>(*this))->abi_Create(statusCode, put(httpResponseMessage)));
    return httpResponseMessage;
}

template <typename D> Windows::Web::Http::IHttpContent impl_IHttpResponseMessage<D>::Content() const
{
    Windows::Web::Http::IHttpContent value;
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->get_Content(put(value)));
    return value;
}

template <typename D> void impl_IHttpResponseMessage<D>::Content(const Windows::Web::Http::IHttpContent & value) const
{
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->put_Content(get(value)));
}

template <typename D> Windows::Web::Http::Headers::HttpResponseHeaderCollection impl_IHttpResponseMessage<D>::Headers() const
{
    Windows::Web::Http::Headers::HttpResponseHeaderCollection value { nullptr };
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->get_Headers(put(value)));
    return value;
}

template <typename D> bool impl_IHttpResponseMessage<D>::IsSuccessStatusCode() const
{
    bool value {};
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->get_IsSuccessStatusCode(&value));
    return value;
}

template <typename D> hstring impl_IHttpResponseMessage<D>::ReasonPhrase() const
{
    hstring value;
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->get_ReasonPhrase(put(value)));
    return value;
}

template <typename D> void impl_IHttpResponseMessage<D>::ReasonPhrase(hstring_ref value) const
{
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->put_ReasonPhrase(get(value)));
}

template <typename D> Windows::Web::Http::HttpRequestMessage impl_IHttpResponseMessage<D>::RequestMessage() const
{
    Windows::Web::Http::HttpRequestMessage value { nullptr };
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->get_RequestMessage(put(value)));
    return value;
}

template <typename D> void impl_IHttpResponseMessage<D>::RequestMessage(const Windows::Web::Http::HttpRequestMessage & value) const
{
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->put_RequestMessage(get(value)));
}

template <typename D> Windows::Web::Http::HttpResponseMessageSource impl_IHttpResponseMessage<D>::Source() const
{
    Windows::Web::Http::HttpResponseMessageSource value {};
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->get_Source(&value));
    return value;
}

template <typename D> void impl_IHttpResponseMessage<D>::Source(Windows::Web::Http::HttpResponseMessageSource value) const
{
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->put_Source(value));
}

template <typename D> Windows::Web::Http::HttpStatusCode impl_IHttpResponseMessage<D>::StatusCode() const
{
    Windows::Web::Http::HttpStatusCode value {};
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->get_StatusCode(&value));
    return value;
}

template <typename D> void impl_IHttpResponseMessage<D>::StatusCode(Windows::Web::Http::HttpStatusCode value) const
{
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->put_StatusCode(value));
}

template <typename D> Windows::Web::Http::HttpVersion impl_IHttpResponseMessage<D>::Version() const
{
    Windows::Web::Http::HttpVersion value {};
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->get_Version(&value));
    return value;
}

template <typename D> void impl_IHttpResponseMessage<D>::Version(Windows::Web::Http::HttpVersion value) const
{
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->put_Version(value));
}

template <typename D> Windows::Web::Http::HttpResponseMessage impl_IHttpResponseMessage<D>::EnsureSuccessStatusCode() const
{
    Windows::Web::Http::HttpResponseMessage httpResponseMessage { nullptr };
    check_hresult(static_cast<const IHttpResponseMessage &>(static_cast<const D &>(*this))->abi_EnsureSuccessStatusCode(put(httpResponseMessage)));
    return httpResponseMessage;
}

template <typename D> Windows::Web::Http::HttpStringContent impl_IHttpStringContentFactory<D>::CreateFromString(hstring_ref content) const
{
    Windows::Web::Http::HttpStringContent stringContent { nullptr };
    check_hresult(static_cast<const IHttpStringContentFactory &>(static_cast<const D &>(*this))->abi_CreateFromString(get(content), put(stringContent)));
    return stringContent;
}

template <typename D> Windows::Web::Http::HttpStringContent impl_IHttpStringContentFactory<D>::CreateFromStringWithEncoding(hstring_ref content, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Web::Http::HttpStringContent stringContent { nullptr };
    check_hresult(static_cast<const IHttpStringContentFactory &>(static_cast<const D &>(*this))->abi_CreateFromStringWithEncoding(get(content), encoding, put(stringContent)));
    return stringContent;
}

template <typename D> Windows::Web::Http::HttpStringContent impl_IHttpStringContentFactory<D>::CreateFromStringWithEncodingAndMediaType(hstring_ref content, Windows::Storage::Streams::UnicodeEncoding encoding, hstring_ref mediaType) const
{
    Windows::Web::Http::HttpStringContent stringContent { nullptr };
    check_hresult(static_cast<const IHttpStringContentFactory &>(static_cast<const D &>(*this))->abi_CreateFromStringWithEncodingAndMediaType(get(content), encoding, get(mediaType), put(stringContent)));
    return stringContent;
}

template <typename D> Windows::Web::Http::HttpBufferContent impl_IHttpBufferContentFactory<D>::CreateFromBuffer(const Windows::Storage::Streams::IBuffer & content) const
{
    Windows::Web::Http::HttpBufferContent bufferContent { nullptr };
    check_hresult(static_cast<const IHttpBufferContentFactory &>(static_cast<const D &>(*this))->abi_CreateFromBuffer(get(content), put(bufferContent)));
    return bufferContent;
}

template <typename D> Windows::Web::Http::HttpBufferContent impl_IHttpBufferContentFactory<D>::CreateFromBufferWithOffset(const Windows::Storage::Streams::IBuffer & content, uint32_t offset, uint32_t count) const
{
    Windows::Web::Http::HttpBufferContent bufferContent { nullptr };
    check_hresult(static_cast<const IHttpBufferContentFactory &>(static_cast<const D &>(*this))->abi_CreateFromBufferWithOffset(get(content), offset, count, put(bufferContent)));
    return bufferContent;
}

template <typename D> Windows::Web::Http::HttpStreamContent impl_IHttpStreamContentFactory<D>::CreateFromInputStream(const Windows::Storage::Streams::IInputStream & content) const
{
    Windows::Web::Http::HttpStreamContent streamContent { nullptr };
    check_hresult(static_cast<const IHttpStreamContentFactory &>(static_cast<const D &>(*this))->abi_CreateFromInputStream(get(content), put(streamContent)));
    return streamContent;
}

template <typename D> Windows::Web::Http::HttpFormUrlEncodedContent impl_IHttpFormUrlEncodedContentFactory<D>::Create(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> & content) const
{
    Windows::Web::Http::HttpFormUrlEncodedContent formUrlEncodedContent { nullptr };
    check_hresult(static_cast<const IHttpFormUrlEncodedContentFactory &>(static_cast<const D &>(*this))->abi_Create(get(content), put(formUrlEncodedContent)));
    return formUrlEncodedContent;
}

template <typename D> Windows::Web::Http::HttpMultipartContent impl_IHttpMultipartContentFactory<D>::CreateWithSubtype(hstring_ref subtype) const
{
    Windows::Web::Http::HttpMultipartContent multipartContent { nullptr };
    check_hresult(static_cast<const IHttpMultipartContentFactory &>(static_cast<const D &>(*this))->abi_CreateWithSubtype(get(subtype), put(multipartContent)));
    return multipartContent;
}

template <typename D> Windows::Web::Http::HttpMultipartContent impl_IHttpMultipartContentFactory<D>::CreateWithSubtypeAndBoundary(hstring_ref subtype, hstring_ref boundary) const
{
    Windows::Web::Http::HttpMultipartContent multipartContent { nullptr };
    check_hresult(static_cast<const IHttpMultipartContentFactory &>(static_cast<const D &>(*this))->abi_CreateWithSubtypeAndBoundary(get(subtype), get(boundary), put(multipartContent)));
    return multipartContent;
}

template <typename D> void impl_IHttpMultipartContent<D>::Add(const Windows::Web::Http::IHttpContent & content) const
{
    check_hresult(static_cast<const IHttpMultipartContent &>(static_cast<const D &>(*this))->abi_Add(get(content)));
}

template <typename D> Windows::Web::Http::HttpMultipartFormDataContent impl_IHttpMultipartFormDataContentFactory<D>::CreateWithBoundary(hstring_ref boundary) const
{
    Windows::Web::Http::HttpMultipartFormDataContent multipartFormDataContent { nullptr };
    check_hresult(static_cast<const IHttpMultipartFormDataContentFactory &>(static_cast<const D &>(*this))->abi_CreateWithBoundary(get(boundary), put(multipartFormDataContent)));
    return multipartFormDataContent;
}

template <typename D> void impl_IHttpMultipartFormDataContent<D>::Add(const Windows::Web::Http::IHttpContent & content) const
{
    check_hresult(static_cast<const IHttpMultipartFormDataContent &>(static_cast<const D &>(*this))->abi_Add(get(content)));
}

template <typename D> void impl_IHttpMultipartFormDataContent<D>::Add(const Windows::Web::Http::IHttpContent & content, hstring_ref name) const
{
    check_hresult(static_cast<const IHttpMultipartFormDataContent &>(static_cast<const D &>(*this))->abi_AddWithName(get(content), get(name)));
}

template <typename D> void impl_IHttpMultipartFormDataContent<D>::Add(const Windows::Web::Http::IHttpContent & content, hstring_ref name, hstring_ref fileName) const
{
    check_hresult(static_cast<const IHttpMultipartFormDataContent &>(static_cast<const D &>(*this))->abi_AddWithNameAndFileName(get(content), get(name), get(fileName)));
}

inline HttpBufferContent::HttpBufferContent(const Windows::Storage::Streams::IBuffer & content) :
    HttpBufferContent(get_activation_factory<HttpBufferContent, IHttpBufferContentFactory>().CreateFromBuffer(content))
{}

inline HttpBufferContent::HttpBufferContent(const Windows::Storage::Streams::IBuffer & content, uint32_t offset, uint32_t count) :
    HttpBufferContent(get_activation_factory<HttpBufferContent, IHttpBufferContentFactory>().CreateFromBufferWithOffset(content, offset, count))
{}

inline HttpClient::HttpClient() :
    HttpClient(activate_instance<HttpClient>())
{}

inline HttpClient::HttpClient(const Windows::Web::Http::Filters::IHttpFilter & filter) :
    HttpClient(get_activation_factory<HttpClient, IHttpClientFactory>().Create(filter))
{}

inline HttpCookie::HttpCookie(hstring_ref name, hstring_ref domain, hstring_ref path) :
    HttpCookie(get_activation_factory<HttpCookie, IHttpCookieFactory>().Create(name, domain, path))
{}

inline HttpFormUrlEncodedContent::HttpFormUrlEncodedContent(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> & content) :
    HttpFormUrlEncodedContent(get_activation_factory<HttpFormUrlEncodedContent, IHttpFormUrlEncodedContentFactory>().Create(content))
{}

inline HttpMethod::HttpMethod(hstring_ref method) :
    HttpMethod(get_activation_factory<HttpMethod, IHttpMethodFactory>().Create(method))
{}

inline Windows::Web::Http::HttpMethod HttpMethod::Delete()
{
    return get_activation_factory<HttpMethod, IHttpMethodStatics>().Delete();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Get()
{
    return get_activation_factory<HttpMethod, IHttpMethodStatics>().Get();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Head()
{
    return get_activation_factory<HttpMethod, IHttpMethodStatics>().Head();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Options()
{
    return get_activation_factory<HttpMethod, IHttpMethodStatics>().Options();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Patch()
{
    return get_activation_factory<HttpMethod, IHttpMethodStatics>().Patch();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Post()
{
    return get_activation_factory<HttpMethod, IHttpMethodStatics>().Post();
}

inline Windows::Web::Http::HttpMethod HttpMethod::Put()
{
    return get_activation_factory<HttpMethod, IHttpMethodStatics>().Put();
}

inline HttpMultipartContent::HttpMultipartContent() :
    HttpMultipartContent(activate_instance<HttpMultipartContent>())
{}

inline HttpMultipartContent::HttpMultipartContent(hstring_ref subtype) :
    HttpMultipartContent(get_activation_factory<HttpMultipartContent, IHttpMultipartContentFactory>().CreateWithSubtype(subtype))
{}

inline HttpMultipartContent::HttpMultipartContent(hstring_ref subtype, hstring_ref boundary) :
    HttpMultipartContent(get_activation_factory<HttpMultipartContent, IHttpMultipartContentFactory>().CreateWithSubtypeAndBoundary(subtype, boundary))
{}

inline HttpMultipartFormDataContent::HttpMultipartFormDataContent() :
    HttpMultipartFormDataContent(activate_instance<HttpMultipartFormDataContent>())
{}

inline HttpMultipartFormDataContent::HttpMultipartFormDataContent(hstring_ref boundary) :
    HttpMultipartFormDataContent(get_activation_factory<HttpMultipartFormDataContent, IHttpMultipartFormDataContentFactory>().CreateWithBoundary(boundary))
{}

inline HttpRequestMessage::HttpRequestMessage() :
    HttpRequestMessage(activate_instance<HttpRequestMessage>())
{}

inline HttpRequestMessage::HttpRequestMessage(const Windows::Web::Http::HttpMethod & method, const Windows::Foundation::Uri & uri) :
    HttpRequestMessage(get_activation_factory<HttpRequestMessage, IHttpRequestMessageFactory>().Create(method, uri))
{}

inline HttpResponseMessage::HttpResponseMessage() :
    HttpResponseMessage(activate_instance<HttpResponseMessage>())
{}

inline HttpResponseMessage::HttpResponseMessage(Windows::Web::Http::HttpStatusCode statusCode) :
    HttpResponseMessage(get_activation_factory<HttpResponseMessage, IHttpResponseMessageFactory>().Create(statusCode))
{}

inline HttpStreamContent::HttpStreamContent(const Windows::Storage::Streams::IInputStream & content) :
    HttpStreamContent(get_activation_factory<HttpStreamContent, IHttpStreamContentFactory>().CreateFromInputStream(content))
{}

inline HttpStringContent::HttpStringContent(hstring_ref content) :
    HttpStringContent(get_activation_factory<HttpStringContent, IHttpStringContentFactory>().CreateFromString(content))
{}

inline HttpStringContent::HttpStringContent(hstring_ref content, Windows::Storage::Streams::UnicodeEncoding encoding) :
    HttpStringContent(get_activation_factory<HttpStringContent, IHttpStringContentFactory>().CreateFromStringWithEncoding(content, encoding))
{}

inline HttpStringContent::HttpStringContent(hstring_ref content, Windows::Storage::Streams::UnicodeEncoding encoding, hstring_ref mediaType) :
    HttpStringContent(get_activation_factory<HttpStringContent, IHttpStringContentFactory>().CreateFromStringWithEncodingAndMediaType(content, encoding, mediaType))
{}

}

}
